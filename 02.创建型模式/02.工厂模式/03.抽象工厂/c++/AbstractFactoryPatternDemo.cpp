#include "AbstractFactory.h"
#include "ShapeFactory.h"
#include "ColorFactory.h"
#include "Color.h"
#include "Shape.h"
#include "Red.h"
#include "Green.h"
#include "Blue.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "FactoryProducer.h"

using namespace std;

int main(void)
{
	//获取形状工厂
	AbstractFactory* shapeFactory = FactoryProducer::getFactory("SHAPE");

	//获取形状为 Circle 的对象
	Shape* shape1 = shapeFactory->getShape("CIRCLE");

	//调用 Circle 的 draw 方法
	shape1->draw();

	//获取形状为 Rectangle 的对象
	Shape* shape2 = shapeFactory->getShape("RECTANGLE");

	//调用 Rectangle 的 draw 方法
	shape2->draw();

	//获取形状为 Square 的对象
	Shape* shape3 = shapeFactory->getShape("SQUARE");

	//调用 Square 的 draw 方法
	shape3->draw();

	//获取颜色工厂
	AbstractFactory* colorFactory = FactoryProducer::getFactory("COLOR");

	//获取颜色为 Red 的对象
	Color* color1 = colorFactory->getColor("RED");

	//调用 Red 的 fill 方法
	color1->fill();

	//获取颜色为 Green 的对象
	Color* color2 = colorFactory->getColor("GREEN");

	//调用 Green 的 fill 方法
	color2->fill();

	//获取颜色为 Blue 的对象
	Color* color3 = colorFactory->getColor("BLUE");

	//调用 Blue 的 fill 方法
	color3->fill();

	delete shapeFactory;
	delete shape1;
	delete shape2;
	delete shape3;

	delete colorFactory;
	delete color1;
	delete color2;
	delete color3;
	return 0;
}
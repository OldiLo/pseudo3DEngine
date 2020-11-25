//
// Created by ivan- on 21.01.2020.
//

#include "Poligon2D.h"

#include <utility>
#include "settings.h"

Poligon2D::Poligon2D(std::vector<Point2D> points2D, Point2D position, double height, const std::string& texture)
	: Object2D(position, std::move(points2D), height, texture)
{
}

ObjectType Poligon2D::type()
{
    return ObjectType::Object;
}

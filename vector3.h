#ifndef LKN_VECTOR3_H
#define LKN_VECTOR3_H

namespace lkn{

	class Vec3{
	public:

		Vec3() :
			x(0), y(0), z(0)
		{}

		Vec3(float xx, float yy, float zz) :
			x(xx), y(yy), z(zz)
		{}

		float x, y, z;

	};

}

#endif
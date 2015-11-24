#ifndef LKN_CAMERA_H
#define LKN_CAMERA_H

#include"vector3.h"

namespace lkn{

	class Camera{
	public:

		Camera():
			m_angle(45.f),
			m_aspect(1),
			m_near(1),
			m_far(5000),
			m_eye(0, 0, 100),
			m_target(0, 0, 0),
			m_up(0, 1, 0)
		{}

		float m_angle;
		float m_aspect;
		float m_near;
		float m_far;

		Vec3 m_eye;
		Vec3 m_target;
		Vec3 m_up;

		void update();
	};

}

#endif
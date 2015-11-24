#include"camera.h"
#include"../glut.h"

namespace lkn{
	void Camera::update(){

		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluPerspective(
			m_angle,
			m_aspect,
			m_near,
			m_far);

		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		gluLookAt(
			m_eye.x, m_eye.y, m_eye.z,
			m_target.x, m_target.y, m_target.z,
			m_up.x, m_up.y, m_up.z);

	}
}
#ifndef CMU462_CAMERA_H
#define CMU462_CAMERA_H

#include "scene.h"

namespace CMU462 {

struct Camera : Instance {

  float hfov; ///< horizontal field of view
  float vfov; ///< vertical field of view

  float nclip; ///< near clip
  float fclip; ///< far clip

}; // struct Camera

std::ostream& operator<<( std::ostream& os, const Camera& camera );

} // namespace CMU462

#endif // CMU462_CAMERA_H

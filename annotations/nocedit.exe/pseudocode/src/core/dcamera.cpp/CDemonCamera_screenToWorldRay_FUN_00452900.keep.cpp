// Name: core_dcamera.cpp_CDemonCamera_screenToWorldRay_FUN_00452900
// Address: 00452900
// MANUAL RECONSTRUCTION
// Address Range: [[00452900, 00452994] [0060a512, 0060a54f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_screenToWorldRay_FUN_00452900(CDemonCamera *this_ptr,CVector3f *output_ray,CVector3i *screen_coords,int depth)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_screenToWorldRay_FUN_00452900(CDemonCamera *this_ptr,CVector3f *output_ray,CVector3i *screen_coords,int depth)

{
  CVector3i local_34;
  CVector3i local_28;
  CVector3i local_1c;
  float fVar1;
  
  core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
            (this_ptr,(int)screen_coords,depth,&local_34);
  core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370(this_ptr,&local_1c,&local_28);
  fVar1 = (float)0.00390625;
  output_ray->x = (float)local_28.x * fVar1;
  output_ray->y = (float)local_28.y * fVar1;
  output_ray->z = (float)local_28.z * fVar1;
  return;
}

// Name: core_dcamera.cpp_CDemonCamera_screenToWorldRay_FUN_00452900
// Address: 00452900
// Address Range: [[00452900, 00452994]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_screenToWorldRay_FUN_00452900(CDemonCamera *this_ptr,CVector3f *output_ray,CVector3i *screen_coords,int depth)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_screenToWorldRay_FUN_00452900(CDemonCamera *this_ptr,CVector3f *output_ray,CVector3i *screen_coords,int depth)

{
  byte bVar2;
  int aiStackY_1028 [1015];
  int local_40;
  int local_3c;
  int local_38;
  CVector3i local_34;
  CVector3i local_28;
  CVector3i local_1c;
  float fVar1;
  
  bVar2 = 0;
  core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
            (this_ptr,(int)screen_coords,depth,&local_34);
  local_1c.x = local_34.x;
  *(uint *)((int)&local_1c + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_34 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&local_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370(this_ptr,&local_1c,&local_28);
  (&local_3c)[(uint)bVar2 * -2] = *(int *)((int)&local_28 + (uint)bVar2 * -8 + 4);
  (&local_38)[(uint)bVar2 * -2 + (uint)bVar2 * -2] =
       *(int *)((int)&local_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  fVar1 = (float)0.00390625;
  output_ray->x = (float)local_28.x * fVar1;
  output_ray->y = (float)local_3c * fVar1;
  output_ray->z = (float)local_38 * fVar1;
  return;
}

// Name: core_dcamera.cpp_CDemonCamera_screenToWorldRay_FUN_00452900
// Address: 00452900
// Address Range: [[00452900, 00452994]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_screenToWorldRay_FUN_00452900(CDemonCamera * this_ptr, CVector3f * output_ray, CVector3i * screen_coords, int depth)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_screenToWorldRay_FUN_00452900
          (CDemonCamera *this_ptr,CVector3f *output_ray,CVector3i *screen_coords,int depth)

{
  float fVar1;
  byte bVar2;
  int aiStackY_1028 [1015];
  CVector3i *in_stack_ffffffc0;
  int local_3c;
  int local_38;
  int local_34;
  int local_28;
  CVector3i local_1c;
  
  bVar2 = 0;
  core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
            (this_ptr,screen_coords,depth,(int)in_stack_ffffffc0);
  local_1c.x = local_34;
  *(uint *)((int)&local_1c + (uint)bVar2 * -8 + 4) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
  *(uint *)((int)&local_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
            (this_ptr,&local_1c,in_stack_ffffffc0);
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  fVar1 = (float)0.00390625;
  output_ray->x = (float)local_28 * fVar1;
  output_ray->y = (float)local_3c * fVar1;
  output_ray->z = (float)local_38 * fVar1;
  return;
}

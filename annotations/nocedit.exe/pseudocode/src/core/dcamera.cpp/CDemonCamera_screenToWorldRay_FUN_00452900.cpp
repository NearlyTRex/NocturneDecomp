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
  BADSPACEBASE *in_ESP;
  byte bVar2;
  int aiStackY_1020 [1013];
  int in_stack_ffffffc0;
  CVector3i *in_stack_ffffffc4;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_20;
  int local_1c;
  CVector3i CStack_18;
  
  bVar2 = 0;
  core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
            (this_ptr,screen_coords,depth,in_stack_ffffffc0);
  local_1c = iStack_30;
  *(uint *)((int)&CStack_18 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8);
  *(uint *)((int)&CStack_18 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 4) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
            ((CDemonCamera *)output_ray,&CStack_18,in_stack_ffffffc4);
  local_38 = iStack_20;
  *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&CStack_18 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  fVar1 = (float)0.00390625;
  output_ray->x = (float)local_38 * fVar1;
  output_ray->y = (float)local_34 * fVar1;
  output_ray->z = (float)iStack_30 * fVar1;
  return;
}

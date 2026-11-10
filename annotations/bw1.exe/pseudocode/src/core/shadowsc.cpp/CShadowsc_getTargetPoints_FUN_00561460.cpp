// Name: core_shadowsc.cpp_CShadowsc_getTargetPoints_FUN_00561460
// Address: 00561460
// Address Range: [[00561460, 005614c5]]
// Convention: __cdecl
// Signature: int __cdecl core_shadowsc_cpp_CShadowsc_getTargetPoints_FUN_00561460(CShadowsc *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_shadowsc_cpp_CShadowsc_getTargetPoints_FUN_00561460(CShadowsc *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_100c [1016];
  float fStack_24;
  CVector3f CStack_18;
  
  bVar1 = 0;
  core_skeleton_cpp_FUN_00569130(&this_ptr->field_0x158,*(uint *)&this_ptr->field_0xc268);
  CStack_18.x = fStack_24;
  *(uint *)((int)&CStack_18 + (uint)bVar1 * -8 + 4) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8);
  *(uint *)((int)&CStack_18 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (out_points_array == &CStack_18) {
    return 1;
  }
  out_points_array->x = CStack_18.x;
  out_points_array->y = CStack_18.y;
  out_points_array->z = CStack_18.z;
  return 1;
}

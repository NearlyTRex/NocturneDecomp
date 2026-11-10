// Name: core_hand.cpp_CHand_getTargetPoints_FUN_005aa2e0
// Address: 005aa2e0
// Address Range: [[005aa2e0, 005aa367]]
// Convention: __cdecl
// Signature: int __cdecl core_hand_cpp_CHand_getTargetPoints_FUN_005aa2e0(CHand *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hand_cpp_CHand_getTargetPoints_FUN_005aa2e0(CHand *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_1008 [1015];
  float fStack_20;
  CVector3f CStack_14;
  
  bVar1 = 0;
  if (*(float *)&this_ptr->field_0x113c4 < (float)_DAT_005f0a9b) {
    return 0;
  }
  core_xform_cpp_FUN_00591530
            (&DAT_0265370c,&this_ptr->field_0x1134 + *(int *)&this_ptr->field_0x11850 * 0x30);
  CStack_14.x = fStack_20;
  *(uint *)((int)&CStack_14 + (uint)bVar1 * -8 + 4) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8);
  *(uint *)((int)&CStack_14 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (out_points_array != &CStack_14) {
    out_points_array->x = CStack_14.x;
    out_points_array->y = CStack_14.y;
    out_points_array->z = CStack_14.z;
  }
  return 1;
}

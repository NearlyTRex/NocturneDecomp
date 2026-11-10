// Name: core_constrct.cpp_CConstruct_getTargetPoints_FUN_00444010
// Address: 00444010
// Address Range: [[00444010, 00444101]]
// Convention: __cdecl
// Signature: int __cdecl core_constrct_cpp_CConstruct_getTargetPoints_FUN_00444010(CConstruct *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_constrct_cpp_CConstruct_getTargetPoints_FUN_00444010(CConstruct *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_1040 [1016];
  float fStack_58;
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [2];
  CVector3f CStack_34;
  CVector3f CStack_28;
  float fStack_1c;
  uint auStack_18 [2];
  
  bVar1 = 0;
  core_skeleton_cpp_FUN_0054dcc0(&this_ptr->field_0x158,DAT_007f8e64);
  CStack_4c.x = fStack_1c;
  *(uint *)((int)&CStack_4c + (uint)bVar1 * -8 + 4) = auStack_18[(uint)bVar1 * -2];
  *(uint *)((int)&CStack_4c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       auStack_18[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array != &CStack_4c) {
    out_points_array->x = CStack_4c.x;
    out_points_array->y = CStack_4c.y;
    out_points_array->z = CStack_4c.z;
  }
  core_skeleton_cpp_FUN_0054dcc0(&this_ptr->field_0x158,DAT_007f8e94);
  CStack_34.x = fStack_40;
  *(float *)((int)&CStack_34 + (uint)bVar1 * -8 + 4) = afStack_3c[(uint)bVar1 * -2];
  *(float *)((int)&CStack_34 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_3c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array + 1 != &CStack_34) {
    out_points_array[1].x = CStack_34.x;
    out_points_array[1].y = CStack_34.y;
    out_points_array[1].z = CStack_34.z;
  }
  core_skeleton_cpp_FUN_0054dcc0(&this_ptr->field_0x158,DAT_007f8e9c);
  CStack_28.x = fStack_58;
  *(uint *)((int)&CStack_28 + (uint)bVar1 * -8 + 4) =
       *(uint *)(&stack0xffffffac + (uint)bVar1 * -8);
  *(uint *)((int)&CStack_28 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)(&stack0xffffffb0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (out_points_array + 2 == &CStack_28) {
    return 3;
  }
  out_points_array[2].x = CStack_28.x;
  out_points_array[2].y = CStack_28.y;
  out_points_array[2].z = CStack_28.z;
  return 3;
}

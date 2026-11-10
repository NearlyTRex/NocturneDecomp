// Name: core_batman.cpp_CBatman_getTargetPoints_FUN_004144c0
// Address: 004144c0
// Address Range: [[004144c0, 004145f7]]
// Convention: __cdecl
// Signature: int __cdecl core_batman_cpp_CBatman_getTargetPoints_FUN_004144c0(CBatman *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_batman_cpp_CBatman_getTargetPoints_FUN_004144c0(CBatman *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1040 [1016];
  float fStack_58;
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [5];
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar3 = 0;
  iVar2 = 1;
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,DAT_007bc7b8);
  CStack_4c.x = afStack_3c[2];
  *(float *)((int)&CStack_4c + (uint)bVar3 * -8 + 4) = afStack_3c[(uint)bVar3 * -2 + 3];
  *(float *)((int)&CStack_4c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  if (&CStack_4c != out_points_array) {
    out_points_array->x = CStack_4c.x;
    out_points_array->y = CStack_4c.y;
    out_points_array->z = CStack_4c.z;
  }
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[6] * 4) != 0) {
    core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,DAT_007bc7dc);
    CStack_1c.x = fStack_58;
    *(uint *)((int)&CStack_1c + (uint)bVar3 * -8 + 4) =
         *(uint *)(&stack0xffffffac + (uint)bVar3 * -8);
    *(uint *)((int)&CStack_1c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)(&stack0xffffffb0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (out_points_array + 1 != &CStack_1c) {
      out_points_array[1].x = CStack_1c.x;
      out_points_array[1].y = CStack_1c.y;
      out_points_array[1].z = CStack_1c.z;
    }
    iVar2 = 2;
  }
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[1] * 4) == 0) {
    return iVar2;
  }
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,DAT_007bc7e4);
  pCVar1 = out_points_array + iVar2;
  CStack_28.x = fStack_40;
  *(float *)((int)&CStack_28 + (uint)bVar3 * -8 + 4) = afStack_3c[(uint)bVar3 * -2];
  *(float *)((int)&CStack_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  if (pCVar1 != &CStack_28) {
    pCVar1->x = CStack_28.x;
    pCVar1->y = CStack_28.y;
    pCVar1->z = CStack_28.z;
  }
  return iVar2 + 1;
}

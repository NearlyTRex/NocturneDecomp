// Name: core_gargoyle.cpp_CGargoyle_getTargetPoints_FUN_004dd790
// Address: 004dd790
// Address Range: [[004dd790, 004dd9a1]]
// Convention: __cdecl
// Signature: int __cdecl core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004dd790(CGargoyle *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004dd790(CGargoyle *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1070 [1016];
  float fStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  float fStack_64;
  float afStack_60 [2];
  CVector3f CStack_58;
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [5];
  CVector3f CStack_28;
  float fStack_1c;
  uint auStack_18 [2];
  
  bVar3 = 0;
  iVar2 = 1;
  core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,_DAT_01cd0c9c);
  CStack_70.x = afStack_3c[2];
  *(float *)((int)&CStack_70 + (uint)bVar3 * -8 + 4) = afStack_3c[(uint)bVar3 * -2 + 3];
  *(float *)((int)&CStack_70 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  if (&CStack_70 != out_points_array) {
    out_points_array->x = CStack_70.x;
    out_points_array->y = CStack_70.y;
    out_points_array->z = CStack_70.z;
  }
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[0] * 4) != 0) {
    core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,_DAT_01cd0cb0);
    CStack_7c.x = fStack_64;
    *(float *)((int)&CStack_7c + (uint)bVar3 * -8 + 4) = afStack_60[(uint)bVar3 * -2];
    *(float *)((int)&CStack_7c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         afStack_60[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    if (out_points_array + 1 != &CStack_7c) {
      out_points_array[1].x = CStack_7c.x;
      out_points_array[1].y = CStack_7c.y;
      out_points_array[1].z = CStack_7c.z;
    }
    iVar2 = 2;
  }
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[2] * 4) != 0) {
    core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,_DAT_01cd0cb4);
    pCVar1 = out_points_array + iVar2;
    CStack_28.x = fStack_88;
    *(uint *)((int)&CStack_28 + (uint)bVar3 * -8 + 4) =
         *(uint *)(&stack0xffffff7c + (uint)bVar3 * -8);
    *(uint *)((int)&CStack_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)(&stack0xffffff80 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (pCVar1 != &CStack_28) {
      pCVar1->x = CStack_28.x;
      pCVar1->y = CStack_28.y;
      pCVar1->z = CStack_28.z;
    }
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[8] * 4) != 0) {
    core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,_DAT_01cd0cc0);
    pCVar1 = out_points_array + iVar2;
    CStack_4c.x = fStack_1c;
    *(uint *)((int)&CStack_4c + (uint)bVar3 * -8 + 4) = auStack_18[(uint)bVar3 * -2];
    *(uint *)((int)&CStack_4c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         auStack_18[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    if (pCVar1 != &CStack_4c) {
      pCVar1->x = CStack_4c.x;
      pCVar1->y = CStack_4c.y;
      pCVar1->z = CStack_4c.z;
    }
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[9] * 4) == 0) {
    return iVar2;
  }
  core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,_DAT_01cd0cc8);
  pCVar1 = out_points_array + iVar2;
  CStack_58.x = fStack_40;
  *(float *)((int)&CStack_58 + (uint)bVar3 * -8 + 4) = afStack_3c[(uint)bVar3 * -2];
  *(float *)((int)&CStack_58 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  if (pCVar1 != &CStack_58) {
    pCVar1->x = CStack_58.x;
    pCVar1->y = CStack_58.y;
    pCVar1->z = CStack_58.z;
  }
  return iVar2 + 1;
}

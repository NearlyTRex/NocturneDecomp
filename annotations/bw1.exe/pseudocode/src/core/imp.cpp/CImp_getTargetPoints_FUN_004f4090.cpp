// Name: core_imp.cpp_CImp_getTargetPoints_FUN_004f4090
// Address: 004f4090
// Address Range: [[004f4090, 004f42ae]]
// Convention: __cdecl
// Signature: int __cdecl core_imp_cpp_CImp_getTargetPoints_FUN_004f4090(CImp *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_imp_cpp_CImp_getTargetPoints_FUN_004f4090(CImp *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1070 [1016];
  CVector3f CStack_88;
  float fStack_7c;
  float afStack_78 [5];
  float fStack_64;
  float fStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [2];
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar3 = 0;
  iVar2 = 0;
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[10] * 4) != 0) {
    core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,_DAT_01d06cf8);
    CStack_4c.x = afStack_78[2];
    *(float *)((int)&CStack_4c + (uint)bVar3 * -8 + 4) = afStack_78[(uint)bVar3 * -2 + 3];
    *(float *)((int)&CStack_4c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         afStack_78[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    if (&CStack_4c != out_points_array) {
      out_points_array->x = CStack_4c.x;
      out_points_array->y = CStack_4c.y;
      out_points_array->z = CStack_4c.z;
    }
    iVar2 = 1;
  }
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[0] * 4) != 0) {
    core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,_DAT_01d06d0c);
    pCVar1 = out_points_array + iVar2;
    CStack_88.x = fStack_34;
    *(float *)((int)&CStack_88 + (uint)bVar3 * -8 + 4) = afStack_30[(uint)bVar3 * -2];
    *(float *)((int)&CStack_88 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         afStack_30[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    if (pCVar1 != &CStack_88) {
      pCVar1->x = CStack_88.x;
      pCVar1->y = CStack_88.y;
      pCVar1->z = CStack_88.z;
    }
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[2] * 4) != 0) {
    core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,_DAT_01d06d10);
    pCVar1 = out_points_array + iVar2;
    CStack_1c.x = fStack_7c;
    *(float *)((int)&CStack_1c + (uint)bVar3 * -8 + 4) = afStack_78[(uint)bVar3 * -2];
    *(float *)((int)&CStack_1c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         afStack_78[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    if (pCVar1 != &CStack_1c) {
      pCVar1->x = CStack_1c.x;
      pCVar1->y = CStack_1c.y;
      pCVar1->z = CStack_1c.z;
    }
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[8] * 4) != 0) {
    core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,_DAT_01d06d1c);
    pCVar1 = out_points_array + iVar2;
    CStack_28.x = fStack_64;
    *(float *)((int)&CStack_28 + (uint)bVar3 * -8 + 4) = afStack_78[(uint)bVar3 * -2 + 6];
    *(float *)((int)&CStack_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         afStack_78[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
    if (pCVar1 != &CStack_28) {
      pCVar1->x = CStack_28.x;
      pCVar1->y = CStack_28.y;
      pCVar1->z = CStack_28.z;
    }
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[9] * 4) == 0) {
    return iVar2;
  }
  core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,_DAT_01d06d24);
  pCVar1 = out_points_array + iVar2;
  CStack_40.x = fStack_58;
  *(float *)((int)&CStack_40 + (uint)bVar3 * -8 + 4) = afStack_78[(uint)bVar3 * -2 + 9];
  *(float *)((int)&CStack_40 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_78[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
  if (pCVar1 != &CStack_40) {
    pCVar1->x = CStack_40.x;
    pCVar1->y = CStack_40.y;
    pCVar1->z = CStack_40.z;
  }
  return iVar2 + 1;
}

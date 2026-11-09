// Name: core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_00548c10
// Address: 00548c10
// Address Range: [[00548c10, 00548c60]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_00548c10(CDeformableModel *this_ptr,int lod_index,CVector3i *lod_vertices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_00548c10(CDeformableModel *this_ptr,int lod_index,CVector3i *lod_vertices)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(&this_ptr->field_0x2c + lod_index * 4)) {
    do {
      *(uint *)(*DAT_005f2afc + 0x2c + iVar1) = _DAT_01c6e24c;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x30;
    } while (iVar2 < *(int *)(&this_ptr->field_0x2c + lod_index * 4));
  }
  return;
}

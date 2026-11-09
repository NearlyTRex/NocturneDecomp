// Name: core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_00544c70
// Address: 00544c70
// Address Range: [[00544c70, 00544cb0]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_00544c70(CDeformableModel *this_ptr)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_00544c70(CDeformableModel *this_ptr)

{
  int iVar1;
  CDeformableModel *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < *(int *)this_ptr) {
    do {
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + (*(int *)&pCVar2->field_0x54 + *(int *)&pCVar2->field_0x68) * 0x16 +
              *(int *)&pCVar2->field_0x68 * 4 + *(int *)&pCVar2->field_0x2c * 0x34;
      pCVar2 = (CDeformableModel *)&pCVar2->field_0x4;
    } while (iVar3 < *(int *)this_ptr);
  }
  return iVar1;
}

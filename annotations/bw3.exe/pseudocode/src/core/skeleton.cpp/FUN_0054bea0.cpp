// Name: core_skeleton.cpp_FUN_0054bea0
// Address: 0054bea0
// Address Range: [[0054bea0, 0054beee]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_FUN_0054bea0(CDeformableModel *this_ptr)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_FUN_0054bea0(CDeformableModel *this_ptr)

{
  CDeformableModel *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < *(int *)this_ptr) {
    do {
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + (*(int *)&pCVar1->field_0x68 + *(int *)&pCVar1->field_0x54) * 0x16 +
              *(int *)&pCVar1->field_0x68 * 4 + *(int *)&pCVar1->field_0x2c * 0x34;
      pCVar1 = (CDeformableModel *)&pCVar1->field_0x4;
    } while (iVar3 < *(int *)this_ptr);
  }
  return iVar2;
}

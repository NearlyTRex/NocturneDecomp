// Name: core_skeleton.cpp_CDeformableModel_free_FUN_005637d0
// Address: 005637d0
// Address Range: [[005637d0, 005638b6]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_free_FUN_005637d0(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_free_FUN_005637d0(CDeformableModel *this_ptr)

{
  CDeformableModel *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < *(int *)this_ptr) {
    do {
      FUN_005c0336(*(void **)&pCVar1->field_0x40);
      *(uint *)&pCVar1->field_0x40 = 0;
      FUN_005c0336(*(void **)&pCVar1->field_0x7c);
      *(uint *)&pCVar1->field_0x7c = 0;
      FUN_005c0336(*(void **)&pCVar1->field_0x90);
      *(uint *)&pCVar1->field_0x90 = 0;
      FUN_005c0336(*(void **)&pCVar1->field_0xa4);
      *(uint *)&pCVar1->field_0xa4 = 0;
      *(uint *)&pCVar1->field_0x2c = 0;
      *(uint *)&pCVar1->field_0x54 = 0;
      *(uint *)&pCVar1->field_0x68 = 0;
      iVar2 = iVar2 + 1;
      pCVar1 = (CDeformableModel *)&pCVar1->field_0x4;
    } while (iVar2 < *(int *)this_ptr);
  }
  *(uint *)&this_ptr->field_0xb8 = 0;
  *(uint *)&this_ptr->field_0xbc = 0;
  memset(&this_ptr->field_0xc0,0,0xb40);
  *(uint *)&this_ptr->field_0xc00 = 0;
  *(uint *)this_ptr = 0;
  this_ptr->field_0x35b0 = 0;
  this_ptr->field_0x355c = 0;
  *(uint *)&this_ptr->field_0x35ac = 0;
  return;
}

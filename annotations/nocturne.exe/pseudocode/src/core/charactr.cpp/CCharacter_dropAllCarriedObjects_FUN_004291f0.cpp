// Name: core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0
// Address: 004291f0
// Address Range: [[004291f0, 00429213]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0(int param_1)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,iVar1,0);
    iVar1 = iVar2;
  } while (iVar2 < 2);
  return;
}

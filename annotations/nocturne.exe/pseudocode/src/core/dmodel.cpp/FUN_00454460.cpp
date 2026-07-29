// Name: core_dmodel.cpp_FUN_00454460
// Address: 00454460
// Address Range: [[00454460, 0045448a]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_FUN_00454460(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_FUN_00454460(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = (CDemonActorType *)0x1abb65c;
  do {
    core_dmodel_cpp_FUN_00452f10(pCVar1);
    pCVar1 = (CDemonActorType *)(pCVar1[0xf].class_name + 0x14);
  } while (pCVar1 != &g_CZombieDogActorType_01af4e5c);
  _DAT_01abb658 = 0;
  return;
}

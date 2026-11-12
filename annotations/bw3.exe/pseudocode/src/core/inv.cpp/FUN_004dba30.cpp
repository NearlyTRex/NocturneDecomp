// Name: core_inv.cpp_FUN_004dba30
// Address: 004dba30
// Address Range: [[004dba30, 004dba7e]]
// Convention: unknown
// Signature: undefined4 core_inv_cpp_FUN_004dba30(int param_1,int param_2)

#include "nocturne.h"

uint core_inv_cpp_FUN_004dba30(int param_1,int param_2)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(CDemonActor **)(iVar2 + 0x14),g_CWeaponClassInfo.name_hash);
      if ((pCVar1 != (CDemonActor *)0x0) && (param_2 == *(int *)(pCVar1[4].actor_name + 0xc))) {
        return *(uint *)(iVar2 + 0x14);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  return 0;
}

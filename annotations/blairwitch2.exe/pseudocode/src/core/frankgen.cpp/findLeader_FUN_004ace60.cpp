// Name: core_frankgen.cpp_findLeader_FUN_004ace60
// Address: 004ace60
// Address Range: [[004ace60, 004acec3]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_frankgen_cpp_findLeader_FUN_004ace60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * __cdecl core_frankgen_cpp_findLeader_FUN_004ace60(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (g_CDemonSetPtr->actor_count <= iVar2) {
      _DAT_01d046a0 = "..\\core\\frankgen.cpp";
      _DAT_01d046a4 = 0x1cf;
      core_main_c_FUN_004e4500("CFrankenstienMachine::findLeader - no leader found!");
      return (CDemonActor *)0x0;
    }
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                       (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar3),
                        g_CFrankenstienMachineClassInfo.name_hash);
    if (pCVar1 != (CDemonActor *)0x0) break;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return pCVar1;
}

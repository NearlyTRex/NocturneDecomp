// Name: core_frankgen.cpp_findLeader_FUN_004c5e10
// Address: 004c5e10
// Address Range: [[004c5e10, 004c5e73]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_frankgen_cpp_findLeader_FUN_004c5e10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * __cdecl core_frankgen_cpp_findLeader_FUN_004c5e10(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (g_CDemonSetPtr->actor_count <= iVar2) {
      _DAT_01d1d400 = "..\\core\\frankgen.cpp";
      _DAT_01d1d404 = 0x1cf;
      core_main_c_FUN_005030e0("CFrankenstienMachine::findLeader - no leader found!");
      return (CDemonActor *)0x0;
    }
    pCVar1 = (CDemonActor *)
             core_actor_cpp_castToClassHash_FUN_0040c600
                       (*(uint *)((int)g_CDemonSetPtr->actors + iVar3),
                        g_CFrankenstienMachineClassInfo.name_hash);
    if (pCVar1 != (CDemonActor *)0x0) break;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return pCVar1;
}

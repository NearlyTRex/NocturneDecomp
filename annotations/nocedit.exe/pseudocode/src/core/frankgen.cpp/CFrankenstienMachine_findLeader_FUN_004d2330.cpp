// Name: core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330
// Address: 004d2330
// Address Range: [[004d2330, 004d2393]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330(CFrankenstienMachine *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (g_CDemonSetPtr->actor_count <= iVar2) {
      g_CurrentFilename = "..\\core\\frankgen.cpp";
      g_CurrentLineNumber = 0x1cf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CFrankenstienMachine::findLeader - no leader found!");
      return (CDemonActor *)0x0;
    }
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar3),
                        g_CFrankenstienMachineClassInfo.name_hash);
    if (pCVar1 != (CDemonActor *)0x0) break;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return pCVar1;
}

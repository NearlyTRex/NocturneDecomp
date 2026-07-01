// Name: core_frankgen.cpp_findLeader_FUN_004d2330
// Address: 004d2330
// Address Range: [[004d2330, 004d2393]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_frankgen_cpp_findLeader_FUN_004d2330(void)

#include "nocturne.h"

CDemonActor * __cdecl core_frankgen_cpp_findLeader_FUN_004d2330(void)

{
  CFrankenstienMachine *pCVar1;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  while( true ) {
    if (g_CDemonSetPtr->actor_count <= iVar1) {
      g_CurrentFilename = "..\\core\\frankgen.cpp";
      g_CurrentLineNumber = 463;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CFrankenstienMachine::findLeader - no leader found!");
      return (CDemonActor *)0x0;
    }
    pCVar1 = (CFrankenstienMachine *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar2),
                        g_CFrankenstienMachineClassInfo.name_hash);
    if (pCVar1 != (CFrankenstienMachine *)0x0) break;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  }
  return (CDemonActor *)pCVar1;
}

// Name: core_frankgen.cpp_findLeader_FUN_004d2330
// Address: 004d2330
// MANUAL RECONSTRUCTION
// Address Range: [[004d2330, 004d2393]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_frankgen_cpp_findLeader_FUN_004d2330(void)

#include "nocturne.h"

CDemonActor * __cdecl core_frankgen_cpp_findLeader_FUN_004d2330(void)

{
  CFrankenstienMachine *pCVar1;
  int iVar1;

  for (iVar1 = 0; iVar1 < g_CDemonSetPtr->actor_count; iVar1 = iVar1 + 1) {
    pCVar1 = (CFrankenstienMachine *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->actors[iVar1],
                        g_CFrankenstienMachineClassInfo.name_hash);
    if (pCVar1 != (CFrankenstienMachine *)0x0) {
      return (CDemonActor *)pCVar1;
    }
  }
  g_CurrentFilename = "..\\core\\frankgen.cpp";
  g_CurrentLineNumber = 0x1cf;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CFrankenstienMachine::findLeader - no leader found!");
  return (CDemonActor *)0x0;
}

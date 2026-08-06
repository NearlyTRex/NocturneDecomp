// Name: core_frankgen.cpp_findLeader_FUN_00495240
// Address: 00495240
// Address Range: [[00495240, 004952a3]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_frankgen_cpp_findLeader_FUN_00495240(void)

#include "nocturne.h"

CDemonActor * __cdecl core_frankgen_cpp_findLeader_FUN_00495240(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (g_CDemonSet_PTR_005be368->actor_count <= iVar2) {
      g_CurrentFilename = "..\\core\\frankgen.cpp";
      g_CurrentLineNumber = 463;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CFrankenstienMachine::findLeader - no leader found!");
      return (CDemonActor *)0x0;
    }
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (*(CDemonActor **)((int)g_CDemonSet_PTR_005be368->actors + iVar3),
                        g_CFrankenstienMachineActorType_01c71304.name_hash);
    if (pCVar1 != (CDemonActor *)0x0) break;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return pCVar1;
}

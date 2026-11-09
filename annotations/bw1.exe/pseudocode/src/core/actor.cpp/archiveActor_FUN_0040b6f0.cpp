// Name: core_actor.cpp_archiveActor_FUN_0040b6f0
// Address: 0040b6f0
// Address Range: [[0040b6f0, 0040b76e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveActor_FUN_0040b6f0(undefined4 *param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveActor_FUN_0040b6f0(uint *param_1,char *param_2)

{
  CDemonActor *pCVar1;
  
  if (DAT_007c3038 == 1) {
    pCVar1 = core_mission_cpp_CDemonMission_loadActor_FUN_0051afa0
                       (0x01D2C900,DAT_007c3034,DAT_007c303c,param_2);
    *param_1 = pCVar1;
    return;
  }
  FUN_005c03c0(DAT_007c3034,&DAT_005d2ab1,&DAT_006106c0);
  core_mission_cpp_CDemonMission_saveActor_FUN_0051b100
            (0x01D2C900,(CDemonActor *)*param_1,DAT_007c3034,DAT_007c303c,param_2);
  return;
}

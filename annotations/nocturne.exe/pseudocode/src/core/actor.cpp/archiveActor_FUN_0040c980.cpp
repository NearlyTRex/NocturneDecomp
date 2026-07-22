// Name: core_actor.cpp_archiveActor_FUN_0040c980
// Address: 0040c980
// Address Range: [[0040c980, 0040c9fe]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveActor_FUN_0040c980(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveActor_FUN_0040c980(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if (DAT_00763e88 == 1) {
    uVar1 = core_mission_cpp_CDemonMission_loadActor_FUN_004d8aa0
                      (0x01CC9450,DAT_00763e84,DAT_00763e8c,param_2);
    *param_1 = uVar1;
    return;
  }
  _fprintf(DAT_00763e84,"%s",&DAT_005acc90);
  core_mission_cpp_CDemonMission_saveActor_FUN_004d8c00
            (0x01CC9450,*param_1,DAT_00763e84,DAT_00763e8c,param_2);
  return;
}

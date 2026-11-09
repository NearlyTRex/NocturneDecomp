// Name: core_actor.cpp_archiveActor_FUN_0040b930
// Address: 0040b930
// Address Range: [[0040b930, 0040b9ae]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveActor_FUN_0040b930(undefined4 *param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveActor_FUN_0040b930(uint *param_1,char *param_2)

{
  CDemonActor *pCVar1;
  
  if (DAT_007df9b8 == 1) {
    pCVar1 = core_mission_cpp_CDemonMission_loadActor_FUN_004f6770
                       (0x01D81080,DAT_007df9b4,DAT_007df9bc,param_2);
    *param_1 = pCVar1;
    return;
  }
  FUN_005a3140(DAT_007df9b4,&DAT_005b5afd,&DAT_005f0990);
  core_mission_cpp_CDemonMission_saveActor_FUN_004f68d0
            (0x01D81080,(CDemonActor *)*param_1,DAT_007df9b4,DAT_007df9bc,param_2);
  return;
}

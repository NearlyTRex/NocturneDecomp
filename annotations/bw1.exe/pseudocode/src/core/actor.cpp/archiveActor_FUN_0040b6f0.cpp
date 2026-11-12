// Name: core_actor.cpp_archiveActor_FUN_0040b6f0
// Address: 0040b6f0
// Address Range: [[0040b6f0, 0040b76e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveActor_FUN_0040b6f0(CDemonActor **actor_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveActor_FUN_0040b6f0(CDemonActor **actor_ptr,char *property_name)

{
  CDemonActor *pCVar1;
  
  if (DAT_007c3038 == 1) {
    pCVar1 = core_mission_cpp_CDemonMission_loadActor_FUN_0051afa0
                       (0x01D2C900,DAT_007c3034,DAT_007c303c,property_name);
    *actor_ptr = pCVar1;
    return;
  }
  FUN_005c03c0(DAT_007c3034,&DAT_005d2ab1,&DAT_006106c0);
  core_mission_cpp_CDemonMission_saveActor_FUN_0051b100
            (0x01D2C900,*actor_ptr,DAT_007c3034,DAT_007c303c,property_name);
  return;
}

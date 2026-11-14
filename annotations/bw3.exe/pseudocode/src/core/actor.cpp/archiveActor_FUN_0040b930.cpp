// Name: core_actor.cpp_archiveActor_FUN_0040b930
// Address: 0040b930
// Address Range: [[0040b930, 0040b9ae]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveActor_FUN_0040b930(CDemonActor **actor_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveActor_FUN_0040b930(CDemonActor **actor_ptr,char *property_name)

{
  CDemonActor *pCVar1;
  
  if (DAT_007df9b8 == 1) {
    pCVar1 = core_mission_cpp_CDemonMission_loadActor_FUN_004f6770
                       (0x01D81080,DAT_007df9b4,DAT_007df9bc,property_name);
    *actor_ptr = pCVar1;
    return;
  }
  FUN_005a3140(DAT_007df9b4,&DAT_005b5afd,&DAT_005f0990);
  core_mission_cpp_CDemonMission_saveActor_FUN_004f68d0
            (0x01D81080,*actor_ptr,DAT_007df9b4,DAT_007df9bc,property_name);
  return;
}

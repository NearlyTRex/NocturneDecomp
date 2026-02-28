// Name: core_msnedit.cpp_CDemonMission_dropActorToGround_FUN_0053c8d0
// Address: 0053c8d0
// Address Range: [[0053c8d0, 0053c924]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_dropActorToGround_FUN_0053c8d0(CDemonMission *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_dropActorToGround_FUN_0053c8d0(CDemonMission *this_ptr,CDemonActor *actor)

{
  float fVar1;
  
  if (actor == (CDemonActor *)0x0) {
    return;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,actor);
  fVar1 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                    (g_CDemonSetPtr,&(actor->location).position,0.0);
  (actor->location).position.y = fVar1;
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  return;
}

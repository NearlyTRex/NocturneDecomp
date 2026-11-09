// Name: core_ghostchi.cpp_FUN_005a9af0
// Address: 005a9af0
// Address Range: [[005a9af0, 005a9b5d]]
// Convention: unknown
// Signature: void core_ghostchi_cpp_FUN_005a9af0(CDemonActor *param_1,uint param_2)

#include "nocturne.h"

void core_ghostchi_cpp_FUN_005a9af0(CDemonActor *param_1,uint param_2)

{
  byte *position;
  
  position = &param_1->field_0x20;
  if (param_2 < 0x2261) {
    if (param_2 != 0x2260) {
      return;
    }
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,"ghostchilslap0?.wav",(CVector3f *)position);
    return;
  }
  if (param_2 < 0x2262) {
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,"ghostchilddeath0?.wav",(CVector3f *)position);
    return;
  }
  if (param_2 != 0x2262) {
    return;
  }
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,param_1,"robinscream0?.wav",(CVector3f *)position);
  return;
}

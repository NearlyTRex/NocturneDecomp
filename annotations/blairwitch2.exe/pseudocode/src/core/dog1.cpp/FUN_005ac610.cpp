// Name: core_dog1.cpp_FUN_005ac610
// Address: 005ac610
// Address Range: [[005ac610, 005ac6c6]]
// Convention: unknown
// Signature: void core_dog1_cpp_FUN_005ac610(CDemonActor *param_1,uint param_2)

#include "nocturne.h"

void core_dog1_cpp_FUN_005ac610(CDemonActor *param_1,uint param_2)

{
  byte *position;
  
  position = &param_1->field_0x20;
  if (param_2 < 0x2199) {
    if (param_2 != 0x2198) {
      return;
    }
    unkafter_basicene_cpp_FUN_0059f740
              (param_1,0x40A00000,*(uint *)&param_1[0x67].field_0x1e4,0x40000000);
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,"dogbite0?.wav",(CVector3f *)position);
    return;
  }
  if (param_2 < 0x219a) {
    unkafter_basicene_cpp_FUN_0059f740
              (param_1,0x41200000,*(uint *)&param_1[0x67].field_0x1e4,0x40000000);
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,"dogjump0?.wav",(CVector3f *)position);
    return;
  }
  if (param_2 != 0x219a) {
    return;
  }
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,param_1,"dogfoot0?.wav",(CVector3f *)position);
  return;
}

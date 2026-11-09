// Name: core_twigzomb.cpp_FUN_005a2e30
// Address: 005a2e30
// Address Range: [[005a2e30, 005a2e81]]
// Convention: unknown
// Signature: void core_twigzomb_cpp_FUN_005a2e30(CDemonActor *param_1,uint param_2)

#include "nocturne.h"

void core_twigzomb_cpp_FUN_005a2e30(CDemonActor *param_1,uint param_2)

{
  char *sound_name;
  
  if (0x21fb < param_2) {
    if (param_2 < 0x21fd) {
      sound_name = "twigfootstep0?.wav";
    }
    else {
      if (param_2 != 0x21fd) goto LAB_005a2e65;
      sound_name = "twigswing0?.wav";
    }
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,sound_name,(CVector3f *)&param_1->field_0x20);
  }
LAB_005a2e65:
  unkafter_basicene_cpp_FUN_0059e880(param_1,param_2);
  return;
}

// Name: core_hand.cpp_FUN_005aa380
// Address: 005aa380
// Address Range: [[005aa380, 005aa448]]
// Convention: unknown
// Signature: void core_hand_cpp_FUN_005aa380(CDemonActor *param_1,undefined4 param_2)

#include "nocturne.h"

void core_hand_cpp_FUN_005aa380(CDemonActor *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  switch(param_2) {
  case 0x2134:
    iVar1 = unkafter_basicene_cpp_FUN_0059f740
                      (param_1,0x41200000,*(uint *)&param_1[0x67].field_0x1e4,0x40000000);
  default:
    if (iVar1 == 0) {
      return;
    }
    break;
  case 0x2135:
    iVar1 = unkafter_basicene_cpp_FUN_0059f740
                      (param_1,0x41700000,*(uint *)&param_1[0x67].field_0x1e4,0x40000000);
    if (iVar1 == 0) {
      return;
    }
    break;
  case 0x2136:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,"?phandriseup01.wav" + 1,
               (CVector3f *)&param_1->field_0x20);
    return;
  case 0x2137:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,"phandslap0?.wav",(CVector3f *)&param_1->field_0x20);
    return;
  }
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,param_1,"phandslap0?.wav",(CVector3f *)&param_1->field_0x20);
  return;
}

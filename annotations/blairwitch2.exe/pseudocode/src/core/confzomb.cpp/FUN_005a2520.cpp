// Name: core_confzomb.cpp_FUN_005a2520
// Address: 005a2520
// Address Range: [[005a2520, 005a25ff]]
// Convention: unknown
// Signature: void core_confzomb_cpp_FUN_005a2520(CDemonActor *param_1,undefined4 param_2)

#include "nocturne.h"

void core_confzomb_cpp_FUN_005a2520(CDemonActor *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = 0;
  switch(param_2) {
  case 0x1fa4:
    uVar3 = *(uint *)&param_1[0x67].field_0x1e8;
    uVar4 = 0x40000000;
    uVar2 = 0x41C80000;
    break;
  case 0x1fa5:
    iVar1 = unkafter_basicene_cpp_FUN_0059f740
                      (param_1,0x40A00000,*(uint *)&param_1[0x67].field_0x1e8,0x3f800000);
    if (iVar1 == 0) {
      return;
    }
    goto LAB_005a25e4;
  case 0x1fa6:
    uVar3 = *(uint *)&param_1[0x67].field_0x1e4;
    uVar4 = 0x3f800000;
    uVar2 = 0x40A00000;
    break;
  case 0x1fa7:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,"phantomhandswing0?.wav",
               (CVector3f *)&param_1->field_0x20);
    return;
  case 0x1fa8:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,"phantomteleport0?.wav",
               (CVector3f *)&param_1->field_0x20);
    return;
  default:
    goto switchD_005a2537_default;
  }
  iVar1 = unkafter_basicene_cpp_FUN_0059f740(param_1,uVar2,uVar3,uVar4);
switchD_005a2537_default:
  if (iVar1 == 0) {
    return;
  }
LAB_005a25e4:
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,param_1,"phandslap0?.wav",(CVector3f *)&param_1->field_0x20);
  return;
}

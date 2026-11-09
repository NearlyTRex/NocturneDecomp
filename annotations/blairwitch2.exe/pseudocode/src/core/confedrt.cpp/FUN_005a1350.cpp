// Name: core_confedrt.cpp_FUN_005a1350
// Address: 005a1350
// Address Range: [[005a1350, 005a1486]]
// Convention: unknown
// Signature: void core_confedrt_cpp_FUN_005a1350(CDemonActor *param_1,undefined4 param_2)

#include "nocturne.h"

void core_confedrt_cpp_FUN_005a1350(CDemonActor *param_1,uint param_2)

{
  int iVar1;
  
  switch(param_2) {
  case 0x206c:
    core_confedrt_cpp_FUN_005a14e0(param_1);
    break;
  case 0x206d:
    iVar1 = core_actor_cpp_FUN_0040cfc0(0,4);
    if (2 < iVar1) {
      core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                (0x0264B290,param_1,"confedstab01.wav",(CVector3f *)&param_1->field_0x20)
      ;
      unkafter_basicene_cpp_FUN_0059e880(param_1,param_2);
      return;
    }
    break;
  case 0x206e:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,"confedbutt01.wav",(CVector3f *)&param_1->field_0x20);
    unkafter_basicene_cpp_FUN_0059e880(param_1,param_2);
    return;
  case 0x206f:
    iVar1 = unkafter_basicene_cpp_FUN_0059f740
                      (param_1,0x40200000,*(uint *)&param_1[0x67].field_0x1f0,0x3f800000);
    if (iVar1 != 0) {
      core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                (0x0264B290,param_1,"swordimpactflesh0?.wav",
                 (CVector3f *)&param_1->field_0x20);
      unkafter_basicene_cpp_FUN_0059e880(param_1,param_2);
      return;
    }
    break;
  case 0x2070:
    iVar1 = unkafter_basicene_cpp_FUN_0059f740
                      (param_1,0x40200000,*(uint *)&param_1[0x67].field_0x1ec,0x3f800000);
    if (iVar1 != 0) {
      core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                (0x0264B290,param_1,"riflebutt01",(CVector3f *)&param_1->field_0x20);
      unkafter_basicene_cpp_FUN_0059e880(param_1,param_2);
      return;
    }
  }
  unkafter_basicene_cpp_FUN_0059e880(param_1,param_2);
  return;
}

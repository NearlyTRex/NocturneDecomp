// Name: core_hag.cpp_FUN_005ab940
// Address: 005ab940
// Address Range: [[005ab940, 005ab9ce]]
// Convention: unknown
// Signature: void core_hag_cpp_FUN_005ab940(CDemonActor *param_1,uint param_2)

#include "nocturne.h"

void core_hag_cpp_FUN_005ab940(CDemonActor *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x20d1) {
    if (param_2 == 0x20d0) {
      unkafter_basicene_cpp_FUN_0059f740
                (param_1,0x41C80000,*(uint *)&param_1[0x67].field_0x1e8,0x40000000);
      return;
    }
  }
  else {
    if (param_2 < 0x20d2) {
      unkafter_basicene_cpp_FUN_0059f740
                (param_1,0x41700000,*(uint *)&param_1[0x67].field_0x1e8,0x40000000);
      return;
    }
    if (param_2 != 0x20d2) {
      return;
    }
    iVar1 = core_actor_cpp_FUN_0040cfc0(0,1);
    if (iVar1 != 0) {
      core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                (0x0264B290,param_1,"hagattack0?.wav",(CVector3f *)&param_1->field_0x20);
      return;
    }
  }
  return;
}

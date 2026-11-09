// Name: unkafter_basicene.cpp_FUN_0059f800
// Address: 0059f800
// Address Range: [[0059f800, 0059f92f]]
// Convention: unknown
// Signature: void unkafter_basicene_cpp_FUN_0059f800(CDemonActor *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_basicene_cpp_FUN_0059f800(CDemonActor *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)&param_1[0xe].field_0x244 == 0) || (*(int *)(param_2 + 4) == 0x461c3c00)) {
    fVar1 = *(float *)&param_1[0xd].field_0x284 - *(float *)(param_2 + 4);
    *(float *)&param_1[0xd].field_0x284 = fVar1;
    if (0.0 < fVar1) {
      core_enemy_cpp_FUN_00488890(param_1,param_2);
      if (*(int *)(param_2 + 0x38) == *(int *)&param_1[0x62].field_0x190) {
        *(uint *)&param_1[0x62].field_0x194 = *(uint *)&param_1[0x65].field_0x274;
      }
      *(uint *)&param_1[0x66].field_0x4c = 0;
      fVar1 = (float)core_actor_cpp_FUN_0040cf60(0,0x3f800000);
      if ((float)_DAT_005ef9b7 < fVar1) {
        *(uint *)&param_1[0x66].field_0x18 = 1;
      }
      if ((param_1[0x66].field_0x8c != '\0') &&
         (iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[0x67].field_0x1e0), iVar2 == 0))
      {
        uVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                          (param_1,&param_1[0x66].field_0x8c);
        *(uint *)&param_1[0x67].field_0x1e0 = uVar3;
        return;
      }
    }
    else {
      if (param_1[0x66].field_0x18b != '\0') {
        core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                  (0x0264B290,param_1,&param_1[0x66].field_0x18b,(CVector3f *)&param_1->field_0x20
                  );
      }
      *(uint *)&param_1[0xd].field_0x284 = 0;
      unkaddr_0059d350_cpp_FUN_0059d8e0(&param_1[0x62].field_0x210,"Death");
    }
  }
  else {
    core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,"ShotInvulnerable")
    ;
  }
  return;
}

// Name: core_bugs.cpp_FUN_00421300
// Address: 00421300
// Address Range: [[00421300, 004215e7]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_00421300(CBugs *param_1,float param_2)

#include "nocturne.h"

void core_bugs_cpp_FUN_00421300(CBugs *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar2 != 0) {
    *(float *)&param_1->field_0x1bd38 = *(float *)&param_1->field_0x1bd38 - param_2;
    if (*(float *)&param_1->field_0x1bd38 < 0.0) {
      *(uint *)&param_1->field_0x1bd38 = 0;
    }
    if ((0.0 < *(float *)&param_1->field_0x1be98) &&
       (*(float *)&param_1->field_0x1be98 = *(float *)&param_1->field_0x1be98 - param_2,
       *(float *)&param_1->field_0x1be98 < 0.0)) {
      *(uint *)&param_1->field_0x1be98 = 0;
    }
    if ((*(int *)&param_1->field_0x1bd2c == 0) &&
       (iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                          (0x01C6E360,&param_1->field_0x1bd3c), iVar2 != 0)) {
      *(uint *)&param_1->field_0x1bd2c = 1;
    }
    if ((*(int *)&param_1->field_0x1bd30 == 0) &&
       (iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                          (0x01C6E360,&param_1->field_0x1bda0), iVar2 != 0)) {
      *(uint *)&param_1->field_0x1bd30 = 1;
    }
    switch(*(uint *)&param_1->field_0xd054) {
    case 0:
      iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1->field_0x1be9c);
      if (iVar2 == 0) {
        uVar3 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                          (0x02CF5680,(CDemonActor *)param_1,"?wp_disease_loop.wav" + 1,
                           (CVector3f *)&param_1->field_0x20);
        *(uint *)&param_1->field_0x1be9c = uVar3;
      }
      core_bugs_cpp_FUN_004221c0(param_1,param_2);
      break;
    case 1:
      iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1->field_0x1be9c);
      if (iVar2 != 0) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0x1be9c);
        *(uint *)&param_1->field_0x1be9c = 0;
      }
      iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1->field_0x1bea0);
      if (iVar2 == 0) {
        uVar3 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                          (0x02CF5680,(CDemonActor *)param_1,"wp_disease_munch.wav",
                           (CVector3f *)&param_1->field_0x20);
        *(uint *)&param_1->field_0x1bea0 = uVar3;
      }
      core_bugs_cpp_FUN_00422570(param_1,param_2);
      break;
    case 2:
      core_bugs_cpp_FUN_004229f0(param_1,param_2);
    }
    if ((((*(int *)&param_1->field_0xcde4 != 0) &&
         (0.0 < *(float *)(*(int *)&param_1->field_0xcde4 + 0x2538))) &&
        ((*(int *)&param_1->field_0x1be94 == 0 || (0.0 < *(float *)&param_1->field_0x1be98)))) &&
       (0.0 < *(float *)&param_1->field_0x1bd38)) {
      return;
    }
    *(float *)&param_1->field_0x1bd34 = *(float *)&param_1->field_0x1bd34 - param_2;
    if (*(float *)&param_1->field_0x1bd34 <= 0.0) {
      *(uint *)&param_1->field_0x1bd34 = 0x3dcccccd;
      *(int *)&param_1->field_0xd058 = *(int *)&param_1->field_0xd058 + -3;
    }
    uVar1 = 0x01D81080;
    if (*(int *)&param_1->field_0xd058 < 1) {
      *(uint *)&param_1->field_0xd058 = 0;
      core_mission_cpp_FUN_004f6f10(uVar1,param_1,1);
      iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1->field_0x1be9c);
      if (iVar2 != 0) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0x1be9c);
        *(uint *)&param_1->field_0x1be9c = 0;
      }
      iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1->field_0x1bea0);
      if (iVar2 != 0) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0x1bea0);
        *(uint *)&param_1->field_0x1bea0 = 0;
        return;
      }
    }
  }
  return;
}

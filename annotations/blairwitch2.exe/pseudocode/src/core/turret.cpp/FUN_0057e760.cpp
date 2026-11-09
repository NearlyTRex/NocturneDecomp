// Name: core_turret.cpp_FUN_0057e760
// Address: 0057e760
// Address Range: [[0057e760, 0057e791] [0057e80a, 0057e8b5] [0057eba4, 0057ec60]]
// Convention: unknown
// Signature: void core_turret_cpp_FUN_0057e760(CTurret *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_turret_cpp_FUN_0057e760(CTurret *param_1,float param_2)

{
  float fVar1;
  CEventList *pCVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  float afStackY_187c [1497];
  float fStack_108;
  byte auStack_104 [100];
  uint uStack_a0;
  uint auStack_9c [7];
  uint auStack_80 [4];
  uint auStack_70 [4];
  uint uStack_60;
  uint uStack_50;
  uint uStack_40;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  double dStack_28;
  byte *puStack_20;
  uint *puStack_1c;
  float fStack_18;
  
  bVar6 = 0;
  *(uint *)&param_1->field_0x450 = 0xffffffff;
  switch(*(uint *)&param_1->field_0x85c) {
  case 0:
    if (&param_1->field_0x30 != &param_1->field_0x6d4) {
      *(uint *)&param_1->field_0x30 = *(uint *)&param_1->field_0x6d4;
      *(uint *)&param_1->field_0x34 = *(uint *)&param_1->field_0x6d8;
      *(uint *)&param_1->field_0x38 = *(uint *)&param_1->field_0x6dc;
    }
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&param_1->field_0x860);
    if (iVar4 == 0) {
      *(uint *)&param_1->field_0x8d8 = 0;
      break;
    }
    *(uint *)&param_1->field_0x85c = 1;
    *(uint *)&param_1->field_0x8d8 = *(uint *)&param_1->field_0x8c4;
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0xa14);
    goto LAB_0057e7f7;
  case 1:
    fVar1 = *(float *)&param_1->field_0x8d8 - param_2;
    *(float *)&param_1->field_0x8d8 = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)&param_1->field_0x8d8 = 0;
      *(uint *)&param_1->field_0x85c = 2;
      *(uint *)&param_1->field_0x45c = 0;
    }
    break;
  case 2:
    *(uint *)&param_1->field_0x450 = 0xff;
    pCVar2 = 0x01C38BC0;
    *(uint *)&param_1->field_0x454 = 0;
    *(uint *)&param_1->field_0x458 = 0;
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340(pCVar2,&param_1->field_0x860);
    if (iVar4 == 0) {
      *(uint *)&param_1->field_0x85c = 3;
      *(uint *)&param_1->field_0x8d8 = *(uint *)&param_1->field_0x8c8;
    }
    else {
      core_turret_cpp_FUN_0057f0b0(param_1);
      *(uint *)&param_1->field_0x8d8 = 0;
    }
    break;
  case 3:
    *(uint *)&param_1->field_0x450 = 0;
    pCVar2 = 0x01C38BC0;
    *(uint *)&param_1->field_0x454 = 0xff;
    *(uint *)&param_1->field_0x458 = 0;
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340(pCVar2,&param_1->field_0x860);
    if (iVar4 != 0) {
      *(uint *)&param_1->field_0x8d8 = 0;
      *(uint *)&param_1->field_0x85c = 2;
      *(uint *)&param_1->field_0x45c = 0;
      break;
    }
    fVar1 = *(float *)&param_1->field_0x8d8 - param_2;
    *(float *)&param_1->field_0x8d8 = fVar1;
    if (0.0 < fVar1) {
      core_turret_cpp_FUN_0057fa00(param_1,param_2);
      break;
    }
    *(uint *)&param_1->field_0x85c = 4;
    *(uint *)&param_1->field_0x8d8 = *(uint *)&param_1->field_0x8cc;
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0xa14);
LAB_0057e7f7:
    uVar5 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1);
    *(uint *)&param_1->field_0xa14 = uVar5;
    break;
  case 4:
    puStack_20 = &param_1->field_0x6d4;
    *(float *)&param_1->field_0x8d8 = *(float *)&param_1->field_0x8d8 - param_2;
    puStack_1c = (uint *)&param_1->field_0x30;
    if (0.0 < *(float *)&param_1->field_0x8d8) {
      core_xform_cpp_FUN_00594380();
      auStack_80[0] = uStack_a0;
      auStack_9c[(uint)bVar6 * -2 + 8] = auStack_9c[(uint)bVar6 * -2];
      auStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9] =
           auStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      (auStack_9c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1] =
           (auStack_9c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
      core_xform_cpp_FUN_00594380();
      auStack_70[0] = auStack_9c[3];
      auStack_9c[(uint)bVar6 * -2 + 0xc] = auStack_9c[(uint)bVar6 * -2 + 4];
      auStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
           auStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
      (auStack_9c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1] =
           (auStack_9c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_00593df0(auStack_9c + 7,auStack_9c + 0xb);
      uStack_50 = uStack_60;
      auStack_9c[(uint)bVar6 * -2 + 0x14] = auStack_9c[(uint)bVar6 * -2 + 0x10];
      auStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15] =
           auStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11];
      (auStack_9c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15)[(uint)bVar6 * -2 + 1] =
           (auStack_9c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11)[(uint)bVar6 * -2 + 1];
      core_xform_cpp_FUN_005940b0();
      puVar3 = puStack_1c;
      uStack_34 = uStack_40;
      auStack_9c[(uint)bVar6 * -2 + 0x1b] = auStack_9c[(uint)bVar6 * -2 + 0x18];
      auStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
           auStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
      if (auStack_9c + 0x1a != puVar3) {
        *puVar3 = uStack_34;
        puVar3[1] = uStack_30;
        puVar3[2] = uStack_2c;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)param_1);
    }
    else {
      *(uint *)&param_1->field_0x85c = 0;
      *(uint *)&param_1->field_0x8d8 = 0;
      if (puStack_1c != (uint *)puStack_20) {
        *puStack_1c = *(uint *)puStack_20;
        *(uint *)&param_1->field_0x34 = *(uint *)&param_1->field_0x6d8;
        *(uint *)&param_1->field_0x38 = *(uint *)&param_1->field_0x6dc;
      }
    }
    break;
  default:
    _DAT_01d046a0 = "..\\core\\turret.cpp";
    _DAT_01d046a4 = 0x15a;
    core_main_c_FUN_004e4500();
  }
  if (-1 < *(int *)&param_1->field_0x450) {
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0xf8))();
  }
  *(float *)&param_1->field_0x9c8 = *(float *)&param_1->field_0x9c8 - param_2;
  *(float *)&param_1->field_0x45c = *(float *)&param_1->field_0x45c - param_2;
  if ((0 < *(int *)&param_1->field_0xa0c) || (0.0 < *(float *)&param_1->field_0x9c8)) {
    *(int *)&param_1->field_0xa0c = *(int *)&param_1->field_0xa0c + -1;
    fStack_108 = (float)core_actor_cpp_FUN_0040cf60(0x3f666666);
    fStack_18 = fStack_108;
    iVar4 = sound_sndmain_cpp_FUN_00550f50(*(uint *)&param_1->field_0xa10,fStack_108);
    if (iVar4 == 0) {
      FUN_005b7790(auStack_104,"turret-loop.wav * %f",(double)fStack_108);
      uVar5 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x38))(param_1,auStack_104);
      *(uint *)&param_1->field_0xa10 = uVar5;
      return;
    }
  }
  else {
    dStack_28 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00550c30
                          (*(uint *)&param_1->field_0xa10,2);
    if (0.0 <= dStack_28) {
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0xa10);
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"turret-tail.wav");
      return;
    }
  }
  return;
}

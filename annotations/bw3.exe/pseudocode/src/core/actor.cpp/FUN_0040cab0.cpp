// Name: core_actor.cpp_FUN_0040cab0
// Address: 0040cab0
// Address Range: [[0040cab0, 0040cdb1]]
// Convention: unknown
// Signature: uint core_actor_cpp_FUN_0040cab0(CDemonActor *param_1,CVector3f *param_2,EGroundType param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_actor_cpp_FUN_0040cab0(CDemonActor *param_1,CVector3f *param_2,EGroundType param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  char acStack_d0 [100];
  CVector3f CStack_6c;
  float afStack_60 [12];
  float fStack_30;
  uint uStack_18;
  float fStack_14;
  
  afStack_60[6] = (float)g_CDemonCameraInstance._4_4_;
  afStack_60[7] = (float)g_CDemonCameraInstance._8_4_;
  afStack_60[8] = (float)g_CDemonCameraInstance._12_4_;
  afStack_60[3] = (float)g_CDemonCameraInstance._4_4_;
  afStack_60[4] = (float)g_CDemonCameraInstance._8_4_;
  afStack_60[5] = (float)g_CDemonCameraInstance._12_4_;
  fVar2 = *(float *)&param_2->field_0x4 - (float)g_CDemonCameraInstance._8_4_;
  fVar1 = *(float *)&param_2->field_0x8 - (float)g_CDemonCameraInstance._12_4_;
  if (_DAT_005b5ed9 <
      fVar1 * fVar1 +
      fVar2 * fVar2 +
      (*(float *)param_2 - (float)g_CDemonCameraInstance._4_4_) *
      (*(float *)param_2 - (float)g_CDemonCameraInstance._4_4_)) {
    return 0;
  }
  iVar3 = core_setcolid_cpp_FUN_0053ef60(g_CDemonSetPtr,param_2);
  if (iVar3 != 0) {
    param_3 = GROUND_TYPE_WATER;
    iVar3 = core_actor_cpp_FUN_0040c790(param_1,"CHero");
    if (iVar3 != 0) {
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"FeetAreWet");
    }
  }
  iVar3 = core_gore_cpp_FUN_004ceef0(g_CGorePtr,param_2,(int *)&param_1->field_0x118);
  if (iVar3 == 0) {
    if (*(int *)&param_1->field_0x114 < 1) {
      if (param_3 == GROUND_TYPE_DIRT) {
        core_gore_cpp_FUN_004cee70(g_CGorePtr,param_2,&param_1->field_0x30,3,0x4000);
      }
      goto LAB_0040cbcf;
    }
  }
  else {
    *(uint *)&param_1->field_0x114 = 0xffff;
  }
  core_gore_cpp_FUN_004cee70
            (g_CGorePtr,param_2,&param_1->field_0x30,0xb,*(uint *)&param_1->field_0x114);
  iVar3 = *(int *)&param_1->field_0x114 + -0x2000;
  *(int *)&param_1->field_0x114 = iVar3;
  if (iVar3 < 0) {
    *(uint *)&param_1->field_0x114 = 0;
  }
LAB_0040cbcf:
  if (param_3 == (GROUND_TYPE_GLASS|GROUND_TYPE_CONCRETE)) {
    iVar3 = core_actor_cpp_FUN_0040cf40(0.01);
    if (iVar3 != 0) {
      core_sound_cpp_CSound_playActorSound_FUN_005609d0
                (0x02CF5680,param_1,"twig?.wav",param_2);
    }
    iVar3 = core_actor_cpp_FUN_0040c790(param_1,"CShadow");
    if (iVar3 == 0) {
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(1,3);
      *(int *)&param_1->field_0x11c = iVar3;
    }
    else {
      *(uint *)&param_1->field_0x11c = 1;
    }
    iVar3 = 0;
    if (0 < *(int *)&param_1->field_0x11c) {
      do {
        fStack_30 = (float)core_actor_cpp_FUN_0040ce40(0x3f490fdb,0x3fc90fdb);
        fStack_14 = fStack_30;
        fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0);
        fVar6 = (float10)fcos((float10)fStack_30);
        fVar7 = (float10)fcos((float10)fStack_14);
        fVar8 = (float10)fsin((float10)fStack_14);
        afStack_60[1] = 0.0;
        uStack_18 = 0x41700000;
        afStack_60[0] = (float)(fVar7 * fVar6);
        afStack_60[2] = (float)(fVar8 * fVar6);
        if (&CStack_6c != param_2) {
          CStack_6c._0_4_ = *(uint *)param_2;
          CStack_6c._4_4_ = *(uint *)&param_2->field_0x4;
          CStack_6c._8_4_ = *(uint *)&param_2->field_0x8;
        }
        iVar3 = iVar3 + 1;
        core_fire_cpp_FUN_004a2930(0x01C73654,param_2,afStack_60);
      } while (iVar3 < *(int *)&param_1->field_0x11c);
    }
  }
  dVar9 = (double)param_4;
  pcVar4 = core_ground_cpp_FUN_004cf9a0(param_3);
  FUN_005a28c0
            (acStack_d0,"footstep-%s-!-%s-?.wav @ %f",&param_1->field_0x120,pcVar4,dVar9);
  uVar5 = core_sound_cpp_CSound_playActorSound_FUN_005609d0(0x02CF5680,param_1,acStack_d0,param_2)
  ;
  return uVar5;
}

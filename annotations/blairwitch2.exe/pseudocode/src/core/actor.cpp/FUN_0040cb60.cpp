// Name: core_actor.cpp_FUN_0040cb60
// Address: 0040cb60
// Address Range: [[0040cb60, 0040ce3b]]
// Convention: unknown
// Signature: uint core_actor_cpp_FUN_0040cb60(CDemonActor *param_1,CVector3f *param_2,int param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_actor_cpp_FUN_0040cb60(CDemonActor *param_1,CVector3f *param_2,int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  int max_value;
  char acStack_d0 [100];
  CVector3f aCStack_6c [3];
  float afStack_48 [11];
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  
  aCStack_6c[2]._0_4_ = g_CDemonCameraInstance._4_4_;
  aCStack_6c[2]._4_4_ = g_CDemonCameraInstance._8_4_;
  aCStack_6c[2]._8_4_ = g_CDemonCameraInstance._12_4_;
  aCStack_6c[1]._0_4_ = g_CDemonCameraInstance._4_4_;
  aCStack_6c[1]._4_4_ = g_CDemonCameraInstance._8_4_;
  aCStack_6c[1]._8_4_ = g_CDemonCameraInstance._12_4_;
  fVar2 = *(float *)&param_2->field_0x4 - (float)g_CDemonCameraInstance._8_4_;
  fVar1 = *(float *)&param_2->field_0x8 - (float)g_CDemonCameraInstance._12_4_;
  if (_DAT_005caf0e <
      fVar1 * fVar1 +
      fVar2 * fVar2 +
      (*(float *)param_2 - (float)g_CDemonCameraInstance._4_4_) *
      (*(float *)param_2 - (float)g_CDemonCameraInstance._4_4_)) {
    return 0;
  }
  iVar3 = core_setcolid_cpp_FUN_00538180(g_CDemonSetPtr,param_2);
  if (iVar3 != 0) {
    param_3 = 6;
    iVar3 = core_actor_cpp_FUN_0040c840(param_1,"CHero");
    if (iVar3 != 0) {
      core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,"FeetAreWet");
    }
  }
  iVar3 = core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004c9d80
                    (g_CGorePtr,param_2,(int *)&param_1->field_0x118);
  if ((iVar3 == 0) || (*(int *)&param_1->field_0x2ac == 0)) {
    if (*(int *)&param_1->field_0x114 < 1) {
      if (param_3 == 3) {
        core_gore_cpp_CGore_createFootstep_FUN_004c9d00
                  (g_CGorePtr,param_2,(UOrientationVector *)&param_1->field_0x30,3,0x4000,
                   BLOOD_TYPE_RED);
      }
      goto LAB_0040cc81;
    }
  }
  else {
    *(uint *)&param_1->field_0x114 = 0xffff;
  }
  core_gore_cpp_CGore_createFootstep_FUN_004c9d00
            (g_CGorePtr,param_2,(UOrientationVector *)&param_1->field_0x30,0xb,
             *(int *)&param_1->field_0x114,*(EBloodType *)&param_1->field_0x118);
  iVar3 = *(int *)&param_1->field_0x114 + -0x2000;
  *(int *)&param_1->field_0x114 = iVar3;
  if (iVar3 < 0) {
    *(uint *)&param_1->field_0x114 = 0;
  }
LAB_0040cc81:
  if (param_3 == 0xe) {
    iVar3 = core_actor_cpp_FUN_0040c840(param_1,"CShadow");
    if (iVar3 == 0) {
      max_value = 3;
      iVar3 = 1;
    }
    else {
      max_value = 9;
      iVar3 = 3;
    }
    iVar3 = core_actor_cpp_FUN_0040cfc0(iVar3,max_value);
    *(int *)&param_1->field_0x11c = iVar3;
    iVar3 = 0;
    if (0 < *(int *)&param_1->field_0x11c) {
      do {
        fStack_18 = (float)core_actor_cpp_FUN_0040cf60(0x3f490fdb,0x3fc90fdb);
        fStack_14 = fStack_18;
        fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0);
        fVar6 = (float10)fcos((float10)fStack_18);
        fVar7 = (float10)fcos((float10)fStack_14);
        fVar8 = (float10)fsin((float10)fStack_14);
        afStack_48[1] = 0.0;
        uStack_1c = 0x41700000;
        afStack_48[0] = (float)(fVar7 * fVar6);
        afStack_48[2] = (float)(fVar8 * fVar6);
        if (aCStack_6c != param_2) {
          aCStack_6c[0]._0_4_ = *(uint *)param_2;
          aCStack_6c[0]._4_4_ = *(uint *)&param_2->field_0x4;
          aCStack_6c[0]._8_4_ = *(uint *)&param_2->field_0x8;
        }
        iVar3 = iVar3 + 1;
        core_fire_cpp_FUN_0049d600(0x01C3DEB4,param_2,afStack_48);
      } while (iVar3 < *(int *)&param_1->field_0x11c);
    }
  }
  uVar4 = core_ground_cpp_FUN_004ca7c0(param_3,(double)param_4);
  FUN_005b7790(acStack_d0,"footstep%s0?",uVar4);
  uVar5 = core_sound_cpp_CSound_playActorSound_FUN_0055ae50(0x0264B290,param_1,acStack_d0,param_2)
  ;
  return uVar5;
}

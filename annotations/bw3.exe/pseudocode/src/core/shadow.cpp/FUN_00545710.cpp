// Name: core_shadow.cpp_FUN_00545710
// Address: 00545710
// Address Range: [[00545710, 00545906]]
// Convention: unknown
// Signature: undefined4 core_shadow_cpp_FUN_00545710(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_shadow_cpp_FUN_00545710(CCharacter *param_1)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  uint auStackY_101c [1001];
  uint auStack_64 [6];
  uint auStack_4c [6];
  float fStack_34;
  float afStack_30 [4];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
            ((CMotionController *)&param_1->field_0x158);
  iVar1 = _DAT_01d1a0a4;
  iVar2 = _DAT_01d5ba14 * 4;
  iVar3 = *(int *)(iVar2 + 0x1d5ba04);
  if (iVar3 != 0) {
    fStack_34 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
    afStack_30[0] = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
    afStack_30[1] = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
    afStack_30[2] = fStack_34;
    afStack_30[(uint)bVar6 * 0xfffffffe + 3] =
         (float)*(uint *)((int)afStack_30 + (uint)bVar6 * 0xfffffff8);
    afStack_30[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 4] =
         afStack_30[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1];
    fStack_14 = fStack_20 * fStack_20 +
                afStack_30[2] * afStack_30[2] + afStack_30[3] * afStack_30[3];
    *(uint *)&param_1->field_0x27bc = 0;
    fStack_1c = (float)(((int)fStack_14 >> 1) + iVar1);
    fStack_18 = *(float *)(*(int *)(iVar2 + 0x1d5ba04) + 0x20b88);
    if (fStack_18 < fStack_1c) {
      *(uint *)&param_1[1].field_0x30c = 0;
    }
    else {
      fVar7 = (((float10)fStack_18 - (float10)fStack_1c) / (float10)fStack_18) *
              (float10)_DAT_005d1366;
      round();
      *(int *)&param_1[1].field_0x30c = (int)ROUND(fVar7);
    }
    if (*(int *)&param_1[1].field_0x4 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)param_1);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
      puVar4 = auStack_4c;
      puVar5 = auStack_64;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      iVar3 = core_box_cpp_FUN_0041daf0(auStack_64);
      this_ptr = DAT_005f2afc;
      if (iVar3 != 0) {
        iVar3 = *(int *)&param_1[1].field_0x30c;
        *(uint *)&param_1->field_0x27bc = 1;
        engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr,iVar3);
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
        engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,1);
        core_skeleton_cpp_FUN_0054e3a0
                  ((CDeformableModelInstance *)&param_1->field_0x158,-1,0x2e7,1,0);
        engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
        if (_DAT_01d8e40c != 0) {
          core_motion_cpp_FUN_004fcdc0
                    ((CMotionController *)&param_1->field_0x158,(CDemonActor *)param_1);
        }
        if (0.0 < *(float *)&param_1->field_0x3254) {
          core_charactr_cpp_FUN_0042f310(param_1);
        }
        core_charactr_cpp_FUN_0042f6f0(param_1);
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)param_1);
      return *(uint *)&param_1->field_0x27bc;
    }
  }
  return 0;
}

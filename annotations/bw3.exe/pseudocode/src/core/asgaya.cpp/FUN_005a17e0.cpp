// Name: core_asgaya.cpp_FUN_005a17e0
// Address: 005a17e0
// Address Range: [[005a17e0, 005a196d]]
// Convention: unknown
// Signature: undefined4 core_asgaya_cpp_FUN_005a17e0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_asgaya_cpp_FUN_005a17e0(CDemonActor *param_1)

{
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr;
  CDemonActor *pCVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  uint auStack_40 [6];
  uint auStack_28 [6];
  
  bVar7 = 0;
  if (*(int *)&param_1[0x26a].field_0x138 != 0) {
    return 0;
  }
  if (0.0 < *(float *)(param_1 + 0x26b)) {
    if (*(int *)&param_1[0x26a].field_0x154 == 0) {
      fVar8 = ((float10)*(float *)(param_1 + 0x26b) / (float10)*(float *)&param_1[0x182].field_0x14)
              * (float10)_DAT_005da636;
    }
    else {
      fVar8 = ((float10)1 -
              (float10)*(float *)(param_1 + 0x26b) / (float10)*(float *)&param_1[0x182].field_0x14)
              * (float10)_DAT_005da63e;
    }
    round();
    *(int *)&param_1[0x26b].field_0x4 = (int)ROUND(fVar8);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x23)) {
      fVar1 = (float)_DAT_005da646;
      fVar2 = (float)_DAT_005da64e;
      pCVar3 = param_1;
      do {
        iVar4 = iVar4 + 1;
        *(float *)(*(int *)&pCVar3[0x24].field_0x3c + 0x37b18) =
             ((float)*(int *)&param_1[0x26b].field_0x4 + fVar2) * fVar1;
        pCVar3 = (CDemonActor *)&pCVar3->field_0x4;
      } while (iVar4 < *(int *)(param_1 + 0x23));
    }
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(param_1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
  puVar5 = auStack_40;
  puVar6 = auStack_28;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  iVar4 = core_box_cpp_FUN_0041daf0(auStack_28);
  this_ptr = DAT_005f2afc;
  if (iVar4 != 0) {
    iVar4 = *(int *)&param_1[0x26b].field_0x4;
    *(uint *)&param_1[0x1d].field_0xc4 = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr,iVar4);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,1);
    core_skeleton_cpp_FUN_0054e3a0((CDeformableModelInstance *)(param_1 + 1),-1,0x2e7,1,0);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
    if (_DAT_01d8e40c != 0) {
      core_motion_cpp_FUN_004fcdc0((CMotionController *)(param_1 + 1),param_1);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
  return 1;
}

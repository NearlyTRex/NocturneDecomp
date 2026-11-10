// Name: core_asgaya.cpp_CAsgaya_renderTransparent_FUN_005a17e0
// Address: 005a17e0
// Address Range: [[005a17e0, 005a196d]]
// Convention: __cdecl
// Signature: int __cdecl core_asgaya_cpp_CAsgaya_renderTransparent_FUN_005a17e0(CAsgaya *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_asgaya_cpp_CAsgaya_renderTransparent_FUN_005a17e0(CAsgaya *this_ptr)

{
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  CAsgaya *pCVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  uint auStack_40 [6];
  uint auStack_28 [6];
  
  bVar7 = 0;
  if (*(int *)&this_ptr->field_0x33fa8 != 0) {
    return 0;
  }
  if (0.0 < *(float *)&this_ptr->field_0x33fc8) {
    if (*(int *)&this_ptr->field_0x33fc4 == 0) {
      fVar8 = ((float10)*(float *)&this_ptr->field_0x33fc8 /
              (float10)*(float *)&this_ptr->field_0x206c4) * (float10)_DAT_005da636;
    }
    else {
      fVar8 = ((float10)1 -
              (float10)*(float *)&this_ptr->field_0x33fc8 /
              (float10)*(float *)&this_ptr->field_0x206c4) * (float10)_DAT_005da63e;
    }
    round();
    *(int *)&this_ptr->field_0x33fcc = (int)ROUND(fVar8);
    iVar4 = 0;
    if (0 < *(int *)&this_ptr->field_0x2f08) {
      fVar1 = (float)_DAT_005da646;
      fVar2 = (float)_DAT_005da64e;
      pCVar3 = this_ptr;
      do {
        iVar4 = iVar4 + 1;
        *(float *)(*(int *)&pCVar3->field_0x309c + 0x37b18) =
             ((float)*(int *)&this_ptr->field_0x33fcc + fVar2) * fVar1;
        pCVar3 = (CAsgaya *)&pCVar3->field_0x4;
      } while (iVar4 < *(int *)&this_ptr->field_0x2f08);
    }
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr,0);
  puVar5 = auStack_40;
  puVar6 = auStack_28;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  iVar4 = core_box_cpp_FUN_0041daf0(auStack_28);
  this_ptr_00 = DAT_005f2afc;
  if (iVar4 != 0) {
    *(uint *)&this_ptr->field_0x27bc = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
              (this_ptr_00,*(int *)&this_ptr->field_0x33fcc);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,1);
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,-1,0x2e7,1,0);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
    if (_DAT_01d8e40c != 0) {
      core_motion_cpp_FUN_004fcdc0
                ((CMotionController *)&this_ptr->field_0x158,(CDemonActor *)this_ptr);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
  return 1;
}

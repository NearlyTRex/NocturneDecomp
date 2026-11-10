// Name: core_hecaitmx.cpp_CHecaitomix_renderTransparent_FUN_00598480
// Address: 00598480
// Address Range: [[00598480, 00598588]]
// Convention: __cdecl
// Signature: int __cdecl core_hecaitmx_cpp_CHecaitomix_renderTransparent_FUN_00598480(CHecaitomix *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hecaitmx_cpp_CHecaitomix_renderTransparent_FUN_00598480(CHecaitomix *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar4 = 0;
  if (*(int *)&this_ptr->field_0xcdd0 != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr,0);
  puVar2 = auStack_20;
  puVar3 = auStack_38;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041daf0(auStack_38);
  this_ptr_00 = DAT_005f2afc;
  if (iVar1 != 0) {
    *(uint *)&this_ptr->field_0x27bc = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
              (this_ptr_00,*(int *)&this_ptr->field_0xd074);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,1);
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,-1,0x2e7,1,0);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
    if (_DAT_01d8e40c != 0) {
      core_motion_cpp_FUN_004fcdc0
                ((CMotionController *)&this_ptr->field_0x158,(CDemonActor *)this_ptr);
    }
    if (0.0 < *(float *)&this_ptr->field_0x3254) {
      core_charactr_cpp_FUN_0042f310((CCharacter *)this_ptr);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
  return *(int *)&this_ptr->field_0x27bc;
}

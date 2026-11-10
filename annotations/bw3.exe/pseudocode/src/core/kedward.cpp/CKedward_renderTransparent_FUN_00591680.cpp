// Name: core_kedward.cpp_CKedward_renderTransparent_FUN_00591680
// Address: 00591680
// Address Range: [[00591680, 005918d9]]
// Convention: __cdecl
// Signature: int __cdecl core_kedward_cpp_CKedward_renderTransparent_FUN_00591680(CKedward *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_kedward_cpp_CKedward_renderTransparent_FUN_00591680(CKedward *this_ptr)

{
  int iVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  int unaff_ESI;
  float10 fVar3;
  ulonglong uVar4;
  
  fVar2 = (float)*(int *)&this_ptr->field_0xd070 * (float)_DAT_005d8ebc * (float)_DAT_005d8ec4;
  if (*(int *)&this_ptr->field_0xd068 == 0) {
    fVar3 = ((float10)fVar2 * (float10)*(float *)&this_ptr->field_0xd064) /
            (float10)*(float *)&this_ptr->field_0xd06c;
    uVar4 = round();
    *(int *)&this_ptr->field_0xd060 = (int)uVar4 - (int)ROUND(fVar3);
    if (*(int *)&this_ptr->field_0xd094 == 0) {
      if (*(float *)&this_ptr->field_0xd064 == *(float *)&this_ptr->field_0xd06c) {
        *(int *)&this_ptr->field_0xd08c = (int)((ulonglong)uVar4 >> 0x20);
      }
      else {
        *(uint *)&this_ptr->field_0xd08c = 0xffffffff;
      }
    }
  }
  else {
    fVar3 = ((float10)fVar2 * (float10)*(float *)&this_ptr->field_0xd064) /
            (float10)*(float *)&this_ptr->field_0xd06c +
            (float10)(((float)_DAT_005d8eb4 - (float)*(int *)&this_ptr->field_0xd070) *
                      (float)_DAT_005d8ebc * (float)_DAT_005d8ec4);
    iVar1 = *(int *)&this_ptr->field_0xd094;
    round();
    *(int *)&this_ptr->field_0xd060 = (int)ROUND(fVar3);
    if (iVar1 == 0) {
      if (*(float *)&this_ptr->field_0xd064 == *(float *)&this_ptr->field_0xd06c) {
        *(uint *)&this_ptr->field_0xd08c = 1;
      }
      else {
        *(uint *)&this_ptr->field_0xd08c = 0xffffffff;
      }
    }
  }
  if ((*(int *)&this_ptr->field_0xd060 < 1000) && (*(int *)&this_ptr->field_0xd094 != 0)) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  this_ptr_00 = DAT_005f2afc;
  *(uint *)&this_ptr->field_0x27bc = 1;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
            (this_ptr_00,*(int *)&this_ptr->field_0xd060);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
            (DAT_005f2afc,(uint)(*(int *)&this_ptr->field_0xcdc4 != 0));
  if (*(int *)&this_ptr->field_0xd094 != 0) {
    unaff_ESI = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(DAT_005f2afc,0);
  }
  engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,1);
  core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
            ((CDeformableModelInstance *)&this_ptr->field_0x158,-1,0x2e7,1,0);
  engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  if (0.0 < *(float *)&this_ptr->field_0x3254) {
    core_charactr_cpp_FUN_0042f310((CCharacter *)this_ptr);
  }
  if (_DAT_01d8e40c != 0) {
    core_motion_cpp_FUN_004fcdc0
              ((CMotionController *)&this_ptr->field_0x158,(CDemonActor *)this_ptr);
  }
  if (*(int *)&this_ptr->field_0xd094 != 0) {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(DAT_005f2afc,unaff_ESI);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
  return *(int *)&this_ptr->field_0x27bc;
}

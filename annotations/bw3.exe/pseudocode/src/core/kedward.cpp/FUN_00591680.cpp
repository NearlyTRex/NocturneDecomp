// Name: core_kedward.cpp_FUN_00591680
// Address: 00591680
// Address Range: [[00591680, 005918d9]]
// Convention: unknown
// Signature: undefined4 core_kedward_cpp_FUN_00591680(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_kedward_cpp_FUN_00591680(CCharacter *param_1)

{
  int iVar1;
  float fVar2;
  CDemonRenderer *this_ptr;
  int unaff_ESI;
  float10 fVar3;
  ulonglong uVar4;
  
  fVar2 = (float)*(int *)&param_1[1].field_0x2a4 * (float)_DAT_005d8ebc * (float)_DAT_005d8ec4;
  if (*(int *)&param_1[1].field_0x29c == 0) {
    fVar3 = ((float10)fVar2 * (float10)*(float *)&param_1[1].field_0x298) /
            (float10)*(float *)&param_1[1].field_0x2a0;
    uVar4 = round();
    *(int *)&param_1[1].field_0x294 = (int)uVar4 - (int)ROUND(fVar3);
    if (*(int *)&param_1[1].field_0x2c8 == 0) {
      if (*(float *)&param_1[1].field_0x298 == *(float *)&param_1[1].field_0x2a0) {
        *(int *)&param_1[1].field_0x2c0 = (int)((ulonglong)uVar4 >> 0x20);
      }
      else {
        *(uint *)&param_1[1].field_0x2c0 = 0xffffffff;
      }
    }
  }
  else {
    fVar3 = ((float10)fVar2 * (float10)*(float *)&param_1[1].field_0x298) /
            (float10)*(float *)&param_1[1].field_0x2a0 +
            (float10)(((float)_DAT_005d8eb4 - (float)*(int *)&param_1[1].field_0x2a4) *
                      (float)_DAT_005d8ebc * (float)_DAT_005d8ec4);
    iVar1 = *(int *)&param_1[1].field_0x2c8;
    round();
    *(int *)&param_1[1].field_0x294 = (int)ROUND(fVar3);
    if (iVar1 == 0) {
      if (*(float *)&param_1[1].field_0x298 == *(float *)&param_1[1].field_0x2a0) {
        *(uint *)&param_1[1].field_0x2c0 = 1;
      }
      else {
        *(uint *)&param_1[1].field_0x2c0 = 0xffffffff;
      }
    }
  }
  if ((*(int *)&param_1[1].field_0x294 < 1000) && (*(int *)&param_1[1].field_0x2c8 != 0)) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)param_1);
  this_ptr = DAT_005f2afc;
  iVar1 = *(int *)&param_1[1].field_0x294;
  *(uint *)&param_1->field_0x27bc = 1;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr,iVar1);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
            (DAT_005f2afc,(uint)(*(int *)&param_1->field_0xcdc4 != 0));
  if (*(int *)&param_1[1].field_0x2c8 != 0) {
    unaff_ESI = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(DAT_005f2afc,0);
  }
  engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,1);
  core_skeleton_cpp_FUN_0054e3a0((CDeformableModelInstance *)&param_1->field_0x158,-1,0x2e7,1,0);
  engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  if (0.0 < *(float *)&param_1->field_0x3254) {
    core_charactr_cpp_FUN_0042f310(param_1);
  }
  if (_DAT_01d8e40c != 0) {
    core_motion_cpp_FUN_004fcdc0((CMotionController *)&param_1->field_0x158,(CDemonActor *)param_1);
  }
  if (*(int *)&param_1[1].field_0x2c8 != 0) {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(DAT_005f2afc,unaff_ESI);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)param_1);
  return *(uint *)&param_1->field_0x27bc;
}

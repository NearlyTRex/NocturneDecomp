// Name: core_mattnntt.cpp_FUN_00593710
// Address: 00593710
// Address Range: [[00593710, 005939a6]]
// Convention: unknown
// Signature: undefined4 core_mattnntt_cpp_FUN_00593710(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_mattnntt_cpp_FUN_00593710(CCharacter *param_1)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  byte *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  ulonglong uVar8;
  uint auStack_54 [6];
  uint auStack_3c [8];
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  
  bVar5 = 0;
  fStack_18 = (float)*(int *)&param_1[1].field_0x2a4 * (float)_DAT_005d91f3 * (float)_DAT_005d91fb;
  fStack_1c = ((float)_DAT_005d91eb - (float)*(int *)&param_1[1].field_0x2a4) * (float)_DAT_005d91f3
              * (float)_DAT_005d91fb;
  if (*(int *)&param_1[1].field_0x29c == 0) {
    fVar6 = ((float10)fStack_18 * (float10)*(float *)&param_1[1].field_0x298) /
            (float10)*(float *)&param_1[1].field_0x2a0;
    uVar8 = round();
    iStack_14 = (int)ROUND(fVar6);
    *(int *)&param_1[1].field_0x294 = (int)uVar8 - iStack_14;
    if (*(float *)&param_1[1].field_0x298 == *(float *)&param_1[1].field_0x2a0) {
      *(int *)&param_1[1].field_0x2d4 = (int)((ulonglong)uVar8 >> 0x20);
      goto LAB_005937aa;
    }
  }
  else {
    fVar7 = ((float10)fStack_18 * (float10)*(float *)&param_1[1].field_0x298) /
            (float10)*(float *)&param_1[1].field_0x2a0 + (float10)fStack_1c;
    fVar6 = (float10)*(float *)&param_1[1].field_0x298;
    round();
    *(int *)&param_1[1].field_0x294 = (int)ROUND(fVar7);
    if (fVar6 == (float10)*(float *)&param_1[1].field_0x2a0) {
      *(uint *)&param_1[1].field_0x2d4 = 1;
      goto LAB_005937aa;
    }
  }
  *(uint *)&param_1[1].field_0x2d4 = 0xffffffff;
LAB_005937aa:
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)&param_1->field_0x2628,g_CWeaponClassInfo.name_hash);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x154) + 0xf8))(iVar1,*(uint *)&param_1[1].field_0x294);
    if (*(int *)&param_1[1].field_0x294 == 0x10000) {
      *(uint *)(iVar1 + 0xf8) = 1;
      *(uint *)(iVar1 + 0xfc) = 0;
    }
    else {
      *(uint *)(iVar1 + 0xf8) = 0;
      *(uint *)(iVar1 + 0xfc) = 1;
    }
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)param_1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
  puVar3 = auStack_54;
  puVar4 = auStack_3c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041daf0(auStack_3c);
  this_ptr = DAT_005f2afc;
  if (iVar1 != 0) {
    iVar1 = *(int *)&param_1[1].field_0x294;
    *(uint *)&param_1->field_0x27bc = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr,iVar1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,1);
    core_skeleton_cpp_FUN_0054e3a0((CDeformableModelInstance *)&param_1->field_0x158,-1,0x2e7,1,0);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
    if (_DAT_01d8e40c != 0) {
      core_motion_cpp_FUN_004fcdc0
                ((CMotionController *)&param_1->field_0x158,(CDemonActor *)param_1);
    }
    if (0.0 < *(float *)&param_1->field_0x3254) {
      core_charactr_cpp_FUN_0042f310(param_1);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)param_1);
  if (0 < *(int *)&param_1->field_0x33a0) {
    core_charactr_cpp_FUN_0042f6f0(param_1);
  }
  if (*(int *)&param_1[1].field_0x294 == 0x10000) {
    puVar2 = &param_1[1].field_0x2ec;
    do {
      (**(code **)(*(int *)(puVar2 + 0x154) + 0x14))(puVar2);
      puVar2 = puVar2 + 0x2a4;
    } while (puVar2 != &param_1[1].field_0xd7c);
  }
  return *(uint *)&param_1->field_0x27bc;
}

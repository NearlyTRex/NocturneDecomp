// Name: core_mattnntt.cpp_CMattanntote_renderTransparent_FUN_00593710
// Address: 00593710
// Address Range: [[00593710, 005939a6]]
// Convention: __cdecl
// Signature: int __cdecl core_mattnntt_cpp_CMattanntote_renderTransparent_FUN_00593710(CMattanntote *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mattnntt_cpp_CMattanntote_renderTransparent_FUN_00593710(CMattanntote *this_ptr)

{
  CDemonRenderer *this_ptr_00;
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
  fStack_18 = (float)*(int *)&this_ptr->field_0xd070 * (float)_DAT_005d91f3 * (float)_DAT_005d91fb;
  fStack_1c = ((float)_DAT_005d91eb - (float)*(int *)&this_ptr->field_0xd070) * (float)_DAT_005d91f3
              * (float)_DAT_005d91fb;
  if (*(int *)&this_ptr->field_0xd068 == 0) {
    fVar6 = ((float10)fStack_18 * (float10)*(float *)&this_ptr->field_0xd064) /
            (float10)*(float *)&this_ptr->field_0xd06c;
    uVar8 = round();
    iStack_14 = (int)ROUND(fVar6);
    *(int *)&this_ptr->field_0xd060 = (int)uVar8 - iStack_14;
    if (*(float *)&this_ptr->field_0xd064 == *(float *)&this_ptr->field_0xd06c) {
      *(int *)&this_ptr->field_0xd0a0 = (int)((ulonglong)uVar8 >> 0x20);
      goto LAB_005937aa;
    }
  }
  else {
    fVar7 = ((float10)fStack_18 * (float10)*(float *)&this_ptr->field_0xd064) /
            (float10)*(float *)&this_ptr->field_0xd06c + (float10)fStack_1c;
    fVar6 = (float10)*(float *)&this_ptr->field_0xd064;
    round();
    *(int *)&this_ptr->field_0xd060 = (int)ROUND(fVar7);
    if (fVar6 == (float10)*(float *)&this_ptr->field_0xd06c) {
      *(uint *)&this_ptr->field_0xd0a0 = 1;
      goto LAB_005937aa;
    }
  }
  *(uint *)&this_ptr->field_0xd0a0 = 0xffffffff;
LAB_005937aa:
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)&this_ptr->field_0x2628,g_CWeaponClassInfo.name_hash);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x154) + 0xf8))(iVar1,*(uint *)&this_ptr->field_0xd060);
    if (*(int *)&this_ptr->field_0xd060 == 0x10000) {
      *(uint *)(iVar1 + 0xf8) = 1;
      *(uint *)(iVar1 + 0xfc) = 0;
    }
    else {
      *(uint *)(iVar1 + 0xf8) = 0;
      *(uint *)(iVar1 + 0xfc) = 1;
    }
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr,0);
  puVar3 = auStack_54;
  puVar4 = auStack_3c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041daf0(auStack_3c);
  this_ptr_00 = DAT_005f2afc;
  if (iVar1 != 0) {
    *(uint *)&this_ptr->field_0x27bc = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
              (this_ptr_00,*(int *)&this_ptr->field_0xd060);
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
  if (0 < *(int *)&this_ptr->field_0x33a0) {
    core_charactr_cpp_CCharacter_renderFlames_FUN_0042f6f0((CCharacter *)this_ptr);
  }
  if (*(int *)&this_ptr->field_0xd060 == 0x10000) {
    puVar2 = &this_ptr->field_0xd0b8;
    do {
      (**(code **)(*(int *)(puVar2 + 0x154) + 0x14))(puVar2);
      puVar2 = puVar2 + 0x2a4;
    } while (puVar2 != &this_ptr->field_0xdb48);
  }
  return *(int *)&this_ptr->field_0x27bc;
}

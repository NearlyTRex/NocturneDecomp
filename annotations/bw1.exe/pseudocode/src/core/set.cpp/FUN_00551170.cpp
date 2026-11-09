// Name: core_set.cpp_FUN_00551170
// Address: 00551170
// Address Range: [[00551170, 0055147a]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_00551170(CDemonSet *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_00551170(CDemonSet *param_1)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int iVar2;
  CSkeleton *this_ptr;
  CDemonSet *pCVar3;
  byte bVar4;
  float afStackY_1070 [1012];
  uint *puVar5;
  float local_88;
  uint local_7c;
  uint local_70;
  uint local_6c;
  uint local_68;
  float local_64;
  float local_60;
  uint local_58;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  float afStack_30 [2];
  byte local_28 [8];
  uint local_20;
  byte *local_1c;
  uint local_18;
  CDemonLight *local_14;
  
  bVar4 = 0;
  local_14 = &g_CDemonLightInstance;
  actor_ptr = *(CDemonActor **)&g_CScriptPtr->field_0x18;
  local_18 = 0;
  if (actor_ptr != (CDemonActor *)0x0) {
    iVar2 = core_actor_cpp_FUN_0040c550(actor_ptr,&DAT_005f0936);
    if (iVar2 != 0) {
      local_18 = 1;
    }
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                         ((CDeformableModelInstance *)(actor_ptr + 1));
    iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Head",0);
    local_68 = 0x3f400000;
    local_1c = &actor_ptr[0xb].field_0x110 + iVar2 * 0x30;
    local_70 = 0;
    local_6c = 0x3ead0e56;
    core_xform_cpp_FUN_005b5080(&stack0xffffff90,local_1c);
    puVar5 = &stack0xffffff84;
    local_7c = local_58;
    *(uint *)((int)&stack0xffffff88 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffac + (uint)bVar4 * -8);
    *(float *)(&stack0xffffff8c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -8];
    core_actor_cpp_FUN_00408b40(actor_ptr,puVar5);
    local_4c = local_88;
    (&stack0xffffffb8)[(uint)bVar4 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffff7c + (uint)bVar4 * -8);
    *(uint *)(local_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + -0x1c) =
         *(uint *)(&stack0xffffff80 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    core_xform_cpp_FUN_005b5930(local_1c);
    local_64 = local_34;
    (&stack0xffffffa0)[(uint)bVar4 * 0xfffffffe] = afStack_30[(uint)bVar4 * -2];
    *(float *)(&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    local_28._0_4_ = local_64 + (float)_DAT_005f0946;
    local_20 = 0;
    local_28._4_4_ = local_60 + *(float *)&actor_ptr->field_0x34;
    *(uint *)&local_14->field_0x1cbc = 0;
    if ((float *)&local_14->field_0x4 != &stack0xffffffb4) {
      *(float *)&local_14->field_0x4 = local_4c;
      *(float *)&local_14->field_0x8 = local_48;
      *(float *)&local_14->field_0xc = local_44;
    }
    core_dirmat_cpp_FUN_0045f3e0((CMatrix3x3f *)&local_14->field_0x10,(CVector3f *)local_28);
    *(uint *)&local_14->field_0x140 = 0x42280000;
    *(uint *)&local_14->field_0x38 = 0x41d00000;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0(local_14,1.0);
    if (&stack0x00000000 != &g_CDemonCameraInstance.field_0x50) {
      g_CDemonCameraInstance._4_4_ = local_4c;
      g_CDemonCameraInstance._8_4_ = local_48;
      g_CDemonCameraInstance._12_4_ = local_44;
    }
    core_dlight_cpp_CDemonLight_beginScene_FUN_00462820(local_14,0);
    DAT_00622c28 = 0;
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0
              (param_1,*(float *)&local_14->field_0x140,0);
    DAT_00622c28 = 1;
    core_set_cpp_FUN_005545a0(param_1,0xffffffff);
    core_set_cpp_FUN_0054eef0(param_1,1);
    core_set_cpp_FUN_005545a0(param_1,1);
    iVar2 = 0;
    pCVar3 = param_1;
    if (0 < *(int *)&param_1->field_0x15f6fc) {
      do {
        (**(code **)(*(int *)(*(int *)&pCVar3->field_0x15f700 + 0x154) + 0x10))
                  (*(int *)&pCVar3->field_0x15f700);
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
        iVar2 = iVar2 + 1;
        pCVar3 = (CDemonSet *)&pCVar3->field_0x4;
      } while (iVar2 < *(int *)&param_1->field_0x15f6fc);
    }
    core_gore_cpp_FUN_004e5c50(g_CGorePtr);
    core_fire_cpp_FUN_004b5100(0x01C57074);
    core_dlight_cpp_CDemonLight_endScene_FUN_00462ad0(local_14,1);
    local_40 = (int)ROUND(local_4c * _DAT_00605000);
    local_3c = (int)ROUND(local_48 * _DAT_00605000);
    local_38 = (int)ROUND(local_44 * _DAT_00605000);
    core_set_cpp_CDemonSet_setLightingParameters_FUN_00551c30
              (param_1,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,(CVector3f *)0x0,
               (CMatrix3x3f *)0x0);
    if (DAT_0061b49c < 0xf1) {
      iVar2 = -*(int *)&local_14->field_0x1cc0;
      iVar1 = -*(int *)&local_14->field_0x1cc4;
    }
    else {
      iVar2 = *(int *)&local_14->field_0x1cc0 * -2;
      iVar1 = *(int *)&local_14->field_0x1cc4 * -2;
    }
    core_dlight_cpp_FUN_00466220
              (local_14,(DAT_0061b498 + iVar2) / 2,(DAT_0061b49c + iVar1) / 2,0,local_18);
    return;
  }
  return;
}

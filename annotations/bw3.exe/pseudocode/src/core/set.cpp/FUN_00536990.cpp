// Name: core_set.cpp_FUN_00536990
// Address: 00536990
// Address Range: [[00536990, 00536c86]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_00536990(CDemonSet *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_00536990(CDemonSet *param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  int iVar2;
  CDemonSet *pCVar3;
  byte bVar4;
  float afStackY_106c [1012];
  uint *puVar5;
  float local_84;
  float local_80;
  float local_7c;
  uint local_78;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  float afStack_50 [2];
  byte local_48 [4];
  uint local_44;
  uint local_40;
  float local_3c;
  float local_38 [5];
  float local_24;
  int local_18;
  CDemonLight *local_14;
  
  bVar4 = 0;
  iVar2 = *(int *)&g_CScriptPtr->field_0x18;
  local_14 = &g_CDemonLightInstance;
  if (iVar2 != 0) {
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                         ((CDeformableModelInstance *)(iVar2 + 0x158));
    iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"?Bip01 Head" + 1,0);
    local_5c = 0x3ead0e56;
    local_18 = iVar2 + 0xfd8 + iVar1 * 0x30;
    local_58 = 0x3f400000;
    local_60 = 0;
    core_xform_cpp_FUN_00583260(&local_60,local_18);
    puVar5 = &stack0xffffff88;
    local_78 = local_54;
    *(float *)((int)&stack0xffffff8c + (uint)bVar4 * 0xfffffffe * 4) = afStack_50[(uint)bVar4 * -2];
    afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -8] =
         afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_actor_cpp_FUN_00408b80(iVar2,puVar5);
    iVar1 = local_18;
    local_84 = local_24;
    *(float *)((int)&stack0xffffff80 + (uint)bVar4 * -8) = local_38[(uint)bVar4 * -2 + 6];
    *(float *)((int)&stack0xffffff84 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         local_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    core_xform_cpp_FUN_00583b10(iVar1);
    local_44 = 0.0;
    local_40 = 0;
    local_3c = local_38[2];
    local_38[(uint)bVar4 * -2] = local_38[(uint)bVar4 * -2 + 3];
    local_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    g_CDemonLightInstance._7356_4_ = 0;
    local_48 = (byte  [4])(local_3c + (float)_DAT_005d05df);
    local_44 = local_38[0] + *(float *)(iVar2 + 0x34);
    if (&stack0x00000000 != &g_CDemonLightInstance.field_0x88) {
      g_CDemonLightInstance._4_4_ = local_84;
      g_CDemonLightInstance._8_4_ = local_80;
      g_CDemonLightInstance._12_4_ = local_7c;
    }
    core_dirmat_cpp_FUN_0045b550((CMatrix3x3f *)&local_14->field_0x10,(CVector3f *)local_48);
    *(uint *)&local_14->field_0x140 = 0x42280000;
    *(uint *)&local_14->field_0x38 = 0x41d00000;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0(local_14,1.0);
    if (&stack0x00000000 != &g_CDemonCameraInstance.field_0x88) {
      g_CDemonCameraInstance._4_4_ = local_84;
      g_CDemonCameraInstance._8_4_ = local_80;
      g_CDemonCameraInstance._12_4_ = local_7c;
    }
    core_dlight_cpp_CDemonLight_beginScene_FUN_0045c530(local_14,0);
    DAT_00603b38 = 0;
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80
              (param_1,*(float *)&local_14->field_0x140,0);
    DAT_00603b38 = 1;
    core_set_cpp_FUN_00539f30(param_1,0xffffffff);
    core_set_cpp_FUN_005346b0(param_1,1);
    core_set_cpp_FUN_00539f30(param_1,1);
    iVar2 = 0;
    pCVar3 = param_1;
    if (0 < *(int *)&param_1->field_0x15f6fc) {
      do {
        (**(code **)(*(int *)(*(int *)&pCVar3->field_0x15f700 + 0x154) + 0x10))
                  (*(int *)&pCVar3->field_0x15f700);
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
        iVar2 = iVar2 + 1;
        pCVar3 = (CDemonSet *)&pCVar3->field_0x4;
      } while (iVar2 < *(int *)&param_1->field_0x15f6fc);
    }
    core_gore_cpp_FUN_004ce5b0(g_CGorePtr);
    core_fire_cpp_FUN_004a1ad0(0x01C73654);
    core_dlight_cpp_CDemonLight_endScene_FUN_0045c7e0(local_14,1);
    local_6c = (int)ROUND(local_84 * _DAT_005e3bc0);
    local_68 = (int)ROUND(local_80 * _DAT_005e3bc0);
    local_64 = (int)ROUND(local_7c * _DAT_005e3bc0);
    core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
              (param_1,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,(CVector3f *)0x0,
               (CMatrix3x3f *)0x0);
    if (DAT_005fba1c < 0xf1) {
      iVar2 = -*(int *)&local_14->field_0x1cc0;
      iVar1 = -*(int *)&local_14->field_0x1cc4;
    }
    else {
      iVar2 = *(int *)&local_14->field_0x1cc0 * -2;
      iVar1 = *(int *)&local_14->field_0x1cc4 * -2;
    }
    core_dlight_cpp_FUN_0045ff30(local_14,(DAT_005fba18 + iVar2) / 2,(DAT_005fba1c + iVar1) / 2,0);
    return;
  }
  return;
}

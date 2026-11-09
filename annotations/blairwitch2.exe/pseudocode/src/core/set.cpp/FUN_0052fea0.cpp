// Name: core_set.cpp_FUN_0052fea0
// Address: 0052fea0
// Address Range: [[0052fea0, 005301ce]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0052fea0(CDemonSet *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_0052fea0(CDemonSet *param_1)

{
  int iVar1;
  int iVar2;
  CSkeleton *this_ptr;
  int iVar3;
  int iVar4;
  CDemonSet *pCVar5;
  byte bVar6;
  float afStackY_106c [1012];
  uint *puVar7;
  uint local_84;
  float local_78;
  float local_74;
  uint local_6c;
  byte local_60 [4];
  uint local_5c;
  uint local_58;
  float local_54;
  float local_50 [5];
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float afStack_2c [5];
  int local_18;
  CDemonLight *local_14;
  
  bVar6 = 0;
  iVar4 = *(int *)&g_CScriptPtr->field_0x18;
  local_14 = &g_CDemonLightInstance;
  if (iVar4 != 0) {
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                         ((CDeformableModelInstance *)(iVar4 + 0x2b4));
    iVar3 = core_skeleton_cpp_FUN_00540e80(this_ptr,"?Bip01 Head" + 1,0);
    afStack_2c[3] = 0.338;
    local_18 = iVar4 + 0x1134 + iVar3 * 0x30;
    afStack_2c[4] = 0.75;
    afStack_2c[2] = 0.0;
    core_xform_cpp_FUN_00591530(afStack_2c + 2,local_18);
    puVar7 = &stack0xffffff7c;
    local_84 = local_6c;
    *(float *)((int)&stack0xffffff80 + (uint)bVar6 * 0xfffffffe * 4) =
         local_50[(uint)bVar6 * -2 + -6];
    *(float *)(&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         local_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -5];
    core_actor_cpp_FUN_00408d70(iVar4,puVar7);
    iVar3 = local_18;
    local_54 = local_30;
    local_50[(uint)bVar6 * -2] = afStack_2c[(uint)bVar6 * -2];
    local_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_2c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    core_xform_cpp_FUN_00591de0(iVar3);
    local_5c = 0.0;
    local_58 = 0;
    local_78 = local_50[2];
    *(float *)((int)&stack0xffffff8c + (uint)bVar6 * -8) = local_50[(uint)bVar6 * -2 + 3];
    local_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -8] =
         local_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    g_CDemonLightInstance._7356_4_ = 0;
    local_60 = (byte  [4])(local_78 + (float)_DAT_005e5922);
    local_5c = local_74 + *(float *)(iVar4 + 0x34);
    if (&stack0x00000000 != &g_CDemonLightInstance.field_0x58) {
      g_CDemonLightInstance._4_4_ = local_54;
      g_CDemonLightInstance._8_4_ = local_50[0];
      g_CDemonLightInstance._12_4_ = local_50[1];
    }
    core_dirmat_cpp_FUN_00449280((CMatrix3x3f *)&local_14->field_0x10,(CVector3f *)local_60);
    *(uint *)&local_14->field_0x140 = 0x42280000;
    *(uint *)&local_14->field_0x38 = 0x41d00000;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570(local_14,1.0);
    if (&stack0x00000000 != &g_CDemonCameraInstance.field_0x58) {
      g_CDemonCameraInstance._4_4_ = local_54;
      g_CDemonCameraInstance._8_4_ = local_50[0];
      g_CDemonCameraInstance._12_4_ = local_50[1];
    }
    core_dlight_cpp_CDemonLight_beginScene_FUN_0044a020(local_14,0);
    DAT_0061b5b8 = 0;
    core_set_cpp_FUN_0052d0e0(param_1,*(float *)&local_14->field_0x140,0);
    DAT_0061b5b8 = 1;
    core_set_cpp_FUN_005332f0(param_1,0xffffffff);
    core_set_cpp_FUN_0052dc10(param_1,1);
    core_set_cpp_FUN_005332f0(param_1,1);
    iVar4 = 0;
    pCVar5 = param_1;
    if (0 < *(int *)&param_1->field_0x15f6f8) {
      do {
        (**(code **)(*(int *)(*(int *)&pCVar5->field_0x15f6fc + 0x2b0) + 0x18))
                  (*(int *)&pCVar5->field_0x15f6fc);
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
        iVar4 = iVar4 + 1;
        pCVar5 = (CDemonSet *)&pCVar5->field_0x4;
      } while (iVar4 < *(int *)&param_1->field_0x15f6f8);
    }
    core_gore_cpp_FUN_004c9440(g_CGorePtr);
    core_fire_cpp_FUN_0049c780(0x01C3DEB4);
    core_dlight_cpp_CDemonLight_endScene_FUN_0044a2d0(local_14,1);
    local_3c = (int)ROUND(local_54 * _DAT_005fb210);
    local_38 = (int)ROUND(local_50[0] * _DAT_005fb210);
    local_34 = (int)ROUND(local_50[1] * _DAT_005fb210);
    core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
              (param_1,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,(CVector3f *)0x0,
               (CMatrix3x3f *)0x0);
    iVar4 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0
                      (param_1,(CVector3i *)&local_3c,(CVector3i *)0x0);
    iVar3 = core_fire_cpp_FUN_0049eb50(0x01C3DEB4);
    if (DAT_006141bc < 0xf1) {
      iVar1 = -*(int *)&local_14->field_0x1cc0;
      iVar2 = -*(int *)&local_14->field_0x1cc4;
    }
    else {
      iVar1 = *(int *)&local_14->field_0x1cc0 * -2;
      iVar2 = *(int *)&local_14->field_0x1cc4 * -2;
    }
    core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_0044d600
              (local_14,(DAT_006141b8 + iVar1) / 2,(DAT_006141bc + iVar2) / 2,
               ((int)((iVar4 + (iVar4 >> 0x1f) * -0x80) - (uint)((iVar4 >> 0x1f) << 6 < 0)) >> 7) +
               iVar3 * 0x80 + *(int *)(0x02661F80 + 0x24) * 0x8000);
    return;
  }
  return;
}

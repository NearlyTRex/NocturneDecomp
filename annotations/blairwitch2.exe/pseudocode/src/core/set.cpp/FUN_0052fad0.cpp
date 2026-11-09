// Name: core_set.cpp_FUN_0052fad0
// Address: 0052fad0
// Address Range: [[0052fad0, 0052fe9a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_0052fad0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_0052fad0(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  CDemonLight *pCVar4;
  CSkeleton *this_ptr_00;
  int iVar5;
  CDemonSet *pCVar6;
  int iVar7;
  byte bVar8;
  float afStackY_1060 [1009];
  uint *puVar9;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_6c;
  float local_60;
  float local_5c;
  float local_54;
  float local_48;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  uint local_28;
  float local_24;
  float local_20 [2];
  int local_18;
  CDemonLight *local_14;
  
  bVar8 = 0;
  iVar7 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_14 = &g_CDemonLightInstance;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)(iVar7 + 0x2b4));
  iVar5 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"@Bip01 Head" + 1,0);
  local_80 = 0x3ead0e56;
  local_18 = iVar7 + 0x1134 + iVar5 * 0x30;
  local_7c = 0x3f400000;
  local_84 = 0;
  core_xform_cpp_FUN_00591530(&stack0xffffff7c,local_18);
  puVar9 = &stack0xffffff88;
  local_78 = local_6c;
  *(uint *)((int)&stack0xffffff8c + (uint)bVar8 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff98 + (uint)bVar8 * -8);
  *(uint *)(&stack0xffffff90 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffff9c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  core_actor_cpp_FUN_00408d70(iVar7,puVar9);
  iVar5 = local_18;
  local_24 = local_54;
  local_20[(uint)bVar8 * -2] = *(float *)(&stack0xffffffb0 + (uint)bVar8 * -8);
  local_20[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       *(float *)(&stack0xffffffb4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  core_xform_cpp_FUN_00591de0(iVar5);
  local_2c = 0.0;
  local_28 = 0;
  local_60 = local_48;
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffffbc + (uint)bVar8 * -8);
  *(float *)(&stack0xffffffa8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       local_20[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -8];
  g_CDemonLightInstance._7356_4_ = 0;
  local_30 = local_60 + (float)_DAT_005e590a;
  local_2c = local_5c + *(float *)(iVar7 + 0x34);
  if (&stack0x00000000 != &g_CDemonLightInstance.field_0x28) {
    g_CDemonLightInstance._4_4_ = local_24;
    g_CDemonLightInstance._8_4_ = local_20[0];
    g_CDemonLightInstance._12_4_ = local_20[1];
  }
  core_dirmat_cpp_FUN_00449280((CMatrix3x3f *)&local_14->field_0x10,(CVector3f *)&local_30);
  *(uint *)&local_14->field_0x140 = 0x42000000;
  *(uint *)&local_14->field_0x38 = 0x41800000;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570(local_14,1.0);
  uVar3 = _DAT_01c37788;
  if (&stack0x00000000 != &g_CDemonCameraInstance.field_0x28) {
    g_CDemonCameraInstance._4_4_ = local_24;
    g_CDemonCameraInstance._8_4_ = local_20[0];
    g_CDemonCameraInstance._12_4_ = local_20[1];
  }
  if (*(int *)&g_CGamePtr->field_0x234 != 0) {
    _DAT_01c37788 = 0;
    engine_drender_cpp_FUN_0046afb0(DAT_0060b280,(CVector3f *)&local_24);
    engine_matrix_c_FUN_0046b4b0(DAT_0060b280,0x42000000);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030
              (DAT_0060b280,(CVector3f *)&local_30);
    g_CDemonRaytraceInstance._0_4_ = 1;
    engine_special_cpp_clearZBufferNative_FUN_0055b254();
    core_set_cpp_FUN_0052d0e0(g_CDemonSetPtr,9999.9,0);
    _DAT_01c37788 = uVar3;
    g_CDemonRaytraceInstance._0_4_ = 0;
    return;
  }
  core_dlight_cpp_CDemonLight_beginScene_FUN_0044a020(local_14,0);
  pCVar4 = local_14;
  core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044ab60(local_14);
  iVar7 = 0;
  DAT_0061b5b8 = 0;
  core_set_cpp_FUN_0052d0e0(this_ptr,*(float *)&pCVar4->field_0x140,0);
  DAT_0061b5b8 = 1;
  core_set_cpp_FUN_005332f0(this_ptr,0xffffffff);
  core_set_cpp_FUN_0052dc10(this_ptr,1);
  core_set_cpp_FUN_005332f0(this_ptr,1);
  pCVar6 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0x15f6f8) {
    do {
      (**(code **)(*(int *)(*(int *)&pCVar6->field_0x15f6fc + 0x2b0) + 0x18))
                (*(int *)&pCVar6->field_0x15f6fc);
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
      iVar7 = iVar7 + 1;
      pCVar6 = (CDemonSet *)&pCVar6->field_0x4;
    } while (iVar7 < *(int *)&this_ptr->field_0x15f6f8);
  }
  core_gore_cpp_FUN_004c9440(g_CGorePtr);
  core_fire_cpp_FUN_0049c780(0x01C3DEB4);
  core_dlight_cpp_CDemonLight_endScene_FUN_0044a2d0(local_14,1);
  local_3c = (int)ROUND(local_24 * _DAT_005fb210);
  local_38 = (int)ROUND(local_20[0] * _DAT_005fb210);
  local_34 = (int)ROUND(local_20[1] * _DAT_005fb210);
  core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
            (this_ptr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,(CVector3f *)0x0,
             (CMatrix3x3f *)0x0);
  iVar7 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0
                    (this_ptr,(CVector3i *)&local_3c,(CVector3i *)0x0);
  iVar5 = core_fire_cpp_FUN_0049eb50(0x01C3DEB4);
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
             ((int)((iVar7 + (iVar7 >> 0x1f) * -0x80) - (uint)((iVar7 >> 0x1f) << 6 < 0)) >> 7) +
             iVar5 * 0x80 + *(int *)(0x02661F80 + 0x24) * 0x8000);
  return;
}

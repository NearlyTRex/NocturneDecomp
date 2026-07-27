// Name: core_mimic.cpp_CMimic_renderMirrored_FUN_004d5860
// Address: 004d5860
// Address Range: [[004d5860, 004d5ad5]]
// Convention: __cdecl
// Signature: int __cdecl core_mimic_cpp_CMimic_renderMirrored_FUN_004d5860(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mimic_cpp_CMimic_renderMirrored_FUN_004d5860(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint local_f4 [12];
  byte local_c4 [48];
  uint local_94 [12];
  byte local_64 [24];
  byte local_4c [12];
  uint local_40;
  uint local_3c;
  uint local_38;
  byte local_34 [12];
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  if (*(int *)(param_1 + 0x2404) == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_64,0);
    local_1c = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar1);
    if (local_1c != 0) {
      if (*(float *)(param_1 + 0x47578) < 0.0) {
        local_18 = *(int *)(DAT_005ae704 + 0x18);
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0
                  (DAT_005ae704,local_18 == 0);
        engine_matrix_c_matrixPush_FUN_004cdac0();
        _DAT_01c039b8 = -_DAT_01c039b8;
        _DAT_01c039dc = -_DAT_01c039dc;
        _DAT_01c039e8 = -_DAT_01c039e8;
        _DAT_01c039ec = -_DAT_01c039ec;
        _DAT_01c039f0 = -_DAT_01c039f0;
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
                  (param_1 + 0x150,0xffffffff,0xffffffff,1,0);
        core_cloth_cpp_CCloth_render_FUN_00437db0(param_1 + 0xbdec,0);
        local_14 = core_actor_cpp_castToClassHash_FUN_0040d890
                             (*(uint *)(_DAT_01cae0e8 * 4 + 0x1cae0d8),
                              g_CStrangerActorType_02dc9fac.name_hash);
        if (local_14 != 0) {
          local_28 = 0;
          local_20 = 0;
          local_3c = 0x3f38263b;
          local_40 = 0;
          local_24 = 0x40490fdb;
          local_38 = 0x3e3d70a4;
          core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                    (local_c4,&local_40,&local_28);
          core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
                    (local_c4,param_1 + 0xfd0 + _DAT_01cc9094 * 0x30);
          puVar3 = local_f4;
          puVar4 = local_94;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
            puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
          }
          core_xform_cpp_getTranslation_FUN_0055bc00(local_94,local_4c);
          core_xform_cpp_matrixToEulerAngles_FUN_0055b180(local_94,local_34);
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                    (DAT_005ae704,local_34,local_4c);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                    (local_14 + 0x1fb40,0,0xffffffff);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
        }
        core_charactr_cpp_CCharacter_renderAttachedModels_FUN_004265a0(param_1);
        if ((_DAT_01cd4318 != 0) &&
           (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
           iVar2 == 0)) {
          core_motion_cpp_CMotionController_render_FUN_004e22b0(param_1 + 0x150,param_1);
          core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
        }
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0(DAT_005ae704,local_18);
      }
      else {
        core_morph_cpp_CMorph_render_FUN_004e0820
                  (param_1 + 0x4694c,*(uint *)(param_1 + 0x47578));
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return local_1c;
  }
  return 0;
}

// Name: core_mimic.cpp_CMimic_renderMirrored_FUN_00510620
// Address: 00510620
// Address Range: [[00510620, 005108c6]]
// Convention: __cdecl
// Signature: int __cdecl core_mimic_cpp_CMimic_renderMirrored_FUN_00510620(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mimic_cpp_CMimic_renderMirrored_FUN_00510620(CMimic *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1058 [965];
  CMatrix3x4f *output_matrix;
  CDemonRenderer *this_ptr_00;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  CMatrix3x4f local_d0 [48];
  uint local_a0 [6];
  uint local_88 [6];
  CVector3f local_70;
  uint local_64;
  uint local_60 [2];
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar4 = 0;
  if (*(int *)&this_ptr->field_0x24fc == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr,0);
    puVar2 = local_88;
    puVar3 = local_a0;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    local_18 = core_box_cpp_FUN_004207b0(local_a0);
    if (local_18 != 0) {
      if (*(float *)&this_ptr->field_0x47abc < 0.0) {
        local_1c = *(int *)(DAT_00612560 + 0x18);
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_00484190
                  (DAT_00612560,(uint)(local_1c == 0));
        engine_matrix_c_matrixPush_FUN_005083b0();
        _DAT_01c51d2c = -_DAT_01c51d2c;
        _DAT_01c51d50 = -_DAT_01c51d50;
        _DAT_01c51d5c = -_DAT_01c51d5c;
        _DAT_01c51d60 = -_DAT_01c51d60;
        _DAT_01c51d64 = -_DAT_01c51d64;
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
                  ((CDeformableModelInstance *)&this_ptr->field_0x158,-1,0xffffffff,1,0);
        core_cloth_cpp_CCloth_render_FUN_00441800
                  ((CCloth *)&this_ptr->field_0xc330,(CDeformableModelInstance *)0x0);
        local_14 = core_actor_cpp_castToClassHash_FUN_0040c600
                             (*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),
                              g_CStrangerClassInfo.name_hash);
        if (local_14 != 0) {
          pCVar6 = &local_28;
          local_64 = 0;
          local_60[1] = 0;
          local_60[0] = 0x40490fdb;
          local_58._0_4_ = 0;
          local_58._4_4_ = 0x3f38263b;
          pCVar5 = &local_58;
          output_matrix = local_d0;
          local_58._8_4_ = 0x3e3d70a4;
          local_28._0_4_ = 0;
          *(uint *)((int)&local_28 + (uint)bVar4 * -8 + 4) = local_60[(uint)bVar4 * -2];
          *(uint *)((int)&local_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               local_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          core_xform_cpp_FUN_005b5760(output_matrix,pCVar5,pCVar6);
          core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
                    (local_d0,&this_ptr->field_0xfd8 + _DAT_01d22424 * 0x30);
          puVar2 = (uint *)&stack0xffffff00;
          puVar3 = (uint *)&stack0xfffffed0;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
            puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
          }
          core_xform_cpp_FUN_005b6270(&stack0xfffffed0);
          local_34._0_4_ = local_40._0_4_;
          *(uint *)((int)&local_34 + (uint)bVar4 * -8 + 4) =
               *(uint *)((int)&local_40 + (uint)bVar4 * -8 + 4);
          *(uint *)((int)&local_34 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               *(uint *)((int)&local_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
          core_xform_cpp_FUN_005b5930(&stack0xfffffed0);
          pCVar6 = &local_34;
          pCVar5 = &local_4c;
          local_4c._0_4_ = local_70._0_4_;
          *(uint *)((int)&local_4c + (uint)bVar4 * -8 + 4) =
               *(uint *)((int)&local_70 + (uint)bVar4 * -8 + 4);
          this_ptr_00 = DAT_00612560;
          *(uint *)((int)&local_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               *(uint *)((int)&local_70 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                    (this_ptr_00,pCVar5,pCVar6);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
                    ((CKeyFramedModelInstance *)(local_14 + 0x200ac),0.0,-1);
          engine_matrix_c_pop_FUN_004839a0();
        }
        core_charactr_cpp_CCharacter_renderAttachedModels_FUN_0042f3c0((CCharacter *)this_ptr);
        if ((_DAT_01d39d34 != 0) &&
           (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560),
           iVar1 == 0)) {
          core_motion_cpp_FUN_005254b0
                    ((CMotionController *)&this_ptr->field_0x158,(CDemonActor *)this_ptr);
          core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                    ((CMotionController *)&this_ptr->field_0x158);
        }
        engine_matrix_c_pop_FUN_004839a0();
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_00484190(DAT_00612560,local_1c);
      }
      else {
        core_morph_cpp_CMorph_render_FUN_005237e0
                  ((CMorph *)&this_ptr->field_0x46e90,*(float *)&this_ptr->field_0x47abc);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    return local_18;
  }
  return 0;
}

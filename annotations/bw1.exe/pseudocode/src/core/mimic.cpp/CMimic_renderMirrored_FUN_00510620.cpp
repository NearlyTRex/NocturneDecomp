// Name: core_mimic.cpp_CMimic_renderMirrored_FUN_00510620
// Address: 00510620
// Address Range: [[00510620, 005108c6]]
// Convention: __cdecl
// Signature: int __cdecl core_mimic_cpp_CMimic_renderMirrored_FUN_00510620(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mimic_cpp_CMimic_renderMirrored_FUN_00510620(CMimic *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1058 [965];
  CMatrix3x4f *output_matrix;
  CDemonRenderer *this_ptr_01;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  uint local_130 [12];
  uint local_100 [12];
  CMatrix3x4f local_d0;
  uint local_a0 [6];
  uint local_88 [6];
  float local_70;
  float afStack_6c [5];
  CVector3f local_58;
  CVector3f local_4c;
  float local_40;
  float afStack_3c [2];
  CVector3f local_34;
  CVector3f local_28;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar4 = 0;
  if ((this_ptr->base).base.render_active == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
    puVar2 = local_88;
    puVar3 = local_a0;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    local_18 = core_box_cpp_FUN_004207b0(local_a0);
    if (local_18 != 0) {
      if (this_ptr->morph_blend < 0.0) {
        local_1c = DAT_00612560->advanced_culling_enabled;
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_00484190
                  (DAT_00612560,(uint)(local_1c == 0));
        engine_matrix_c_matrixPush_FUN_005083b0();
        _DAT_01c51d2c = -_DAT_01c51d2c;
        _DAT_01c51d50 = -_DAT_01c51d50;
        _DAT_01c51d5c = -_DAT_01c51d5c;
        _DAT_01c51d60 = -_DAT_01c51d60;
        _DAT_01c51d64 = -_DAT_01c51d64;
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
                  (&(this_ptr->base).base.model,-1,0xffffffff,1,0);
        core_cloth_cpp_CCloth_render_FUN_00441800(&this_ptr->cloth,(CDeformableModelInstance *)0x0);
        local_14 = core_actor_cpp_castToClassHash_FUN_0040c600
                             (*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),
                              g_CStrangerClassInfo.name_hash);
        if (local_14 != 0) {
          pCVar6 = &local_28;
          afStack_6c[2] = 0.0;
          afStack_6c[4] = 0.0;
          afStack_6c[3] = 3.1415927;
          local_58.x = 0.0;
          local_58.y = 0.71933335;
          pCVar5 = &local_58;
          output_matrix = &local_d0;
          local_58.z = 0.185;
          local_28.x = 0.0;
          *(float *)((int)&local_28 + (uint)bVar4 * -8 + 4) = afStack_6c[(uint)bVar4 * -2 + 3];
          *(float *)((int)&local_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
          core_xform_cpp_FUN_005b5760(output_matrix,pCVar5,pCVar6);
          core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
                    (&local_d0,
                     (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01d22424)
          ;
          puVar2 = local_100;
          puVar3 = local_130;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
            puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
          }
          core_xform_cpp_FUN_005b6270(local_130);
          local_34.x = local_40;
          *(float *)((int)&local_34 + (uint)bVar4 * -8 + 4) = afStack_3c[(uint)bVar4 * -2];
          *(float *)((int)&local_34 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          core_xform_cpp_matrixToEulerAngles_FUN_005b5930(local_130);
          pCVar6 = &local_34;
          pCVar5 = &local_4c;
          local_4c.x = local_70;
          *(float *)((int)&local_4c + (uint)bVar4 * -8 + 4) = afStack_6c[(uint)bVar4 * -2];
          this_ptr_01 = DAT_00612560;
          *(float *)((int)&local_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                    (this_ptr_01,pCVar5,pCVar6);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
                    ((CKeyFramedModelInstance *)(local_14 + 0x200ac),0.0,-1);
          engine_matrix_c_pop_FUN_004839a0();
        }
        core_charactr_cpp_CCharacter_renderAttachedModels_FUN_0042f3c0((CCharacter *)this_ptr);
        if ((_DAT_01d39d34 != 0) &&
           (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560),
           iVar1 == 0)) {
          this_ptr_00 = &(this_ptr->base).base.model;
          core_motion_cpp_FUN_005254b0(&this_ptr_00->base,(CDemonActor *)this_ptr);
          core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
        }
        engine_matrix_c_pop_FUN_004839a0();
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_00484190(DAT_00612560,local_1c);
      }
      else {
        core_morph_cpp_CMorph_render_FUN_005237e0(&this_ptr->morph,this_ptr->morph_blend);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    return local_18;
  }
  return 0;
}

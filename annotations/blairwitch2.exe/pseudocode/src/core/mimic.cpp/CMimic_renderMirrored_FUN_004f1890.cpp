// Name: core_mimic.cpp_CMimic_renderMirrored_FUN_004f1890
// Address: 004f1890
// Address Range: [[004f1890, 004f1b36]]
// Convention: __cdecl
// Signature: int __cdecl core_mimic_cpp_CMimic_renderMirrored_FUN_004f1890(CMimic *this_ptr)

#include "nocturne.h"

int __cdecl core_mimic_cpp_CMimic_renderMirrored_FUN_004f1890(CMimic *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  CBoundingBox3D *pCVar4;
  byte bVar5;
  float afStackY_1058 [967];
  CDemonRenderer *this_ptr_01;
  CVector3f *pCVar6;
  float in_stack_fffffed4;
  CVector3f *pCVar7;
  CVector3f *in_stack_fffffed8;
  CMatrix3x4f local_100;
  CMatrix3x4f local_d0;
  CBoundingBox3D local_a0;
  float local_88 [6];
  float local_70;
  float afStack_6c [5];
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  int local_1c;
  int local_18;
  CDemonActor *local_14;
  
  bVar5 = 0;
  if ((this_ptr->base).base.render_active == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
    pfVar2 = local_88;
    pCVar4 = &local_a0;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      (pCVar4->min).x = *pfVar2;
      pfVar2 = pfVar2 + (uint)bVar5 * -2 + 1;
      pCVar4 = (CBoundingBox3D *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    local_18 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041a840(&local_a0,(int)in_stack_fffffed4);
    if (local_18 != 0) {
      if (this_ptr->morph_blend < 0.0) {
        local_1c = g_CDemonRenderer_PTR_0060b280->advanced_culling_enabled;
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90
                  (g_CDemonRenderer_PTR_0060b280,(uint)(local_1c == 0));
        engine_matrix_c_matrixPush_FUN_004e9710();
        g_INT_01c38b6c = -g_INT_01c38b6c;
        g_INT_01c38b90 = -g_INT_01c38b90;
        g_INT_01c38b9c = -g_INT_01c38b9c;
        g_INT_01c38ba0 = -g_INT_01c38ba0;
        g_INT_01c38ba4 = -g_INT_01c38ba4;
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
                  (&(this_ptr->base).base.model,-1,0xffffffff,1,0);
        core_cloth_cpp_CCloth_render_FUN_005b0fe0(&this_ptr->cloth,(CDeformableModelInstance *)0x0);
        local_14 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                             ((CDemonActor *)g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4],
                              g_CStrangerClassInfo.name_hash);
        if (local_14 != (CDemonActor *)0x0) {
          pCVar7 = &local_28;
          afStack_6c[2] = 0.0;
          afStack_6c[4] = 0.0;
          afStack_6c[3] = 3.1415927;
          local_58.x = 0.0;
          local_58.y = 0.71933335;
          pCVar6 = &local_58;
          pCVar3 = &local_d0;
          local_58.z = 0.185;
          local_28.x = 0.0;
          *(float *)((int)&local_28 + (uint)bVar5 * -8 + 4) = afStack_6c[(uint)bVar5 * -2 + 3];
          *(float *)((int)&local_28 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
               afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
          core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10(pCVar3,pCVar6,pCVar7);
          core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                    (&local_d0,
                     (CMatrix3x4f *)
                     (this_ptr->base).base.model.bone_transform.bone_model_matrices
                     [g_INT_ARRAY_01d097c4[0]].m,&local_100);
          pCVar3 = &local_100;
          pfVar2 = (float *)&stack0xfffffed0;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar2 = pCVar3->m[0].w;
            pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
            pfVar2 = pfVar2 + (uint)bVar5 * -2 + 1;
          }
          core_xform_cpp_getTranslation_FUN_00592720((CMatrix3x4f *)&stack0xfffffed0,&local_40);
          local_34.x = local_40.x;
          *(uint *)((int)&local_34 + (uint)bVar5 * -8 + 4) =
               *(uint *)((int)&local_40 + (uint)bVar5 * -8 + 4);
          *(uint *)((int)&local_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
               *(uint *)((int)&local_40 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
          core_xform_cpp_matrixToEulerAngles_FUN_00591de0
                    ((CMatrix3x4f *)&stack0xfffffed0,in_stack_fffffed8);
          pCVar7 = &local_34;
          pCVar6 = &local_4c;
          local_4c.x = local_70;
          *(float *)((int)&local_4c + (uint)bVar5 * -8 + 4) = afStack_6c[(uint)bVar5 * -2];
          this_ptr_01 = g_CDemonRenderer_PTR_0060b280;
          *(float *)((int)&local_4c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
               afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                    (this_ptr_01,pCVar6,pCVar7);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                    ((CKeyFramedModelInstance *)&local_14[0xdd].particle_systems[2].position.y,0.0,
                     -1);
          engine_drender_cpp_pop_FUN_0046b4a0();
        }
        core_charactr_cpp_CCharacter_renderAttachedModels_FUN_00425aa0((CCharacter *)this_ptr);
        if ((g_INT_01d1cdc8 != 0) &&
           (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960
                              (g_CDemonRenderer_PTR_0060b280), iVar1 == 0)) {
          this_ptr_00 = &(this_ptr->base).base.model;
          core_motion_cpp_CMotionController_render_FUN_005042e0
                    (&this_ptr_00->base,(CDemonActor *)this_ptr);
          core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_00->base);
        }
        engine_drender_cpp_pop_FUN_0046b4a0();
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90
                  (g_CDemonRenderer_PTR_0060b280,local_1c);
      }
      else {
        core_morph_cpp_CMorph_render_FUN_005b76a0(&this_ptr->morph,this_ptr->morph_blend);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
    return local_18;
  }
  return 0;
}

// Name: core_mimic.cpp_CMimic_FUN_005205f0
// Address: 005205f0
// Address Range: [[005205f0, 005207fe] [00520802, 0052084b]]
// Convention: __cdecl
// Signature: int __cdecl core_mimic_cpp_CMimic_FUN_005205f0(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_mimic_cpp_CMimic_FUN_005205f0(CMimic *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_f4;
  CMatrix3x4f local_c4;
  CMatrix3x4f local_94;
  CBoundingBox3D local_64;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  int local_1c;
  int local_18;
  CDemonActor *local_14;
  
  bVar4 = 0;
  if ((this_ptr->base).base.render_active == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    this_ptr_01 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                            ((CDemonActor *)this_ptr,&local_64);
    local_1c = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
    if (local_1c != 0) {
      if (*(float *)(this_ptr->unk4 + 0xc50) < 0.0) {
        local_18 = g_CDemonRendererPtr2->advanced_culling_enabled;
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
                  (g_CDemonRendererPtr2,(uint)(local_18 == 0));
        engine_matrix_c_matrixPush_FUN_0050d620();
        g_RelativeX = -g_RelativeX;
        g_LightDirectionX = -g_LightDirectionX;
        g_TransformMatrix.m[0].x = -g_TransformMatrix.m[0].x;
        g_TransformMatrix.m[0].y = -g_TransformMatrix.m[0].y;
        g_TransformMatrix.m[0].z = -g_TransformMatrix.m[0].z;
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                  (&(this_ptr->base).base.model,-1,0xffffffff,1,0);
        core_cloth_cpp_CCloth_render_FUN_0043bae0((CCloth *)this_ptr->unk3,0);
        local_14 = core_actor_cpp_castToClassHash_FUN_0040c790
                             ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],
                              g_CStrangerClassInfo.name_hash);
        if (local_14 != (CDemonActor *)0x0) {
          local_28.x = 0.0;
          local_28.z = 0.0;
          local_40.y = 0.71933335;
          local_40.x = 0.0;
          local_28.y = 3.1415927;
          local_40.z = 0.185;
          core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                    (&local_c4,&local_40,&local_28);
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    (&local_c4,
                     (this_ptr->base).base.model.bone_transform.bone_world_matrices + INT_02f33378,
                     &local_f4);
          pCVar2 = &local_f4;
          pCVar3 = &local_94;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            pCVar3->m[0].w = pCVar2->m[0].w;
            pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
            pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
          }
          core_xform_cpp_getTranslation_FUN_005f6110(&local_94,&local_4c);
          core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_94,&local_34);
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr2,(CVector3i *)&local_34,(CVector3i *)&local_4c);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                    ((CKeyFramedModelInstance *)&local_14[0x17a].platform_position_delta.z,0.0,-1);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        }
        core_charactr_cpp_CCharacter_renderAttachedModels_FUN_0042a420((CCharacter *)this_ptr);
        if ((DAT_02f43978 != 0) &&
           (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
                              (g_CDemonRendererPtr2), iVar1 == 0)) {
          this_ptr_00 = &(this_ptr->base).base.model;
          core_motion_cpp_CMotionController_render_FUN_0052e700
                    (&this_ptr_00->motion_controller,(CDemonActor *)this_ptr);
          core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                    (&this_ptr_00->motion_controller);
        }
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
                  (g_CDemonRendererPtr2,local_18);
      }
      else {
        core_morph_cpp_CMorph_render_FUN_0052bae0
                  ((CMorph *)(this_ptr->unk4 + 0x24),*(float *)(this_ptr->unk4 + 0xc50));
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    return local_1c;
  }
  return 0;
}

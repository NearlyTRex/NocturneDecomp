// Name: core_mimic.cpp_CMimic_renderMirrored_FUN_004d5860
// Address: 004d5860
// Address Range: [[004d5860, 004d5ad5]]
// Convention: __cdecl
// Signature: int __cdecl core_mimic_cpp_CMimic_renderMirrored_FUN_004d5860(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mimic_cpp_CMimic_renderMirrored_FUN_004d5860(CMimic *this_ptr)

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
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)this_ptr);
    this_ptr_01 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                            ((CDemonActor *)this_ptr,&local_64);
    local_1c = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_01);
    if (local_1c != 0) {
      if (this_ptr->morph_blend < 0.0) {
        local_18 = g_CDemonRenderer_PTR_005ae704->advanced_culling_enabled;
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0
                  (g_CDemonRenderer_PTR_005ae704,(uint)(local_18 == 0));
        engine_matrix_c_matrixPush_FUN_004cdac0();
        g_RelativeX = -g_RelativeX;
        _DAT_01c039dc = -_DAT_01c039dc;
        g_TransformMatrix.m[0].x = -g_TransformMatrix.m[0].x;
        g_TransformMatrix.m[0].y = -g_TransformMatrix.m[0].y;
        g_TransformMatrix.m[0].z = -g_TransformMatrix.m[0].z;
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
                  (&(this_ptr->base).base.model,-1,0xffffffff,1,0);
        core_cloth_cpp_CCloth_render_FUN_00437db0(&this_ptr->cloth,(CDeformableModelInstance *)0x0);
        local_14 = core_actor_cpp_castToClassHash_FUN_0040d890
                             (*(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8),
                              g_CStrangerActorType_02dc9fac.name_hash);
        if (local_14 != (CDemonActor *)0x0) {
          local_28.x = 0.0;
          local_28.z = 0.0;
          local_40.y = 0.71933335;
          local_40.x = 0.0;
          local_28.y = 3.1415927;
          local_40.z = 0.185;
          core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                    (&local_c4,&local_40,&local_28);
          core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
                    (&local_c4,
                     (this_ptr->base).base.model.bone_transform.bone_world_matrices + _DAT_01cc9094,
                     &local_f4);
          pCVar2 = &local_f4;
          pCVar3 = &local_94;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            pCVar3->m[0].w = pCVar2->m[0].w;
            pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
            pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
          }
          core_xform_cpp_getTranslation_FUN_0055bc00(&local_94,&local_4c);
          core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_94,&local_34);
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                    (g_CDemonRenderer_PTR_005ae704,&local_34,&local_4c);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                    ((CKeyFramedModelInstance *)(local_14[0x182].create_event + 0x28),0.0,-1);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
        }
        core_charactr_cpp_CCharacter_renderAttachedModels_FUN_004265a0((CCharacter *)this_ptr);
        if ((_DAT_01cd4318 != 0) &&
           (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                              (g_CDemonRenderer_PTR_005ae704), iVar1 == 0)) {
          this_ptr_00 = &(this_ptr->base).base.model;
          core_motion_cpp_CMotionController_render_FUN_004e22b0
                    (&this_ptr_00->motion_controller,(CDemonActor *)this_ptr);
          core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                    (&this_ptr_00->motion_controller);
        }
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0
                  (g_CDemonRenderer_PTR_005ae704,local_18);
      }
      else {
        core_morph_cpp_CMorph_render_FUN_004e0820(&this_ptr->morph,this_ptr->morph_blend);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)this_ptr);
    return local_1c;
  }
  return 0;
}

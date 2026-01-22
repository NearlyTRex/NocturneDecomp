// Name: core_mimic.cpp_CMimic_FUN_005205f0
// Address: 005205f0
// Address Range: [[005205f0, 005207fe] [00520802, 0052084b]]
// Convention: __cdecl
// Signature: int core_mimic.cpp_CMimic_FUN_005205f0(CMimic * this_ptr)

#include "nocturne.h"

int __cdecl core_mimic_cpp_CMimic_FUN_005205f0(CMimic *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  int iVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_c4;
  CVector3f local_94 [4];
  CBoundingBox3D local_64;
  byte local_4c [16];
  float local_3c;
  float local_38;
  CMatrix3x3f local_34;
  
  bVar4 = 0;
  if (*(int *)(this_ptr->field0_0x0).base_character.field2_0x240c == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    this_ptr_01 = (*((this_ptr->field0_0x0).base_character.base_actor.vtable)->getBoundingBox)
                            ((CDemonActor *)this_ptr,&local_64);
    local_34.m[2].x = (float)core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
    if (local_34.m[2].x != 0.0) {
      if (*(float *)(this_ptr->field3_0x4bdf8 + 0xc58) < 0.0) {
        local_34.m[2].y = (float)g_CDemonRendererPtr2->advanced_culling_enabled;
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
                  (g_CDemonRendererPtr2,(uint)(local_34.m[2].y == 0.0));
        engine_matrix_c_matrixPush_FUN_0050d620();
        g_RelativeX = -g_RelativeX;
        g_LightDirectionX = -g_LightDirectionX;
        g_TransformMatrix.m[0].x = -g_TransformMatrix.m[0].x;
        g_TransformMatrix.m[0].y = -g_TransformMatrix.m[0].y;
        g_TransformMatrix.m[0].z = -g_TransformMatrix.m[0].z;
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                  (&(this_ptr->field0_0x0).base_character.model,-1,0xffffffff,1,0);
        core_cloth_cpp_FUN_0043bae0();
        local_34.m[2].z =
             (float)core_actor_cpp_castToClassHash_FUN_0040c790
                              ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],
                               g_CStrangerClassInfo.name_hash);
        if ((CDemonActor *)local_34.m[2].z != (CDemonActor *)0x0) {
          local_34.m[1].x = 0.0;
          local_34.m[1].z = 0.0;
          local_3c = 0.71933335;
          local_4c._12_4_ = 0.0;
          local_34.m[1].y = 3.1415927;
          local_38 = 0.185;
          core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                    (&local_c4,(CVector3f *)(local_4c + 0xc),local_34.m + 1);
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    (&local_c4,
                     (CMatrix3x4f *)
                     (this_ptr->field0_0x0).base_character.model.bone_transform.bone_world_matrices
                     [DAT_02f33378].m,(CMatrix3x4f *)&stack0xffffff0c);
          pfVar2 = (float *)&stack0xffffff0c;
          pCVar3 = local_94;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            pCVar3->x = *pfVar2;
            pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
            pCVar3 = (CVector3f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
          }
          core_xform_cpp_getTranslation_FUN_005f6110(local_94,(CMatrix3x4f *)local_4c);
          core_xform_cpp_matrixToEulerAngles_FUN_005f5690(local_94,&local_34);
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr2,(CVector3i *)&local_34,(CVector3i *)local_4c);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                    ((CKeyFramedModelInstance *)
                     &(((CDemonActor *)((int)local_34.m[2].z + 0x1fbf0))->field12_0xe0).z,0.0,-1);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        }
        core_charactr_cpp_CCharacter_FUN_0042a420((CCharacter *)this_ptr);
        if ((DAT_02f43978 != 0) &&
           (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
                              (g_CDemonRendererPtr2), iVar1 == 0)) {
          this_ptr_00 = &(this_ptr->field0_0x0).base_character.model;
          core_motion_cpp_CMotionController_render_FUN_0052e700
                    (&this_ptr_00->motion_controller,(CDemonActor *)this_ptr);
          core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                    (&this_ptr_00->motion_controller);
        }
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
                  (g_CDemonRendererPtr2,(int)local_34.m[2].y);
      }
      else {
        core_morph_cpp_CMorphModel_FUN_0052bae0((CMorphModel *)(this_ptr->field3_0x4bdf8 + 0x2c));
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    return (int)local_34.m[2].x;
  }
  return 0;
}

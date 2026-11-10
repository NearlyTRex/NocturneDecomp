// Name: core_mimic.cpp_CMimic_renderMirrored_FUN_004f1890
// Address: 004f1890
// Address Range: [[004f1890, 004f1b36]]
// Convention: __cdecl
// Signature: int __cdecl core_mimic_cpp_CMimic_renderMirrored_FUN_004f1890(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mimic_cpp_CMimic_renderMirrored_FUN_004f1890(CMimic *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int aiStackY_1058 [12];
  float afStackY_1028 [6];
  int aiStackY_1010 [947];
  byte *puVar5;
  CDemonRenderer *this_ptr_01;
  int *piVar6;
  CVector3f *euler_angles;
  CVector3f *translation;
  byte local_d0 [48];
  uint local_a0 [6];
  uint local_88 [6];
  float local_70;
  int aiStack_6c [8];
  CVector3f local_4c;
  float local_40;
  float afStack_3c [2];
  CVector3f local_34;
  uint local_28;
  int aiStack_24 [4];
  int local_14;
  
  bVar4 = 0;
  if (*(int *)&(this_ptr->base).base.field_0x2568 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
    puVar2 = local_88;
    puVar3 = local_a0;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    aiStack_24[3] = core_box_cpp_FUN_0041a840(local_a0);
    if (aiStack_24[3] != 0) {
      if (this_ptr->morph_blend < 0.0) {
        aiStack_24[2] = DAT_0060b280->advanced_culling_enabled;
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90
                  (DAT_0060b280,(uint)(aiStack_24[2] == 0));
        engine_matrix_c_matrixPush_FUN_004e9710();
        _DAT_01c38b6c = -_DAT_01c38b6c;
        _DAT_01c38b90 = -_DAT_01c38b90;
        _DAT_01c38b9c = -_DAT_01c38b9c;
        _DAT_01c38ba0 = -_DAT_01c38ba0;
        _DAT_01c38ba4 = -_DAT_01c38ba4;
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
                  (&(this_ptr->base).base.model,-1,0xffffffff,1,0);
        core_cloth_cpp_CCloth_render_FUN_005b0fe0
                  ((CCloth *)&this_ptr->field_0x10bc0,(CDeformableModelInstance *)0x0);
        local_14 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),
                              g_CStrangerClassInfo.name_hash);
        if (local_14 != 0) {
          puVar2 = &local_28;
          aiStack_6c[2] = 0;
          aiStack_6c[4] = 0;
          aiStack_6c[3] = 0x40490fdb;
          aiStack_6c[5] = 0;
          aiStack_6c[6] = 0x3f38263b;
          piVar6 = aiStack_6c + 5;
          puVar5 = local_d0;
          aiStack_6c[7] = 0x3e3d70a4;
          local_28 = 0;
          aiStack_24[(uint)bVar4 * -2] = aiStack_6c[(uint)bVar4 * -2 + 3];
          aiStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
               aiStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
          core_xform_cpp_FUN_00591c10(puVar5,piVar6,puVar2);
          core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                    (local_d0,&(this_ptr->base).base.model.field_0xe80 + _DAT_01d097c4 * 0x30);
          puVar2 = (uint *)&stack0xffffff00;
          puVar3 = (uint *)&stack0xfffffed0;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
            puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
          }
          core_xform_cpp_FUN_00592720(&stack0xfffffed0);
          local_34.x = local_40;
          *(float *)((int)&local_34 + (uint)bVar4 * -8 + 4) = afStack_3c[(uint)bVar4 * -2];
          *(float *)((int)&local_34 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&stack0xfffffed0);
          translation = &local_34;
          euler_angles = &local_4c;
          local_4c.x = local_70;
          *(int *)((int)&local_4c + (uint)bVar4 * -8 + 4) = aiStack_6c[(uint)bVar4 * -2];
          this_ptr_01 = DAT_0060b280;
          *(int *)((int)&local_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               aiStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                    (this_ptr_01,euler_angles,translation);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                    ((CKeyFramedModelInstance *)(local_14 + 0x25744),0.0,-1);
          engine_matrix_c_pop_FUN_0046b4a0();
        }
        core_charactr_cpp_CCharacter_renderAttachedModels_FUN_00425aa0((CCharacter *)this_ptr);
        if ((_DAT_01d1cdc8 != 0) &&
           (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
           iVar1 == 0)) {
          this_ptr_00 = &(this_ptr->base).base.model;
          core_motion_cpp_FUN_005042e0((CMotionController *)this_ptr_00,(CDemonActor *)this_ptr);
          core_motion_cpp_FUN_005035c0(this_ptr_00);
        }
        engine_matrix_c_pop_FUN_0046b4a0();
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90
                  (DAT_0060b280,aiStack_24[2]);
      }
      else {
        core_morph_cpp_CMorph_render_FUN_005b76a0(&this_ptr->morph,this_ptr->morph_blend);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
    return aiStack_24[3];
  }
  return 0;
}

// Name: core_mimic.cpp_CMimic_renderMirrored_FUN_004f1890
// Address: 004f1890
// Address Range: [[004f1890, 004f1b36]]
// Convention: __cdecl
// Signature: int __cdecl core_mimic_cpp_CMimic_renderMirrored_FUN_004f1890(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mimic_cpp_CMimic_renderMirrored_FUN_004f1890(CMimic *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int aiStackY_1058 [965];
  byte *puVar5;
  CDemonRenderer *this_ptr_00;
  int *piVar6;
  CVector3f *euler_angles;
  CVector3f *translation;
  byte local_d0 [48];
  uint local_a0 [6];
  uint local_88 [6];
  CVector3f local_70;
  uint local_64;
  int local_60 [5];
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  uint local_28;
  int aiStack_24 [4];
  int local_14;
  
  bVar4 = 0;
  if (*(int *)&this_ptr->field_0x2568 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x24))(this_ptr,0);
    puVar2 = local_88;
    puVar3 = local_a0;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    aiStack_24[3] = core_box_cpp_FUN_0041a840(local_a0);
    if (aiStack_24[3] != 0) {
      if (*(float *)&this_ptr->field_0x4c34c < 0.0) {
        aiStack_24[2] = *(int *)(DAT_0060b280 + 0x18);
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90
                  (DAT_0060b280,(uint)(aiStack_24[2] == 0));
        engine_matrix_c_matrixPush_FUN_004e9710();
        _DAT_01c38b6c = -_DAT_01c38b6c;
        _DAT_01c38b90 = -_DAT_01c38b90;
        _DAT_01c38b9c = -_DAT_01c38b9c;
        _DAT_01c38ba0 = -_DAT_01c38ba0;
        _DAT_01c38ba4 = -_DAT_01c38ba4;
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
                  ((CDeformableModelInstance *)&this_ptr->field_0x2b4,-1,0xffffffff,1,0);
        core_cloth_cpp_CCloth_render_FUN_005b0fe0
                  ((CCloth *)&this_ptr->field_0x10bc0,(CDeformableModelInstance *)0x0);
        local_14 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),
                              g_CStrangerClassInfo.name_hash);
        if (local_14 != 0) {
          puVar2 = &local_28;
          local_64 = 0;
          local_60[1] = 0;
          local_60[0] = 0x40490fdb;
          local_60[2] = 0;
          local_60[3] = 0x3f38263b;
          piVar6 = local_60 + 2;
          puVar5 = local_d0;
          local_60[4] = 0x3e3d70a4;
          local_28 = 0;
          aiStack_24[(uint)bVar4 * -2] = local_60[(uint)bVar4 * -2];
          aiStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
               local_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          core_xform_cpp_FUN_00591c10(puVar5,piVar6,puVar2);
          core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                    (local_d0,&this_ptr->field_0x1134 + _DAT_01d097c4 * 0x30);
          puVar2 = (uint *)&stack0xffffff00;
          puVar3 = (uint *)&stack0xfffffed0;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
            puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
          }
          core_xform_cpp_FUN_00592720(&stack0xfffffed0);
          local_34._0_4_ = local_40._0_4_;
          *(uint *)((int)&local_34 + (uint)bVar4 * -8 + 4) =
               *(uint *)((int)&local_40 + (uint)bVar4 * -8 + 4);
          *(uint *)((int)&local_34 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               *(uint *)((int)&local_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
          core_xform_cpp_FUN_00591de0(&stack0xfffffed0);
          translation = &local_34;
          euler_angles = &local_4c;
          local_4c._0_4_ = local_70._0_4_;
          *(uint *)((int)&local_4c + (uint)bVar4 * -8 + 4) =
               *(uint *)((int)&local_70 + (uint)bVar4 * -8 + 4);
          this_ptr_00 = DAT_0060b280;
          *(uint *)((int)&local_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               *(uint *)((int)&local_70 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                    (this_ptr_00,euler_angles,translation);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                    ((CKeyFramedModelInstance *)(local_14 + 0x25744),0.0,-1);
          engine_matrix_c_pop_FUN_0046b4a0();
        }
        core_charactr_cpp_CCharacter_renderAttachedModels_FUN_00425aa0((CCharacter *)this_ptr);
        if ((_DAT_01d1cdc8 != 0) &&
           (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
           iVar1 == 0)) {
          core_motion_cpp_FUN_005042e0
                    ((CMotionController *)&this_ptr->field_0x2b4,(CDemonActor *)this_ptr);
          core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
        }
        engine_matrix_c_pop_FUN_0046b4a0();
        engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90
                  (DAT_0060b280,aiStack_24[2]);
      }
      else {
        core_morph_cpp_CMorph_render_FUN_005b76a0
                  ((CMorph *)&this_ptr->field_0x4b720,*(float *)&this_ptr->field_0x4c34c);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
    return aiStack_24[3];
  }
  return 0;
}

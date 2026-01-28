// Name: core_bugs.cpp_FUN_00425fe0
// Address: 00425fe0
// Address Range: [[00425fe0, 00426400]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_00425fe0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_bugs.cpp_FUN_00425fe0(uint param_1, uint param_2)
    */

void core_bugs_cpp_FUN_00425fe0(void)

{
  CLocation *dest_position;
  CDemonActor *actor_ptr;
  uint class_name_hash;
  int iVar1;
  CCharacter *pCVar2;
  CPathMap *this_ptr;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  char *pcVar5;
  byte bVar6;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  SDamageInfo SStack_188;
  CMatrix3x4f CStack_14c;
  CMatrix3x4f local_11c;
  CMatrix3x4f CStack_ec;
  CMatrix3x3f CStack_bc;
  CVector3f CStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  CVector3f CStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CVector3f CStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float *pfStack_1c;
  float *local_18;
  
  bVar6 = 0;
  if (*(int *)(in_stack_00000004[1].cloth_data + 0x423c) != 0) {
    iVar1 = 0;
    pfVar4 = (float *)0x0;
    pCVar2 = in_stack_00000004;
    if (0 < *(int *)(in_stack_00000004[1].base.create_event + 0x24)) {
      do {
        if (-1 < *(int *)(pCVar2[1].base.create_event + 0x54)) {
          pfVar4 = (float *)((int)pfVar4 + 1);
        }
        iVar1 = iVar1 + 1;
        pCVar2 = (CCharacter *)&(pCVar2->base).orient_matrix.m[0].y;
      } while (iVar1 < *(int *)(in_stack_00000004[1].base.create_event + 0x24));
    }
    if ((int)pfVar4 < *(int *)(in_stack_00000004[1].base.create_event + 0x24)) {
      iVar1 = *(int *)(in_stack_00000004[1].cloth_data + 0x423c);
      local_4c = (in_stack_00000004->base).location.position.x - *(float *)(iVar1 + 0x20);
      local_48 = (in_stack_00000004->base).location.position.y - *(float *)(iVar1 + 0x24);
      local_44 = (in_stack_00000004->base).location.position.z - *(float *)(iVar1 + 0x28);
      if ((((float)2 < ABS(local_48)) || ((float)2 < ABS(local_4c))) ||
         ((float)2 < ABS(local_44))) {
        this_ptr = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].cloth_data + 0x423c) + 0x154)
                               + 0xbc))();
        if (this_ptr == (CPathMap *)0x0) {
          this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
        }
        dest_position = &(in_stack_00000004->base).location;
        iVar1 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                          (this_ptr,&dest_position->position,&CStack_64,
                           (in_stack_00000004->base).unk1);
        if (iVar1 != 0) {
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_bc,&CStack_64);
          CStack_94.z = 2.0f * in_stack_00000008;
          CStack_94.x = 0.0;
          CStack_94.y = 0.0;
          pfStack_1c = (float *)CStack_94.z;
          core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&CStack_bc,&CStack_7c,&CStack_94)
          ;
          fStack_40 = (dest_position->position).x;
          pfStack_1c = &(in_stack_00000004->base).location.position.y;
          fStack_3c = *pfStack_1c;
          local_18 = &(in_stack_00000004->base).location.position.z;
          fStack_38 = *local_18;
          core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
          fStack_70 = (dest_position->position).x;
          fStack_6c = *pfStack_1c;
          fStack_68 = *local_18;
          (dest_position->position).x = fStack_40;
          (in_stack_00000004->base).location.position.y = fStack_3c;
          (in_stack_00000004->base).location.position.z = fStack_38;
          core_bugs_cpp_FUN_004276c0();
        }
        core_bugs_cpp_FUN_004257f0();
      }
      else {
        core_bugs_cpp_FUN_004257f0();
      }
    }
    if ((0 < (int)pfVar4) &&
       (in_stack_00000008 =
             in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[2].x -
             in_stack_00000008,
       in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[2].x =
            in_stack_00000008, class_name_hash = g_CCharacterClassInfo.name_hash,
       in_stack_00000008 <= 0.0)) {
      actor_ptr = *(CDemonActor **)(in_stack_00000004[1].cloth_data + 0x423c);
      in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[2].x = 0.2;
      pCVar2 = (CCharacter *)core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,class_name_hash);
      if (pCVar2 != (CCharacter *)0x0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_188);
        SStack_188.damage_amount = (float)(int)pfVar4 * (float)0.050000000000000003;
        SStack_188.attacker = &in_stack_00000004->base;
        SStack_188.wielder = &in_stack_00000004->base;
        local_18 = pfVar4;
        (*(((pCVar2->base).vtable._uc)->_uc).processDamage)(pCVar2,&SStack_188);
      }
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_11c,(CVector3f *)(*(int *)(in_stack_00000004[1].cloth_data + 0x423c) + 0x20),
               (CVector3f *)(*(int *)(in_stack_00000004[1].cloth_data + 0x423c) + 0x30));
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&CStack_14c,&(in_stack_00000004->base).location.position,
               (CVector3f *)&(in_stack_00000004->base).orient);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_11c,&CStack_14c,&CStack_ec);
    pCVar3 = &CStack_ec;
    pcVar5 = in_stack_00000004[1].cloth_data + 0x4244;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(float *)pcVar5 = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
      pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
    }
    if (*(int *)(in_stack_00000004[1].cloth_data + 0x4274) !=
        (*(CDeformableModelInstance **)(in_stack_00000004[1].cloth_data + 0x4240))->
        cached_skinned_lod_index) {
      core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
                (*(CDeformableModelInstance **)(in_stack_00000004[1].cloth_data + 0x4240),
                 *(int *)(in_stack_00000004[1].cloth_data + 0x4274));
    }
    iVar1 = 0;
    if (0 < *(int *)(in_stack_00000004[1].base.create_event + 0x24)) {
      do {
        iVar1 = iVar1 + 1;
        core_bugs_cpp_FUN_004268e0();
      } while (iVar1 < *(int *)(in_stack_00000004[1].base.create_event + 0x24));
    }
    core_bugs_cpp_FUN_004272f0();
    fStack_58 = in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x48].m[2].z +
                in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].y;
    fStack_54 = in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].w +
                in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].z;
    fStack_88 = fStack_58 * 0.5f;
    fStack_50 = in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].x +
                in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[1].w;
    fStack_84 = fStack_54 * 0.5f;
    fStack_80 = fStack_50 * 0.5f;
    fStack_34 = (in_stack_00000004->base).location.position.x + fStack_88;
    fStack_30 = (in_stack_00000004->base).location.position.y + fStack_84;
    fStack_2c = (in_stack_00000004->base).location.position.z + fStack_80;
    core_bugs_cpp_FUN_004276c0();
    return;
  }
  in_stack_00000004 = in_stack_00000004 + 1;
  (in_stack_00000004->base).create_event[0x20] = '\0';
  (in_stack_00000004->base).create_event[0x21] = '\0';
  (in_stack_00000004->base).create_event[0x22] = '\0';
  (in_stack_00000004->base).create_event[0x23] = '\0';
  return;
}

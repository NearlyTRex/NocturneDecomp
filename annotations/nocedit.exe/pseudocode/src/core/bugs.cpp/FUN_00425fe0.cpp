// Name: core_bugs.cpp_FUN_00425fe0
// Address: 00425fe0
// Address Range: [[00425fe0, 00426400]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00425fe0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_bugs.cpp_FUN_00425fe0(uint param_1, uint param_2)
    */

void core_bugs_cpp_FUN_00425fe0(void)

{
  CLocation *dest_position;
  uint class_name_hash;
  int iVar1;
  CDemonActor *pCVar2;
  CPathMap *this_ptr;
  BADSPACEBASE *in_ESP;
  CCharacter *pCVar3;
  uint *puVar4;
  float *pfVar5;
  char *pcVar6;
  byte bVar7;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CCharacter *in_stack_fffffe78;
  CMatrix3x4f CStack_14c;
  CMatrix3x4f local_11c;
  uint auStack_ec [13];
  CMatrix3x3f CStack_b8;
  CVector3f CStack_90;
  float fStack_84;
  float fStack_80;
  CVector3f CStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  CVector3f CStack_60;
  float fStack_54;
  float fStack_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float *local_18;
  float *pfStack_14;
  
  bVar7 = 0;
  if (*(int *)(in_stack_00000004[1].cloth_data + 0x423c) != 0) {
    iVar1 = 0;
    pfVar5 = (float *)0x0;
    pCVar3 = in_stack_00000004;
    if (0 < *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24)) {
      do {
        if (-1 < *(int *)(pCVar3[1].base_actor.create_event + 0x54)) {
          pfVar5 = (float *)((int)pfVar5 + 1);
        }
        iVar1 = iVar1 + 1;
        pCVar3 = (CCharacter *)&(pCVar3->base_actor).orient_matrix.m[0].y;
      } while (iVar1 < *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24));
    }
    if ((int)pfVar5 < *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24)) {
      iVar1 = *(int *)(in_stack_00000004[1].cloth_data + 0x423c);
      local_4c = (in_stack_00000004->base_actor).location.position.x - *(float *)(iVar1 + 0x20);
      local_48 = (in_stack_00000004->base_actor).location.position.y - *(float *)(iVar1 + 0x24);
      local_44 = (in_stack_00000004->base_actor).location.position.z - *(float *)(iVar1 + 0x28);
      if ((((float)2 < ABS(local_48)) || ((float)2 < ABS(local_4c))) ||
         ((float)2 < ABS(local_44))) {
        this_ptr = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].cloth_data + 0x423c) + 0x154)
                               + 0xbc))();
        if (this_ptr == (CPathMap *)0x0) {
          this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
        }
        dest_position = &(in_stack_00000004->base_actor).location;
        iVar1 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                          (this_ptr,&dest_position->position,&CStack_60,
                           (in_stack_00000004->base_actor).field7_0x6c);
        if (iVar1 != 0) {
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_b8,&CStack_60);
          CStack_90.z = _DAT_0065b5d4 * in_stack_00000008;
          CStack_90.x = 0.0;
          CStack_90.y = 0.0;
          local_18 = (float *)CStack_90.z;
          core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&CStack_b8,&CStack_78,&CStack_90)
          ;
          fStack_3c = (dest_position->position).x;
          local_18 = &(in_stack_00000004->base_actor).location.position.y;
          fStack_38 = *local_18;
          pfStack_14 = &(in_stack_00000004->base_actor).location.position.z;
          fStack_34 = *pfStack_14;
          core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
          fStack_6c = (dest_position->position).x;
          fStack_68 = *local_18;
          fStack_64 = *pfStack_14;
          (dest_position->position).x = fStack_3c;
          (in_stack_00000004->base_actor).location.position.y = fStack_38;
          (in_stack_00000004->base_actor).location.position.z = fStack_34;
          core_bugs_cpp_FUN_004276c0();
        }
        in_stack_fffffe78 = in_stack_00000004;
        core_bugs_cpp_FUN_004257f0();
      }
      else {
        core_bugs_cpp_FUN_004257f0();
      }
    }
    if ((0 < (int)pfVar5) &&
       (in_stack_00000008 =
             in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[2].x -
             in_stack_00000008,
       in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[2].x =
            in_stack_00000008, class_name_hash = g_CCharacterClassInfo.name_hash,
       in_stack_00000008 <= 0.0)) {
      pCVar2 = *(CDemonActor **)(in_stack_00000004[1].cloth_data + 0x423c);
      in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[2].x = 0.2;
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar2,class_name_hash);
      if (pCVar2 != (CDemonActor *)0x0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe78);
        local_18 = pfVar5;
        (*pCVar2->vtable[1].playAmbientSoundWithVolume)
                  (pCVar2,&stack0xfffffe78,(float)in_stack_fffffe78);
      }
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_11c,(CVector3f *)(*(int *)(in_stack_00000004[1].cloth_data + 0x423c) + 0x20),
               (CVector3f *)(*(int *)(in_stack_00000004[1].cloth_data + 0x423c) + 0x30));
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&CStack_14c,&(in_stack_00000004->base_actor).location.position,
               (CVector3f *)&(in_stack_00000004->base_actor).orient);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&local_11c,&CStack_14c,(CMatrix3x4f *)in_stack_fffffe78);
    puVar4 = auStack_ec;
    pcVar6 = in_stack_00000004[1].cloth_data + 0x4244;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(uint *)pcVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      pcVar6 = pcVar6 + (uint)bVar7 * -8 + 4;
    }
    if (*(int *)(in_stack_00000004[1].cloth_data + 0x4274) !=
        (*(CDeformableModelInstance **)(in_stack_00000004[1].cloth_data + 0x4240))->
        cached_skinned_lod_index) {
      core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
                (*(CDeformableModelInstance **)(in_stack_00000004[1].cloth_data + 0x4240),
                 *(int *)(in_stack_00000004[1].cloth_data + 0x4274));
    }
    iVar1 = 0;
    if (0 < *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24)) {
      do {
        iVar1 = iVar1 + 1;
        core_bugs_cpp_FUN_004268e0();
      } while (iVar1 < *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24));
    }
    core_bugs_cpp_FUN_004272f0();
    CStack_60.z = in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x48].m[2].z +
                  in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].y;
    fStack_54 = in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].w +
                in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].z;
    CStack_90.z = CStack_60.z * 0.5f;
    fStack_50 = in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].x +
                in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[1].w;
    fStack_84 = fStack_54 * 0.5f;
    fStack_80 = fStack_50 * 0.5f;
    fStack_34 = (in_stack_00000004->base_actor).location.position.x + CStack_90.z;
    fStack_30 = (in_stack_00000004->base_actor).location.position.y + fStack_84;
    fStack_2c = (in_stack_00000004->base_actor).location.position.z + fStack_80;
    core_bugs_cpp_FUN_004276c0();
    return;
  }
  in_stack_00000004 = in_stack_00000004 + 1;
  (in_stack_00000004->base_actor).create_event[0x20] = '\0';
  (in_stack_00000004->base_actor).create_event[0x21] = '\0';
  (in_stack_00000004->base_actor).create_event[0x22] = '\0';
  (in_stack_00000004->base_actor).create_event[0x23] = '\0';
  return;
}

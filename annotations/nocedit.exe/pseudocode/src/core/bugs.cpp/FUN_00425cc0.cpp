// Name: core_bugs.cpp_FUN_00425cc0
// Address: 00425cc0
// Address Range: [[00425cc0, 00425fd8]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00425cc0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_bugs.cpp_FUN_00425cc0(uint param_1, uint param_2)
    */

void core_bugs_cpp_FUN_00425cc0(void)

{
  CLocation *dest_position;
  float *pfVar1;
  int iVar2;
  CPathMap *this_ptr;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CMatrix3x3f CStack_a8;
  CVector3f CStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float *pfStack_14;
  
  (*(in_stack_00000004->base_actor).vtable[1].getAllowedMeleeAttackTypes)
            (&in_stack_00000004->base_actor);
  if ((in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x42].m[1].z != 0.0) &&
     (iVar3 = *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18), iVar3 != 0)) {
    fStack_74 = (in_stack_00000004->base_actor).location.position.x - *(float *)(iVar3 + 0x20);
    fStack_70 = (in_stack_00000004->base_actor).location.position.y - *(float *)(iVar3 + 0x24);
    fStack_6c = (in_stack_00000004->base_actor).location.position.z - *(float *)(iVar3 + 0x28);
    if ((ABS(fStack_70) < (float)2) &&
       ((ABS(fStack_74) < (float)2 && (ABS(fStack_6c) < (float)2)))) {
      core_bugs_cpp_FUN_004257f0();
      core_bugs_cpp_FUN_00427400();
      iVar3 = extraout_EDX;
      if (*(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) == 1) {
        core_bugs_cpp_FUN_00425fe0();
        return;
      }
      goto LAB_00425d86;
    }
  }
  if ((in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x42].m[1].y != 0.0) &&
     (iVar3 = *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18), iVar3 != 0)) {
    this_ptr = (CPathMap *)(**(code **)(*(int *)(iVar3 + 0x154) + 0xbc))();
    if (this_ptr == (CPathMap *)0x0) {
      this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
    }
    dest_position = &(in_stack_00000004->base_actor).location;
    iVar3 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                      (this_ptr,&dest_position->position,&CStack_50,
                       (in_stack_00000004->base_actor).field7_0x6c);
    if (iVar3 != 0) {
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_a8,&CStack_50);
      CStack_80.z = _DAT_0065b5d4 * in_stack_00000008;
      CStack_80.x = 0.0;
      CStack_80.y = 0.0;
      pfStack_14 = (float *)CStack_80.z;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&CStack_a8,&CStack_2c,&CStack_80);
      fStack_68 = (dest_position->position).x;
      pfVar1 = &(in_stack_00000004->base_actor).location.position.y;
      fStack_64 = *pfVar1;
      pfStack_14 = &(in_stack_00000004->base_actor).location.position.z;
      fStack_60 = *pfStack_14;
      core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
      fStack_38 = (dest_position->position).x;
      fStack_34 = *pfVar1;
      fStack_30 = *pfStack_14;
      (dest_position->position).x = fStack_68;
      (in_stack_00000004->base_actor).location.position.y = fStack_64;
      (in_stack_00000004->base_actor).location.position.z = fStack_60;
      fStack_44 = fStack_38 - (dest_position->position).x;
      fStack_3c = fStack_30 - (in_stack_00000004->base_actor).location.position.z;
      pfVar1 = &in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x48].m[2].z;
      fStack_20 = *pfVar1 + in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0]
                            .y;
      fStack_1c = in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].w +
                  in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].z;
      fStack_5c = fStack_20 * 0.5f;
      fStack_18 = in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].x +
                  in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[1].w;
      fStack_58 = fStack_1c * 0.5f;
      fStack_54 = fStack_18 * 0.5f;
      fStack_40 = fStack_58;
      if ((((*pfVar1 <= fStack_44) &&
           (in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].w <= fStack_58)
           ) && (in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].x <=
                 fStack_3c)) &&
         (((fStack_44 <= in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].y
           && (fStack_58 <=
               in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].z)) &&
          (fStack_3c <= in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[1].w))
         )) {
        core_bugs_cpp_FUN_004276c0();
      }
    }
  }
  core_bugs_cpp_FUN_004257f0();
  iVar3 = extraout_EDX_00;
LAB_00425d86:
  iVar2 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar4 = iVar4 + 1;
      iVar2 = core_bugs_cpp_FUN_00426420();
      iVar3 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24);
    } while (iVar4 < iVar3);
  }
  core_bugs_cpp_FUN_004272f0(iVar2,iVar3);
  return;
}

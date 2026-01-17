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
  float *pfVar2;
  int iVar3;
  CPathMap *this_ptr;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar5;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CMatrix3x3f CStack_a4;
  CVector3f CStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f CStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (*(in_stack_00000004->base_actor).vtable[1].getAllowedMeleeAttackTypes)
            (&in_stack_00000004->base_actor);
  if ((in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x42].m[1].z != 0.0) &&
     (iVar4 = *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18), iVar4 != 0)) {
    fStack_70 = (in_stack_00000004->base_actor).location.position.x - *(float *)(iVar4 + 0x20);
    fStack_6c = (in_stack_00000004->base_actor).location.position.y - *(float *)(iVar4 + 0x24);
    fStack_68 = (in_stack_00000004->base_actor).location.position.z - *(float *)(iVar4 + 0x28);
    if ((ABS(fStack_6c) < (float)2) &&
       ((ABS(fStack_70) < (float)2 && (ABS(fStack_68) < (float)2)))) {
      core_bugs_cpp_FUN_004257f0();
      core_bugs_cpp_FUN_00427400();
      iVar4 = extraout_EDX;
      if (*(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) == 1) {
        core_bugs_cpp_FUN_00425fe0();
        return;
      }
      goto LAB_00425d86;
    }
  }
  if ((in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x42].m[1].y != 0.0) &&
     (iVar4 = *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18), iVar4 != 0)) {
    this_ptr = (CPathMap *)(**(code **)(*(int *)(iVar4 + 0x154) + 0xbc))();
    if (this_ptr == (CPathMap *)0x0) {
      this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
    }
    dest_position = &(in_stack_00000004->base_actor).location;
    iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                      (this_ptr,&dest_position->position,&CStack_4c,
                       (in_stack_00000004->base_actor).field7_0x6c);
    if (iVar4 != 0) {
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_a4,&CStack_4c);
      CStack_7c.z = _DAT_0065b5d4 * in_stack_00000008;
      CStack_7c.x = 0.0;
      CStack_7c.y = 0.0;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&CStack_a4,&CStack_28,&CStack_7c);
      fStack_64 = (dest_position->position).x;
      pfVar1 = &(in_stack_00000004->base_actor).location.position.y;
      fStack_60 = *pfVar1;
      pfVar2 = &(in_stack_00000004->base_actor).location.position.z;
      fStack_5c = *pfVar2;
      core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
      fStack_34 = (dest_position->position).x;
      fStack_30 = *pfVar1;
      fStack_2c = *pfVar2;
      (dest_position->position).x = fStack_64;
      (in_stack_00000004->base_actor).location.position.y = fStack_60;
      (in_stack_00000004->base_actor).location.position.z = fStack_5c;
      fStack_40 = fStack_34 - (dest_position->position).x;
      fStack_38 = fStack_2c - (in_stack_00000004->base_actor).location.position.z;
      pfVar1 = &in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x48].m[2].z;
      fStack_1c = *pfVar1 + in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0]
                            .y;
      fStack_18 = in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].w +
                  in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].z;
      fStack_58 = fStack_1c * 0.5f;
      fStack_14 = in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].x +
                  in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[1].w;
      fStack_54 = fStack_18 * 0.5f;
      fStack_50 = fStack_14 * 0.5f;
      fStack_3c = fStack_54;
      if ((((*pfVar1 <= fStack_40) &&
           (in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].w <= fStack_54)
           ) && (in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].x <=
                 fStack_38)) &&
         (((fStack_40 <= in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].y
           && (fStack_54 <=
               in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[0].z)) &&
          (fStack_38 <= in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x49].m[1].w))
         )) {
        core_bugs_cpp_FUN_004276c0();
      }
    }
  }
  core_bugs_cpp_FUN_004257f0();
  iVar4 = extraout_EDX_00;
LAB_00425d86:
  iVar3 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar5 = iVar5 + 1;
      iVar3 = core_bugs_cpp_FUN_00426420();
      iVar4 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24);
    } while (iVar5 < iVar4);
  }
  core_bugs_cpp_FUN_004272f0(iVar3,iVar4);
  return;
}

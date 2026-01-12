// Name: core_bugs.cpp_FUN_00424e50
// Address: 00424e50
// Address Range: [[00424e50, 00424fdf] [00425083, 004250d2]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00424e50()

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_bugs.cpp_FUN_00424e50(uint param_1) */

void core_bugs_cpp_FUN_00424e50(void)

{
  CEnemy *pCVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  char *pcVar6;
  CKeyFramedModelInstance *pCVar7;
  CEnemy *in_stack_00000004;
  float fVar8;
  float fVar9;
  char *local_20;
  CKeyFramedModelInstance *local_1c;
  char *local_18;
  
  (in_stack_00000004->base_character).base_actor.orient.heading = 0.0;
  (in_stack_00000004->base_character).base_actor.orient.bank =
       (in_stack_00000004->base_character).base_actor.orient.heading;
  (in_stack_00000004->base_character).base_actor.orient.pitch =
       (in_stack_00000004->base_character).base_actor.orient.bank;
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  pCVar1 = in_stack_00000004 + 1;
  (pCVar1->base_character).cloth_data[0x3978] = '\x04';
  (pCVar1->base_character).cloth_data[0x3979] = '\0';
  (pCVar1->base_character).cloth_data[0x397a] = '\0';
  (pCVar1->base_character).cloth_data[0x397b] = '\0';
  iVar4 = 0;
  if (0 < *(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978)) {
    local_20 = in_stack_00000004[1].base_character.cloth_data + 0x397c;
    pcVar6 = in_stack_00000004[1].base_character.cloth_data + 0x39f4;
    do {
      if (*pcVar6 == '\0') {
        iVar3 = *(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978) + -1;
        *(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978) = iVar3;
        if (iVar4 < iVar3) {
          local_1c = (CKeyFramedModelInstance *)(local_20 + iVar4 * 0x17c);
          local_18 = local_20 + iVar4 * 0x17c + 500;
          iVar3 = iVar4;
          do {
            core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(local_1c,local_18);
            iVar3 = iVar3 + 1;
            local_1c = local_1c + 1;
            local_18 = local_18 + 0x17c;
          } while (iVar3 < *(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978));
        }
      }
      else {
        core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
                  ((CKeyFramedModelInstance *)(local_20 + iVar4 * 0x17c));
        pcVar6 = pcVar6 + 0x17c;
        iVar4 = iVar4 + 1;
      }
    } while (iVar4 < *(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978));
  }
  if (0 < *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc)) {
    pCVar7 = (CKeyFramedModelInstance *)&in_stack_00000004[1].base_character.base_actor.orient;
    pfVar5 = &in_stack_00000004[1].base_character.base_actor.location.position.y;
    do {
      pcVar6 = local_20 + (int)local_18 * 0x40;
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      fVar9 = 0.0;
      fVar8 = 6.089735e-39;
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70
                        (0,*(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978) + -1);
      fVar2 = (float)0.5;
      fVar9 = fVar9 * fVar2;
      *(int *)(pcVar6 + 4) = iVar4;
      fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar9,fVar8 * fVar2);
      pcVar6[0xc] = '\0';
      pcVar6[0xd] = '\0';
      pcVar6[0xe] = '\0';
      pcVar6[0xf] = '\0';
      *(float *)(pcVar6 + 8) = fVar2;
      fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                        ((float)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10),
                         fVar9);
      *(float *)(pcVar6 + 0x10) = fVar2;
      pfVar5[2] = 0.0;
      pfVar5[1] = pfVar5[2];
      *pfVar5 = pfVar5[1];
      fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
      *(float *)(pcVar6 + 0x18) = fVar2;
      if (pCVar7 != local_1c) {
        pCVar7->part_visibility_flags[0] = (int)pfVar5[-3];
        pCVar7->part_visibility_flags[1] = (int)pfVar5[-2];
        pCVar7->part_visibility_flags[2] = (int)((CVector3f *)(pfVar5 + -1))->x;
      }
      pCVar7 = (CKeyFramedModelInstance *)(pCVar7->part_visibility_flags + 0x10);
      pfVar5 = pfVar5 + 0x10;
      local_1c = (CKeyFramedModelInstance *)(local_1c->part_visibility_flags + 0x10);
      local_18 = local_18 + 1;
    } while ((int)local_18 <
             *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc));
  }
  core_bugs_cpp_FUN_004272f0();
  in_stack_00000004[2].base_character.model.bone_transform.bone_world_matrices[0x43].m[1].x = -NAN;
  in_stack_00000004[2].base_character.model.bone_transform.bone_world_matrices[0x43].m[1].y = -NAN;
  (in_stack_00000004->base_character).base_actor.field16_0x100 = 1;
  in_stack_00000004[2].base_character.model.bone_transform.bone_world_matrices[0x43].m[2].x = 0.0;
  return;
}

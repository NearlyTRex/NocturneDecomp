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
  float fVar1;
  float fVar2;
  float min_value;
  CEnemy *pCVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  char *pcVar9;
  COrientation *pCVar10;
  CEnemy *in_stack_00000004;
  float *local_28;
  int local_24;
  CKeyFramedModelInstance *local_1c;
  char *local_18;
  
  (in_stack_00000004->base_character).base_actor.orient.heading = 0.0;
  (in_stack_00000004->base_character).base_actor.orient.bank =
       (in_stack_00000004->base_character).base_actor.orient.heading;
  (in_stack_00000004->base_character).base_actor.orient.pitch =
       (in_stack_00000004->base_character).base_actor.orient.bank;
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  pCVar3 = in_stack_00000004 + 1;
  (pCVar3->base_character).cloth_data[0x3978] = '\x04';
  (pCVar3->base_character).cloth_data[0x3979] = '\0';
  (pCVar3->base_character).cloth_data[0x397a] = '\0';
  (pCVar3->base_character).cloth_data[0x397b] = '\0';
  iVar7 = 0;
  if (0 < *(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978)) {
    pcVar9 = in_stack_00000004[1].base_character.cloth_data + 0x39f4;
    do {
      if (*pcVar9 == '\0') {
        iVar6 = *(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978) + -1;
        *(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978) = iVar6;
        if (iVar7 < iVar6) {
          local_1c = (CKeyFramedModelInstance *)
                     (in_stack_00000004[1].base_character.cloth_data + iVar7 * 0x17c + 0x397c);
          local_18 = in_stack_00000004[1].base_character.cloth_data + iVar7 * 0x17c + 0x3b70;
          iVar6 = iVar7;
          do {
            core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(local_1c,local_18);
            iVar6 = iVar6 + 1;
            local_1c = local_1c + 1;
            local_18 = local_18 + 0x17c;
          } while (iVar6 < *(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978));
        }
      }
      else {
        core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
                  ((CKeyFramedModelInstance *)
                   (in_stack_00000004[1].base_character.cloth_data + iVar7 * 0x17c + 0x397c));
        pcVar9 = pcVar9 + 0x17c;
        iVar7 = iVar7 + 1;
      }
    } while (iVar7 < *(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978));
  }
  local_24 = 0;
  if (0 < *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc)) {
    fVar1 = _DAT_0065b5c8 * 12f;
    fVar2 = _DAT_0065b5c8 * -12f;
    pCVar10 = &in_stack_00000004[1].base_character.base_actor.orient;
    pfVar8 = &in_stack_00000004[1].base_character.base_actor.location.position.y;
    local_28 = (float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18);
    do {
      pcVar9 = in_stack_00000004[1].base_character.base_actor.actor_name + local_24 * 0x40 + 0x10;
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc70
                        (0,*(int *)(in_stack_00000004[1].base_character.cloth_data + 0x3978) + -1);
      fVar5 = fVar1 * (float)0.5;
      min_value = fVar2 * (float)0.5;
      *(int *)(pcVar9 + 4) = iVar7;
      fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(min_value,fVar5);
      pcVar9[0xc] = '\0';
      pcVar9[0xd] = '\0';
      pcVar9[0xe] = '\0';
      pcVar9[0xf] = '\0';
      *(float *)(pcVar9 + 8) = fVar4;
      fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(min_value,fVar5);
      *(float *)(pcVar9 + 0x10) = fVar5;
      pfVar8[2] = 0.0;
      pfVar8[1] = pfVar8[2];
      *pfVar8 = pfVar8[1];
      fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
      *(float *)(pcVar9 + 0x18) = fVar5;
      if (pCVar10 != (COrientation *)local_28) {
        pCVar10->pitch = pfVar8[-3];
        pCVar10->bank = pfVar8[-2];
        pCVar10->heading = ((CVector3f *)(pfVar8 + -1))->x;
      }
      pCVar10 = (COrientation *)((int)(pCVar10 + 5) + 4);
      pfVar8 = pfVar8 + 0x10;
      local_28 = local_28 + 0x10;
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc));
  }
  core_bugs_cpp_FUN_004272f0();
  in_stack_00000004[2].base_character.model.bone_transform.bone_world_matrices[0x43].m[1].x = -NAN;
  in_stack_00000004[2].base_character.model.bone_transform.bone_world_matrices[0x43].m[1].y = -NAN;
  (in_stack_00000004->base_character).base_actor.field16_0x100 = 1;
  in_stack_00000004[2].base_character.model.bone_transform.bone_world_matrices[0x43].m[2].x = 0.0;
  return;
}

// Name: core_moloch.cpp_FUN_005293b0
// Address: 005293b0
// Address Range: [[005293b0, 0052974a]]
// Convention: unknown
// Signature: undefined core_moloch.cpp_FUN_005293b0()

#include "nocturne.h"

/* Signature: byte actors_hero_moloch.cpp_FUN_005293b0(uint param_1, uint param_2)
    */

void core_moloch_cpp_FUN_005293b0(void)

{
  CLocation *pCVar1;
  CHero *pCVar2;
  CHero *pCVar3;
  float fVar4;
  CCharacter *pCVar5;
  CPathMap *this_ptr;
  int iVar6;
  CVector3f *pCVar7;
  uint uVar8;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_ffffff70;
  float local_74;
  float local_70;
  byte local_6c [12];
  float fStack_60;
  float fStack_50;
  CVector3f CStack_48;
  float local_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  uint local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_20 = 0x3e800000;
  local_24 = 0.7853982;
  pCVar2 = g_HeroActors[g_LocalHeroIndex];
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004[1].base_actor.actor_name + 8,0,0x2c);
  iVar6 = g_LocalHeroIndex;
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) != 0) &&
     (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 1)) {
    pCVar3 = g_HeroActors[g_LocalHeroIndex];
    pCVar1 = &(in_stack_00000004->base_actor).location;
    local_74 = (pCVar1->position).x - (pCVar3->base_character).base_actor.location.position.x;
    CStack_48.y = (pCVar2->base_character).base_actor.location.position.x - (pCVar1->position).x;
    CStack_48.z = (pCVar2->base_character).base_actor.location.position.y -
                  (in_stack_00000004->base_actor).location.position.y;
    local_3c = (pCVar2->base_character).base_actor.location.position.z -
               (in_stack_00000004->base_actor).location.position.z;
    local_70 = (in_stack_00000004->base_actor).location.position.y -
               (pCVar3->base_character).base_actor.location.position.y;
    local_6c._0_4_ =
         (in_stack_00000004->base_actor).location.position.z -
         (pCVar3->base_character).base_actor.location.position.z;
    if (&local_74 != &CStack_48.y) {
      local_70 = CStack_48.z;
      local_6c._0_4_ = local_3c;
      local_74 = CStack_48.y;
    }
    in_stack_00000004->field2_0x240c[0xc] = '\0';
    in_stack_00000004->field2_0x240c[0xd] = '\0';
    in_stack_00000004->field2_0x240c[0xe] = '\0';
    in_stack_00000004->field2_0x240c[0xf] = '\0';
    if (SQRT((float)local_6c._0_4_ * (float)local_6c._0_4_ +
             local_74 * local_74 + local_70 * local_70) <= (float)6) {
      iVar6 = (*(g_HeroActors[iVar6]->base_character).base_actor.vtable[1].processMeleeHit)
                        ((CDemonActor *)g_HeroActors[iVar6],in_stack_ffffff70);
      if ((iVar6 == 0) &&
         (uVar8 = core_charactr_cpp_CCharacter_FUN_0042ede0(in_stack_00000004), uVar8 != 0)) {
        if (uVar8 < 2) {
          pCVar5 = in_stack_00000004 + 1;
          (pCVar5->base_actor).actor_name[8] = '\x01';
          (pCVar5->base_actor).actor_name[9] = '\0';
          (pCVar5->base_actor).actor_name[10] = '\0';
          (pCVar5->base_actor).actor_name[0xb] = '\0';
        }
        else if (uVar8 == 2) {
          pCVar5 = in_stack_00000004 + 1;
          (pCVar5->base_actor).actor_name[0x10] = '\x01';
          (pCVar5->base_actor).actor_name[0x11] = '\0';
          (pCVar5->base_actor).actor_name[0x12] = '\0';
          (pCVar5->base_actor).actor_name[0x13] = '\0';
          pCVar5 = in_stack_00000004 + 1;
          (pCVar5->base_actor).actor_name[8] = '\x01';
          (pCVar5->base_actor).actor_name[9] = '\0';
          (pCVar5->base_actor).actor_name[10] = '\0';
          (pCVar5->base_actor).actor_name[0xb] = '\0';
        }
      }
    }
    else {
      this_ptr = (*((g_HeroActors[iVar6]->base_character).base_actor.vtable)->getPathMap)
                           ((CDemonActor *)g_HeroActors[iVar6]);
      iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr,&(in_stack_00000004->base_actor).location.position,
                         (CVector3f *)(local_6c + 8),(in_stack_00000004->base_actor).field7_0x6c);
      if (iVar6 != 0) {
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              (fStack_60 - (in_stack_00000004->base_actor).orient.bank);
        fVar4 = fStack_14 * (float)0.31830988619288902 * (float)4;
        local_24 = -fStack_1c;
        in_stack_00000004[1].base_actor.location.area_id = (int)fVar4;
        if (fVar4 < local_24) {
          in_stack_00000004[1].base_actor.location.area_id = (int)local_24;
        }
        if (fStack_1c < (float)in_stack_00000004[1].base_actor.location.area_id) {
          in_stack_00000004[1].base_actor.location.area_id = (int)fStack_1c;
        }
        pCVar5 = in_stack_00000004 + 1;
        (pCVar5->base_actor).actor_name[8] = '\x01';
        (pCVar5->base_actor).actor_name[9] = '\0';
        (pCVar5->base_actor).actor_name[10] = '\0';
        (pCVar5->base_actor).actor_name[0xb] = '\0';
      }
      in_stack_00000004->cloth_data[0x32c] = '\0';
      in_stack_00000004->cloth_data[0x32d] = '\0';
      in_stack_00000004->cloth_data[0x32e] = '\0';
      in_stack_00000004->cloth_data[0x32f] = '\0';
    }
    if (*(float *)(in_stack_00000004->field2_0x240c + 0xc) <= 0.0) {
      if (*(float *)(in_stack_00000004->field2_0x240c + 0xc) < 0.0) {
        in_stack_00000004->field2_0x240c[0xc] = '\0';
        in_stack_00000004->field2_0x240c[0xd] = '\0';
        in_stack_00000004->field2_0x240c[0xe] = '\0';
        in_stack_00000004->field2_0x240c[0xf] = '\0';
        in_stack_00000004[1].base_actor.location.area_id = (int)-fStack_18;
      }
    }
    else {
      in_stack_00000004->field2_0x240c[0xc] = '\0';
      in_stack_00000004->field2_0x240c[0xd] = '\0';
      in_stack_00000004->field2_0x240c[0xe] = '\0';
      in_stack_00000004->field2_0x240c[0xf] = '\0';
      in_stack_00000004[1].base_actor.location.area_id = (int)fStack_18;
    }
    fStack_30 = (pCVar2->base_character).base_actor.location.position.x -
                (in_stack_00000004->base_actor).location.position.x;
    fStack_2c = (pCVar2->base_character).base_actor.location.position.y -
                (in_stack_00000004->base_actor).location.position.y;
    fStack_28 = (pCVar2->base_character).base_actor.location.position.z -
                (in_stack_00000004->base_actor).location.position.z;
    if ((float *)local_6c != &fStack_30) {
      local_6c._0_4_ = fStack_30;
      local_6c._4_4_ = fStack_2c;
      local_6c._8_4_ = fStack_28;
    }
    pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_48,(CVector3f *)local_6c);
    if ((CVector3f *)local_6c != pCVar7) {
      local_6c._0_4_ = pCVar7->x;
      local_6c._4_4_ = pCVar7->y;
      local_6c._8_4_ = pCVar7->z;
    }
    fStack_50 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          ((float)local_6c._4_4_ - (in_stack_00000004->base_actor).orient.bank);
    if (fStack_1c < fStack_50) {
      fStack_50 = fStack_1c;
    }
    if (fStack_50 < -fStack_1c) {
      fStack_50 = -fStack_1c;
    }
    local_70 = fStack_50 - *(float *)(in_stack_00000004[2].cloth_data + 0x84ac);
    if (in_stack_00000008 * (float)3.1415926535000001 < local_70) {
      local_70 = in_stack_00000008 * (float)3.1415926535000001;
    }
    if (local_70 < in_stack_00000008 * (float)-3.1415926535000001) {
      local_70 = in_stack_00000008 * (float)-3.1415926535000001;
    }
    *(float *)(in_stack_00000004[2].cloth_data + 0x84ac) =
         *(float *)(in_stack_00000004[2].cloth_data + 0x84ac) + local_70;
  }
  return;
}

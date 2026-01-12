// Name: core_icepick.cpp_FUN_004f8c70
// Address: 004f8c70
// Address Range: [[004f8c70, 004f9378]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f8c70()

#include "nocturne.h"

/* Signature: byte actors_hero_icepick.cpp_FUN_004f8c70(uint param_1, uint
   param_2) */

void core_icepick_cpp_FUN_004f8c70(void)

{
  bool bVar1;
  CCharacter *pCVar2;
  int iVar3;
  CHero *pCVar4;
  CVector3f *pCVar5;
  float fVar6;
  SMotion *pSVar7;
  uint uVar8;
  float fVar9;
  BADSPACEBASE *in_ESP;
  CHero *pCVar10;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_ffffff48;
  float fStack_98;
  float fStack_8c;
  CVector3f CStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  byte local_6c [8];
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_28;
  float local_24;
  CPathMap *pCStack_20;
  float local_1c;
  float fStack_18;
  
  bVar1 = false;
  local_1c = 0.25;
  local_24 = 0.7853982;
  pCVar10 = g_HeroActors[g_LocalHeroIndex];
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004[1].base_actor.actor_name + 8,0,0x2c);
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) != 0) {
    pCVar4 = g_HeroActors[g_LocalHeroIndex];
    local_6c._0_4_ =
         (in_stack_00000004->base_actor).location.position.x -
         (pCVar4->base_character).base_actor.location.position.x;
    local_6c._4_4_ =
         (in_stack_00000004->base_actor).location.position.y -
         (pCVar4->base_character).base_actor.location.position.y;
    local_64 = (in_stack_00000004->base_actor).location.position.z -
               (pCVar4->base_character).base_actor.location.position.z;
    local_30 = SQRT(local_64 * local_64 +
                    (float)local_6c._0_4_ * (float)local_6c._0_4_ +
                    (float)local_6c._4_4_ * (float)local_6c._4_4_);
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3) {
      local_30 = 0.0;
    }
    local_28 = 20.0;
    iVar3 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].processMeleeHit)
                      ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_ffffff48);
    if (iVar3 != 0) {
      local_28 = 30.0;
    }
    if ((local_30 < local_28) &&
       ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 2 ||
        (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3)))) {
      fStack_3c = 9999.9;
      pCVar4 = (CHero *)core_hero_cpp_FUN_004f3960();
      if ((pCVar4 == (CHero *)0x0) || (local_28 <= fStack_3c)) {
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) {
          in_stack_00000004[1].base_actor.location.position.x = 1.4013e-45;
        }
      }
      else {
        bVar1 = true;
        pCVar10 = pCVar4;
      }
    }
    fStack_78 = (pCVar10->base_character).base_actor.location.position.x -
                (in_stack_00000004->base_actor).location.position.x;
    fStack_74 = (pCVar10->base_character).base_actor.location.position.y -
                (in_stack_00000004->base_actor).location.position.y;
    fStack_70 = (pCVar10->base_character).base_actor.location.position.z -
                (in_stack_00000004->base_actor).location.position.z;
    if ((float *)local_6c != &fStack_78) {
      local_6c._0_4_ = fStack_78;
      local_6c._4_4_ = fStack_74;
      local_64 = fStack_70;
    }
    fVar6 = SQRT(local_64 * local_64 +
                 (float)local_6c._0_4_ * (float)local_6c._0_4_ +
                 (float)local_6c._4_4_ * (float)local_6c._4_4_);
    in_stack_00000004->field2_0x240c[0xc] = '\0';
    in_stack_00000004->field2_0x240c[0xd] = '\0';
    in_stack_00000004->field2_0x240c[0xe] = '\0';
    in_stack_00000004->field2_0x240c[0xf] = '\0';
    fStack_18 = fVar6;
    if ((float)6 <= fVar6) {
      pCStack_20 = (CPathMap *)0x0;
      if (bVar1) {
        in_stack_00000004->cloth_data[0x32c] = '\0';
        in_stack_00000004->cloth_data[0x32d] = '\0';
        in_stack_00000004->cloth_data[0x32e] = '\0';
        in_stack_00000004->cloth_data[0x32f] = '\0';
      }
      else {
        pCStack_20 = (*((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable)->
                       getPathMap)((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
        iVar3 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
                  processMeleeHit)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_ffffff48);
        if ((iVar3 == 0) &&
           (uVar8 = core_charactr_cpp_CCharacter_FUN_0042ede0(in_stack_00000004), uVar8 != 0)) {
          if (uVar8 < 2) {
            pCVar2 = in_stack_00000004 + 1;
            (pCVar2->base_actor).actor_name[8] = '\x01';
            (pCVar2->base_actor).actor_name[9] = '\0';
            (pCVar2->base_actor).actor_name[10] = '\0';
            (pCVar2->base_actor).actor_name[0xb] = '\0';
          }
          else if (uVar8 == 2) {
            pCVar2 = in_stack_00000004 + 1;
            (pCVar2->base_actor).actor_name[0x10] = '\x01';
            (pCVar2->base_actor).actor_name[0x11] = '\0';
            (pCVar2->base_actor).actor_name[0x12] = '\0';
            (pCVar2->base_actor).actor_name[0x13] = '\0';
            pCVar2 = in_stack_00000004 + 1;
            (pCVar2->base_actor).actor_name[8] = '\x01';
            (pCVar2->base_actor).actor_name[9] = '\0';
            (pCVar2->base_actor).actor_name[10] = '\0';
            (pCVar2->base_actor).actor_name[0xb] = '\0';
          }
        }
      }
      if (pCStack_20 == (CPathMap *)0x0) {
        pCStack_20 = (CPathMap *)core_path_cpp_FUN_00548500();
      }
      iVar3 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (pCStack_20,&(in_stack_00000004->base_actor).location.position,&CStack_48,
                         (in_stack_00000004->base_actor).field7_0x6c);
      if (iVar3 != 0) {
        fVar9 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (CStack_48.y - (in_stack_00000004->base_actor).orient.bank);
        fVar9 = fVar9 * (float)0.31830988619288902 * (float)4;
        fStack_38 = -local_1c;
        in_stack_00000004[1].base_actor.location.area_id = (int)fVar9;
        if (fVar9 < fStack_38) {
          in_stack_00000004[1].base_actor.location.area_id = (int)fStack_38;
        }
        if (local_1c < (float)in_stack_00000004[1].base_actor.location.area_id) {
          in_stack_00000004[1].base_actor.location.area_id = (int)local_1c;
        }
        if (((float)10 <= fVar6) || (bVar1)) {
          pCVar2 = in_stack_00000004 + 1;
          (pCVar2->base_actor).actor_name[0x10] = '\x01';
          (pCVar2->base_actor).actor_name[0x11] = '\0';
          (pCVar2->base_actor).actor_name[0x12] = '\0';
          (pCVar2->base_actor).actor_name[0x13] = '\0';
          pCVar2 = in_stack_00000004 + 1;
          (pCVar2->base_actor).actor_name[8] = '\x01';
          (pCVar2->base_actor).actor_name[9] = '\0';
          (pCVar2->base_actor).actor_name[10] = '\0';
          (pCVar2->base_actor).actor_name[0xb] = '\0';
        }
        else {
          pCVar2 = in_stack_00000004 + 1;
          (pCVar2->base_actor).actor_name[8] = '\x01';
          (pCVar2->base_actor).actor_name[9] = '\0';
          (pCVar2->base_actor).actor_name[10] = '\0';
          (pCVar2->base_actor).actor_name[0xb] = '\0';
        }
      }
    }
    else {
      if (bVar1) {
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) {
          in_stack_00000004[1].base_actor.location.position.x = 1.4013e-45;
        }
        else {
          pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&(in_stack_00000004->model).motion_controller);
          if ((pSVar7->state_index != 2) && (pSVar7->state_index != 1)) {
            pCVar2 = in_stack_00000004 + 1;
            (pCVar2->base_actor).actor_name[0x14] = '\x01';
            (pCVar2->base_actor).actor_name[0x15] = '\0';
            (pCVar2->base_actor).actor_name[0x16] = '\0';
            (pCVar2->base_actor).actor_name[0x17] = '\0';
          }
        }
        in_stack_00000004->cloth_data[0x32c] = '\0';
        in_stack_00000004->cloth_data[0x32d] = '\0';
        in_stack_00000004->cloth_data[0x32e] = '\0';
        in_stack_00000004->cloth_data[0x32f] = '\0';
      }
      else {
        pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(in_stack_00000004->model).motion_controller);
        if ((pSVar7->state_index == 10) && (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0)
           ) {
          in_stack_00000004[1].base_actor.location.position.x = 1.4013e-45;
        }
        iVar3 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
                  processMeleeHit)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_ffffff48);
        if ((iVar3 == 0) &&
           (uVar8 = core_charactr_cpp_CCharacter_FUN_0042ede0(in_stack_00000004), uVar8 != 0)) {
          if (uVar8 < 2) {
            pCVar2 = in_stack_00000004 + 1;
            (pCVar2->base_actor).actor_name[8] = '\x01';
            (pCVar2->base_actor).actor_name[9] = '\0';
            (pCVar2->base_actor).actor_name[10] = '\0';
            (pCVar2->base_actor).actor_name[0xb] = '\0';
          }
          else if (uVar8 == 2) {
            pCVar2 = in_stack_00000004 + 1;
            (pCVar2->base_actor).actor_name[0x10] = '\x01';
            (pCVar2->base_actor).actor_name[0x11] = '\0';
            (pCVar2->base_actor).actor_name[0x12] = '\0';
            (pCVar2->base_actor).actor_name[0x13] = '\0';
            pCVar2 = in_stack_00000004 + 1;
            (pCVar2->base_actor).actor_name[8] = '\x01';
            (pCVar2->base_actor).actor_name[9] = '\0';
            (pCVar2->base_actor).actor_name[10] = '\0';
            (pCVar2->base_actor).actor_name[0xb] = '\0';
          }
        }
      }
      if (bVar1) {
        pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_54,(CVector3f *)local_6c);
        fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar5->y - (in_stack_00000004->base_actor).orient.bank);
        fVar6 = fVar6 * (float)0.31830988619288902 * (float)4;
        fStack_34 = -local_1c;
        in_stack_00000004[1].base_actor.location.area_id = (int)fVar6;
        if (fVar6 < fStack_34) {
          in_stack_00000004[1].base_actor.location.area_id = (int)fStack_34;
        }
        if (local_1c < (float)in_stack_00000004[1].base_actor.location.area_id) {
          in_stack_00000004[1].base_actor.location.area_id = (int)local_1c;
        }
        fVar6 = (float)in_stack_00000004[1].base_actor.location.area_id;
        if ((((float)-0.25 < fVar6) && ((double)fVar6 < 0.25)) &&
           (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0)) {
          in_stack_00000004[1].base_actor.location.area_id = 0;
        }
      }
    }
    if (*(float *)(in_stack_00000004->field2_0x240c + 0xc) <= 0.0) {
      if (*(float *)(in_stack_00000004->field2_0x240c + 0xc) < 0.0) {
        in_stack_00000004->field2_0x240c[0xc] = '\0';
        in_stack_00000004->field2_0x240c[0xd] = '\0';
        in_stack_00000004->field2_0x240c[0xe] = '\0';
        in_stack_00000004->field2_0x240c[0xf] = '\0';
        in_stack_00000004[1].base_actor.location.area_id = (int)-local_1c;
      }
    }
    else {
      in_stack_00000004->field2_0x240c[0xc] = '\0';
      in_stack_00000004->field2_0x240c[0xd] = '\0';
      in_stack_00000004->field2_0x240c[0xe] = '\0';
      in_stack_00000004->field2_0x240c[0xf] = '\0';
      in_stack_00000004[1].base_actor.location.area_id = (int)local_1c;
    }
    fStack_60 = (pCVar10->base_character).base_actor.location.position.x -
                (in_stack_00000004->base_actor).location.position.x;
    fStack_5c = (pCVar10->base_character).base_actor.location.position.y -
                (in_stack_00000004->base_actor).location.position.y;
    fStack_58 = (pCVar10->base_character).base_actor.location.position.z -
                (in_stack_00000004->base_actor).location.position.z;
    if ((float *)local_6c != &fStack_60) {
      local_6c._0_4_ = fStack_60;
      local_6c._4_4_ = fStack_5c;
      local_64 = fStack_58;
    }
    pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_84,(CVector3f *)local_6c);
    if ((CVector3f *)(local_6c + 4) != pCVar5) {
      local_6c._0_4_ = pCVar5->x;
      local_6c._4_4_ = pCVar5->y;
      local_64 = pCVar5->z;
    }
    fStack_8c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          ((float)local_6c._4_4_ - (in_stack_00000004->base_actor).orient.bank);
    if (local_24 < fStack_8c) {
      fStack_8c = local_24;
    }
    if (fStack_8c < -local_24) {
      fStack_8c = -local_24;
    }
    fStack_98 = fStack_8c - *(float *)(in_stack_00000004[2].cloth_data + 0x5508);
    if (in_stack_00000008 * (float)3.1415926535000001 < fStack_98) {
      fStack_98 = in_stack_00000008 * (float)3.1415926535000001;
    }
    if (fStack_98 < in_stack_00000008 * (float)-3.1415926535000001) {
      fStack_98 = in_stack_00000008 * (float)-3.1415926535000001;
    }
    *(float *)(in_stack_00000004[2].cloth_data + 0x5508) =
         *(float *)(in_stack_00000004[2].cloth_data + 0x5508) + fStack_98;
  }
  return;
}

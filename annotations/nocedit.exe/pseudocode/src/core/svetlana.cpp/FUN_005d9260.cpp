// Name: core_svetlana.cpp_FUN_005d9260
// Address: 005d9260
// Address Range: [[005d9260, 005d9968]]
// Convention: unknown
// Signature: undefined core_svetlana.cpp_FUN_005d9260()

#include "nocturne.h"

/* Signature: byte actors_hero_svetlana.cpp_FUN_005d9260(uint param_1, uint
   param_2) */

void core_svetlana_cpp_FUN_005d9260(void)

{
  bool bVar1;
  CCharacter *pCVar2;
  int iVar3;
  CHero *pCVar4;
  CVector3f *pCVar5;
  float fVar6;
  SMotion *pSVar7;
  uint uVar8;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  CHero *pCVar9;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_ffffff4c;
  int in_stack_ffffff50;
  float fStack_88;
  float fStack_84;
  CVector3f CStack_78;
  float local_6c;
  float local_68;
  float local_64;
  byte auStack_60 [8];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  byte auStack_48 [12];
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float local_28;
  float local_24;
  CPathMap *pCStack_20;
  CPathMap *local_1c;
  float fStack_14;
  
  bVar1 = false;
  local_1c = (CPathMap *)0x3e800000;
  local_24 = 0.7853982;
  pCVar9 = g_HeroActors[g_LocalHeroIndex];
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004[1].base_actor.actor_name + 8,0,0x2c);
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) != 0) {
    pCVar4 = g_HeroActors[g_LocalHeroIndex];
    local_68 = (in_stack_00000004->base_actor).location.position.x -
               (pCVar4->base_character).base_actor.location.position.x;
    local_64 = (in_stack_00000004->base_actor).location.position.y -
               (pCVar4->base_character).base_actor.location.position.y;
    auStack_60._0_4_ =
         (in_stack_00000004->base_actor).location.position.z -
         (pCVar4->base_character).base_actor.location.position.z;
    fStack_2c = SQRT((float)auStack_60._0_4_ * (float)auStack_60._0_4_ +
                     local_68 * local_68 + local_64 * local_64);
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3) {
      fStack_2c = 0.0;
    }
    local_24 = 20.0;
    iVar3 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].processMeleeHit)
                      ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_ffffff4c);
    if (iVar3 != 0) {
      local_28 = 30.0;
    }
    if ((local_30 < local_28) &&
       ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 2 ||
        (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3)))) {
      fStack_3c = 9999.9;
      pCVar4 = (CHero *)core_hero_cpp_FUN_004f3960();
      if ((pCVar4 == (CHero *)0x0) || (local_24 <= fStack_38)) {
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) {
          in_stack_00000004[1].base_actor.location.position.x = 1.4013e-45;
        }
      }
      else {
        bVar1 = true;
        pCVar9 = pCVar4;
      }
    }
    CStack_78.y = (pCVar9->base_character).base_actor.location.position.x -
                  (in_stack_00000004->base_actor).location.position.x;
    CStack_78.z = (pCVar9->base_character).base_actor.location.position.y -
                  (in_stack_00000004->base_actor).location.position.y;
    local_6c = (pCVar9->base_character).base_actor.location.position.z -
               (in_stack_00000004->base_actor).location.position.z;
    if (&local_68 != &CStack_78.y) {
      local_68 = CStack_78.y;
      local_64 = CStack_78.z;
      auStack_60._0_4_ = local_6c;
    }
    fStack_14 = SQRT((float)auStack_60._0_4_ * (float)auStack_60._0_4_ +
                     local_68 * local_68 + local_64 * local_64);
    in_stack_00000004->field2_0x240c[0xc] = '\0';
    in_stack_00000004->field2_0x240c[0xd] = '\0';
    in_stack_00000004->field2_0x240c[0xe] = '\0';
    in_stack_00000004->field2_0x240c[0xf] = '\0';
    if ((float)6 <= fStack_14) {
      local_1c = (CPathMap *)0x0;
      if (bVar1) {
        in_stack_00000004->cloth_data[0x32c] = '\0';
        in_stack_00000004->cloth_data[0x32d] = '\0';
        in_stack_00000004->cloth_data[0x32e] = '\0';
        in_stack_00000004->cloth_data[0x32f] = '\0';
      }
      else {
        pCVar4 = g_HeroActors[g_LocalHeroIndex];
        pCStack_20 = (*((pCVar4->base_character).base_actor.vtable)->getPathMap)
                               ((CDemonActor *)pCVar4);
        iVar3 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
                  processMeleeHit)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],(int)pCVar4);
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
      if (local_1c == (CPathMap *)0x0) {
        local_1c = (CPathMap *)core_path_cpp_FUN_00548500();
      }
      iVar3 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (local_1c,&(in_stack_00000004->base_actor).location.position,
                         (CVector3f *)(auStack_48 + 4),(in_stack_00000004->base_actor).field7_0x6c);
      if (iVar3 != 0) {
        fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (fStack_3c - (in_stack_00000004->base_actor).orient.bank);
        fVar6 = fVar6 * (float)0.31830988619288902 * (float)4;
        fStack_2c = -unaff_EBP;
        in_stack_00000004[1].base_actor.location.area_id = (int)fVar6;
        if (fVar6 < fStack_2c) {
          in_stack_00000004[1].base_actor.location.area_id = (int)fStack_2c;
        }
        if (unaff_EBP < (float)in_stack_00000004[1].base_actor.location.area_id) {
          in_stack_00000004[1].base_actor.location.area_id = (int)unaff_EBP;
        }
        if (((float)10 <= fStack_88) || (bVar1)) {
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
                             ((CMotionController *)0x5d96de);
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
                  processMeleeHit)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_ffffff50);
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
                           ((CVector3f *)auStack_48,(CVector3f *)auStack_60);
        fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar5->y - (in_stack_00000004->base_actor).orient.bank);
        fVar6 = fVar6 * (float)0.31830988619288902 * (float)4;
        local_28 = -unaff_EBP;
        in_stack_00000004[1].base_actor.location.area_id = (int)fVar6;
        if (fVar6 < local_28) {
          in_stack_00000004[1].base_actor.location.area_id = (int)local_28;
        }
        if (unaff_EBP < (float)in_stack_00000004[1].base_actor.location.area_id) {
          in_stack_00000004[1].base_actor.location.area_id = (int)unaff_EBP;
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
        in_stack_00000004[1].base_actor.location.area_id = (int)-unaff_EBP;
      }
    }
    else {
      in_stack_00000004->field2_0x240c[0xc] = '\0';
      in_stack_00000004->field2_0x240c[0xd] = '\0';
      in_stack_00000004->field2_0x240c[0xe] = '\0';
      in_stack_00000004->field2_0x240c[0xf] = '\0';
      in_stack_00000004[1].base_actor.location.area_id = (int)unaff_EBP;
    }
    fStack_54 = (pCVar9->base_character).base_actor.location.position.x -
                (in_stack_00000004->base_actor).location.position.x;
    fStack_50 = (pCVar9->base_character).base_actor.location.position.y -
                (in_stack_00000004->base_actor).location.position.y;
    fStack_4c = (pCVar9->base_character).base_actor.location.position.z -
                (in_stack_00000004->base_actor).location.position.z;
    if ((float *)auStack_60 != &fStack_54) {
      auStack_60._0_4_ = fStack_54;
      auStack_60._4_4_ = fStack_50;
      fStack_58 = fStack_4c;
    }
    pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_78,(CVector3f *)auStack_60);
    if ((CVector3f *)(auStack_60 + 4) != pCVar5) {
      auStack_60._4_4_ = pCVar5->x;
      fStack_58 = pCVar5->y;
      fStack_54 = pCVar5->z;
    }
    CStack_78.x = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                            (fStack_58 - (in_stack_00000004->base_actor).orient.bank);
    if (unaff_EBP < CStack_78.x) {
      CStack_78.x = unaff_EBP;
    }
    if (CStack_78.x < -unaff_EBP) {
      CStack_78.x = -unaff_EBP;
    }
    fStack_84 = CStack_78.x - *(float *)(in_stack_00000004[0xd].cloth_data + 0x2658);
    if (in_stack_00000008 * (float)3.1415926535000001 < fStack_84) {
      fStack_84 = in_stack_00000008 * (float)3.1415926535000001;
    }
    if (fStack_84 < in_stack_00000008 * (float)-3.1415926535000001) {
      fStack_84 = in_stack_00000008 * (float)-3.1415926535000001;
    }
    *(float *)(in_stack_00000004[0xd].cloth_data + 0x2658) =
         *(float *)(in_stack_00000004[0xd].cloth_data + 0x2658) + fStack_84;
  }
  return;
}

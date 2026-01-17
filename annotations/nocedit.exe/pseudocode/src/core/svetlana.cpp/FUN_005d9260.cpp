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
  float fVar1;
  bool bVar2;
  CCharacter *pCVar3;
  int iVar4;
  CHero *pCVar5;
  CVector3f *pCVar6;
  float fVar7;
  SMotion *pSVar8;
  uint uVar9;
  float unaff_ESI;
  CPathMap *unaff_EDI;
  CHero *pCVar10;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_ffffff48;
  int in_stack_ffffff50;
  int in_stack_ffffff54;
  float fStack_84;
  float fStack_80;
  float fStack_78;
  CVector3f CStack_70;
  CVector3f local_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  float local_28;
  float local_24;
  float fStack_20;
  uint local_1c;
  uint uStack_18;
  CPathMap *pCStack_14;
  
  bVar2 = false;
  local_1c = 0x3e800000;
  local_24 = 0.7853982;
  pCVar10 = g_HeroActors[g_LocalHeroIndex];
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004[1].base_actor.actor_name + 8,0,0x2c);
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) != 0) {
    pCVar5 = g_HeroActors[g_LocalHeroIndex];
    CStack_70.y = (in_stack_00000004->base_actor).location.position.x -
                  (pCVar5->base_character).base_actor.location.position.x;
    CStack_70.z = (in_stack_00000004->base_actor).location.position.y -
                  (pCVar5->base_character).base_actor.location.position.y;
    local_64.x = (in_stack_00000004->base_actor).location.position.z -
                 (pCVar5->base_character).base_actor.location.position.z;
    CStack_34.y = SQRT(local_64.x * local_64.x +
                       CStack_70.y * CStack_70.y + CStack_70.z * CStack_70.z);
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3) {
      CStack_34.y = 0.0;
    }
    local_28 = 20.0;
    iVar4 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].processMeleeHit)
                      ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_ffffff48);
    if (iVar4 != 0) {
      fStack_20 = 30.0;
    }
    if ((local_28 < fStack_20) &&
       ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 2 ||
        (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3)))) {
      CStack_34.x = 9999.9;
      pCVar5 = (CHero *)core_hero_cpp_FUN_004f3960();
      if ((pCVar5 == (CHero *)0x0) || (fStack_20 <= CStack_34.x)) {
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) {
          in_stack_00000004[1].base_actor.location.position.x = 1.4013e-45;
        }
      }
      else {
        bVar2 = true;
        pCVar10 = pCVar5;
      }
    }
    CStack_70.x = (pCVar10->base_character).base_actor.location.position.x -
                  (in_stack_00000004->base_actor).location.position.x;
    CStack_70.y = (pCVar10->base_character).base_actor.location.position.y -
                  (in_stack_00000004->base_actor).location.position.y;
    CStack_70.z = (pCVar10->base_character).base_actor.location.position.z -
                  (in_stack_00000004->base_actor).location.position.z;
    if (&local_64 != &CStack_70) {
      local_64.x = CStack_70.x;
      local_64.y = CStack_70.y;
      local_64.z = CStack_70.z;
    }
    fVar1 = SQRT(local_64.z * local_64.z + local_64.x * local_64.x + local_64.y * local_64.y);
    in_stack_00000004->field2_0x240c[0xc] = '\0';
    in_stack_00000004->field2_0x240c[0xd] = '\0';
    in_stack_00000004->field2_0x240c[0xe] = '\0';
    in_stack_00000004->field2_0x240c[0xf] = '\0';
    if ((float)6 <= fVar1) {
      uStack_18 = 0;
      if (bVar2) {
        in_stack_00000004->cloth_data[0x32c] = '\0';
        in_stack_00000004->cloth_data[0x32d] = '\0';
        in_stack_00000004->cloth_data[0x32e] = '\0';
        in_stack_00000004->cloth_data[0x32f] = '\0';
      }
      else {
        pCStack_14 = (*((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable)->
                       getPathMap)((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
        iVar4 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
                  processMeleeHit)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_ffffff54);
        if ((iVar4 == 0) &&
           (uVar9 = core_charactr_cpp_CCharacter_FUN_0042ede0(in_stack_00000004), uVar9 != 0)) {
          if (uVar9 < 2) {
            pCVar3 = in_stack_00000004 + 1;
            (pCVar3->base_actor).actor_name[8] = '\x01';
            (pCVar3->base_actor).actor_name[9] = '\0';
            (pCVar3->base_actor).actor_name[10] = '\0';
            (pCVar3->base_actor).actor_name[0xb] = '\0';
          }
          else if (uVar9 == 2) {
            pCVar3 = in_stack_00000004 + 1;
            (pCVar3->base_actor).actor_name[0x10] = '\x01';
            (pCVar3->base_actor).actor_name[0x11] = '\0';
            (pCVar3->base_actor).actor_name[0x12] = '\0';
            (pCVar3->base_actor).actor_name[0x13] = '\0';
            pCVar3 = in_stack_00000004 + 1;
            (pCVar3->base_actor).actor_name[8] = '\x01';
            (pCVar3->base_actor).actor_name[9] = '\0';
            (pCVar3->base_actor).actor_name[10] = '\0';
            (pCVar3->base_actor).actor_name[0xb] = '\0';
          }
        }
      }
      if (unaff_EDI == (CPathMap *)0x0) {
        unaff_EDI = (CPathMap *)core_path_cpp_FUN_00548500();
      }
      iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (unaff_EDI,&(in_stack_00000004->base_actor).location.position,&CStack_34,
                         (in_stack_00000004->base_actor).field7_0x6c);
      if (iVar4 != 0) {
        fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (CStack_34.y - (in_stack_00000004->base_actor).orient.bank);
        fVar7 = fVar7 * (float)0.31830988619288902 * (float)4;
        local_24 = -unaff_ESI;
        in_stack_00000004[1].base_actor.location.area_id = (int)fVar7;
        if (fVar7 < local_24) {
          in_stack_00000004[1].base_actor.location.area_id = (int)local_24;
        }
        if (unaff_ESI < (float)in_stack_00000004[1].base_actor.location.area_id) {
          in_stack_00000004[1].base_actor.location.area_id = (int)unaff_ESI;
        }
        if (((float)10 <= fStack_80) || (bVar2)) {
          pCVar3 = in_stack_00000004 + 1;
          (pCVar3->base_actor).actor_name[0x10] = '\x01';
          (pCVar3->base_actor).actor_name[0x11] = '\0';
          (pCVar3->base_actor).actor_name[0x12] = '\0';
          (pCVar3->base_actor).actor_name[0x13] = '\0';
          pCVar3 = in_stack_00000004 + 1;
          (pCVar3->base_actor).actor_name[8] = '\x01';
          (pCVar3->base_actor).actor_name[9] = '\0';
          (pCVar3->base_actor).actor_name[10] = '\0';
          (pCVar3->base_actor).actor_name[0xb] = '\0';
        }
        else {
          pCVar3 = in_stack_00000004 + 1;
          (pCVar3->base_actor).actor_name[8] = '\x01';
          (pCVar3->base_actor).actor_name[9] = '\0';
          (pCVar3->base_actor).actor_name[10] = '\0';
          (pCVar3->base_actor).actor_name[0xb] = '\0';
        }
      }
    }
    else {
      if (bVar2) {
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) {
          in_stack_00000004[1].base_actor.location.position.x = 1.4013e-45;
        }
        else {
          pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&(in_stack_00000004->model).motion_controller);
          if ((pSVar8->state_index != 2) && (pSVar8->state_index != 1)) {
            pCVar3 = in_stack_00000004 + 1;
            (pCVar3->base_actor).actor_name[0x14] = '\x01';
            (pCVar3->base_actor).actor_name[0x15] = '\0';
            (pCVar3->base_actor).actor_name[0x16] = '\0';
            (pCVar3->base_actor).actor_name[0x17] = '\0';
          }
        }
        in_stack_00000004->cloth_data[0x32c] = '\0';
        in_stack_00000004->cloth_data[0x32d] = '\0';
        in_stack_00000004->cloth_data[0x32e] = '\0';
        in_stack_00000004->cloth_data[0x32f] = '\0';
      }
      else {
        pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(in_stack_00000004->model).motion_controller);
        if ((pSVar8->state_index == 10) && (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0)
           ) {
          in_stack_00000004[1].base_actor.location.position.x = 1.4013e-45;
        }
        iVar4 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
                  processMeleeHit)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_ffffff50);
        if ((iVar4 == 0) &&
           (uVar9 = core_charactr_cpp_CCharacter_FUN_0042ede0(in_stack_00000004), uVar9 != 0)) {
          if (uVar9 < 2) {
            pCVar3 = in_stack_00000004 + 1;
            (pCVar3->base_actor).actor_name[8] = '\x01';
            (pCVar3->base_actor).actor_name[9] = '\0';
            (pCVar3->base_actor).actor_name[10] = '\0';
            (pCVar3->base_actor).actor_name[0xb] = '\0';
          }
          else if (uVar9 == 2) {
            pCVar3 = in_stack_00000004 + 1;
            (pCVar3->base_actor).actor_name[0x10] = '\x01';
            (pCVar3->base_actor).actor_name[0x11] = '\0';
            (pCVar3->base_actor).actor_name[0x12] = '\0';
            (pCVar3->base_actor).actor_name[0x13] = '\0';
            pCVar3 = in_stack_00000004 + 1;
            (pCVar3->base_actor).actor_name[8] = '\x01';
            (pCVar3->base_actor).actor_name[9] = '\0';
            (pCVar3->base_actor).actor_name[10] = '\0';
            (pCVar3->base_actor).actor_name[0xb] = '\0';
          }
        }
      }
      if (bVar2) {
        pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_40,&CStack_58);
        fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar6->y - (in_stack_00000004->base_actor).orient.bank);
        fVar7 = fVar7 * (float)0.31830988619288902 * (float)4;
        fStack_20 = -unaff_ESI;
        in_stack_00000004[1].base_actor.location.area_id = (int)fVar7;
        if (fVar7 < fStack_20) {
          in_stack_00000004[1].base_actor.location.area_id = (int)fStack_20;
        }
        if (unaff_ESI < (float)in_stack_00000004[1].base_actor.location.area_id) {
          in_stack_00000004[1].base_actor.location.area_id = (int)unaff_ESI;
        }
        fVar7 = (float)in_stack_00000004[1].base_actor.location.area_id;
        if ((((float)-0.25 < fVar7) && ((double)fVar7 < 0.25)) &&
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
        in_stack_00000004[1].base_actor.location.area_id = (int)-unaff_ESI;
      }
    }
    else {
      in_stack_00000004->field2_0x240c[0xc] = '\0';
      in_stack_00000004->field2_0x240c[0xd] = '\0';
      in_stack_00000004->field2_0x240c[0xe] = '\0';
      in_stack_00000004->field2_0x240c[0xf] = '\0';
      in_stack_00000004[1].base_actor.location.area_id = (int)unaff_ESI;
    }
    CStack_4c.x = (pCVar10->base_character).base_actor.location.position.x -
                  (in_stack_00000004->base_actor).location.position.x;
    CStack_4c.y = (pCVar10->base_character).base_actor.location.position.y -
                  (in_stack_00000004->base_actor).location.position.y;
    CStack_4c.z = (pCVar10->base_character).base_actor.location.position.z -
                  (in_stack_00000004->base_actor).location.position.z;
    if (&CStack_58 != &CStack_4c) {
      CStack_58.x = CStack_4c.x;
      CStack_58.y = CStack_4c.y;
      CStack_58.z = CStack_4c.z;
    }
    pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_70,&CStack_58);
    if (&CStack_58 != pCVar6) {
      CStack_58.x = pCVar6->x;
      CStack_58.y = pCVar6->y;
      CStack_58.z = pCVar6->z;
    }
    fStack_78 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (CStack_58.y - (in_stack_00000004->base_actor).orient.bank);
    if (fVar1 < fStack_78) {
      fStack_78 = fVar1;
    }
    if (fStack_78 < -fVar1) {
      fStack_78 = -fVar1;
    }
    fStack_84 = fStack_78 - *(float *)(in_stack_00000004[0xd].cloth_data + 0x2658);
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

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
  CPathMap *this_ptr;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float unaff_EDI;
  CHero *pCVar10;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_ffffff4c;
  int in_stack_ffffff54;
  float fStack_70;
  float local_6c;
  CVector3f CStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  byte auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  byte local_30 [12];
  float local_24;
  float fStack_20;
  CPathMap *local_1c;
  float fStack_18;
  float fStack_14;
  
  bVar2 = false;
  local_1c = (CPathMap *)0x3e800000;
  local_24 = 0.7853982;
  pCVar10 = g_HeroActors[g_LocalHeroIndex];
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004[1].base_actor.actor_name + 8,0,0x2c);
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) != 0) {
    pCVar5 = g_HeroActors[g_LocalHeroIndex];
    fVar7 = (in_stack_00000004->base_actor).location.position.x -
            (pCVar5->base_character).base_actor.location.position.x;
    fVar1 = (in_stack_00000004->base_actor).location.position.y -
            (pCVar5->base_character).base_actor.location.position.y;
    CStack_60.x = (in_stack_00000004->base_actor).location.position.z -
                  (pCVar5->base_character).base_actor.location.position.z;
    local_30._4_4_ = SQRT(CStack_60.x * CStack_60.x + fVar7 * fVar7 + fVar1 * fVar1);
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3) {
      local_30._4_4_ = 0.0;
    }
    local_24 = 20.0;
    iVar4 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].processMeleeHit)
                      ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_ffffff4c);
    if (iVar4 != 0) {
      unaff_EBP = 30.0;
    }
    if ((fStack_18 < unaff_EBP) &&
       ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 2 ||
        (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3)))) {
      local_24 = 9999.9;
      in_stack_ffffff54 = 0x5d9383;
      pCVar5 = (CHero *)core_hero_cpp_FUN_004f3960();
      if ((pCVar5 == (CHero *)0x0) || (unaff_EDI <= fStack_20)) {
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) {
          in_stack_00000004[1].base_actor.location.position.x = 1.4013e-45;
        }
      }
      else {
        bVar2 = true;
        pCVar10 = pCVar5;
      }
    }
    CStack_60.y = (pCVar10->base_character).base_actor.location.position.x -
                  (in_stack_00000004->base_actor).location.position.x;
    CStack_60.z = (pCVar10->base_character).base_actor.location.position.y -
                  (in_stack_00000004->base_actor).location.position.y;
    fStack_54 = (pCVar10->base_character).base_actor.location.position.z -
                (in_stack_00000004->base_actor).location.position.z;
    if (&fStack_50 != &CStack_60.y) {
      fStack_50 = CStack_60.y;
      fStack_4c = CStack_60.z;
      auStack_48._0_4_ = fStack_54;
    }
    in_stack_00000004->field2_0x240c[0xc] = '\0';
    in_stack_00000004->field2_0x240c[0xd] = '\0';
    in_stack_00000004->field2_0x240c[0xe] = '\0';
    in_stack_00000004->field2_0x240c[0xf] = '\0';
    if ((float)6 <=
        SQRT((float)auStack_48._0_4_ * (float)auStack_48._0_4_ +
             fStack_50 * fStack_50 + fStack_4c * fStack_4c)) {
      if (bVar2) {
        in_stack_00000004->cloth_data[0x32c] = '\0';
        in_stack_00000004->cloth_data[0x32d] = '\0';
        in_stack_00000004->cloth_data[0x32e] = '\0';
        in_stack_00000004->cloth_data[0x32f] = '\0';
      }
      else {
        local_1c = (*((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable)->
                     getPathMap)((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
        iVar4 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
                  processMeleeHit)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_ffffff4c);
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
      this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
      iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr,&(in_stack_00000004->base_actor).location.position,
                         (CVector3f *)(local_30 + 4),(in_stack_00000004->base_actor).field7_0x6c);
      if (iVar4 != 0) {
        fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_24 - (in_stack_00000004->base_actor).orient.bank);
        fVar7 = fVar7 * (float)0.31830988619288902 * (float)4;
        fStack_14 = -in_stack_00000008;
        in_stack_00000004[1].base_actor.location.area_id = (int)fVar7;
        if (fVar7 < fStack_14) {
          in_stack_00000004[1].base_actor.location.area_id = (int)fStack_14;
        }
        if (in_stack_00000008 < (float)in_stack_00000004[1].base_actor.location.area_id) {
          in_stack_00000004[1].base_actor.location.area_id = (int)in_stack_00000008;
        }
        if (((float)10 <= fStack_70) || (bVar2)) {
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
      if (bVar2) {
        pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           ((CVector3f *)local_30,(CVector3f *)auStack_48);
        fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar6->y - (in_stack_00000004->base_actor).orient.bank);
        fVar7 = fVar7 * (float)0.31830988619288902 * (float)4;
        in_stack_00000004[1].base_actor.location.area_id = (int)fVar7;
        if (fVar7 < -in_stack_00000008) {
          in_stack_00000004[1].base_actor.location.area_id = (int)-in_stack_00000008;
        }
        if (in_stack_00000008 < (float)in_stack_00000004[1].base_actor.location.area_id) {
          in_stack_00000004[1].base_actor.location.area_id = (int)in_stack_00000008;
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
        in_stack_00000004[1].base_actor.location.area_id = (int)-in_stack_00000008;
      }
    }
    else {
      in_stack_00000004->field2_0x240c[0xc] = '\0';
      in_stack_00000004->field2_0x240c[0xd] = '\0';
      in_stack_00000004->field2_0x240c[0xe] = '\0';
      in_stack_00000004->field2_0x240c[0xf] = '\0';
      in_stack_00000004[1].base_actor.location.area_id = (int)in_stack_00000008;
    }
    fStack_3c = (pCVar10->base_character).base_actor.location.position.x -
                (in_stack_00000004->base_actor).location.position.x;
    fStack_38 = (pCVar10->base_character).base_actor.location.position.y -
                (in_stack_00000004->base_actor).location.position.y;
    fStack_34 = (pCVar10->base_character).base_actor.location.position.z -
                (in_stack_00000004->base_actor).location.position.z;
    if ((float *)auStack_48 != &fStack_3c) {
      auStack_48._0_4_ = fStack_3c;
      auStack_48._4_4_ = fStack_38;
      fStack_40 = fStack_34;
    }
    pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_60,(CVector3f *)auStack_48);
    if ((CVector3f *)(auStack_48 + 4) != pCVar6) {
      auStack_48._4_4_ = pCVar6->x;
      fStack_40 = pCVar6->y;
      fStack_3c = pCVar6->z;
    }
    CStack_60.x = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                            (fStack_40 - (in_stack_00000004->base_actor).orient.bank);
    if (in_stack_00000008 < CStack_60.x) {
      CStack_60.x = in_stack_00000008;
    }
    if (CStack_60.x < -in_stack_00000008) {
      CStack_60.x = -in_stack_00000008;
    }
    local_6c = CStack_60.x - *(float *)(in_stack_00000004[0xd].cloth_data + 0x2658);
    if (in_stack_00000008 * (float)3.1415926535000001 < local_6c) {
      local_6c = in_stack_00000008 * (float)3.1415926535000001;
    }
    if (local_6c < in_stack_00000008 * (float)-3.1415926535000001) {
      local_6c = in_stack_00000008 * (float)-3.1415926535000001;
    }
    *(float *)(in_stack_00000004[0xd].cloth_data + 0x2658) =
         *(float *)(in_stack_00000004[0xd].cloth_data + 0x2658) + local_6c;
  }
  return;
}

// Name: core_scat.cpp_FUN_005578e0
// Address: 005578e0
// Address Range: [[005578e0, 00557d1a]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_005578e0()

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_005578e0(uint param_1, uint param_2)
    */

void core_scat_cpp_FUN_005578e0
               (uint param_1,uint param_2,float unaff_EBX,uint param_4,
               CCharacter *param_5,float param_6)

{
  CCharacter *pCVar1;
  CHero *pCVar2;
  SMotion *pSVar3;
  CPathMap *this_ptr;
  float fVar4;
  CVector3f *pCVar5;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  CHero *this_ptr_00;
  int iVar6;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  CVector3f local_5c;
  float fStack_50;
  CVector3f aCStack_4c [2];
  float local_30;
  byte local_2c [8];
  float fStack_24;
  float local_20;
  int local_1c;
  float fStack_14;
  
  local_20 = 0.25;
  local_1c = 0x3f490fdb;
  this_ptr_00 = g_HeroActors[g_LocalHeroIndex];
  if (*(int *)(param_5[2].cloth_data + 0x54f0) == 0) {
    return;
  }
  crt_memory_c_memset_FUN_005fde40(param_5[1].base_actor.actor_name + 8,0,0x2c);
  pCVar2 = g_HeroActors[g_LocalHeroIndex];
  local_30 = (param_5->base_actor).location.position.x -
             (pCVar2->base_character).base_actor.location.position.x;
  local_2c._0_4_ =
       (param_5->base_actor).location.position.y -
       (pCVar2->base_character).base_actor.location.position.y;
  local_2c._4_4_ =
       (param_5->base_actor).location.position.z -
       (pCVar2->base_character).base_actor.location.position.z;
  iVar6 = 0;
  if ((((*(int *)(param_5[2].cloth_data + 0x54f0) == 2) ||
       (*(int *)(param_5[2].cloth_data + 0x54f0) == 3)) &&
      (*(int *)(param_5[2].cloth_data + 0x5388) != 0)) &&
     (0 < *(int *)(*(int *)(param_5[2].cloth_data + 0x5388) + 0x568))) {
    fStack_24 = 9999.9;
    pCVar2 = (CHero *)core_hero_cpp_FUN_004f3960();
    if ((pCVar2 != (CHero *)0x0) && ((int)local_20 < 0x41f00000)) {
      iVar6 = 1;
      this_ptr_00 = pCVar2;
    }
  }
  if (iVar6 != *(int *)(param_5[2].cloth_data + 0x54f4)) {
    param_5[1].base_actor.location.position.x = 1.4013e-45;
  }
  fStack_50 = (this_ptr_00->base_character).base_actor.location.position.x -
              (param_5->base_actor).location.position.x;
  aCStack_4c[0].x =
       (this_ptr_00->base_character).base_actor.location.position.y -
       (param_5->base_actor).location.position.y;
  aCStack_4c[0].y =
       (this_ptr_00->base_character).base_actor.location.position.z -
       (param_5->base_actor).location.position.z;
  if ((float *)local_2c != &fStack_50) {
    local_2c._0_4_ = fStack_50;
    local_2c._4_4_ = aCStack_4c[0].x;
    fStack_24 = aCStack_4c[0].y;
  }
  fStack_6c = SQRT(fStack_24 * fStack_24 +
                   (float)local_2c._0_4_ * (float)local_2c._0_4_ +
                   (float)local_2c._4_4_ * (float)local_2c._4_4_);
  if (*(int *)(param_5[2].cloth_data + 0x54f0) == 3) {
    fStack_6c = 0.0;
  }
  if (*(int *)(param_5[2].cloth_data + 0x5508) == 0) goto LAB_00557b63;
  local_1c = 0;
  if (*(int *)(*(int *)(param_5[2].cloth_data + 0x5508) + 0x2e0) == 8) {
    if (fStack_6c < (float)8) {
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(param_5->model).motion_controller);
      if ((pSVar3->state_index == 7) && (*(int *)(param_5[2].cloth_data + 0x54f4) != 0)) {
        pCVar1 = param_5 + 1;
        (pCVar1->base_actor).actor_name[0x14] = '\x01';
        (pCVar1->base_actor).actor_name[0x15] = '\0';
        (pCVar1->base_actor).actor_name[0x16] = '\0';
        (pCVar1->base_actor).actor_name[0x17] = '\0';
      }
LAB_00557a94:
      if (local_1c == 0) goto LAB_00557b63;
    }
  }
  else if (fStack_6c < (float)15) {
    if ((*(int *)(param_5[2].cloth_data + 0x54f4) != 0) && (iVar6 != 0)) {
      if (((float)0.90000000000000002 < *(float *)(param_5->field13_0x2620 + 0x470)) &&
         (*(int *)(param_5[2].cloth_data + 0x551c) != 0)) {
        pCVar1 = param_5 + 1;
        (pCVar1->base_actor).actor_name[0x14] = '\x01';
        (pCVar1->base_actor).actor_name[0x15] = '\0';
        (pCVar1->base_actor).actor_name[0x16] = '\0';
        (pCVar1->base_actor).actor_name[0x17] = '\0';
      }
      core_charactr_cpp_CCharacter_FUN_00428d80(param_5);
    }
    pCVar1 = param_5 + 1;
    (pCVar1->base_actor).actor_name[0x10] = '\0';
    (pCVar1->base_actor).actor_name[0x11] = '\0';
    (pCVar1->base_actor).actor_name[0x12] = '\0';
    (pCVar1->base_actor).actor_name[0x13] = '\0';
    pCVar1 = param_5 + 1;
    (pCVar1->base_actor).actor_name[8] = '\0';
    (pCVar1->base_actor).actor_name[9] = '\0';
    (pCVar1->base_actor).actor_name[10] = '\0';
    (pCVar1->base_actor).actor_name[0xb] = '\0';
    goto LAB_00557a94;
  }
  this_ptr = (*((this_ptr_00->base_character).base_actor.vtable)->getPathMap)
                       ((CDemonActor *)this_ptr_00);
  if (this_ptr == (CPathMap *)0x0) {
    this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
  }
  iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                    (this_ptr,&(param_5->base_actor).location.position,aCStack_4c,
                     (param_5->base_actor).field7_0x6c);
  if (iVar6 != 0) {
    fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                      (aCStack_4c[0].z - (param_5->base_actor).orient.bank);
    fVar4 = fVar4 * (float)0.31830988619288902 * (float)4;
    fStack_14 = -unaff_EBP;
    param_5[1].base_actor.location.area_id = (int)fVar4;
    if (fVar4 < fStack_14) {
      param_5[1].base_actor.location.area_id = (int)fStack_14;
    }
    if (unaff_EBP < (float)param_5[1].base_actor.location.area_id) {
      param_5[1].base_actor.location.area_id = (int)unaff_EBP;
    }
    if ((float)10 <= fStack_6c) {
      pCVar1 = param_5 + 1;
      (pCVar1->base_actor).actor_name[0x10] = '\x01';
      (pCVar1->base_actor).actor_name[0x11] = '\0';
      (pCVar1->base_actor).actor_name[0x12] = '\0';
      (pCVar1->base_actor).actor_name[0x13] = '\0';
    }
    pCVar1 = param_5 + 1;
    (pCVar1->base_actor).actor_name[8] = '\x01';
    (pCVar1->base_actor).actor_name[9] = '\0';
    (pCVar1->base_actor).actor_name[10] = '\0';
    (pCVar1->base_actor).actor_name[0xb] = '\0';
  }
LAB_00557b63:
  fStack_68 = (this_ptr_00->base_character).base_actor.location.position.x -
              (param_5->base_actor).location.position.x;
  fStack_64 = (this_ptr_00->base_character).base_actor.location.position.y -
              (param_5->base_actor).location.position.y;
  local_60 = (this_ptr_00->base_character).base_actor.location.position.z -
             (param_5->base_actor).location.position.z;
  if ((float *)local_2c != &fStack_68) {
    local_2c._0_4_ = fStack_68;
    local_2c._4_4_ = fStack_64;
    fStack_24 = local_60;
  }
  pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                     (&local_5c,(CVector3f *)local_2c);
  if ((CVector3f *)(local_2c + 4) != pCVar5) {
    local_2c._4_4_ = pCVar5->x;
    fStack_24 = pCVar5->y;
    local_20 = pCVar5->z;
  }
  local_2c._0_4_ =
       core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_24 - (param_5->base_actor).orient.bank)
  ;
  if (unaff_EBX < (float)local_2c._0_4_) {
    local_2c._0_4_ = unaff_EBX;
  }
  if ((float)local_2c._0_4_ < -unaff_EBX) {
    local_2c._0_4_ = -unaff_EBX;
  }
  fStack_68 = (float)local_2c._0_4_ - *(float *)(param_5[2].cloth_data + 0x54fc);
  if (param_6 * (float)3.1415926535000001 < fStack_68) {
    fStack_68 = param_6 * (float)3.1415926535000001;
  }
  if (fStack_68 < param_6 * (float)-3.1415926535000001) {
    fStack_68 = param_6 * (float)-3.1415926535000001;
  }
  *(float *)(param_5[2].cloth_data + 0x54fc) =
       *(float *)(param_5[2].cloth_data + 0x54fc) + fStack_68;
  return;
}

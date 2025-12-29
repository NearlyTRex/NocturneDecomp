// Name: core_scat.cpp_FUN_005578e0
// Address: 005578e0
// Address Range: [[005578e0, 00557d1a]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_005578e0()

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_005578e0(uint param_1, uint param_2)
    */

void core_scat_cpp_FUN_005578e0(void)

{
  CCharacter *pCVar1;
  CHero *pCVar2;
  SMotion *pSVar3;
  CPathMap *this_ptr;
  float fVar4;
  CVector3f *pCVar5;
  BADSPACEBASE *in_ESP;
  CHero *this_ptr_00;
  float unaff_EDI;
  int iVar6;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  CVector3f CStack_64;
  float local_58;
  CVector3f aCStack_54 [2];
  float local_38;
  byte local_34 [8];
  float local_2c;
  float fStack_28;
  int iStack_24;
  uint local_20;
  float local_1c;
  float fStack_18;
  
  local_20 = 0x3e800000;
  local_1c = 0.7853982;
  this_ptr_00 = g_HeroActors[g_LocalHeroIndex];
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 0) {
    return;
  }
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004[1].base_actor.actor_name + 8,0,0x2c);
  pCVar2 = g_HeroActors[g_LocalHeroIndex];
  local_38 = (in_stack_00000004->base_actor).location.position.x -
             (pCVar2->base_character).base_actor.location.position.x;
  local_34._0_4_ =
       (in_stack_00000004->base_actor).location.position.y -
       (pCVar2->base_character).base_actor.location.position.y;
  local_34._4_4_ =
       (in_stack_00000004->base_actor).location.position.z -
       (pCVar2->base_character).base_actor.location.position.z;
  iVar6 = 0;
  if ((((*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 2) ||
       (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3)) &&
      (*(int *)(in_stack_00000004[2].cloth_data + 0x5388) != 0)) &&
     (0 < *(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0x568))) {
    local_2c = 9999.9;
    pCVar2 = (CHero *)core_hero_cpp_FUN_004f3960();
    if ((pCVar2 != (CHero *)0x0) && ((int)fStack_28 < 0x41f00000)) {
      iVar6 = 1;
      this_ptr_00 = pCVar2;
    }
  }
  if (iVar6 != *(int *)(in_stack_00000004[2].cloth_data + 0x54f4)) {
    in_stack_00000004[1].base_actor.location.position.x = 1.4013e-45;
  }
  local_58 = (this_ptr_00->base_character).base_actor.location.position.x -
             (in_stack_00000004->base_actor).location.position.x;
  aCStack_54[0].x =
       (this_ptr_00->base_character).base_actor.location.position.y -
       (in_stack_00000004->base_actor).location.position.y;
  aCStack_54[0].y =
       (this_ptr_00->base_character).base_actor.location.position.z -
       (in_stack_00000004->base_actor).location.position.z;
  if ((float *)local_34 != &local_58) {
    local_34._0_4_ = local_58;
    local_34._4_4_ = aCStack_54[0].x;
    local_2c = aCStack_54[0].y;
  }
  local_74 = SQRT(local_2c * local_2c +
                  (float)local_34._0_4_ * (float)local_34._0_4_ +
                  (float)local_34._4_4_ * (float)local_34._4_4_);
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3) {
    local_74 = 0.0;
  }
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x5508) == 0) goto LAB_00557b63;
  iStack_24 = 0;
  if (*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) + 0x2e0) == 8) {
    if (local_74 < (float)8) {
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(in_stack_00000004->model).motion_controller);
      if ((pSVar3->state_index == 7) && (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0)) {
        pCVar1 = in_stack_00000004 + 1;
        (pCVar1->base_actor).actor_name[0x14] = '\x01';
        (pCVar1->base_actor).actor_name[0x15] = '\0';
        (pCVar1->base_actor).actor_name[0x16] = '\0';
        (pCVar1->base_actor).actor_name[0x17] = '\0';
      }
LAB_00557a94:
      if (iStack_24 == 0) goto LAB_00557b63;
    }
  }
  else if (local_74 < (float)15) {
    if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) && (iVar6 != 0)) {
      if (((float)0.90000000000000002 < *(float *)(in_stack_00000004->field13_0x2620 + 0x470)) &&
         (*(int *)(in_stack_00000004[2].cloth_data + 0x551c) != 0)) {
        pCVar1 = in_stack_00000004 + 1;
        (pCVar1->base_actor).actor_name[0x14] = '\x01';
        (pCVar1->base_actor).actor_name[0x15] = '\0';
        (pCVar1->base_actor).actor_name[0x16] = '\0';
        (pCVar1->base_actor).actor_name[0x17] = '\0';
      }
      core_charactr_cpp_CCharacter_FUN_00428d80(in_stack_00000004);
    }
    pCVar1 = in_stack_00000004 + 1;
    (pCVar1->base_actor).actor_name[0x10] = '\0';
    (pCVar1->base_actor).actor_name[0x11] = '\0';
    (pCVar1->base_actor).actor_name[0x12] = '\0';
    (pCVar1->base_actor).actor_name[0x13] = '\0';
    pCVar1 = in_stack_00000004 + 1;
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
                    (this_ptr,&(in_stack_00000004->base_actor).location.position,aCStack_54,
                     (in_stack_00000004->base_actor).field7_0x6c);
  if (iVar6 != 0) {
    fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                      (aCStack_54[0].z - (in_stack_00000004->base_actor).orient.bank);
    fVar4 = fVar4 * (float)0.31830988619288902 * (float)4;
    local_1c = -fStack_18;
    in_stack_00000004[1].base_actor.location.area_id = (int)fVar4;
    if (fVar4 < local_1c) {
      in_stack_00000004[1].base_actor.location.area_id = (int)local_1c;
    }
    if (fStack_18 < (float)in_stack_00000004[1].base_actor.location.area_id) {
      in_stack_00000004[1].base_actor.location.area_id = (int)fStack_18;
    }
    if ((float)10 <= local_74) {
      pCVar1 = in_stack_00000004 + 1;
      (pCVar1->base_actor).actor_name[0x10] = '\x01';
      (pCVar1->base_actor).actor_name[0x11] = '\0';
      (pCVar1->base_actor).actor_name[0x12] = '\0';
      (pCVar1->base_actor).actor_name[0x13] = '\0';
    }
    pCVar1 = in_stack_00000004 + 1;
    (pCVar1->base_actor).actor_name[8] = '\x01';
    (pCVar1->base_actor).actor_name[9] = '\0';
    (pCVar1->base_actor).actor_name[10] = '\0';
    (pCVar1->base_actor).actor_name[0xb] = '\0';
  }
LAB_00557b63:
  local_70 = (this_ptr_00->base_character).base_actor.location.position.x -
             (in_stack_00000004->base_actor).location.position.x;
  fStack_6c = (this_ptr_00->base_character).base_actor.location.position.y -
              (in_stack_00000004->base_actor).location.position.y;
  fStack_68 = (this_ptr_00->base_character).base_actor.location.position.z -
              (in_stack_00000004->base_actor).location.position.z;
  if ((float *)local_34 != &local_70) {
    local_34._0_4_ = local_70;
    local_34._4_4_ = fStack_6c;
    local_2c = fStack_68;
  }
  pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                     (&CStack_64,(CVector3f *)local_34);
  if ((CVector3f *)(local_34 + 4) != pCVar5) {
    local_34._4_4_ = pCVar5->x;
    local_2c = pCVar5->y;
    fStack_28 = pCVar5->z;
  }
  local_34._0_4_ =
       core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                 (local_2c - (in_stack_00000004->base_actor).orient.bank);
  if (unaff_EDI < (float)local_34._0_4_) {
    local_34._0_4_ = unaff_EDI;
  }
  if ((float)local_34._0_4_ < -unaff_EDI) {
    local_34._0_4_ = -unaff_EDI;
  }
  local_70 = (float)local_34._0_4_ - *(float *)(in_stack_00000004[2].cloth_data + 0x54fc);
  if (in_stack_00000008 * (float)3.1415926535000001 < local_70) {
    local_70 = in_stack_00000008 * (float)3.1415926535000001;
  }
  if (local_70 < in_stack_00000008 * (float)-3.1415926535000001) {
    local_70 = in_stack_00000008 * (float)-3.1415926535000001;
  }
  *(float *)(in_stack_00000004[2].cloth_data + 0x54fc) =
       *(float *)(in_stack_00000004[2].cloth_data + 0x54fc) + local_70;
  return;
}

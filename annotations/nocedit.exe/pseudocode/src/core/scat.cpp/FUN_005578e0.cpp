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
  float fVar1;
  CCharacter *pCVar2;
  CHero *pCVar3;
  SMotion *pSVar4;
  CPathMap *this_ptr;
  CVector3f *pCVar5;
  CHero *this_ptr_00;
  int iVar6;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float local_7c;
  float local_78;
  CVector3f local_74;
  CVector3f CStack_68;
  float local_5c;
  float local_58;
  CVector3f CStack_50;
  float fStack_40;
  float local_3c;
  CVector3f local_38;
  int local_2c;
  float local_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  
  local_20 = 0.25;
  local_1c = 0.7853982;
  this_ptr_00 = g_HeroActors[g_LocalHeroIndex];
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 0) {
    return;
  }
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004[1].base.actor_name + 8,0,0x2c);
  pCVar3 = g_HeroActors[g_LocalHeroIndex];
  local_3c = (in_stack_00000004->base).location.position.x - (pCVar3->base).base.location.position.x
  ;
  local_38.x = (in_stack_00000004->base).location.position.y -
               (pCVar3->base).base.location.position.y;
  local_38.y = (in_stack_00000004->base).location.position.z -
               (pCVar3->base).base.location.position.z;
  iVar6 = 0;
  if ((((*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 2) ||
       (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3)) &&
      (*(int *)(in_stack_00000004[2].cloth_data + 0x5388) != 0)) &&
     (0 < *(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0x568))) {
    local_38.z = 9999.9;
    pCVar3 = (CHero *)core_hero_cpp_FUN_004f3960();
    if ((pCVar3 != (CHero *)0x0) && ((int)local_38.z < 0x41f00000)) {
      iVar6 = 1;
      this_ptr_00 = pCVar3;
    }
  }
  if (iVar6 != *(int *)(in_stack_00000004[2].cloth_data + 0x54f4)) {
    in_stack_00000004[1].base.location.position.x = 1.4013e-45;
  }
  CStack_68.z = (this_ptr_00->base).base.location.position.x -
                (in_stack_00000004->base).location.position.x;
  local_5c = (this_ptr_00->base).base.location.position.y -
             (in_stack_00000004->base).location.position.y;
  local_58 = (this_ptr_00->base).base.location.position.z -
             (in_stack_00000004->base).location.position.z;
  if (&local_3c != &CStack_68.z) {
    local_3c = CStack_68.z;
    local_38.x = local_5c;
    local_38.y = local_58;
  }
  local_7c = SQRT(local_38.y * local_38.y + local_3c * local_3c + local_38.x * local_38.x);
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3) {
    local_7c = 0.0;
  }
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x5508) == 0) goto LAB_00557b63;
  local_2c = 0;
  if (*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) + 0x2e0) == 8) {
    if (local_7c < (float)8) {
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(in_stack_00000004->model).motion_controller);
      if ((pSVar4->state_index == 7) && (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0)) {
        pCVar2 = in_stack_00000004 + 1;
        (pCVar2->base).actor_name[0x14] = '\x01';
        (pCVar2->base).actor_name[0x15] = '\0';
        (pCVar2->base).actor_name[0x16] = '\0';
        (pCVar2->base).actor_name[0x17] = '\0';
      }
LAB_00557a94:
      if (local_2c == 0) goto LAB_00557b63;
    }
  }
  else if (local_7c < (float)15) {
    if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) && (iVar6 != 0)) {
      if (((float)0.90000000000000002 < *(float *)(in_stack_00000004->unk3 + 0x470)) &&
         (*(int *)(in_stack_00000004[2].cloth_data + 0x551c) != 0)) {
        pCVar2 = in_stack_00000004 + 1;
        (pCVar2->base).actor_name[0x14] = '\x01';
        (pCVar2->base).actor_name[0x15] = '\0';
        (pCVar2->base).actor_name[0x16] = '\0';
        (pCVar2->base).actor_name[0x17] = '\0';
      }
      core_charactr_cpp_CCharacter_FUN_00428d80(in_stack_00000004);
    }
    pCVar2 = in_stack_00000004 + 1;
    (pCVar2->base).actor_name[0x10] = '\0';
    (pCVar2->base).actor_name[0x11] = '\0';
    (pCVar2->base).actor_name[0x12] = '\0';
    (pCVar2->base).actor_name[0x13] = '\0';
    pCVar2 = in_stack_00000004 + 1;
    (pCVar2->base).actor_name[8] = '\0';
    (pCVar2->base).actor_name[9] = '\0';
    (pCVar2->base).actor_name[10] = '\0';
    (pCVar2->base).actor_name[0xb] = '\0';
    goto LAB_00557a94;
  }
  this_ptr = (*((this_ptr_00->base).base.vtable._ub)->getPathMap)((CDemonActor *)this_ptr_00);
  if (this_ptr == (CPathMap *)0x0) {
    this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
  }
  iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                    (this_ptr,&(in_stack_00000004->base).location.position,&CStack_50,
                     (in_stack_00000004->base).unk1);
  if (iVar6 != 0) {
    fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (CStack_50.y - (in_stack_00000004->base).orient.bank);
    fVar1 = fStack_14 * (float)0.31830988619288902 * (float)4;
    local_20 = -local_1c;
    in_stack_00000004[1].base.location.area_id = (int)fVar1;
    if (fVar1 < local_20) {
      in_stack_00000004[1].base.location.area_id = (int)local_20;
    }
    if (local_1c < (float)in_stack_00000004[1].base.location.area_id) {
      in_stack_00000004[1].base.location.area_id = (int)local_1c;
    }
    if ((float)10 <= local_78) {
      pCVar2 = in_stack_00000004 + 1;
      (pCVar2->base).actor_name[0x10] = '\x01';
      (pCVar2->base).actor_name[0x11] = '\0';
      (pCVar2->base).actor_name[0x12] = '\0';
      (pCVar2->base).actor_name[0x13] = '\0';
    }
    pCVar2 = in_stack_00000004 + 1;
    (pCVar2->base).actor_name[8] = '\x01';
    (pCVar2->base).actor_name[9] = '\0';
    (pCVar2->base).actor_name[10] = '\0';
    (pCVar2->base).actor_name[0xb] = '\0';
  }
LAB_00557b63:
  local_74.x = (this_ptr_00->base).base.location.position.x -
               (in_stack_00000004->base).location.position.x;
  local_74.y = (this_ptr_00->base).base.location.position.y -
               (in_stack_00000004->base).location.position.y;
  local_74.z = (this_ptr_00->base).base.location.position.z -
               (in_stack_00000004->base).location.position.z;
  if (&local_38 != &local_74) {
    local_38.x = local_74.x;
    local_38.y = local_74.y;
    local_38.z = local_74.z;
  }
  pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_68,&local_38);
  if (&local_38 != pCVar5) {
    local_38.x = pCVar5->x;
    local_38.y = pCVar5->y;
    local_38.z = pCVar5->z;
  }
  fStack_40 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        (local_38.y - (in_stack_00000004->base).orient.bank);
  if (fStack_18 < fStack_40) {
    fStack_40 = fStack_18;
  }
  if (fStack_40 < -fStack_18) {
    fStack_40 = -fStack_18;
  }
  local_7c = fStack_40 - *(float *)(in_stack_00000004[2].cloth_data + 0x54fc);
  if (in_stack_00000008 * (float)3.1415926535000001 < local_7c) {
    local_7c = in_stack_00000008 * (float)3.1415926535000001;
  }
  if (local_7c < in_stack_00000008 * (float)-3.1415926535000001) {
    local_7c = in_stack_00000008 * (float)-3.1415926535000001;
  }
  *(float *)(in_stack_00000004[2].cloth_data + 0x54fc) =
       *(float *)(in_stack_00000004[2].cloth_data + 0x54fc) + local_7c;
  return;
}

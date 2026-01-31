// Name: core_scat.cpp_FUN_005578e0
// Address: 005578e0
// Address Range: [[005578e0, 00557d1a]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_FUN_005578e0(void)

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_005578e0(uint param_1, uint param_2)
    */

void __cdecl core_scat_cpp_FUN_005578e0(void)

{
  CWeapon *pCVar1;
  int iVar2;
  float fVar3;
  CHero *pCVar4;
  SMotion *pSVar5;
  CPathMap *this_ptr;
  CPathMap *extraout_EAX;
  CVector3f *pCVar6;
  CHero *this_ptr_00;
  int iVar7;
  CHero *in_stack_00000004;
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
  if (in_stack_00000004->ai_task == 0) {
    return;
  }
  memset(in_stack_00000004->unk2,0,0x2c);
  pCVar4 = g_HeroActors[g_LocalHeroIndex];
  local_3c = (in_stack_00000004->base).base.location.position.x -
             (pCVar4->base).base.location.position.x;
  local_38.x = (in_stack_00000004->base).base.location.position.y -
               (pCVar4->base).base.location.position.y;
  local_38.y = (in_stack_00000004->base).base.location.position.z -
               (pCVar4->base).base.location.position.z;
  iVar7 = 0;
  if ((((in_stack_00000004->ai_task == 2) || (in_stack_00000004->ai_task == 3)) &&
      (pCVar1 = (in_stack_00000004->inventory).selected_weapon, pCVar1 != (CWeapon *)0x0)) &&
     (0 < pCVar1->ammo_count)) {
    local_38.z = 9999.9;
    pCVar4 = (CHero *)core_hero_cpp_CHero_FUN_004f3960(in_stack_00000004);
    if ((pCVar4 != (CHero *)0x0) && ((int)local_38.z < 0x41f00000)) {
      iVar7 = 1;
      this_ptr_00 = pCVar4;
    }
  }
  if (iVar7 != *(int *)in_stack_00000004[1].base.base.actor_name) {
    in_stack_00000004->unk2[0x18] = '\x01';
    in_stack_00000004->unk2[0x19] = '\0';
    in_stack_00000004->unk2[0x1a] = '\0';
    in_stack_00000004->unk2[0x1b] = '\0';
  }
  CStack_68.z = (this_ptr_00->base).base.location.position.x -
                (in_stack_00000004->base).base.location.position.x;
  local_5c = (this_ptr_00->base).base.location.position.y -
             (in_stack_00000004->base).base.location.position.y;
  local_58 = (this_ptr_00->base).base.location.position.z -
             (in_stack_00000004->base).base.location.position.z;
  if (&local_3c != &CStack_68.z) {
    local_3c = CStack_68.z;
    local_38.x = local_5c;
    local_38.y = local_58;
  }
  local_7c = SQRT(local_38.y * local_38.y + local_3c * local_3c + local_38.x * local_38.x);
  if (in_stack_00000004->ai_task == 3) {
    local_7c = 0.0;
  }
  iVar2 = *(int *)(in_stack_00000004[1].base.base.actor_name + 0x14);
  if (iVar2 == 0) goto LAB_00557b63;
  local_2c = 0;
  if (*(int *)(iVar2 + 0x2e0) == 8) {
    if (local_7c < (float)8) {
      pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(in_stack_00000004->base).model.motion_controller);
      if ((pSVar5->state_index == 7) && (*(int *)in_stack_00000004[1].base.base.actor_name != 0)) {
        in_stack_00000004->unk2[0xc] = '\x01';
        in_stack_00000004->unk2[0xd] = '\0';
        in_stack_00000004->unk2[0xe] = '\0';
        in_stack_00000004->unk2[0xf] = '\0';
      }
LAB_00557a94:
      if (local_2c == 0) goto LAB_00557b63;
    }
  }
  else if (local_7c < (float)15) {
    if ((*(int *)in_stack_00000004[1].base.base.actor_name != 0) && (iVar7 != 0)) {
      if (((float)0.90000000000000002 < *(float *)((in_stack_00000004->base).unk3 + 0x470)) &&
         (in_stack_00000004[1].base.base.location.position.z != 0.0)) {
        in_stack_00000004->unk2[0xc] = '\x01';
        in_stack_00000004->unk2[0xd] = '\0';
        in_stack_00000004->unk2[0xe] = '\0';
        in_stack_00000004->unk2[0xf] = '\0';
      }
      core_charactr_cpp_CCharacter_FUN_00428d80(&in_stack_00000004->base);
    }
    in_stack_00000004->unk2[8] = '\0';
    in_stack_00000004->unk2[9] = '\0';
    in_stack_00000004->unk2[10] = '\0';
    in_stack_00000004->unk2[0xb] = '\0';
    in_stack_00000004->unk2[0] = '\0';
    in_stack_00000004->unk2[1] = '\0';
    in_stack_00000004->unk2[2] = '\0';
    in_stack_00000004->unk2[3] = '\0';
    goto LAB_00557a94;
  }
  this_ptr = (*((this_ptr_00->base).base.vtable._ub)->getPathMap)((CDemonActor *)this_ptr_00);
  if (this_ptr == (CPathMap *)0x0) {
    core_path_cpp_FUN_00548500();
    this_ptr = extraout_EAX;
  }
  iVar7 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                    (this_ptr,&(in_stack_00000004->base).base.location.position,&CStack_50,
                     (in_stack_00000004->base).base.unk1);
  if (iVar7 != 0) {
    fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (CStack_50.y - (in_stack_00000004->base).base.orient.bank);
    fVar3 = fStack_14 * (float)0.31830988619288902 * (float)4;
    local_20 = -local_1c;
    *(float *)(in_stack_00000004->unk2 + 0x24) = fVar3;
    if (fVar3 < local_20) {
      *(float *)(in_stack_00000004->unk2 + 0x24) = local_20;
    }
    if (local_1c < *(float *)(in_stack_00000004->unk2 + 0x24)) {
      *(float *)(in_stack_00000004->unk2 + 0x24) = local_1c;
    }
    if ((float)10 <= local_78) {
      in_stack_00000004->unk2[8] = '\x01';
      in_stack_00000004->unk2[9] = '\0';
      in_stack_00000004->unk2[10] = '\0';
      in_stack_00000004->unk2[0xb] = '\0';
    }
    in_stack_00000004->unk2[0] = '\x01';
    in_stack_00000004->unk2[1] = '\0';
    in_stack_00000004->unk2[2] = '\0';
    in_stack_00000004->unk2[3] = '\0';
  }
LAB_00557b63:
  local_74.x = (this_ptr_00->base).base.location.position.x -
               (in_stack_00000004->base).base.location.position.x;
  local_74.y = (this_ptr_00->base).base.location.position.y -
               (in_stack_00000004->base).base.location.position.y;
  local_74.z = (this_ptr_00->base).base.location.position.z -
               (in_stack_00000004->base).base.location.position.z;
  if (&local_38 != &local_74) {
    local_38.x = local_74.x;
    local_38.y = local_74.y;
    local_38.z = local_74.z;
  }
  pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_68,&local_38);
  if (&local_38 != pCVar6) {
    local_38.x = pCVar6->x;
    local_38.y = pCVar6->y;
    local_38.z = pCVar6->z;
  }
  fStack_40 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        (local_38.y - (in_stack_00000004->base).base.orient.bank);
  if (fStack_18 < fStack_40) {
    fStack_40 = fStack_18;
  }
  if (fStack_40 < -fStack_18) {
    fStack_40 = -fStack_18;
  }
  local_7c = fStack_40 - *(float *)(in_stack_00000004[1].base.base.actor_name + 8);
  if (in_stack_00000008 * (float)3.1415926535000001 < local_7c) {
    local_7c = in_stack_00000008 * (float)3.1415926535000001;
  }
  if (local_7c < in_stack_00000008 * (float)-3.1415926535000001) {
    local_7c = in_stack_00000008 * (float)-3.1415926535000001;
  }
  *(float *)(in_stack_00000004[1].base.base.actor_name + 8) =
       *(float *)(in_stack_00000004[1].base.base.actor_name + 8) + local_7c;
  return;
}

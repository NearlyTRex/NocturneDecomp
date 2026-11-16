// Name: core_styldemo.cpp_CStylerDemon_tryAttack_FUN_005a0480
// Address: 005a0480
// Address Range: [[005a0480, 005a06bb]]
// Convention: __cdecl
// Signature: int __cdecl core_styldemo_cpp_CStylerDemon_tryAttack_FUN_005a0480(CStylerDemon *this_ptr,int distance)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_styldemo_cpp_CStylerDemon_tryAttack_FUN_005a0480(CStylerDemon *this_ptr,int distance)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  CCharacter *pCVar2;
  SMotion *pSVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1068 [1015];
  CVector3f local_80;
  float local_74;
  float local_70 [5];
  float local_5c;
  float local_58;
  CVector3f local_50;
  float local_44;
  float local_40 [2];
  CVector3f local_38;
  CVector3f local_2c;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar5 = 0;
  if (0.0 < (this_ptr->base).attack_cooldown) {
    return 0;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
  local_1c = pSVar3->state_index;
  local_18 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
  local_20 = local_18;
  local_14 = (float)distance;
  pCVar1 = &(this_ptr->base).base.base.location;
  if ((float)distance <= _DAT_005e84dc + (float)_DAT_005da54e) {
    pCVar2 = (this_ptr->base).victim;
    local_74 = (pCVar2->base).location.position.x - (pCVar1->position).x;
    local_70[0] = (pCVar2->base).location.position.y -
                  (this_ptr->base).base.base.location.position.y;
    local_70[1] = (pCVar2->base).location.position.z -
                  (this_ptr->base).base.base.location.position.z;
    local_2c.x = local_74;
    *(float *)((int)&local_2c + (uint)bVar5 * -8 + 4) = local_70[(uint)bVar5 * -2];
    *(float *)((int)&local_2c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         local_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&local_2c,&local_38);
    local_70[2] = local_38.x;
    local_70[(uint)bVar5 * -2 + 3] = *(float *)((int)&local_38 + (uint)bVar5 * -8 + 4);
    local_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         *(float *)((int)&local_38 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                         (local_70[3] - (this_ptr->base).base.base.orient.vec.y);
    if ((float)_DAT_005da556 <= ABS(local_14)) {
      return 0;
    }
    if (((local_1c == 8) || (local_1c == 9)) || (local_1c == 7)) {
      iVar4 = 10;
    }
    else {
      iVar4 = 3;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar4,1);
    return 1;
  }
  pCVar2 = (this_ptr->base).victim;
  local_44 = (pCVar2->base).location.position.x - (pCVar1->position).x;
  local_40[0] = (pCVar2->base).location.position.y - (this_ptr->base).base.base.location.position.y;
  local_40[1] = (pCVar2->base).location.position.z - (this_ptr->base).base.base.location.position.z;
  local_50.x = local_44;
  *(float *)((int)&local_50 + (uint)bVar5 * -8 + 4) = local_40[(uint)bVar5 * -2];
  *(float *)((int)&local_50 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       local_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&local_50,&local_80);
  local_5c = local_80.x;
  local_70[(uint)bVar5 * -2 + 6] = *(float *)((int)&local_80 + (uint)bVar5 * -8 + 4);
  local_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       *(float *)((int)&local_80 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                       (local_58 - (this_ptr->base).base.base.orient.vec.y);
  if (((float)_DAT_005da556 <= ABS(local_14)) || (4 < local_18)) goto LAB_005a05d1;
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"?Casting %d\n" + 1);
  switch(this_ptr->spell_index) {
  case 0:
    iVar4 = 0xc;
    break;
  case 1:
    iVar4 = 0x15;
    break;
  case 2:
    iVar4 = 0x13;
    break;
  case 3:
    iVar4 = 0x18;
    break;
  default:
    goto switchD_005a05a1_default;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,iVar4,1);
switchD_005a05a1_default:
  iVar4 = this_ptr->spell_index + 1;
  this_ptr->spell_index = iVar4;
  if (3 < iVar4) {
    this_ptr->spell_index = 0;
  }
LAB_005a05d1:
  if (4 < local_20) {
    return 0;
  }
  return 1;
}

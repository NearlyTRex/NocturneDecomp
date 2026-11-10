// Name: core_melee.cpp_CMelee_process_FUN_005099a0
// Address: 005099a0
// Address Range: [[005099a0, 00509a6a]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_process_FUN_005099a0(CMelee *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_melee_cpp_CMelee_process_FUN_005099a0(CMelee *this_ptr,float delta_time)

{
  CCharacter_full_vtable *pCVar1;
  float fVar2;
  byte bVar3;
  float in_stack_00000010;
  float afStackY_101c [1012];
  uint uStack_34;
  CVector3f CStack_28;
  uint uStack_1c;
  float afStack_18 [5];
  
  bVar3 = 0;
  core_weapon_cpp_CWeapon_process_FUN_005ad770(&this_ptr->base,delta_time);
  if ((0 < this_ptr->blood_spurt_count) &&
     (fVar2 = this_ptr->blood_spurt_timer - in_stack_00000010, this_ptr->blood_spurt_timer = fVar2,
     fVar2 <= 0.0)) {
    fVar2 = this_ptr->blood_spurt_interval * (float)_DAT_005e7976;
    pCVar1 = (this_ptr->base).base.vtable._uc;
    this_ptr->blood_spurt_count = this_ptr->blood_spurt_count + -1;
    this_ptr->blood_spurt_interval = fVar2;
    this_ptr->blood_spurt_timer = fVar2;
    (*(pCVar1->_uc).isInvulnerable)((CCharacter *)this_ptr);
    uStack_1c = uStack_34;
    afStack_18[(uint)bVar3 * -2] = *(float *)(&stack0xffffffd0 + (uint)bVar3 * -8);
    afStack_18[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(float *)(&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    core_actor_cpp_FUN_00408b40(this_ptr,&uStack_1c);
    CStack_28.x = afStack_18[2];
    *(float *)((int)&CStack_28 + (uint)bVar3 * -8 + 4) = afStack_18[(uint)bVar3 * -2 + 3];
    *(float *)((int)&CStack_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         afStack_18[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    core_gore_cpp_CGore_spawnBloodParticles_FUN_004e5f40
              (g_CGorePtr,&CStack_28,(CVector3f *)&DAT_02c8af28,this_ptr->blood_gore_type);
    return;
  }
  return;
}

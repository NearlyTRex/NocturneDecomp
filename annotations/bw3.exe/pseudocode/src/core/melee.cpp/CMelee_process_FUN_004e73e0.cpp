// Name: core_melee.cpp_CMelee_process_FUN_004e73e0
// Address: 004e73e0
// Address Range: [[004e73e0, 004e74aa]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_process_FUN_004e73e0(CMelee *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_melee_cpp_CMelee_process_FUN_004e73e0(CMelee *this_ptr,float delta_time)

{
  CCharacter_full_vtable *pCVar1;
  float fVar2;
  byte bVar3;
  float in_stack_00000010;
  float afStackY_101c [1012];
  float fStack_34;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  CVector3f CStack_10;
  
  bVar3 = 0;
  core_weapon_cpp_CWeapon_process_FUN_0057b160(&this_ptr->base,delta_time);
  if ((0 < this_ptr->blood_spurt_count) &&
     (fVar2 = this_ptr->blood_spurt_timer - in_stack_00000010, this_ptr->blood_spurt_timer = fVar2,
     fVar2 <= 0.0)) {
    fVar2 = this_ptr->blood_spurt_interval * (float)_DAT_005c7162;
    pCVar1 = (this_ptr->base).base.vtable._uc;
    this_ptr->blood_spurt_count = this_ptr->blood_spurt_count + -1;
    this_ptr->blood_spurt_interval = fVar2;
    this_ptr->blood_spurt_timer = fVar2;
    (*(pCVar1->_uc).isInvulnerable)((CCharacter *)this_ptr);
    CStack_1c.x = fStack_34;
    *(uint *)((int)&CStack_1c + (uint)bVar3 * -8 + 4) =
         *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8);
    *(uint *)((int)&CStack_1c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              ((CDemonActor *)this_ptr,&CStack_1c,&CStack_10);
    CStack_28.x = CStack_10.x;
    *(uint *)((int)&CStack_28 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_10 + (uint)bVar3 * -8 + 4);
    *(uint *)((int)&CStack_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_10 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    core_gore_cpp_CGore_spawnBloodParticles_FUN_004ce8a0
              (g_CGorePtr,&CStack_28,(CVector3f *)&DAT_02cfd900,this_ptr->blood_gore_type);
    return;
  }
  return;
}

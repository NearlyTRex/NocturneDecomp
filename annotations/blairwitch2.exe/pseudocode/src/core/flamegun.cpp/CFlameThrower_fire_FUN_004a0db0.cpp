// Name: core_flamegun.cpp_CFlameThrower_fire_FUN_004a0db0
// Address: 004a0db0
// Address Range: [[004a0db0, 004a0e57]]
// Convention: __cdecl
// Signature: int __cdecl core_flamegun_cpp_CFlameThrower_fire_FUN_004a0db0(CFlameThrower *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flamegun_cpp_CFlameThrower_fire_FUN_004a0db0(CFlameThrower *this_ptr)

{
  int *piVar1;
  float fVar2;
  byte bVar3;
  float afStackY_101c [1011];
  CFireEffect *this_ptr_00;
  CVector3f *position;
  CVector3f *pCVar4;
  int flame_count;
  int flame_type;
  CVector3f CStack_34;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  float fStack_10;
  uint auStack_c [2];
  
  bVar3 = 0;
  if ((this_ptr->base).ammo_count < 1) {
    return 0;
  }
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pCVar4 = &CStack_1c;
  CStack_1c.x = fStack_10;
  *(uint *)((int)&CStack_1c + (uint)bVar3 * -8 + 4) = auStack_c[(uint)bVar3 * -2];
  *(uint *)((int)&CStack_1c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       auStack_c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,pCVar4,&CStack_34);
  flame_type = 1;
  flame_count = 3;
  pCVar4 = (CVector3f *)&(this_ptr->base).base.orient;
  position = &CStack_28;
  CStack_28.x = CStack_34.x;
  *(uint *)((int)&CStack_28 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&CStack_34 + (uint)bVar3 * -8 + 4);
  this_ptr_00 = 0x01C3DEB4;
  *(uint *)((int)&CStack_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       *(uint *)((int)&CStack_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  core_fire_cpp_CFireEffect_createGunFlames_FUN_0049e680
            (this_ptr_00,position,pCVar4,flame_count,flame_type);
  if (this_ptr->was_firing_prev_frame == 0) {
    fVar2 = 1.0 / _DAT_005f6b50;
    piVar1 = &(this_ptr->base).ammo_count;
    *piVar1 = *piVar1 + -1;
    this_ptr->fire_rate_timer = fVar2;
  }
  this_ptr->is_firing = 1;
  return 1;
}

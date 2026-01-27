// Name: core_flamegun.cpp_CFlameThrower_process_FUN_004cb9b0
// Address: 004cb9b0
// Address Range: [[004cb9b0, 004cbaa1]]
// Convention: __cdecl
// Signature: void core_flamegun.cpp_CFlameThrower_process_FUN_004cb9b0(CFlameThrower * this_ptr, float delta_time)

#include "nocturne.h"

void __cdecl
core_flamegun_cpp_CFlameThrower_process_FUN_004cb9b0(CFlameThrower *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  int extraout_EAX;
  uint uVar3;
  int iVar4;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base,delta_time);
  if (*(int *)this_ptr->unk == 0) {
    if (*(uint *)(this_ptr->unk + 4) != 0) {
      core_sound_cpp_CSound_killSound_FUN_005b3b90(g_CSoundPtr,*(uint *)(this_ptr->unk + 4));
      this_ptr->unk[4] = '\0';
      this_ptr->unk[5] = '\0';
      this_ptr->unk[6] = '\0';
      this_ptr->unk[7] = '\0';
    }
  }
  else {
    core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(g_CSoundPtr,*(uint *)(this_ptr->unk + 4));
    if (extraout_EAX == 0) {
      uVar3 = (*((this_ptr->base).base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"fl-throw.wav");
      *(uint *)(this_ptr->unk + 4) = uVar3;
    }
    fVar1 = *(float *)(this_ptr->unk + 0xc) - delta_time;
    *(float *)(this_ptr->unk + 0xc) = fVar1;
    if (fVar1 < 0.0) {
      fVar2 = 1.0 / 4.0f;
      iVar4 = (this_ptr->base).ammo_count + -1;
      (this_ptr->base).ammo_count = iVar4;
      *(float *)(this_ptr->unk + 0xc) = fVar2 + fVar1;
      if (iVar4 < 0) {
        (this_ptr->base).ammo_count = 0;
      }
    }
  }
  uVar3 = *(uint *)this_ptr->unk;
  this_ptr->unk[0] = '\0';
  this_ptr->unk[1] = '\0';
  this_ptr->unk[2] = '\0';
  this_ptr->unk[3] = '\0';
  *(uint *)(this_ptr->unk + 8) = uVar3;
  return;
}

// Name: core_flamegun.cpp_CFlameThrower_fire_FUN_004cb920
// Address: 004cb920
// Address Range: [[004cb920, 004cb9ad]]
// Convention: __cdecl
// Signature: int __cdecl core_flamegun_cpp_CFlameThrower_fire_FUN_004cb920(CFlameThrower *this_ptr)

#include "nocturne.h"

int __cdecl core_flamegun_cpp_CFlameThrower_fire_FUN_004cb920(CFlameThrower *this_ptr)

{
  int *piVar1;
  float fVar2;
  CVector3f *input_local_point;
  CVector3f CStack_10;
  
  if ((this_ptr->base).ammo_count < 1) {
    return 0;
  }
  input_local_point =
       (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_10,input_local_point);
  core_fire_cpp_CFireEffect_createGunFlames_FUN_004c8ef0
            (g_CFireEffectPtr,&CStack_10,&(this_ptr->base).base.orient.vec,3,1);
  if (*(int *)(this_ptr->unk + 8) == 0) {
    fVar2 = 1.0 / 4.0f;
    piVar1 = &(this_ptr->base).ammo_count;
    *piVar1 = *piVar1 + -1;
    *(float *)(this_ptr->unk + 0xc) = fVar2;
  }
  this_ptr->unk[0] = '\x01';
  this_ptr->unk[1] = '\0';
  this_ptr->unk[2] = '\0';
  this_ptr->unk[3] = '\0';
  return 1;
}

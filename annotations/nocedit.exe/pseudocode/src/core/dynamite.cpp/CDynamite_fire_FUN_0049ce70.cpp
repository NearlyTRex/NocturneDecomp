// Name: core_dynamite.cpp_CDynamite_fire_FUN_0049ce70
// Address: 0049ce70
// Address Range: [[0049ce70, 0049cedd]]
// Convention: __cdecl
// Signature: int __cdecl core_dynamite_cpp_CDynamite_fire_FUN_0049ce70(CDynamite *this_ptr)

#include "nocturne.h"

int __cdecl core_dynamite_cpp_CDynamite_fire_FUN_0049ce70(CDynamite *this_ptr)

{
  int iVar1;
  
  iVar1 = core_weapon_cpp_CWeapon_fire_FUN_005ee6e0(&this_ptr->base);
  if (iVar1 == 0) {
    return 0;
  }
  core_fire_cpp_CFireEffect_createToss_FUN_004c8dd0
            (g_CFireEffectPtr,&(this_ptr->base).base.location.position,&(this_ptr->base).base.orient
             ,(CVector3f *)(this_ptr->unk + 4),*(float *)this_ptr->unk,
             *(uint *)(this_ptr->unk + 0x10));
  this_ptr->unk[0x10] = '\0';
  this_ptr->unk[0x11] = '\0';
  this_ptr->unk[0x12] = '\0';
  this_ptr->unk[0x13] = '\0';
  this_ptr->unk[0] = '\0';
  this_ptr->unk[1] = '\0';
  this_ptr->unk[2] = -0x80;
  this_ptr->unk[3] = -0x41;
  this_ptr->unk[0xc] = '\0';
  this_ptr->unk[0xd] = '\0';
  this_ptr->unk[0xe] = '\0';
  this_ptr->unk[0xf] = '\0';
  *(uint *)(this_ptr->unk + 8) = *(uint *)(this_ptr->unk + 0xc);
  ((CVector3f *)(this_ptr->unk + 4))->x = *(float *)(this_ptr->unk + 8);
  return 1;
}

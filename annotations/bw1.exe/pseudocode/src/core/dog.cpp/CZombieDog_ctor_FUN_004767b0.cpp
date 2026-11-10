// Name: core_dog.cpp_CZombieDog_ctor_FUN_004767b0
// Address: 004767b0
// Address Range: [[004767b0, 00476815]]
// Convention: __cdecl
// Signature: CZombieDog * __cdecl core_dog_cpp_CZombieDog_ctor_FUN_004767b0(CZombieDog *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CZombieDog * __cdecl core_dog_cpp_CZombieDog_ctor_FUN_004767b0(CZombieDog *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CZombieDog *pCVar3;
  
  pCVar3 = (CZombieDog *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CZombieDogVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).base.model,"blackdog.dfm");
  uVar1 = _DAT_005fee8c;
  *(uint *)&(pCVar3->base).base.field_0x2fec = 0x3f400000;
  uVar2 = _DAT_005fee90;
  *(uint *)&(pCVar3->base).base.field_0x2ff0 = 0x3fc00000;
  pCVar3->sfx_handle = 0;
  *(uint *)&(pCVar3->base).base.field_0x2ff4 = uVar1;
  *(uint *)&(pCVar3->base).base.field_0x2ff8 = uVar2;
  return pCVar3;
}

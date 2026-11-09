// Name: core_dog.cpp_CZombieDog_ctor_FUN_0045e270
// Address: 0045e270
// Address Range: [[0045e270, 0045e2d5]]
// Convention: __cdecl
// Signature: CZombieDog * __cdecl core_dog_cpp_CZombieDog_ctor_FUN_0045e270(CZombieDog *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CZombieDog * __cdecl core_dog_cpp_CZombieDog_ctor_FUN_0045e270(CZombieDog *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CZombieDog *pCVar3;
  
  pCVar3 = (CZombieDog *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  *(byte **)&pCVar3->field_0x2b0 = &g_CZombieDogVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar3->field_0x2b4,"blackdog.dfm");
  uVar1 = _DAT_005f532c;
  *(uint *)&pCVar3->field_0x3430 = 0x3f400000;
  uVar2 = _DAT_005f5330;
  *(uint *)&pCVar3->field_0x3434 = 0x3fc00000;
  *(uint *)&pCVar3->field_0x10b00 = 0;
  *(uint *)&pCVar3->field_0x3438 = uVar1;
  *(uint *)&pCVar3->field_0x343c = uVar2;
  return pCVar3;
}

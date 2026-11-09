// Name: core_dog.cpp_CZombieDog_ctor_FUN_00462710
// Address: 00462710
// Address Range: [[00462710, 0046277f]]
// Convention: __cdecl
// Signature: CZombieDog * __cdecl core_dog_cpp_CZombieDog_ctor_FUN_00462710(CZombieDog *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CZombieDog * __cdecl core_dog_cpp_CZombieDog_ctor_FUN_00462710(CZombieDog *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CZombieDog *pCVar3;
  
  pCVar3 = (CZombieDog *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  *(byte ***)&pCVar3->field_0x154 = &g_CZombieDogVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar3->field_0x158,"blackdog.dfm");
  *(uint *)&pCVar3->field_0x326c = 0x3f400000;
  uVar1 = _DAT_005de5bc;
  *(uint *)&pCVar3->field_0x3270 = 0x3fc00000;
  uVar2 = _DAT_005de5c0;
  *(uint *)&pCVar3->field_0xd05c = 0;
  *(uint *)&pCVar3->field_0xd060 = 0;
  *(uint *)&pCVar3->field_0x3274 = uVar1;
  *(uint *)&pCVar3->field_0x3278 = uVar2;
  return pCVar3;
}

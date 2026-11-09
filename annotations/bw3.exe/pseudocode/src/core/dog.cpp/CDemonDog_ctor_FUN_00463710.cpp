// Name: core_dog.cpp_CDemonDog_ctor_FUN_00463710
// Address: 00463710
// Address Range: [[00463710, 00463779]]
// Convention: unknown
// Signature: CDemonDog * core_dog_cpp_CDemonDog_ctor_FUN_00463710(CDemonDog *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDemonDog * core_dog_cpp_CDemonDog_ctor_FUN_00463710(CDemonDog *this_ptr)

{
  CZombieDog *pCVar1;
  
  pCVar1 = core_dog_cpp_CZombieDog_ctor_FUN_00462710((CZombieDog *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CDemonDogVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar1->field_0x158,"blackdog.dfm");
  *(uint *)&pCVar1->field_0x2538 = 0x41f00000;
  *(uint *)&pCVar1->field_0xce5c = 0x41200000;
  *(uint *)&pCVar1->field_0xce60 = 0x41200000;
  *(uint *)&pCVar1->field_0xfc = 1;
  *(uint *)&pCVar1->field_0xf8 = 0;
  *(uint *)&pCVar1->field_0xd060 = 2;
  return (CDemonDog *)pCVar1;
}

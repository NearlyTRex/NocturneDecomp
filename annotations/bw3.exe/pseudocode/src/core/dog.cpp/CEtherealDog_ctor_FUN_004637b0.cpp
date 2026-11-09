// Name: core_dog.cpp_CEtherealDog_ctor_FUN_004637b0
// Address: 004637b0
// Address Range: [[004637b0, 0046380f]]
// Convention: unknown
// Signature: CEtherealDog * core_dog_cpp_CEtherealDog_ctor_FUN_004637b0(CEtherealDog *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CEtherealDog * core_dog_cpp_CEtherealDog_ctor_FUN_004637b0(CEtherealDog *this_ptr)

{
  CZombieDog *pCVar1;
  
  pCVar1 = core_dog_cpp_CZombieDog_ctor_FUN_00462710((CZombieDog *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CEtherealDogVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar1->field_0x158,"ethereal_dog.dfm");
  *(uint *)&pCVar1->field_0x2538 = 0x41f00000;
  *(uint *)&pCVar1->field_0xce5c = 0x41200000;
  *(uint *)&pCVar1->field_0xce60 = 0x41200000;
  *(uint *)&pCVar1->field_0xcdc4 = 1;
  *(uint *)&pCVar1->field_0xd060 = 3;
  return (CEtherealDog *)pCVar1;
}

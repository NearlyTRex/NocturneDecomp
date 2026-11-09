// Name: core_dog.cpp_CDogForest_ctor_FUN_00463680
// Address: 00463680
// Address Range: [[00463680, 004636d5]]
// Convention: unknown
// Signature: CDogForest * core_dog_cpp_CDogForest_ctor_FUN_00463680(CDogForest *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDogForest * core_dog_cpp_CDogForest_ctor_FUN_00463680(CDogForest *this_ptr)

{
  CZombieDog *pCVar1;
  
  pCVar1 = core_dog_cpp_CZombieDog_ctor_FUN_00462710((CZombieDog *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CDog_ForestVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar1->field_0x158,"blackdog.dfm");
  *(uint *)&pCVar1->field_0x2538 = 0x41a00000;
  *(uint *)&pCVar1->field_0xce5c = 0x40a00000;
  *(uint *)&pCVar1->field_0xce60 = 0x41200000;
  *(uint *)&pCVar1->field_0xd060 = 1;
  return (CDogForest *)pCVar1;
}

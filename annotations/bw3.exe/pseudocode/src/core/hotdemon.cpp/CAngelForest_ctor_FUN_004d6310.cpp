// Name: core_hotdemon.cpp_CAngelForest_ctor_FUN_004d6310
// Address: 004d6310
// Address Range: [[004d6310, 004d635b]]
// Convention: unknown
// Signature: CAngelForest * core_hotdemon_cpp_CAngelForest_ctor_FUN_004d6310(CAngelForest *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAngelForest * core_hotdemon_cpp_CAngelForest_ctor_FUN_004d6310(CAngelForest *this_ptr)

{
  CHotDemon *pCVar1;
  
  pCVar1 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004d5430((CHotDemon *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CAngel_ForestVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar1->field_0x158,"@hotdemon.dfm" + 1);
  *(uint *)&pCVar1->field_0x2538 = 0x42200000;
  *(uint *)&pCVar1->field_0xce5c = 0x41700000;
  *(uint *)&pCVar1->field_0xce60 = 0x41700000;
  return (CAngelForest *)pCVar1;
}

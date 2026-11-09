// Name: core_construc.cpp_CConstructRed_ctor_FUN_00444600
// Address: 00444600
// Address Range: [[00444600, 0044465a]]
// Convention: unknown
// Signature: CConstructRed * core_construc_cpp_CConstructRed_ctor_FUN_00444600(CConstructRed *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CConstructRed * core_construc_cpp_CConstructRed_ctor_FUN_00444600(CConstructRed *this_ptr)

{
  CConstruct *pCVar1;
  CConstructRed *pCVar2;
  float10 fVar3;
  
  pCVar1 = core_constrct_cpp_CConstruct_ctor_FUN_00442420((CConstruct *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CConstruct_RedVTable;
  *(uint *)&pCVar1->field_0x2538 = 0x42820000;
  *(uint *)&pCVar1->field_0xce5c = 0x41a00000;
  *(uint *)&pCVar1->field_0xce60 = 0x41200000;
  *(uint *)&pCVar1->field_0xd84c = 2;
  *(uint *)&pCVar1->field_0xd85c = 2;
  fVar3 = (float10)*(float *)&pCVar1->field_0x2538;
  pCVar2 = (CConstructRed *)round();
  *(int *)&pCVar2->field_0xd17c = (int)ROUND(fVar3);
  return pCVar2;
}

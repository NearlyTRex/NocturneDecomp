// Name: core_dmodel.cpp_FUN_00468830
// Address: 00468830
// Address Range: [[00468830, 0046885a]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_FUN_00468830(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_FUN_00468830(void)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = g_CKeyFramedModelPool;
  do {
    core_dmodel_cpp_FUN_00467160(pCVar1);
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != (CKeyFramedModel *)&DAT_01b687e0);
  _DAT_01b2efdc = 0;
  return;
}

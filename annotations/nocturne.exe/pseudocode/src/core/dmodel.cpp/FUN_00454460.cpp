// Name: core_dmodel.cpp_FUN_00454460
// Address: 00454460
// Address Range: [[00454460, 0045448a]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_FUN_00454460(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_FUN_00454460(void)

{
  CKeyFramedModel *this_ptr;
  
  this_ptr = g_CKeyFramedModel_ARRAY_01abb65c;
  do {
    core_dmodel_cpp_CKeyFramedModel_FUN_00452f10(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != g_CKeyFramedModel_ARRAY_01abb65c + sizeof(g_CKeyFramedModel_ARRAY_01abb65c) / sizeof(g_CKeyFramedModel_ARRAY_01abb65c[0]));
  _DAT_01abb658 = 0;
  return;
}

// Name: engine_special.cpp_flushLineList_FUN_00582770
// Address: 00582770
// Address Range: [[00582770, 00582782]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_flushLineList_FUN_00582770(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_flushLineList_FUN_00582770(void)

{
  int iVar1;
  
  if (g_INT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_APIDLL_flushLineList)();
  return iVar1;
}

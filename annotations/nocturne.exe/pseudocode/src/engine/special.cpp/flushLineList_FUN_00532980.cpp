// Name: engine_special.cpp_flushLineList_FUN_00532980
// Address: 00532980
// Address Range: [[00532980, 00532992]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_flushLineList_FUN_00532980(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_flushLineList_FUN_00532980(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_flushLineList)();
  return iVar1;
}

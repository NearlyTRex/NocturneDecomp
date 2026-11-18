// Name: engine_special.cpp_masterZBuffer_FUN_00582a80
// Address: 00582a80
// Address Range: [[00582a80, 00582a9a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_masterZBuffer_FUN_00582a80(int slot)

#include "nocturne.h"

int __cdecl engine_special_cpp_masterZBuffer_FUN_00582a80(int slot)

{
  int iVar1;
  
  if (g_INT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_APIDLL_masterZBuffer)(slot);
  return iVar1;
}

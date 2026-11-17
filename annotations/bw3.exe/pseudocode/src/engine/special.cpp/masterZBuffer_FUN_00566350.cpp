// Name: engine_special.cpp_masterZBuffer_FUN_00566350
// Address: 00566350
// Address Range: [[00566350, 0056636a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_masterZBuffer_FUN_00566350(int slot)

#include "nocturne.h"

int __cdecl engine_special_cpp_masterZBuffer_FUN_00566350(int slot)

{
  int iVar1;
  
  if (g_INT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_APIDLL_masterZBuffer)(slot);
  return iVar1;
}

// Name: engine_special.cpp_clearZBuffer_FUN_00582940
// Address: 00582940
// Address Range: [[00582940, 00582952]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_clearZBuffer_FUN_00582940(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_clearZBuffer_FUN_00582940(void)

{
  int iVar1;
  
  if (g_INT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_APIDLL_clearZBuffer)();
  return iVar1;
}

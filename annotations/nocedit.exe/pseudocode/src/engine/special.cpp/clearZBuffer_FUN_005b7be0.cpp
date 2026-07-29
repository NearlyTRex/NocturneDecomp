// Name: engine_special.cpp_clearZBuffer_FUN_005b7be0
// Address: 005b7be0
// Address Range: [[005b7be0, 005b7bf2]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_clearZBuffer_FUN_005b7be0(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_clearZBuffer_FUN_005b7be0(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_clearZBuffer)();
  return iVar1;
}

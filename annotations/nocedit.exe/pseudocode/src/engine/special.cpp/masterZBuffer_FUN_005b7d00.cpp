// Name: engine_special.cpp_masterZBuffer_FUN_005b7d00
// Address: 005b7d00
// Address Range: [[005b7d00, 005b7d1a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_masterZBuffer_FUN_005b7d00(int slot)

#include "nocturne.h"

int __cdecl engine_special_cpp_masterZBuffer_FUN_005b7d00(int slot)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_masterZBuffer)(slot);
  return iVar1;
}

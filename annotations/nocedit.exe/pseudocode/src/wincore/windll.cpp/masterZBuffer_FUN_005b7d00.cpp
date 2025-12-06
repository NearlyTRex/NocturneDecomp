// Name: wincore_windll.cpp_masterZBuffer_FUN_005b7d00
// Address: 005b7d00
// Address Range: [[005b7d00, 005b7d1a]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_masterZBuffer_FUN_005b7d00(int z_buffer_mode)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_masterZBuffer_FUN_005b7d00(int z_buffer_mode)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_masterZBuffer)(z_buffer_mode);
  return iVar1;
}

// Name: engine_special.cpp_masterZBuffer_FUN_00532c70
// Address: 00532c70
// Address Range: [[00532c70, 00532c8a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_masterZBuffer_FUN_00532c70(int z_buffer_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_masterZBuffer_FUN_00532c70(int z_buffer_mode)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02dc9de8)(z_buffer_mode);
  return iVar1;
}

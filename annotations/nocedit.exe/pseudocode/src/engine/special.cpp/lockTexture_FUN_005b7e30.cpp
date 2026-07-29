// Name: engine_special.cpp_lockTexture_FUN_005b7e30
// Address: 005b7e30
// Address Range: [[005b7e30, 005b7e4a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockTexture_FUN_005b7e30(int texture_id)

#include "nocturne.h"

int __cdecl engine_special_cpp_lockTexture_FUN_005b7e30(int texture_id)

{
  int iVar1;
  
  if (g_APIDLL_lockTexture == (APIDLL_lockTexture *)0x0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_lockTexture)(texture_id);
  return iVar1;
}

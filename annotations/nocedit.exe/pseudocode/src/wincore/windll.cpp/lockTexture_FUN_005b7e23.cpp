// Name: wincore_windll.cpp_lockTexture_FUN_005b7e23
// Address: 005b7e23
// Address Range: [[005b7e23, 005b7e4a]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_lockTexture_FUN_005b7e23(int texture_id)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_lockTexture_FUN_005b7e23(int texture_id)

{
  int iVar1;
  
  if (g_APIDLL_lockTexture == (APIDLL_lockTexture *)0x0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_lockTexture)(texture_id);
  return iVar1;
}

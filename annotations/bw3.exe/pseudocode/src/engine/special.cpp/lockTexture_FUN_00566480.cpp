// Name: engine_special.cpp_lockTexture_FUN_00566480
// Address: 00566480
// Address Range: [[00566480, 0056649a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockTexture_FUN_00566480(int texture_id)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_lockTexture_FUN_00566480(int texture_id)

{
  int iVar1;
  
  if (_DAT_02cf6080 == (code *)0x0) {
    return 0;
  }
  iVar1 = (*_DAT_02cf6080)(texture_id);
  return iVar1;
}

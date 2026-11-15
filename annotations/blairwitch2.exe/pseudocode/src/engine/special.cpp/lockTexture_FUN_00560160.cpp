// Name: engine_special.cpp_lockTexture_FUN_00560160
// Address: 00560160
// Address Range: [[00560160, 0056017a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockTexture_FUN_00560160(int texture_id)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_lockTexture_FUN_00560160(int texture_id)

{
  int iVar1;
  
  if (_DAT_0264bc54 == (code *)0x0) {
    return 0;
  }
  iVar1 = (*_DAT_0264bc54)(texture_id);
  return iVar1;
}

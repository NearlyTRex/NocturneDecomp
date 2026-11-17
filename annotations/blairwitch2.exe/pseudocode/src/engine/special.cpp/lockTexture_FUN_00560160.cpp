// Name: engine_special.cpp_lockTexture_FUN_00560160
// Address: 00560160
// Address Range: [[00560160, 0056017a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockTexture_FUN_00560160(int texture_id)

#include "nocturne.h"

int __cdecl engine_special_cpp_lockTexture_FUN_00560160(int texture_id)

{
  int iVar1;
  
  if (g_PTR_0264bc54 == (byte *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_0264bc54)(texture_id);
  return iVar1;
}

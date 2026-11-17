// Name: engine_special.cpp_lockTexture_FUN_00582bb0
// Address: 00582bb0
// Address Range: [[00582bb0, 00582bca]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockTexture_FUN_00582bb0(int texture_id)

#include "nocturne.h"

int __cdecl engine_special_cpp_lockTexture_FUN_00582bb0(int texture_id)

{
  int iVar1;
  
  if (g_PTR_02c83424 == (byte *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02c83424)(texture_id);
  return iVar1;
}

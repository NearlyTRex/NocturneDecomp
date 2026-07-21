// Name: wincore_windll.cpp_CExternalRenderer_ctor_FUN_00532da0
// Address: 00532da0
// Address Range: [[00532da0, 00532de1]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_CExternalRenderer_ctor_FUN_00532da0(int param_1)

#include "nocturne.h"

void __cdecl wincore_windll_cpp_CExternalRenderer_ctor_FUN_00532da0(int param_1)

{
  memset(param_1,0,0x1dc8);
  *(ushort *)(param_1 + 0x200) = 0x100;
  *(uint *)(param_1 + 0x208) = 0;
  *(ushort *)(param_1 + 0x204) = 1;
  *(byte *)(param_1 + 0x208) = *(byte *)(param_1 + 0x208) | 1;
  return;
}

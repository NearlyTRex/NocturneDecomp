// Name: engine_special.cpp_CExternalRenderer_ctor_FUN_005665e0
// Address: 005665e0
// Address Range: [[005665e0, 00566621]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_CExternalRenderer_ctor_FUN_005665e0(CExternalRenderer *this_ptr)

#include "nocturne.h"

void __cdecl engine_special_cpp_CExternalRenderer_ctor_FUN_005665e0(CExternalRenderer *this_ptr)

{
  memset(this_ptr,0,0x1dc8);
  *(ushort *)(this_ptr + 0x200) = 0x100;
  *(uint *)(this_ptr + 0x208) = 0;
  *(ushort *)(this_ptr + 0x204) = 1;
  this_ptr[0x208] = (CExternalRenderer)((byte)this_ptr[0x208] | 1);
  return;
}

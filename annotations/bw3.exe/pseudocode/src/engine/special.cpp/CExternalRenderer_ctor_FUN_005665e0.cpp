// Name: engine_special.cpp_CExternalRenderer_ctor_FUN_005665e0
// Address: 005665e0
// Address Range: [[005665e0, 00566621]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_CExternalRenderer_ctor_FUN_005665e0(CExternalRenderer *this_ptr)

#include "nocturne.h"

void __cdecl engine_special_cpp_CExternalRenderer_ctor_FUN_005665e0(CExternalRenderer *this_ptr)

{
  memset(this_ptr,0,0x1dc8);
  this_ptr->interface_version = 0x100;
  (this_ptr->feature_flags).dword = 0;
  this_ptr->api_version = 1;
  (this_ptr->feature_flags).bytes[0] = (this_ptr->feature_flags).bytes[0] | 1;
  return;
}

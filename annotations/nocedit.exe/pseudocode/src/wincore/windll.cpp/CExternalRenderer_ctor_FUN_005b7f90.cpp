// Name: wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90
// Address: 005b7f90
// Address Range: [[005b7f90, 005b7fd1]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_CExternalRenderer_ctor_FUN_005b7f90(CExternalRenderer *this_ptr)

#include "nocturne.h"

void __cdecl wincore_windll_cpp_CExternalRenderer_ctor_FUN_005b7f90(CExternalRenderer *this_ptr)

{
  memset(this_ptr,0,0x1dc8);
  (this_ptr->hardware_flags).words[0] = 0x100;
  (this_ptr->feature_flags).dword = 0;
  this_ptr->api_version = 1;
  (this_ptr->feature_flags).bytes[0] = (this_ptr->feature_flags).bytes[0] | 1;
  return;
}

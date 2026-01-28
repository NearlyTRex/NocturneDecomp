// Name: wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90
// Address: 005b7f90
// Address Range: [[005b7f90, 005b7fd1]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_CExternalRenderer_ctor_FUN_005b7f90(CExternalRenderer *this_ptr)

#include "nocturne.h"

void __cdecl wincore_windll_cpp_CExternalRenderer_ctor_FUN_005b7f90(CExternalRenderer *this_ptr)

{
  crt_memory_c_memset_FUN_005fde40(this_ptr,0,0x1dc8);
  this_ptr->hardware_flag1 = 0x100;
  this_ptr->feature_flags = 0;
  this_ptr->api_version = 1;
  *(byte *)&this_ptr->feature_flags = (byte)this_ptr->feature_flags | 1;
  return;
}

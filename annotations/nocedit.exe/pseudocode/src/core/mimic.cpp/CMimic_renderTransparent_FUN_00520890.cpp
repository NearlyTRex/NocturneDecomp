// Name: core_mimic.cpp_CMimic_renderTransparent_FUN_00520890
// Address: 00520890
// Address Range: [[00520890, 0052089f]]
// Convention: __cdecl
// Signature: int __cdecl core_mimic_cpp_CMimic_renderTransparent_FUN_00520890(CMimic *this_ptr)

#include "nocturne.h"

int __cdecl core_mimic_cpp_CMimic_renderTransparent_FUN_00520890(CMimic *this_ptr)

{
  int iVar1;
  
  if ((this_ptr->base).base.base.is_transparent == 0) {
    return 0;
  }
  iVar1 = core_mimic_cpp_CMimic_FUN_005205f0(this_ptr);
  return iVar1;
}

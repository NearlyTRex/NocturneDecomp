// Name: core_mimic.cpp_CMimic_renderOpaque_FUN_00520870
// Address: 00520870
// Address Range: [[00520870, 00520889]]
// Convention: __cdecl
// Signature: int __cdecl core_mimic_cpp_CMimic_renderOpaque_FUN_00520870(CMimic *this_ptr)

#include "nocturne.h"

int __cdecl core_mimic_cpp_CMimic_renderOpaque_FUN_00520870(CMimic *this_ptr)

{
  int iVar1;
  
  if ((this_ptr->base).base.base.is_transparent != 0) {
    return 0;
  }
  iVar1 = core_mimic_cpp_CMimic_FUN_005205f0(this_ptr);
  return iVar1;
}

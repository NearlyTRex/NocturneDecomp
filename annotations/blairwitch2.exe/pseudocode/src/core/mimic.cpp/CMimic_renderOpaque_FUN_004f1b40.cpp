// Name: core_mimic.cpp_CMimic_renderOpaque_FUN_004f1b40
// Address: 004f1b40
// Address Range: [[004f1b40, 004f1b59]]
// Convention: __cdecl
// Signature: int __cdecl core_mimic_cpp_CMimic_renderOpaque_FUN_004f1b40(CMimic *this_ptr)

#include "nocturne.h"

int __cdecl core_mimic_cpp_CMimic_renderOpaque_FUN_004f1b40(CMimic *this_ptr)

{
  int iVar1;
  
  if ((this_ptr->base).base.base.is_transparent != 0) {
    return 0;
  }
  iVar1 = core_mimic_cpp_CMimic_renderMirrored_FUN_004f1890(this_ptr);
  return iVar1;
}

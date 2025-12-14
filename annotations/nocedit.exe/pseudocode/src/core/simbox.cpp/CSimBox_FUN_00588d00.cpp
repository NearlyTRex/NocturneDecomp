// Name: core_simbox.cpp_CSimBox_FUN_00588d00
// Address: 00588d00
// Address Range: [[00588d00, 00588d22]]
// Convention: __cdecl
// Signature: void core_simbox.cpp_CSimBox_FUN_00588d00(CSimBox * this_ptr)

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_FUN_00588d00(CSimBox *this_ptr)

{
  CSimBox *this_ptr_00;
  
  this_ptr_00 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x5cc,"..\\core\\simbox.cpp",0x22);
  if (this_ptr_00 == (CSimBox *)0x0) {
    return;
  }
  core_simbox_cpp_CSimBox_ctor_FUN_00588d40(this_ptr_00);
  return;
}

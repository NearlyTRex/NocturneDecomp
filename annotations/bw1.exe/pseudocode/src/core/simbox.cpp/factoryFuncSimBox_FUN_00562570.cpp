// Name: core_simbox.cpp_factoryFuncSimBox_FUN_00562570
// Address: 00562570
// Address Range: [[00562570, 0056258b]]
// Convention: unknown
// Signature: void core_simbox_cpp_factoryFuncSimBox_FUN_00562570(void)

#include "nocturne.h"

void core_simbox_cpp_factoryFuncSimBox_FUN_00562570(void)

{
  CSimBox *this_ptr;
  
  this_ptr = (CSimBox *)FUN_005c0f32(0x5cc);
  if (this_ptr == (CSimBox *)0x0) {
    return;
  }
  core_simbox_cpp_CSimBox_ctor_FUN_005625a0(this_ptr);
  return;
}

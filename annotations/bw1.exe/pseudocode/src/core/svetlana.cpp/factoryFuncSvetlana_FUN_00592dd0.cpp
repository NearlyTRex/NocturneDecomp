// Name: core_svetlana.cpp_factoryFuncSvetlana_FUN_00592dd0
// Address: 00592dd0
// Address Range: [[00592dd0, 00592deb]]
// Convention: unknown
// Signature: void core_svetlana_cpp_factoryFuncSvetlana_FUN_00592dd0(void)

#include "nocturne.h"

void core_svetlana_cpp_factoryFuncSvetlana_FUN_00592dd0(void)

{
  CSvetlana *this_ptr;
  
  this_ptr = (CSvetlana *)operator_new(0x95630);
  if (this_ptr == (CSvetlana *)0x0) {
    return;
  }
  core_svetlana_cpp_CSvetlana_ctor_FUN_00592e00(this_ptr);
  return;
}

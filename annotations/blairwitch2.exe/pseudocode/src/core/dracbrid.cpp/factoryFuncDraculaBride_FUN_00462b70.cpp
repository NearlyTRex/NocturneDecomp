// Name: core_dracbrid.cpp_factoryFuncDraculaBride_FUN_00462b70
// Address: 00462b70
// Address Range: [[00462b70, 00462b8b]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_factoryFuncDraculaBride_FUN_00462b70(void)

#include "nocturne.h"

void core_dracbrid_cpp_factoryFuncDraculaBride_FUN_00462b70(void)

{
  CDraculaBride *this_ptr;
  
  this_ptr = (CDraculaBride *)debugAllocTracked1(0x10c28);
  if (this_ptr == (CDraculaBride *)0x0) {
    return;
  }
  core_dracbrid_cpp_CDraculaBride_ctor_FUN_00462ba0(this_ptr);
  return;
}

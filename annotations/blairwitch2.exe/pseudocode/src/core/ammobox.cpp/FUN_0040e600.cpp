// Name: core_ammobox.cpp_FUN_0040e600
// Address: 0040e600
// Address Range: [[0040e600, 0040e662]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_FUN_0040e600(CAmmoBox *this_ptr,float open_pct)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_FUN_0040e600(CAmmoBox *this_ptr,float open_pct)

{
  *(float *)&this_ptr->field_0x478 = open_pct;
  engine_console_cpp_FUN_00436710(g_CConsolePtr,"Open pct : %f\n",(double)open_pct);
  if ((*(int *)&this_ptr->field_0x4a4 == 0) &&
     (*(uint *)&this_ptr->field_0x4a4 = 1, this_ptr->field_0x484 != '\0')) {
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,&this_ptr->field_0x484);
    return;
  }
  return;
}

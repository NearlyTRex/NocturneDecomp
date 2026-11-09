// Name: core_ammobox.cpp_FUN_0040e1a0
// Address: 0040e1a0
// Address Range: [[0040e1a0, 0040e202]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_FUN_0040e1a0(CAmmoBox *this_ptr,float open_pct)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_FUN_0040e1a0(CAmmoBox *this_ptr,float open_pct)

{
  *(float *)&this_ptr->field_0x31c = open_pct;
  engine_console_cpp_FUN_00445430(g_CConsolePtr,"Open pct : %f\n",(double)open_pct);
  if ((*(int *)&this_ptr->field_0x348 == 0) &&
     (*(uint *)&this_ptr->field_0x348 = 1, this_ptr->field_0x328 != '\0')) {
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,&this_ptr->field_0x328);
    return;
  }
  return;
}

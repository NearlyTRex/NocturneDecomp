// Name: core_ammobox.cpp_CAmmoBox_openBox_FUN_0040f130
// Address: 0040f130
// Address Range: [[0040f130, 0040f192]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_CAmmoBox_openBox_FUN_0040f130(int param_1,float param_2)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_openBox_FUN_0040f130(int param_1,float param_2)

{
  *(float *)(param_1 + 0x314) = param_2;
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (PTR_DAT_005ad350,"Open pct : %f\n",(double)param_2);
  if ((*(int *)(param_1 + 0x340) == 0) &&
     (*(uint *)(param_1 + 0x340) = 1, *(char *)(param_1 + 800) != '\0')) {
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 800);
    return;
  }
  return;
}

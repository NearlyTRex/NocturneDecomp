// Name: core_dracbrid.cpp_CDraculaBride_checkHeartShot_FUN_0045a6a0
// Address: 0045a6a0
// Address Range: [[0045a6a0, 0045a6ee]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_0045a6a0(int param_1,int *param_2)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_0045a6a0(int param_1,int *param_2)

{
  byte *puVar1;
  
  puVar1 = PTR_DAT_005ad350;
  if (((param_2[0xc] != 0x6c) && (*param_2 == *(int *)(param_1 + 0xbd3c))) && (param_2[0xc] == 0x68)
     ) {
    param_2[1] = (int)((float)param_2[1] * (float)20);
    engine_console_cpp_CConsole_printf_FUN_0043ac60(puVar1,"Shot thru the heart\n");
    return;
  }
  return;
}

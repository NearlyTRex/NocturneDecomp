// Name: core_ammobox.cpp_LogConsoleOpenPCTFile_FUN_00411690
// Address: 00411690
// Address Range: [[00411690, 004116f2]]
// Convention: unknown
// Signature: undefined core_ammobox.cpp_LogConsoleOpenPCTFile_FUN_00411690()

#include "nocturne.h"

/* Signature: byte actors_other_ammobox.cpp_LogConsoleOpenPCTFile(uint param_1,
   uint param_2) */

void core_ammobox_cpp_LogConsoleOpenPCTFile_FUN_00411690
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               int param_5,float param_6)

{
  *(float *)(param_5 + 0x31c) = param_6;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"Open pct : %f\n",(double)param_6,unaff_EBX);
  if ((*(int *)(param_5 + 0x348) == 0) &&
     (*(uint *)(param_5 + 0x348) = 1, *(char *)(param_5 + 0x328) != '\0')) {
    (**(code **)(*(int *)(param_5 + 0x154) + 0x24))();
    return;
  }
  return;
}

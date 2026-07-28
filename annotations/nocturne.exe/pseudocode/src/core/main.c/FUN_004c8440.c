// Name: core_main.c_FUN_004c8440
// Address: 004c8440
// Address Range: [[004c8440, 004c8506]]
// Convention: unknown
// Signature: void core_main_c_FUN_004c8440(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_main_c_FUN_004c8440(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  byte *local_c;
  
  if (_DAT_01cc4808 != 0) {
    notifyAbnormalTermination();
  }
  local_c = &stack0x00000008;
  _DAT_01cc4808 = 1;
  _vsprintf((char *)0x1cc3700,param_1,(va_list_t)&local_c);
  local_c = (byte *)0x0;
  pcVar2 = PTR_01cc4800;
  do {
    pcVar1 = pcVar2;
    if (*pcVar2 == '\\') goto LAB_004c84a6;
    if (*pcVar2 == '\0') goto LAB_004c84a4;
    pcVar1 = pcVar2 + 1;
    if (*pcVar1 == '\\') goto LAB_004c84a6;
    pcVar2 = pcVar2 + 2;
    if (*pcVar1 == '\0') {
LAB_004c84a4:
      pcVar1 = (char *)0x0;
LAB_004c84a6:
      if (pcVar1 == (char *)0x0) {
        core_sound_cpp_FUN_00527e10(0x02DC9450);
        engine_2d_c_FUN_004012a0();
        wincore_winrun_cpp_endPeriod_FUN_00558a20();
        wincore_winrun_cpp_FUN_00559500(0x1cc3700);
        return;
      }
      do {
        pcVar2 = PTR_01cc4800;
        if (*PTR_01cc4800 == '\\') goto LAB_004c84fe;
        if (*PTR_01cc4800 == '\0') break;
        pcVar2 = PTR_01cc4800 + 1;
        if (*pcVar2 == '\\') goto LAB_004c84fe;
        PTR_01cc4800 = PTR_01cc4800 + 2;
      } while (*pcVar2 != '\0');
      pcVar2 = (char *)0x0;
LAB_004c84fe:
      pcVar2 = pcVar2 + 1;
      PTR_01cc4800 = pcVar2;
    }
  } while( true );
}

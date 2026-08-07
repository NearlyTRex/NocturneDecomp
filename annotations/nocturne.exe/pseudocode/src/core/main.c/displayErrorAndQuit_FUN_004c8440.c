// Name: core_main.c_displayErrorAndQuit_FUN_004c8440
// Address: 004c8440
// Address Range: [[004c8440, 004c8506]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_displayErrorAndQuit_FUN_004c8440(char *format)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_main_c_displayErrorAndQuit_FUN_004c8440(char *format)

{
  char *pcVar1;
  char *pcVar2;
  byte *local_c;
  
  if (_DAT_01cc4808 != 0) {
    notifyAbnormalTermination();
  }
  local_c = &stack0x00000008;
  _DAT_01cc4808 = 1;
  _vsprintf((char *)0x1cc3700,format,(va_list_t)&local_c);
  local_c = (byte *)0x0;
  pcVar2 = g_CurrentFilename;
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
        core_sound_cpp_FUN_00527e10(g_CSound_PTR_005bed68);
        engine_2d_c_cleanupGraphicsSystem_FUN_004012a0();
        wincore_winrun_cpp_endPeriod_FUN_00558a20();
        wincore_winrun_cpp_FUN_00559500((char *)0x1cc3700);
        return;
      }
      do {
        pcVar2 = g_CurrentFilename;
        if (*g_CurrentFilename == '\\') goto LAB_004c84fe;
        if (*g_CurrentFilename == '\0') break;
        pcVar2 = g_CurrentFilename + 1;
        if (*pcVar2 == '\\') goto LAB_004c84fe;
        g_CurrentFilename = g_CurrentFilename + 2;
      } while (*pcVar2 != '\0');
      pcVar2 = (char *)0x0;
LAB_004c84fe:
      pcVar2 = pcVar2 + 1;
      g_CurrentFilename = pcVar2;
    }
  } while( true );
}

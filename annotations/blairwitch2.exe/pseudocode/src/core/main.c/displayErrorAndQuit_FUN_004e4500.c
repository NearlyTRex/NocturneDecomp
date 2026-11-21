// Name: core_main.c_displayErrorAndQuit_FUN_004e4500
// Address: 004e4500
// Address Range: [[004e4500, 004e45c6]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_displayErrorAndQuit_FUN_004e4500(char *format)

#include "nocturne.h"

void __cdecl core_main_c_displayErrorAndQuit_FUN_004e4500(char *format)

{
  char *pcVar1;
  char *pcVar2;
  byte *local_c;
  
  if (g_INT_01d046a8 != 0) {
    notifyAbnormalTermination();
  }
  local_c = &stack0x00000008;
  g_INT_01d046a8 = 1;
  _vsprintf(g_CHAR_ARRAY_01d035a0,format,(va_list_t)&local_c);
  local_c = (byte *)0x0;
  pcVar2 = g_CurrentFilename;
  do {
    pcVar1 = pcVar2;
    if (*pcVar2 == '\\') goto LAB_004e4566;
    if (*pcVar2 == '\0') goto LAB_004e4564;
    pcVar1 = pcVar2 + 1;
    if (*pcVar1 == '\\') goto LAB_004e4566;
    pcVar2 = pcVar2 + 2;
    if (*pcVar1 == '\0') {
LAB_004e4564:
      pcVar1 = (char *)0x0;
LAB_004e4566:
      if (pcVar1 == (char *)0x0) {
        core_sound_cpp_shutdownSoundSystem_FUN_0055a160();
        engine_2d_c_cleanupGraphicsSystem_FUN_00401120();
        wincore_winrun_cpp_endPeriod_FUN_0058e9d0();
        wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_0058f5d0(g_CHAR_ARRAY_01d035a0);
        return;
      }
      do {
        pcVar2 = g_CurrentFilename;
        if (*g_CurrentFilename == '\\') goto LAB_004e45be;
        if (*g_CurrentFilename == '\0') break;
        pcVar2 = g_CurrentFilename + 1;
        if (*pcVar2 == '\\') goto LAB_004e45be;
        g_CurrentFilename = g_CurrentFilename + 2;
      } while (*pcVar2 != '\0');
      pcVar2 = (char *)0x0;
LAB_004e45be:
      pcVar2 = pcVar2 + 1;
      g_CurrentFilename = pcVar2;
    }
  } while( true );
}

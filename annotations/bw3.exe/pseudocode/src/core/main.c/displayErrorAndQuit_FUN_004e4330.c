// Name: core_main.c_displayErrorAndQuit_FUN_004e4330
// Address: 004e4330
// Address Range: [[004e4330, 004e43f6]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_displayErrorAndQuit_FUN_004e4330(char *format)

#include "nocturne.h"

void __cdecl core_main_c_displayErrorAndQuit_FUN_004e4330(char *format)

{
  char *pcVar1;
  char *pcVar2;
  byte *local_c;
  
  if (g_INT_01d71de8 != 0) {
    notifyAbnormalTermination();
  }
  local_c = &stack0x00000008;
  g_INT_01d71de8 = 1;
  _vsprintf(g_CHAR_ARRAY_01d70ce0,format,(va_list_t)&local_c);
  local_c = (byte *)0x0;
  pcVar2 = g_CHAR_PTR_01d71de0;
  do {
    pcVar1 = pcVar2;
    if (*pcVar2 == '\\') goto LAB_004e4396;
    if (*pcVar2 == '\0') goto LAB_004e4394;
    pcVar1 = pcVar2 + 1;
    if (*pcVar1 == '\\') goto LAB_004e4396;
    pcVar2 = pcVar2 + 2;
    if (*pcVar1 == '\0') {
LAB_004e4394:
      pcVar1 = (char *)0x0;
LAB_004e4396:
      if (pcVar1 == (char *)0x0) {
        core_sound_cpp_shutdownSoundSystem_FUN_0055fcc0();
        engine_2d_c_cleanupGraphicsSystem_FUN_00401120();
        wincore_winrun_cpp_endPeriod_FUN_00580690();
        wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_00581300(g_CHAR_ARRAY_01d70ce0);
        return;
      }
      do {
        pcVar2 = g_CHAR_PTR_01d71de0;
        if (*g_CHAR_PTR_01d71de0 == '\\') goto LAB_004e43ee;
        if (*g_CHAR_PTR_01d71de0 == '\0') break;
        pcVar2 = g_CHAR_PTR_01d71de0 + 1;
        if (*pcVar2 == '\\') goto LAB_004e43ee;
        g_CHAR_PTR_01d71de0 = g_CHAR_PTR_01d71de0 + 2;
      } while (*pcVar2 != '\0');
      pcVar2 = (char *)0x0;
LAB_004e43ee:
      pcVar2 = pcVar2 + 1;
      g_CHAR_PTR_01d71de0 = pcVar2;
    }
  } while( true );
}

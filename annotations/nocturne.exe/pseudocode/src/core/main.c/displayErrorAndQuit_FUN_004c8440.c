// Name: core_main.c_displayErrorAndQuit_FUN_004c8440
// Address: 004c8440
// Address Range: [[004c8440, 004c84cc] [004c84d6, 004c8506]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_displayErrorAndQuit_FUN_004c8440(char *format,...)

#include "nocturne.h"

void __cdecl core_main_c_displayErrorAndQuit_FUN_004c8440(char *format,...)

{
  char *pcVar1;
  char *pcVar2;
  
  if (DAT_01cc4808 != 0) {
    notifyAbnormalTermination();
  }
  DAT_01cc4808 = 1;
  _vsprintf(&DAT_01cc3700,format,(va_list_t)&stack0xfffffff4);
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
        core_sound_cpp_CSound_dtor_FUN_0052dd80(g_CSound_PTR_005bed68);
        engine_2d_c_cleanupGraphicsSystem_FUN_004012a0();
        wincore_winrun_cpp_endPeriod_FUN_00558a20();
                    /* WARNING: Subroutine does not return */
        wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_00559500(&DAT_01cc3700);
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

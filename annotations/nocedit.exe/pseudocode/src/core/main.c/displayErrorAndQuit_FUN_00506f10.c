// Name: core_main.c_displayErrorAndQuit_FUN_00506f10
// Address: 00506f10
// Address Range: [[00506f10, 00507030] [0050703b, 005070ea]]
// Convention: __cdecl
// Signature: void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format, ...)

#include "nocturne.h"

void __cdecl core_main_c_displayErrorAndQuit_FUN_00506f10(char *format,...)

{
  FILE *pFVar1;
  tm *timeptr;
  int *piVar2;
  uint *puVar3;
  char *pcVar4;
  char *pcVar5;
  va_list_t local_14;
  time_t local_10;
  
  if (g_RecursiveCallFlag != 0) {
    pFVar1 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ("gtfo.txt",(char *)0x0,"at","..\\core\\main.c",0x80);
    if (pFVar1 != (FILE *)0x0) {
      crt_stdio_c_fprintf_FUN_005fe6d0(pFVar1,"Recursive GTFO!\n");
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar1,"..\\core\\main.c",0x83);
    }
    crt_startup_c_notifyAbnormalTermination_FUN_00601620();
  }
  local_14 = &stack0x00000008;
  g_RecursiveCallFlag = 1;
  crt_stdio_c_vsprintf_FUN_005fdba8(g_ErrorMessageBuffer,format,&local_14);
  local_14 = (va_list_t)0x0;
  pcVar5 = g_CurrentFilename;
  do {
    pcVar4 = pcVar5;
    if (*pcVar5 == '\\') goto LAB_00506f71;
    if (*pcVar5 == '\0') goto LAB_00506f6f;
    pcVar4 = pcVar5 + 1;
    if (*pcVar4 == '\\') goto LAB_00506f71;
    pcVar5 = pcVar5 + 2;
    if (*pcVar4 == '\0') {
LAB_00506f6f:
      pcVar4 = (char *)0x0;
LAB_00506f71:
      if (pcVar4 == (char *)0x0) {
        pFVar1 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           ("gtfo.txt",(char *)0x0,"at","..\\core\\main.c",
                            0xa4);
        if (pFVar1 != (FILE *)0x0) {
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar1,"----------------------------------------------------------------\n");
          crt_time_c_time_with_rounding_FUN_006001f0(&local_10);
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar1,"Msg: %s\n",g_ErrorMessageBuffer);
          crt_stdio_c_fprintf_FUN_005fe6d0
                    (pFVar1,"File: %s line %d\n",g_CurrentFilename,g_CurrentLineNumber);
          timeptr = crt_time_c_localtime_FUN_00600288(&local_10);
          pcVar5 = crt_time_c_asctime_FUN_00601768(timeptr);
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar1,"Time: %s",pcVar5);
          piVar2 = (int *)crt_errno_c_errno_FUN_00601450();
          pcVar5 = crt_string_c_strerror_FUN_00601470(*piVar2);
          puVar3 = (uint *)crt_errno_c_errno_FUN_00601450();
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar1,"errno = %d (%s)\n",*puVar3,pcVar5);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar1,"..\\core\\main.c",0xad);
        }
        core_sound_cpp_CSound_dtor_FUN_005aaeb0();
        engine_2d_c_cleanupGraphicsSystem_FUN_005ecd90();
        wincore_winrun_cpp_endPeriod_FUN_005f2db0();
                    /* WARNING: Subroutine does not return */
        wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_005f3920(g_ErrorMessageBuffer);
      }
      do {
        pcVar5 = g_CurrentFilename;
        if (*g_CurrentFilename == '\\') goto LAB_00506f93;
        if (*g_CurrentFilename == '\0') break;
        pcVar5 = g_CurrentFilename + 1;
        if (*pcVar5 == '\\') goto LAB_00506f93;
        g_CurrentFilename = g_CurrentFilename + 2;
      } while (*pcVar5 != '\0');
      pcVar5 = (char *)0x0;
LAB_00506f93:
      pcVar5 = pcVar5 + 1;
      g_CurrentFilename = pcVar5;
    }
  } while( true );
}

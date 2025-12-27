// Name: core_main.c_displayErrorAndQuit_FUN_00506f10
// Address: 00506f10
// Address Range: [[00506f10, 00507030] [0050703b, 005070ea]]
// Convention: __cdecl
// Signature: void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format, ...)

#include "nocturne.h"

void __cdecl core_main_c_displayErrorAndQuit_FUN_00506f10(char *format,...)

{
  FILE *pFVar1;
  int *piVar2;
  uint *puVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  FILE *in_stack_0000000c;
  char *in_stack_00000010;
  char *in_stack_00000014;
  FILE *in_stack_00000018;
  char *in_stack_0000001c;
  FILE *in_stack_00000020;
  char *in_stack_00000024;
  uint in_stack_00000028;
  
  if (g_RecursiveCallFlag != 0) {
    pFVar1 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ("gtfo.txt",(char *)0x0,"at","..\\core\\main.c",0x80);
    if (pFVar1 != (FILE *)0x0) {
      crt_stdio_c_fprintf_FUN_005fe6d0(pFVar1,"Recursive GTFO!\n");
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar1,"..\\core\\main.c",0x83);
    }
    crt_startup_c_notifyAbnormalTermination_FUN_00601620();
  }
  g_RecursiveCallFlag = 1;
  crt_stdio_c_vsprintf_FUN_005fdba8
            (g_ErrorMessageBuffer,in_stack_00000014,(va_list_t *)&stack0xfffffffc);
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
          crt_time_c_time_with_rounding_FUN_006001f0((time_t *)&stack0x0000000c);
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar1,"Msg: %s\n");
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar1,"File: %s line %d\n");
          in_stack_0000000c = (FILE *)&stack0x00000018;
          in_stack_00000010 = (char *)crt_time_c_localtime_FUN_00600288((time_t *)in_stack_0000000c)
          ;
          in_stack_0000000c = (FILE *)0x507099;
          crt_time_c_asctime_FUN_00601768((tm *)in_stack_00000010);
          in_stack_00000010 = "Time: %s";
          in_stack_0000000c = pFVar1;
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar1,"Time: %s");
          in_stack_00000018 = (FILE *)0x5070b0;
          piVar2 = (int *)crt_errno_c_errno_FUN_00601450();
          in_stack_0000001c = (char *)*piVar2;
          in_stack_00000018 = (FILE *)0x5070b8;
          in_stack_00000020 = (FILE *)crt_string_c_strerror_FUN_00601470((int)in_stack_0000001c);
          in_stack_0000001c = (char *)0x5070c1;
          puVar3 = (uint *)crt_errno_c_errno_FUN_00601450();
          in_stack_00000020 = (FILE *)*puVar3;
          in_stack_0000001c = "errno = %d (%s)\n";
          in_stack_00000018 = pFVar1;
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar1,"errno = %d (%s)\n");
          in_stack_00000028 = 0xad;
          in_stack_00000024 = "..\\core\\main.c";
          in_stack_0000001c = (char *)0x5070e2;
          in_stack_00000020 = pFVar1;
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

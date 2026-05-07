// Name: core_main.c_displayErrorAndQuit_FUN_00506f10
// Address: 00506f10
// MANUAL RECONSTRUCTION
// Address Range: [[00506f10, 00507030] [0050703b, 005070ea]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_displayErrorAndQuit_FUN_00506f10(char *format,...)

#include "nocturne.h"
#include "debug_log.h"

void __cdecl core_main_c_displayErrorAndQuit_FUN_00506f10(char *format,...)

{
  _FILE *file;
  _FILE *p_Var1;
  _tm *timeptr;
  int *piVar2;
  int *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar1;
  va_list_t local_14;
  time_t local_10;
  
  if (g_RecursiveCallFlag != 0) {
    file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("gtfo.txt",(char *)0x0,"at","..\\core\\main.c",0x80);
    if (file != (_FILE *)0x0) {
      _fprintf(file,"Recursive GTFO!\n");
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\main.c",0x83);
    }
    notifyAbnormalTermination();
  }
  VA_START_T(local_14, format);
  g_RecursiveCallFlag = 1;
  _vsprintf(g_ErrorMessageBuffer_02dd3130,format,local_14);
  VA_END_T(local_14);
  DERROR("%s (orig-src %s:%d)",
         g_ErrorMessageBuffer_02dd3130,
         g_CurrentFilename ? g_CurrentFilename : "(null)",
         g_CurrentLineNumber);
  pcVar1 = g_CurrentFilename;
  do {
    pcVar4 = pcVar1;
    if (*pcVar1 == '\\') goto LAB_00506f71;
    if (*pcVar1 == '\0') goto LAB_00506f6f;
    pcVar4 = pcVar1 + 1;
    if (*pcVar4 == '\\') goto LAB_00506f71;
    pcVar1 = pcVar1 + 2;
    if (*pcVar4 == '\0') {
LAB_00506f6f:
      pcVar4 = (char *)0x0;
LAB_00506f71:
      if (pcVar4 == (char *)0x0) {
        p_Var1 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           ("gtfo.txt",(char *)0x0,"at","..\\core\\main.c",
                            0xa4);
        if (p_Var1 != (_FILE *)0x0) {
          _fprintf(p_Var1,"----------------------------------------------------------------\n");
          _time(&local_10);
          _fprintf(p_Var1,"Msg: %s\n",g_ErrorMessageBuffer_02dd3130);
          _fprintf(p_Var1,"File: %s line %d\n",g_CurrentFilename,g_CurrentLineNumber);
          timeptr = _localtime(&local_10);
          pcVar1 = _asctime(timeptr);
          _fprintf(p_Var1,"Time: %s",pcVar1);
          piVar2 = _errno();
          pcVar1 = strerror(*piVar2);
          puVar3 = _errno();
          _fprintf(p_Var1,"errno = %d (%s)\n",*puVar3,pcVar1);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var1,"..\\core\\main.c",0xad);
        }
        core_sound_cpp_CSound_dtor_FUN_005b2d60(g_CSoundPtr);
        engine_2d_c_cleanupGraphicsSystem_FUN_00401130();
        wincore_winrun_cpp_endPeriod_FUN_005f2db0();
        wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_005f3920(g_ErrorMessageBuffer_02dd3130);
      }
      pcVar5 = strchr(g_CurrentFilename,'\\');
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)0x0;
      }
      pcVar1 = pcVar5 + 1;
      g_CurrentFilename = pcVar1;
    }
  } while( true );
}

// Name: engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470
// Address: 004fb470
// Address Range: [[004fb470, 004fb653]]
// Convention: __cdecl
// Signature: int engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470(CIni * this_ptr, char * section, char * key, char * value, char * filename)

#include "nocturne.h"

int __cdecl
engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004fb470
          (CIni *this_ptr,char *section,char *key,char *value,char *filename)

{
  byte bVar1;
  bool bVar2;
  FILE *stream;
  char *pcVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  int unaff_EDI;
  char *in_stack_0000001c;
  char acStack_204 [248];
  char acStack_10c [8];
  char acStack_104 [244];
  
  iVar5 = 0;
  bVar2 = false;
  this_ptr->initialized = 1;
  stream = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (value,(char *)0x0,"rt","..\\engine\\ini.cpp",0xf4);
  if (stream == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0xf5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("cIni::FindLineNumberOfVariable: Unable to open input");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_10c,"[%s]\n",value);
  while ((stream->_flag & 0x10) == 0) {
    pcVar3 = crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffdf8,0xff,stream);
    if (pcVar3 == (char *)0x0) break;
    iVar4 = crt_string_c_strcmp_FUN_005fef20(acStack_204,acStack_104);
    if (iVar4 == 0) {
      bVar1 = (byte)stream->_flag;
      bVar2 = false;
      goto LAB_004fb4f0;
    }
    iVar5 = iVar5 + 1;
  }
LAB_004fb5ab:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\engine\\ini.cpp",0x154);
  if (bVar2) {
    return iVar5;
  }
  return 0;
LAB_004fb4f0:
  if ((bVar1 & 0x10) != 0) goto LAB_004fb5ab;
  pcVar3 = crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffdf8,0xff,stream);
  pcVar6 = &stack0xfffffdf8;
  if (pcVar3 == (char *)0x0) goto LAB_004fb5ab;
  do {
    pcVar3 = pcVar6;
    if (*pcVar6 == '\n') goto LAB_004fb52d;
    if (*pcVar6 == '\0') break;
    pcVar3 = pcVar6 + 1;
    if (*pcVar3 == '\n') goto LAB_004fb52d;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_004fb52d:
  pcVar6 = &stack0xfffffdf8;
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
    pcVar6 = &stack0xfffffdf8;
  }
  do {
    pcVar3 = pcVar6;
    if (*pcVar6 == '=') goto LAB_004fb550;
    if (*pcVar6 == '\0') break;
    pcVar3 = pcVar6 + 1;
    if (*pcVar3 == '=') goto LAB_004fb550;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_004fb550:
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
  }
  iVar4 = crt_string_c_strcmp_FUN_005fef20(&stack0xfffffdf8,value);
  if (iVar4 == 0) {
    bVar2 = true;
    iVar4 = crt_string_c_strcmp_FUN_005fef20((char *)(unaff_EDI + 1),in_stack_0000001c);
    if (iVar4 == 0) {
      value[0] = '\0';
      value[1] = '\0';
      value[2] = '\0';
      value[3] = '\0';
    }
    goto LAB_004fb5ab;
  }
  bVar1 = (byte)stream->_flag;
  iVar5 = iVar5 + 1;
  goto LAB_004fb4f0;
}

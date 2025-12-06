// Name: engine_ini.cpp_CIni_getProfileString_FUN_004fb250
// Address: 004fb250
// Address Range: [[004fb250, 004fb46a]]
// Convention: __cdecl
// Signature: int engine_ini.cpp_CIni_getProfileString_FUN_004fb250(CIni * this_ptr, char * section, char * key, char * default_value, char * output_buffer, int buffer_size, char * filename)

#include "nocturne.h"

int __cdecl
engine_ini_cpp_CIni_getProfileString_FUN_004fb250
          (CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,
          int buffer_size,char *filename)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  FILE *stream;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  BADSPACEBASE *in_ESP;
  char *unaff_EBP;
  char *pcVar7;
  byte bVar8;
  char *in_stack_00000020;
  char *in_stack_00000024;
  int in_stack_00000028;
  char acStack_200 [248];
  char acStack_108 [8];
  char acStack_100 [240];
  
  bVar8 = 0;
  bVar3 = false;
  stream = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (filename,(char *)0x0,"rt","..\\engine\\ini.cpp",0x56);
  if (stream == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x57;
    core_main_c_displayErrorAndQuit_FUN_00506f10("cIni::getProfileString: Unable to open input");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_108,"[%s]\n",default_value);
  do {
    if ((stream->_flag & 0x10) != 0) goto LAB_004fb2d7;
    pcVar4 = crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffdfc,0xff,stream);
    if (pcVar4 == (char *)0x0) goto LAB_004fb2d7;
    iVar5 = crt_string_c_strcmp_FUN_005fef20(acStack_200,acStack_100);
  } while (iVar5 != 0);
  bVar3 = false;
  bVar2 = (byte)stream->_flag;
  while ((bVar2 & 0x10) == 0) {
    pcVar4 = crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffdfc,0xff,stream);
    pcVar7 = &stack0xfffffdfc;
    if (pcVar4 == (char *)0x0) break;
    do {
      unaff_EBP = pcVar7;
      if (*pcVar7 == '=') goto LAB_004fb3b0;
      if (*pcVar7 == '\0') break;
      unaff_EBP = pcVar7 + 1;
      if (*unaff_EBP == '=') goto LAB_004fb3b0;
      pcVar7 = pcVar7 + 2;
    } while (*unaff_EBP != '\0');
    unaff_EBP = (char *)0x0;
LAB_004fb3b0:
    if (unaff_EBP != (char *)0x0) {
      *unaff_EBP = '\0';
    }
    iVar5 = crt_string_c_strcmp_FUN_005fef20(&stack0xfffffdfc,output_buffer);
    if (iVar5 == 0) {
      bVar3 = true;
      break;
    }
    bVar2 = (byte)stream->_flag;
  }
LAB_004fb2d7:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\engine\\ini.cpp",0x99);
  if (bVar3) {
    pcVar7 = unaff_EBP + 1;
    uVar6 = 0xffffffff;
    pcVar4 = pcVar7;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    pcVar7[~uVar6 - 2] = '\0';
    if ((int)(~uVar6 - 2) < in_stack_00000028) {
      do {
        cVar1 = *pcVar7;
        *in_stack_00000024 = cVar1;
        if (cVar1 == '\0') {
          return 1;
        }
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        in_stack_00000024[1] = cVar1;
        in_stack_00000024 = in_stack_00000024 + 2;
      } while (cVar1 != '\0');
      return 1;
    }
  }
  else {
    uVar6 = 0xffffffff;
    pcVar4 = in_stack_00000020;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    if ((int)(~uVar6 - 1) < in_stack_00000028) {
      do {
        cVar1 = *in_stack_00000020;
        *in_stack_00000024 = cVar1;
        if (cVar1 == '\0') {
          return 1;
        }
        cVar1 = in_stack_00000020[1];
        in_stack_00000020 = in_stack_00000020 + 2;
        in_stack_00000024[1] = cVar1;
        in_stack_00000024 = in_stack_00000024 + 2;
      } while (cVar1 != '\0');
      return 1;
    }
  }
  return 0;
}

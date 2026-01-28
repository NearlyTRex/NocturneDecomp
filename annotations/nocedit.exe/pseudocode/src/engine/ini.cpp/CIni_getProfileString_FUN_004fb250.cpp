// Name: engine_ini.cpp_CIni_getProfileString_FUN_004fb250
// Address: 004fb250
// Address Range: [[004fb250, 004fb46a]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_CIni_getProfileString_FUN_004fb250 (CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer, int buffer_size,char *filename)

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
  char *pcVar5;
  int iVar6;
  uint uVar7;
  char *unaff_EBP;
  byte bVar8;
  char local_210 [256];
  char local_110 [256];
  
  bVar8 = 0;
  bVar3 = false;
  stream = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (filename,(char *)0x0,"rt","..\\engine\\ini.cpp",0x56);
  if (stream == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x57;
    core_main_c_displayErrorAndQuit_FUN_00506f10("cIni::getProfileString: Unable to open input");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(local_110,"[%s]\n",section);
  do {
    if (((stream->_flag & 0x10) != 0) ||
       (pcVar5 = crt_stdio_c_fgets_FUN_005fefd0(local_210,0xff,stream), pcVar5 == (char *)0x0))
    goto LAB_004fb2d7;
    iVar6 = crt_string_c_strcmp_FUN_005fef20(local_210,local_110);
  } while (iVar6 != 0);
  bVar2 = (byte)stream->_flag;
  bVar3 = false;
  do {
    if (((bVar2 & 0x10) != 0) ||
       (pcVar4 = crt_stdio_c_fgets_FUN_005fefd0(local_210,0xff,stream), pcVar5 = local_210,
       pcVar4 == (char *)0x0)) goto LAB_004fb2d7;
    do {
      unaff_EBP = pcVar5;
      if (*pcVar5 == '=') goto LAB_004fb3b0;
      if (*pcVar5 == '\0') break;
      unaff_EBP = pcVar5 + 1;
      if (*unaff_EBP == '=') goto LAB_004fb3b0;
      pcVar5 = pcVar5 + 2;
    } while (*unaff_EBP != '\0');
    unaff_EBP = (char *)0x0;
LAB_004fb3b0:
    if (unaff_EBP != (char *)0x0) {
      *unaff_EBP = '\0';
    }
    iVar6 = crt_string_c_strcmp_FUN_005fef20(local_210,key);
    if (iVar6 == 0) break;
    bVar2 = (byte)stream->_flag;
  } while( true );
  bVar3 = true;
LAB_004fb2d7:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\engine\\ini.cpp",0x99);
  if (bVar3) {
    pcVar4 = unaff_EBP + 1;
    uVar7 = 0xffffffff;
    pcVar5 = pcVar4;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    pcVar4[~uVar7 - 2] = '\0';
    if ((int)(~uVar7 - 2) < buffer_size) {
      do {
        cVar1 = *pcVar4;
        *output_buffer = cVar1;
        if (cVar1 == '\0') {
          return 1;
        }
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        output_buffer[1] = cVar1;
        output_buffer = output_buffer + 2;
      } while (cVar1 != '\0');
      return 1;
    }
  }
  else {
    uVar7 = 0xffffffff;
    pcVar5 = default_value;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    if ((int)(~uVar7 - 1) < buffer_size) {
      do {
        cVar1 = *default_value;
        *output_buffer = cVar1;
        if (cVar1 == '\0') {
          return 1;
        }
        cVar1 = default_value[1];
        default_value = default_value + 2;
        output_buffer[1] = cVar1;
        output_buffer = output_buffer + 2;
      } while (cVar1 != '\0');
      return 1;
    }
  }
  return 0;
}

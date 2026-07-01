// Name: engine_ini.cpp_CIni_getProfileString_FUN_004fb250
// Address: 004fb250
// Address Range: [[004fb250, 004fb46a]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_CIni_getProfileString_FUN_004fb250(CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)

#include "nocturne.h"

int __cdecl engine_ini_cpp_CIni_getProfileString_FUN_004fb250(CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)

{
  char cVar2;
  _FILE *stream;
  char *pcVar4;
  char *pcVar5;
  int iVar3;
  int iVar6;
  uint uVar7;
  uint uVar4;
  char *local_e1;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char local_210 [256];
  char local_110 [256];
  char cVar1;
  byte bVar2;
  bool bVar3;
  
  bVar8 = 0;
  bVar3 = false;
  stream = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (filename,(char *)0x0,"rt","..\\engine\\ini.cpp",86);
  if (stream == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 87;
    core_main_c_displayErrorAndQuit_FUN_00506f10("cIni::getProfileString: Unable to open input");
  }
  _sprintf(local_110,"[%s]\n",section);
  do {
    if (((stream->_flag & 0x10) != 0) ||
       (pcVar5 = _fgets(local_210,0xff,stream), pcVar5 == (char *)0x0))
    goto LAB_004fb2d7;
    iVar3 = _strcmp(local_210,local_110);
  } while (iVar3 != 0);
  bVar2 = (byte)stream->_flag;
  bVar3 = false;
  do {
    if (((bVar2 & 0x10) != 0) ||
       (pcVar4 = _fgets(local_210,0xff,stream), pcVar7 = local_210,
       pcVar4 == (char *)0x0)) goto LAB_004fb2d7;
    do {
      local_e1 = pcVar7;
      if (*pcVar7 == '=') goto LAB_004fb3b0;
      if (*pcVar7 == '\0') break;
      local_e1 = pcVar7 + 1;
      if (*local_e1 == '=') goto LAB_004fb3b0;
      pcVar7 = pcVar7 + 2;
    } while (*local_e1 != '\0');
    local_e1 = (char *)0x0;
LAB_004fb3b0:
    if (local_e1 != (char *)0x0) {
      *local_e1 = '\0';
    }
    iVar6 = _strcmp(local_210,key);
    if (iVar6 == 0) break;
    bVar2 = (byte)stream->_flag;
  } while( true );
  bVar3 = true;
LAB_004fb2d7:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\engine\\ini.cpp",153);
  if (bVar3) {
    pcVar6 = local_e1 + 1;
    uVar7 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    pcVar6[~uVar7 - 2] = '\0';
    if ((int)(~uVar7 - 2) < buffer_size) {
      do {
        cVar2 = *pcVar6;
        *output_buffer = cVar2;
        if (cVar2 == '\0') {
          return 1;
        }
        cVar2 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        output_buffer[1] = cVar2;
        output_buffer = output_buffer + 2;
      } while (cVar2 != '\0');
      return 1;
    }
  }
  else {
    uVar4 = 0xffffffff;
    pcVar7 = default_value;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
    } while (cVar2 != '\0');
    if ((int)(~uVar4 - 1) < buffer_size) {
      do {
        cVar2 = *default_value;
        *output_buffer = cVar2;
        if (cVar2 == '\0') {
          return 1;
        }
        cVar2 = default_value[1];
        default_value = default_value + 2;
        output_buffer[1] = cVar2;
        output_buffer = output_buffer + 2;
      } while (cVar2 != '\0');
      return 1;
    }
  }
  return 0;
}

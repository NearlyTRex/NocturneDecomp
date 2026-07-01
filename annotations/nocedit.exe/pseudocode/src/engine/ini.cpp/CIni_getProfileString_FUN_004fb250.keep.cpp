// Name: engine_ini.cpp_CIni_getProfileString_FUN_004fb250
// Address: 004fb250
// MANUAL RECONSTRUCTION
// Address Range: [[004fb250, 004fb46a]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_CIni_getProfileString_FUN_004fb250(CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)

#include "nocturne.h"

int __cdecl engine_ini_cpp_CIni_getProfileString_FUN_004fb250(CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)

{
  _FILE *stream;
  char *pcVar4;
  char *pcVar5;
  int iVar3;
  int iVar6;
  size_t len;
  char *local_e1;
  char *pcVar6;
  char local_210 [256];
  char local_110 [256];
  byte bVar2;
  bool bVar3;

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
       (pcVar4 = _fgets(local_210,0xff,stream), pcVar4 == (char *)0x0)) goto LAB_004fb2d7;
    local_e1 = strchr(local_210,'=');
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
    len = strlen(pcVar6);
    pcVar6[len - 1] = '\0';
    if ((int)(len - 1) < buffer_size) {
      strcpy(output_buffer,pcVar6);
      return 1;
    }
  }
  else {
    len = strlen(default_value);
    if ((int)len < buffer_size) {
      memmove(output_buffer,default_value,len + 1);
      return 1;
    }
  }
  return 0;
}

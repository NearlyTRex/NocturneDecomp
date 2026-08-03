// Name: engine_ini.cpp_CIni_getProfileString_FUN_004bd0a0
// Address: 004bd0a0
// Address Range: [[004bd0a0, 004bd2a8]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_CIni_getProfileString_FUN_004bd0a0(CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)

#include "nocturne.h"

int __cdecl engine_ini_cpp_CIni_getProfileString_FUN_004bd0a0(CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  _FILE *stream;
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
  stream = _fopen(filename,"rt");
  if (stream == (_FILE *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\engine\\ini.cpp";
    g_INT_01cc4804 = 0x57;
    core_main_c_FUN_004c8440("cIni::getProfileString: Unable to open input");
  }
  _sprintf(local_110,"[%s]\n");
  do {
    if (((stream->_flag & 0x10) != 0) ||
       (pcVar5 = _fgets(local_210,0xff,stream), pcVar5 == (char *)0x0))
    goto LAB_004bd11f;
    iVar6 = _strcmp(local_210,local_110);
  } while (iVar6 != 0);
  bVar2 = (byte)stream->_flag;
  bVar3 = false;
  do {
    if (((bVar2 & 0x10) != 0) ||
       (pcVar4 = _fgets(local_210,0xff,stream), pcVar5 = local_210,
       pcVar4 == (char *)0x0)) goto LAB_004bd11f;
    do {
      unaff_EBP = pcVar5;
      if (*pcVar5 == '=') goto LAB_004bd1ee;
      if (*pcVar5 == '\0') break;
      unaff_EBP = pcVar5 + 1;
      if (*unaff_EBP == '=') goto LAB_004bd1ee;
      pcVar5 = pcVar5 + 2;
    } while (*unaff_EBP != '\0');
    unaff_EBP = (char *)0x0;
LAB_004bd1ee:
    if (unaff_EBP != (char *)0x0) {
      *unaff_EBP = '\0';
    }
    iVar6 = _strcmp(local_210,key);
    if (iVar6 == 0) break;
    bVar2 = (byte)stream->_flag;
  } while( true );
  bVar3 = true;
LAB_004bd11f:
  _fclose(stream);
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

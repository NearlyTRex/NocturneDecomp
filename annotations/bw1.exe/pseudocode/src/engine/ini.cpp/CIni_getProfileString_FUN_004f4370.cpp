// Name: engine_ini.cpp_CIni_getProfileString_FUN_004f4370
// Address: 004f4370
// Address Range: [[004f4370, 004f454e]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_CIni_getProfileString_FUN_004f4370(CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)

#include "nocturne.h"

int __cdecl engine_ini_cpp_CIni_getProfileString_FUN_004f4370(CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)

{
  char cVar1;
  _FILE *stream;
  int iVar2;
  uint uVar3;
  char *unaff_EBP;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char local_214 [256];
  char local_114 [256];
  int local_14;
  
  bVar6 = 0;
  local_14 = 0;
  stream = _fopen(filename,"rt");
  if (stream != (_FILE *)0x0) {
    _sprintf(local_114,"[%s]\n");
    do {
      if (((stream->_flag & 0x10) != 0) ||
         (pcVar5 = _fgets(local_214,0xff,stream), pcVar5 == (char *)0x0)) {
        if (local_14 == 0) goto LAB_004f4479;
        break;
      }
      iVar2 = _strcmp(local_214,local_114);
    } while (iVar2 != 0);
    local_14 = 0;
    do {
      pcVar5 = local_214;
      if (((stream->_flag & 0x10) != 0) ||
         (pcVar4 = _fgets(local_214,0xff,stream), pcVar4 == (char *)0x0))
      goto LAB_004f4479;
      do {
        unaff_EBP = pcVar5;
        if (*pcVar5 == '=') goto LAB_004f4453;
        if (*pcVar5 == '\0') break;
        unaff_EBP = pcVar5 + 1;
        if (*unaff_EBP == '=') goto LAB_004f4453;
        pcVar5 = pcVar5 + 2;
      } while (*unaff_EBP != '\0');
      unaff_EBP = (char *)0x0;
LAB_004f4453:
      if (unaff_EBP != (char *)0x0) {
        *unaff_EBP = '\0';
      }
      iVar2 = _strcmp(local_214,key);
    } while (iVar2 != 0);
    local_14 = 1;
LAB_004f4479:
    _fclose(stream);
  }
  if (local_14 != 0) {
    pcVar4 = unaff_EBP + 1;
    uVar3 = 0xffffffff;
    pcVar5 = pcVar4;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    pcVar4[~uVar3 - 2] = '\0';
    memset(output_buffer,0,buffer_size);
    _strncpy(output_buffer,pcVar4,buffer_size - 1);
    return 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = default_value;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (buffer_size <= (int)(~uVar3 - 1)) {
    return 0;
  }
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

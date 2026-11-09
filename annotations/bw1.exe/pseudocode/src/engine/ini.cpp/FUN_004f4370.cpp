// Name: engine_ini.cpp_FUN_004f4370
// Address: 004f4370
// Address Range: [[004f4370, 004f454e]]
// Convention: __cdecl
// Signature: int __cdecl engine_ini_cpp_FUN_004f4370(CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)

#include "nocturne.h"

int __cdecl engine_ini_cpp_FUN_004f4370(CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *unaff_EBP;
  char *src;
  char *pcVar5;
  byte bVar6;
  char local_214 [256];
  char local_114 [256];
  int local_14;
  
  bVar6 = 0;
  local_14 = 0;
  iVar2 = _fopen(filename,"rt");
  if (iVar2 != 0) {
    FUN_005bfb40(local_114,"[%s]\n",section);
    do {
      if (((*(byte *)(iVar2 + 0xc) & 0x10) != 0) ||
         (iVar3 = _fgets(local_214,0xff,iVar2), iVar3 == 0)) {
        if (local_14 == 0) goto LAB_004f4479;
        break;
      }
      iVar3 = _strcmp(local_214,local_114);
    } while (iVar3 != 0);
    local_14 = 0;
    do {
      pcVar5 = local_214;
      if (((*(byte *)(iVar2 + 0xc) & 0x10) != 0) ||
         (iVar3 = _fgets(local_214,0xff,iVar2), iVar3 == 0))
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
      iVar3 = _strcmp(local_214,key);
    } while (iVar3 != 0);
    local_14 = 1;
LAB_004f4479:
    _fclose(iVar2);
  }
  if (local_14 != 0) {
    src = unaff_EBP + 1;
    uVar4 = 0xffffffff;
    pcVar5 = src;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    src[~uVar4 - 2] = '\0';
    memset(output_buffer,0,buffer_size);
    _strncpy(output_buffer,src,buffer_size - 1);
    return 1;
  }
  uVar4 = 0xffffffff;
  pcVar5 = default_value;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (buffer_size <= (int)(~uVar4 - 1)) {
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

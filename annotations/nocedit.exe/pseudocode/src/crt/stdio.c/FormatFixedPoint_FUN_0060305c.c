// Name: crt_stdio.c_FormatFixedPoint_FUN_0060305c
// Address: 0060305c
// Address Range: [[0060305c, 0060315e]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c_FormatFixedPoint_FUN_0060305c(char *buffer,int fixed_point_value,FormatSpec *spec_info)

#include "nocturne.h"

void __cdecl
FormatFixedPoint(char *buffer,int fixed_point_value,FormatSpec *spec_info)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint local_14;
  
  local_14 = fixed_point_value;
  if (fixed_point_value < 0) {
    *buffer = '-';
    local_14 = -fixed_point_value;
    buffer = buffer + 1;
  }
  if (spec_info->precision == -1) {
    spec_info->precision = 4;
  }
  IntegerToString(local_14 >> 0x10,buffer,10);
  cVar1 = *buffer;
  pcVar4 = buffer;
  while (cVar1 != '\0') {
    pcVar5 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar5;
  }
  if (spec_info->precision != 0) {
    *pcVar4 = '.';
    iVar2 = 0;
    pcVar4 = pcVar4 + 1;
    if (0 < spec_info->precision) {
      do {
        local_14 = local_14 & 0xffff;
        uVar3 = local_14 * 10;
        local_14._2_1_ = (char)(uVar3 >> 0x10);
        *pcVar4 = local_14._2_1_ + '0';
        iVar2 = iVar2 + 1;
        pcVar4 = pcVar4 + 1;
        local_14 = uVar3;
      } while (iVar2 < spec_info->precision);
    }
    *pcVar4 = '\0';
  }
  if ((local_14 & 0x8000) != 0) {
    while (pcVar4 != buffer) {
      pcVar5 = pcVar4 + -1;
      if (pcVar4[-1] == '.') {
        pcVar5 = pcVar4 + -2;
      }
      if (*pcVar5 != '9') {
        *pcVar5 = *pcVar5 + '\x01';
        return;
      }
      *pcVar5 = '0';
      pcVar4 = pcVar5;
    }
    pcVar4 = buffer + 1;
    *buffer = '1';
    cVar1 = *pcVar4;
    while (cVar1 == '0') {
      pcVar5 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar5;
    }
    if (*pcVar4 == '.') {
      *pcVar4 = '0';
      pcVar4[1] = '.';
      pcVar5 = pcVar4 + 2;
      pcVar4 = pcVar4 + 2;
      cVar1 = *pcVar5;
      while (cVar1 == '0') {
        pcVar5 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar5;
      }
    }
    *pcVar4 = '0';
    pcVar4[1] = '\0';
  }
  return;
}

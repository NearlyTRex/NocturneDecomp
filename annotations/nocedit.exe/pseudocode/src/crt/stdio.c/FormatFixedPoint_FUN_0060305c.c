// Name: crt_stdio.c_FormatFixedPoint_FUN_0060305c
// Address: 0060305c
// Address Range: [[0060305c, 0060315e]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c_FormatFixedPoint_FUN_0060305c(char *buffer,int fixed_point_value,FormatSpec *spec_info)

#include "nocturne.h"

void __cdecl FormatFixedPoint(char *buffer,int fixed_point_value,FormatSpec *spec_info)

{
  char *pcVar1;
  char cVar2;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar3;
  char *pcVar5;
  uint local_14;
  char cVar1;
  
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
  pcVar3 = buffer;
  while (cVar1 != '\0') {
    pcVar4 = pcVar3 + 1;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar4;
  }
  if (spec_info->precision != 0) {
    *pcVar3 = '.';
    iVar2 = 0;
    pcVar3 = pcVar3 + 1;
    if (0 < spec_info->precision) {
      do {
        local_14 = local_14 & 0xffff;
        uVar3 = local_14 * 10;
        local_14._2_1_ = (char)(uVar3 >> 0x10);
        *pcVar3 = local_14._2_1_ + '0';
        iVar2 = iVar2 + 1;
        pcVar3 = pcVar3 + 1;
        local_14 = uVar3;
      } while (iVar2 < spec_info->precision);
    }
    *pcVar3 = '\0';
  }
  if ((local_14 & 0x8000) != 0) {
    while (pcVar3 != buffer) {
      pcVar5 = pcVar3 + -1;
      if (pcVar3[-1] == '.') {
        pcVar5 = pcVar3 + -2;
      }
      if (*pcVar5 != '9') {
        *pcVar5 = *pcVar5 + '\x01';
        return;
      }
      *pcVar5 = '0';
      pcVar3 = pcVar5;
    }
    pcVar3 = buffer + 1;
    *buffer = '1';
    cVar2 = *pcVar3;
    while (cVar2 == '0') {
      pcVar1 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
      cVar2 = *pcVar1;
    }
    if (*pcVar3 == '.') {
      *pcVar3 = '0';
      pcVar3[1] = '.';
      pcVar1 = pcVar3 + 2;
      pcVar3 = pcVar3 + 2;
      cVar2 = *pcVar1;
      while (cVar2 == '0') {
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
        cVar2 = *pcVar1;
      }
    }
    *pcVar3 = '0';
    pcVar3[1] = '\0';
  }
  return;
}

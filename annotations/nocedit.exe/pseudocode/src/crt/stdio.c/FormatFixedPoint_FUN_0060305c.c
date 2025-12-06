// Name: crt_stdio.c_FormatFixedPoint_FUN_0060305c
// Address: 0060305c
// Address Range: [[0060305c, 0060315e]]
// Convention: __cdecl
// Signature: void crt_stdio.c_FormatFixedPoint_FUN_0060305c(char * buffer, int fixed_point_value, FormatSpec * spec_info)

#include "nocturne.h"

/* WARNING: Struct "FormatSpec": ignoring multiple overlapping fields */

void __cdecl
crt_stdio_c_FormatFixedPoint_FUN_0060305c(char *buffer,int fixed_point_value,FormatSpec *spec_info)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint unaff_EBP;
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
  crt_stdio_c_IntegerToString_FUN_00607d18(local_14 >> 0x10,buffer,10);
  cVar1 = *buffer;
  pcVar3 = buffer;
  while (cVar1 != '\0') {
    pcVar4 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar4;
  }
  if (spec_info->precision != 0) {
    *pcVar3 = '.';
    iVar2 = 0;
    pcVar3 = pcVar3 + 1;
    if (0 < spec_info->precision) {
      do {
        unaff_EBP = (unaff_EBP & 0xffff) * 10;
        *pcVar3 = (char)(unaff_EBP >> 0x10) + '0';
        iVar2 = iVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (iVar2 < spec_info->precision);
    }
    *pcVar3 = '\0';
  }
  if ((unaff_EBP & 0x8000) != 0) {
    while (pcVar3 != buffer) {
      pcVar4 = pcVar3 + -1;
      if (pcVar3[-1] == '.') {
        pcVar4 = pcVar3 + -2;
      }
      if (*pcVar4 != '9') {
        *pcVar4 = *pcVar4 + '\x01';
        return;
      }
      *pcVar4 = '0';
      pcVar3 = pcVar4;
    }
    pcVar3 = buffer + 1;
    *buffer = '1';
    cVar1 = *pcVar3;
    while (cVar1 == '0') {
      pcVar4 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar4;
    }
    if (*pcVar3 == '.') {
      *pcVar3 = '0';
      pcVar3[1] = '.';
      pcVar4 = pcVar3 + 2;
      pcVar3 = pcVar3 + 2;
      cVar1 = *pcVar4;
      while (cVar1 == '0') {
        pcVar4 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar4;
      }
    }
    *pcVar3 = '0';
    pcVar3[1] = '\0';
  }
  return;
}

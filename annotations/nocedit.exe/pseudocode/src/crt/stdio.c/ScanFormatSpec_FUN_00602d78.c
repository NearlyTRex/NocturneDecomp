// Name: crt_stdio.c_ScanFormatSpec_FUN_00602d78
// Address: 00602d78
// Address Range: [[00602d78, 00602eda]]
// Convention: __cdecl
// Signature: char * __cdecl crt_stdio_c_ScanFormatSpec_FUN_00602d78(char *format,va_list_t *args,FormatSpec *spec_info)

#include "nocturne.h"

char * __cdecl
crt_stdio_c_ScanFormatSpec_FUN_00602d78(char *format,va_list_t *args,FormatSpec *spec_info)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  spec_info->zerofill = ' ';
  pbVar4 = (byte *)crt_stdio_c_ParseFormatFlags_FUN_00602edc(format,spec_info);
  spec_info->width = 0;
  if (*pbVar4 == 0x2a) {
    piVar2 = (int *)*args;
    *args = (va_list_t)(piVar2 + 1);
    iVar3 = *piVar2;
    spec_info->width = iVar3;
    if (iVar3 < 0) {
      spec_info->width = -iVar3;
      spec_info->flags = spec_info->flags | LEFT_ALIGN;
    }
    pbVar4 = pbVar4 + 1;
  }
  else {
    for (; (0x2f < *pbVar4 && (*pbVar4 < 0x3a)); pbVar4 = pbVar4 + 1) {
      spec_info->width = spec_info->width * 10 + (*pbVar4 - 0x30);
    }
  }
  spec_info->precision = -1;
  if (*pbVar4 == 0x2e) {
    spec_info->precision = 0;
    if (pbVar4[1] == 0x2a) {
      piVar2 = (int *)*args;
      *args = (va_list_t)(piVar2 + 1);
      iVar3 = *piVar2;
      spec_info->precision = iVar3;
      if (iVar3 < 0) {
        spec_info->precision = -1;
      }
      pbVar4 = pbVar4 + 2;
    }
    else {
      while( true ) {
        pbVar4 = pbVar4 + 1;
        if ((*pbVar4 < 0x30) || (0x39 < *pbVar4)) break;
        spec_info->precision = spec_info->precision * 10 + (*pbVar4 - 0x30);
      }
    }
    if (spec_info->precision != -1) {
      spec_info->zerofill = ' ';
    }
  }
  bVar1 = *pbVar4;
  pbVar5 = pbVar4 + 1;
  if (bVar1 < 0x4e) {
    if (bVar1 < 0x49) {
      if (bVar1 == 0x46) {
        spec_info->flags = spec_info->flags | FAR_PTR;
        return (char *)pbVar5;
      }
      return (char *)pbVar4;
    }
    if (0x49 < bVar1) {
      if (bVar1 == 0x4c) {
        spec_info->length_flags = spec_info->length_flags | BASIC_I64_FLAG;
        return (char *)pbVar5;
      }
      return (char *)pbVar4;
    }
    pbVar5 = pbVar4;
    if ((pbVar4[1] == 0x36) && (pbVar4[2] == 0x34)) {
      spec_info->length_flags = spec_info->length_flags | BASIC_I64_FLAG;
      return (char *)(pbVar4 + 3);
    }
  }
  else if (bVar1 < 0x4f) {
    spec_info->flags = spec_info->flags | NEAR_PTR;
  }
  else {
    if (0x6b < bVar1) {
      if ((0x6c < bVar1) && (bVar1 != 0x77)) {
        return (char *)pbVar4;
      }
      spec_info->flags = spec_info->flags | LONG_MODIFIER;
      return (char *)(pbVar4 + 1);
    }
    if (bVar1 != 0x68) {
      return (char *)pbVar4;
    }
    spec_info->flags = spec_info->flags | SHORT_MODIFIER;
  }
  return (char *)pbVar5;
}

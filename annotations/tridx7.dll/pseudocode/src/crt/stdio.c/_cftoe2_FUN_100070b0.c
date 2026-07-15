// Name: crt_stdio.c__cftoe2_FUN_100070b0
// Address: 100070b0
// Address Range: [[100070b0, 10007192]]
// Convention: __cdecl
// Signature: char * __cdecl crt_stdio_c__cftoe2_FUN_100070b0(char *buf,int dec,int caps,int *pflt,char is_g)

#include "nocturne.h"

char * __cdecl _cftoe2(char *buf,int dec,int caps,int *pflt,char is_g)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  if (is_g != '\0') {
    _shift(buf + (*pflt == 0x2d),(uint)(0 < dec));
  }
  pcVar3 = buf;
  if (*pflt == 0x2d) {
    pcVar3 = buf + 1;
    *buf = '-';
  }
  pcVar1 = pcVar3;
  if (0 < dec) {
    pcVar1 = pcVar3 + 1;
    *pcVar3 = *pcVar1;
    *pcVar1 = DAT_10017694;
  }
  pcVar3 = pcVar1 + dec + (uint)(is_g == '\0');
  builtin_strncpy(pcVar1 + dec + (uint)(is_g == '\0'),"e+000",6);
  if (caps != 0) {
    *pcVar3 = 'E';
  }
  if (*(char *)pflt[3] != '0') {
    iVar2 = pflt[1] + -1;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
      pcVar3[1] = '-';
    }
    if (99 < iVar2) {
      pcVar3[2] = pcVar3[2] + (char)(iVar2 / 100);
      iVar2 = iVar2 % 100;
    }
    if (9 < iVar2) {
      pcVar3[3] = pcVar3[3] + (char)(iVar2 / 10);
      iVar2 = iVar2 % 10;
    }
    pcVar3[4] = pcVar3[4] + (char)iVar2;
  }
  return buf;
}

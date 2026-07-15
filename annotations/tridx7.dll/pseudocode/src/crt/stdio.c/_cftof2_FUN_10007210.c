// Name: crt_stdio.c__cftof2_FUN_10007210
// Address: 10007210
// Address Range: [[10007210, 100072cd]]
// Convention: __cdecl
// Signature: char * __cdecl crt_stdio_c__cftof2_FUN_10007210(char *buf,uint dec,int *pflt,char is_g)

#include "nocturne.h"

char * __cdecl _cftof2(char *buf,uint dec,int *pflt,char is_g)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *str;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  iVar1 = pflt[1];
  if ((is_g != '\0') && (iVar2 = *pflt, dec == iVar1 - 1U)) {
    buf[(iVar1 - 1U) + (uint)(iVar2 == 0x2d)] = '0';
    (buf + (iVar1 - 1U) + (uint)(iVar2 == 0x2d))[1] = '\0';
  }
  pcVar5 = buf;
  if (*pflt == 0x2d) {
    pcVar5 = buf + 1;
    *buf = '-';
  }
  if (pflt[1] < 1) {
    str = pcVar5 + 1;
    _shift(pcVar5,1);
    *pcVar5 = '0';
  }
  else {
    str = pcVar5 + pflt[1];
  }
  if (0 < (int)dec) {
    _shift(str,1);
    *str = DAT_10017694;
    iVar1 = pflt[1];
    if (iVar1 < 0) {
      if (is_g == '\0') {
        uVar4 = -iVar1;
        if ((int)dec <= -iVar1) {
          uVar4 = dec;
        }
      }
      else {
        uVar4 = -iVar1;
      }
      _shift(str + 1,uVar4);
      uVar3 = uVar4 >> 2;
      pcVar5 = str + 1;
      while (uVar3 != 0) {
        uVar3 = uVar3 - 1;
        builtin_strncpy(pcVar5,"0000",4);
        pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar5 = '0';
        pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
      }
    }
  }
  return buf;
}

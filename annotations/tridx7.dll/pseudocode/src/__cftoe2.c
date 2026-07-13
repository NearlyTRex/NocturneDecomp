// Name: __cftoe2
// Address: 100070b0
// Address Range: [[100070b0, 10007192]]
// Convention: unknown
// Signature: undefined1 * __cftoe2(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

#include "nocturne.h"

/* Library Function - Single Match
byte * __cftoe2(byte *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  byte *puVar1;
  byte *puVar2;
  int iVar3;
  uint *puVar4;
  
  if (param_5 != '\0') {
    __shift(param_1 + (*param_4 == 0x2d),0 < param_2);
  }
  puVar1 = param_1;
  if (*param_4 == 0x2d) {
    puVar1 = param_1 + 1;
    *param_1 = 0x2d;
  }
  puVar2 = puVar1;
  if (0 < param_2) {
    puVar2 = puVar1 + 1;
    *puVar1 = *puVar2;
    *puVar2 = DAT_10017694;
  }
  puVar4 = (uint *)(puVar2 + param_2 + (uint)(param_5 == '\0'));
  *puVar4 = 0x30302b65;
  *(ushort *)(puVar4 + 1) = 0x30;
  if (param_3 != 0) {
    *(byte *)puVar4 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    iVar3 = param_4[1] + -1;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
      *(byte *)((int)puVar4 + 1) = 0x2d;
    }
    if (99 < iVar3) {
      *(char *)((int)puVar4 + 2) = *(char *)((int)puVar4 + 2) + (char)(iVar3 / 100);
      iVar3 = iVar3 % 100;
    }
    if (9 < iVar3) {
      *(char *)((int)puVar4 + 3) = *(char *)((int)puVar4 + 3) + (char)(iVar3 / 10);
      iVar3 = iVar3 % 10;
    }
    *(char *)(puVar4 + 1) = *(char *)(puVar4 + 1) + (char)iVar3;
  }
  return param_1;
}

// Name: __cftof2
// Address: 10007210
// Address Range: [[10007210, 100072cd]]
// Convention: unknown
// Signature: undefined1 * __cftof2(undefined1 *param_1,uint param_2,int *param_3,char param_4)

#include "nocturne.h"

/* Library Function - Single Match
byte * __cftof2(byte *param_1,uint param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *puVar5;
  byte *puVar6;
  uint *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  iVar1 = param_3[1];
  if ((param_4 != '\0') && (iVar2 = *param_3, param_2 == iVar1 - 1U)) {
    param_1[(iVar1 - 1U) + (uint)(iVar2 == 0x2d)] = 0x30;
    (param_1 + (iVar1 - 1U) + (uint)(iVar2 == 0x2d))[1] = 0;
  }
  puVar5 = param_1;
  if (*param_3 == 0x2d) {
    puVar5 = param_1 + 1;
    *param_1 = 0x2d;
  }
  if (param_3[1] < 1) {
    puVar6 = puVar5 + 1;
    __shift(puVar5,1);
    *puVar5 = 0x30;
  }
  else {
    puVar6 = puVar5 + param_3[1];
  }
  if (0 < (int)param_2) {
    __shift(puVar6,1);
    *puVar6 = DAT_10017694;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if (param_4 == '\0') {
        uVar4 = -iVar1;
        if ((int)param_2 <= -iVar1) {
          uVar4 = param_2;
        }
      }
      else {
        uVar4 = -iVar1;
      }
      __shift(puVar6 + 1,uVar4);
      puVar7 = (uint *)(puVar6 + 1);
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = 0x30303030;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(byte *)puVar7 = 0x30;
        puVar7 = (uint *)((int)puVar7 + (uint)bVar8 * -2 + 1);
      }
    }
  }
  return param_1;
}

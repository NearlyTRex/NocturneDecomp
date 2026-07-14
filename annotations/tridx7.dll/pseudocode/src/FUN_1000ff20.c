// Name: FUN_1000ff20
// Address: 1000ff20
// Address Range: [[1000ff20, 1000ffe6]]
// Convention: unknown
// Signature: char FUN_1000ff20(byte *param_1,byte *param_2)

#include "nocturne.h"

char FUN_1000ff20(byte *param_1,byte *param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  
  if (DAT_10017760 == 0) {
    bVar4 = 0xff;
    do {
      do {
        if (bVar4 == 0) {
          return '\0';
        }
        bVar4 = *param_2;
        param_2 = param_2 + 1;
        bVar3 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar3 == bVar4);
      bVar2 = bVar4 + 0xbf + (-((byte)(bVar4 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar3 = bVar3 + 0xbf;
      bVar4 = bVar3 + (-(bVar3 < 0x1a) & 0x20U) + 0x41;
    } while (bVar4 == bVar2);
    cVar5 = (bVar4 < bVar2) * -2 + '\x01';
  }
  else {
    bVar1 = 0 < DAT_10240854;
    if (bVar1) {
      __lock(0x13);
    }
    else {
      DAT_10240858 = DAT_10240858 + 1;
    }
    uVar6 = (uint)bVar1;
    bVar4 = 0xff;
    do {
      do {
        cVar5 = '\0';
        if (bVar4 == 0) goto LAB_1000ffc7;
        bVar4 = *param_2;
        param_2 = param_2 + 1;
        bVar3 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar3);
      bVar3 = __tolower_lk(bVar3,bVar4);
      bVar4 = __tolower_lk();
    } while (bVar3 == bVar4);
    cVar5 = (bVar3 < bVar4) * -2 + '\x01';
LAB_1000ffc7:
    if (uVar6 == 0) {
      DAT_10240858 = DAT_10240858 + -1;
    }
    else {
      FUN_10005a10(0x13);
    }
  }
  return cVar5;
}

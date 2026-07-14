// Name: FUN_1000ec20
// Address: 1000ec20
// Address Range: [[1000ec20, 1000ed2c]]
// Convention: unknown
// Signature: int FUN_1000ec20(byte *param_1,uint param_2,byte *param_3,undefined4 param_4)

#include "nocturne.h"

int FUN_1000ec20(byte *param_1,uint param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  uint uStack_8;
  uint uStack_4;
  
  uVar2 = param_2;
  bVar6 = DAT_10240854 == 0;
  uStack_8 = param_2;
  if (bVar6) {
    DAT_10240858 = DAT_10240858 + 1;
  }
  else {
    __lock(0x13);
  }
  uVar3 = param_4;
  uStack_4 = (uint)!bVar6;
  pbVar4 = param_3;
  while ((uStack_8 != 0 && (bVar1 = *pbVar4, bVar1 != 0))) {
    if (bVar1 == 0x25) {
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar5;
      if (bVar1 == 0x23) {
        pbVar5 = pbVar4 + 2;
      }
      DAT_10018210 = (uint)(bVar1 == 0x23);
      FUN_1000ed30(*pbVar5,uVar3,&param_1,&uStack_8);
    }
    else {
      if (((PTR_DAT_10017480[(uint)bVar1 * 2 + 1] & 0x80) != 0) && (1 < uStack_8)) {
        pbVar4 = pbVar4 + 1;
        *param_1 = bVar1;
        param_1 = param_1 + 1;
        uStack_8 = uStack_8 - 1;
      }
      *param_1 = *pbVar4;
      param_1 = param_1 + 1;
      uStack_8 = uStack_8 - 1;
      pbVar5 = pbVar4;
    }
    pbVar4 = pbVar5 + 1;
  }
  if (uStack_4 == 0) {
    DAT_10240858 = DAT_10240858 + -1;
  }
  else {
    FUN_10005a10(0x13);
  }
  if (uStack_8 != 0) {
    *param_1 = 0;
    return uVar2 - uStack_8;
  }
  return 0;
}

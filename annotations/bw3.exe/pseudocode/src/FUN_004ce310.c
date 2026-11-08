// Name: FUN_004ce310
// Address: 004ce310
// Address Range: [[004ce310, 004ce521]]
// Convention: unknown
// Signature: void FUN_004ce310(undefined4 *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ce310(uint *param_1,int param_2)

{
  uint uVar1;
  float *pfVar2;
  uint *puVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar1 = *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c);
  if (param_1[2] == uVar1) {
    _DAT_01d22ea0 = param_1[2] ^ uVar1;
    _DAT_01d22e8c = 4;
    _DAT_01d22ea4 = 1;
    _DAT_01d22ea8 = 2;
    _DAT_01d22eac = 3;
    DAT_0060b02c = 0x80000;
    _DAT_0060b05c = 0xf80000;
    _DAT_0060b08c = 0xf80000;
    DAT_0060b090 = 0xf80000;
    _DAT_0060b0c0 = 0xf80000;
    _DAT_0060b030 = 0x80000;
    _DAT_0060b060 = 0x80000;
    _DAT_0060b0bc = 0x80000;
    FUN_0046d4c0(DAT_005f2afc,param_1[0xf]);
    _DAT_01d22e90 = 0;
    _DAT_01d22e94 = 0;
    _DAT_01d22e98 = 0;
    _DAT_01d22e9c = 0;
    FUN_0046e5e0(DAT_005f2afc,&DAT_005ffeac);
    pfVar2 = (float *)(param_1 + 3);
    puVar3 = &DAT_0060b014;
    do {
      local_1c = (int)ROUND(*pfVar2 * _DAT_005e0e18);
      local_18 = (int)ROUND(pfVar2[1] * _DAT_005e0e18);
      local_14 = (int)ROUND(pfVar2[2] * _DAT_005e0e18);
      pfVar2 = pfVar2 + 3;
      FUN_0056356c(puVar3,&local_1c);
      puVar3 = puVar3 + 0xc;
    } while (pfVar2 != (float *)(param_1 + 0xf));
    if (param_1[0x10] == 0) {
      DAT_0060b038 = 0x7ff;
      DAT_0060b03c = 0x7ff;
      DAT_0060b064 = 0x7ff;
      DAT_0060b068 = 0x7ff;
      DAT_0060b06c = 0x7ff;
      _DAT_0060b094 = 0x7ff;
      _DAT_0060b098 = 0x7ff;
      _DAT_0060b09c = 0x7ff;
      _DAT_0060b0c4 = 0x7ff;
      _DAT_0060b0c8 = 0x7ff;
      _DAT_0060b0cc = 0x7ff;
      DAT_0060b034 = 0x7ff;
    }
    else {
      FUN_004cc970(param_1[1],&DAT_0060b034,&DAT_0060b038,&DAT_0060b03c);
      FUN_004cc970(param_1[1],&DAT_0060b064,&DAT_0060b068,&DAT_0060b06c);
      FUN_004cc970(param_1[1],&DAT_0060b094,&DAT_0060b098,&DAT_0060b09c);
      FUN_004cc970(param_1[1],&DAT_0060b0c4,&DAT_0060b0c8,&DAT_0060b0cc);
    }
    FUN_0046c730(DAT_005f2afc,0x1d22e88);
    if (param_2 != 0) {
      *param_1 = 1;
      return;
    }
  }
  return;
}

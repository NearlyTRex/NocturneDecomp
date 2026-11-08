// Name: FUN_0059d440
// Address: 0059d440
// Address Range: [[0059d440, 0059d5e1]]
// Convention: unknown
// Signature: void FUN_0059d440(int *param_1)

#include "nocturne.h"

void FUN_0059d440(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  if (*param_1 != 2) {
    return;
  }
  FUN_0046b2b0(DAT_0060b280,param_1 + 1);
  FUN_0046b350(DAT_0060b280,param_1 + 4,0);
  local_20 = FUN_0040cf60(0,0x40c90fdb);
  local_28 = 0;
  local_24 = 0;
  local_10 = local_20;
  local_c = local_20;
  FUN_0046b350(DAT_0060b280,&local_28,0);
  *(uint *)(0x01E661B8 + 0x15ac90) = 1;
  FUN_0046b8d0(DAT_0060b280,1);
  uVar2 = FUN_005b849c();
  FUN_0046b8e0(DAT_0060b280,(uVar2 & 0x3fff) + 0x1800);
  FUN_0044fcc0(0x26681e0,0,99);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x3fc90fdb;
  FUN_0046b350(DAT_0060b280,&local_1c,0);
  FUN_0044fcc0(0x26681e0,0,99);
  thunk_FUN_004e9810(DAT_0060b280);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x3f490fdb;
  FUN_0046b350(DAT_0060b280,&local_34,0);
  FUN_0044fcc0(0x26681e0,0,99);
  thunk_FUN_004e9810(DAT_0060b280);
  uVar1 = DAT_0060b280;
  *(uint *)(0x01E661B8 + 0x15ac90) = 0;
  thunk_FUN_004e9810(uVar1);
  thunk_FUN_004e9810(DAT_0060b280);
  FUN_0046b8d0(DAT_0060b280,0);
  return;
}

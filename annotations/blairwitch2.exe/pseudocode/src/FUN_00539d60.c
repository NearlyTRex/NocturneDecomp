// Name: FUN_00539d60
// Address: 00539d60
// Address Range: [[00539d60, 00539fe9]]
// Convention: unknown
// Signature: void FUN_00539d60(int *param_1)

#include "nocturne.h"

void FUN_00539d60(int *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte local_98 [100];
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar3 = 0;
  if (0 < *param_1) {
    iVar5 = 0;
    do {
      *(int *)(iVar5 + 0x20b1524) = iVar3;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar3 < *param_1);
  }
  local_28 = 0;
  for (iVar3 = 0; iVar3 < *param_1 + -1; iVar3 = iVar3 + 1) {
    iVar5 = iVar3 + 1;
    if (iVar5 < *param_1) {
      iVar4 = iVar5 * 4;
      do {
        if (*(float *)(&DAT_0209394c + *(int *)(local_28 + 0x20b1524) * 4) <
            *(float *)(&DAT_0209394c + *(int *)(iVar4 + 0x20b1524) * 4)) {
          uVar1 = *(uint *)(local_28 + 0x20b1524);
          *(uint *)(local_28 + 0x20b1524) = *(uint *)(iVar4 + 0x20b1524);
          *(uint *)(iVar4 + 0x20b1524) = uVar1;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar5 < *param_1);
    }
    local_28 = local_28 + 4;
  }
  iVar3 = 2;
  iVar5 = DAT_006141bc + -0xb2;
  local_30 = 9;
  if (*param_1 < 9) {
    local_30 = *param_1;
  }
  if (0 < local_30) {
    local_34 = param_1 + 1;
    local_30 = local_30 << 2;
    local_20 = DAT_006141bc + -0xbd;
    local_1c = 0;
    local_24 = DAT_006141bc + -0x18;
    do {
      local_14 = *(int *)(local_1c + 0x20b1524);
      iVar4 = local_14 * 0xf0;
      local_18 = iVar4 + 0x2093d34;
      local_2c = iVar3;
      if (param_1[local_14 * 0x69 + 0x51] == 0) {
        FUN_00538a60(local_18,iVar3,iVar5);
        iVar4 = *(int *)(iVar4 + 0x2093d34);
      }
      else {
        FUN_00538a60(iVar4 + 0x2093dac,iVar3,iVar5);
        iVar3 = iVar3 + *(int *)(iVar4 + 0x2093dac) + -2;
        FUN_00538a60(local_18,iVar3,iVar5);
        iVar3 = iVar3 + *(int *)(iVar4 + 0x2093d34) + -2;
        FUN_00538a60(local_18 + 0x50,iVar3,iVar5);
        iVar3 = iVar3 + *(int *)(iVar4 + 0x2093d84) + -2;
        FUN_00538a60(local_18 + 0x28,iVar3,iVar5);
        iVar4 = *(int *)(iVar4 + 0x2093d5c);
      }
      iVar4 = iVar3 + iVar4 + -2;
      FUN_005b7790(local_98,&DAT_005e609c,(double)*(float *)(&DAT_0209394c + local_14 * 4));
      FUN_00401fe0(local_98,local_2c);
      FUN_00401fe0(local_34 + local_14 * 0x69);
      iVar3 = iVar4 + 2;
      if (DAT_006141b8 < iVar4 + 0x42) {
        iVar3 = 2;
        iVar5 = iVar5 + 0x58;
        local_20 = local_20 + 0x58;
        bVar2 = DAT_006141bc < local_24;
        local_24 = local_24 + 0x58;
        if (bVar2) {
          return;
        }
      }
      local_1c = local_1c + 4;
    } while (local_1c < local_30);
  }
  return;
}

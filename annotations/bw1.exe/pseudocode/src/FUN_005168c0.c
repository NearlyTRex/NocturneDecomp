// Name: FUN_005168c0
// Address: 005168c0
// Address Range: [[005168c0, 00516c58]]
// Convention: unknown
// Signature: void FUN_005168c0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005168c0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_28;
  int *local_24;
  int *local_20;
  
  fVar1 = (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x18)) *
          (*(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x54));
  fVar2 = (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x14)) *
          (*(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x58));
  if (_DAT_01d22578 == 0) {
    if (fVar2 <= fVar1) {
      return;
    }
  }
  else if (fVar1 <= fVar2) {
    return;
  }
  iVar4 = 0;
  _DAT_01d2c5cc = 0;
  _DAT_01d2c0c4 = 0;
  _DAT_01d2c5c8 = 0x4b0;
  iVar5 = param_1;
  if (0 < param_2) {
    do {
      iVar3 = iVar4 + 1;
      if (param_2 <= iVar3) {
        iVar3 = 0;
      }
      iVar4 = iVar4 + 1;
      FUN_00515bd0(iVar5,iVar3 * 0x40 + param_1);
      iVar5 = iVar5 + 0x40;
    } while (iVar4 < param_2);
  }
  local_20 = (int *)&DAT_01d2c0c8;
  iVar5 = 0;
  if (0 < _DAT_01d2c0c4) {
    do {
      if ((_DAT_01d2c5c8 == *local_20) && (local_20 != (int *)0x0)) goto LAB_005169b4;
      iVar5 = iVar5 + 1;
      local_20 = local_20 + 0x14;
    } while (iVar5 < _DAT_01d2c0c4);
  }
  local_20 = (int *)0x0;
LAB_005169b4:
  if (local_20 != (int *)0x0) {
    iVar5 = 0;
    local_24 = (int *)&DAT_01d2c0c8;
    if (0 < _DAT_01d2c0c4) {
      do {
        if ((_DAT_01d2c5c8 == *local_24) && (local_24 != local_20)) goto LAB_005169e7;
        iVar5 = iVar5 + 1;
        local_24 = local_24 + 0x14;
      } while (iVar5 < _DAT_01d2c0c4);
    }
    local_24 = (int *)0x0;
LAB_005169e7:
    if (local_24 != (int *)0x0) {
      local_28 = _DAT_01d2c5c8;
      do {
        if (local_20[1] <= local_28) {
          *local_20 = -1;
          local_20 = (int *)&DAT_01d2c0c8;
          iVar5 = 0;
          if (0 < _DAT_01d2c0c4) {
            do {
              if ((local_28 == *local_20) && (local_20 != local_24)) goto LAB_00516a34;
              iVar5 = iVar5 + 1;
              local_20 = local_20 + 0x14;
            } while (iVar5 < _DAT_01d2c0c4);
          }
          local_20 = (int *)0x0;
LAB_00516a34:
          if (local_20 == (int *)0x0) {
            return;
          }
        }
        if (local_24[1] <= local_28) {
          *local_24 = -1;
          local_24 = (int *)&DAT_01d2c0c8;
          iVar5 = 0;
          if (0 < _DAT_01d2c0c4) {
            do {
              if ((local_28 == *local_24) && (local_24 != local_20)) goto LAB_00516a78;
              iVar5 = iVar5 + 1;
              local_24 = local_24 + 0x14;
            } while (iVar5 < _DAT_01d2c0c4);
          }
          local_24 = (int *)0x0;
LAB_00516a78:
          if (local_24 == (int *)0x0) {
            return;
          }
        }
        if (_DAT_01c51d00 == 0) {
          if (DAT_0061b4a0 == 0x20) {
            FUN_0057fb03();
          }
          else {
            FUN_0057fd39();
          }
        }
        else if (DAT_0061b4a0 == 0x20) {
          FUN_0057eeac();
        }
        else {
          FUN_0057f473();
        }
        local_20[2] = local_20[2] + local_20[3];
        local_20[6] = local_20[6] + local_20[7];
        local_20[8] = local_20[8] + local_20[9];
        local_20[10] = local_20[10] + local_20[0xb];
        local_20[4] = local_20[4] + local_20[5];
        local_20[0xe] = local_20[0xe] + local_20[0xf];
        local_20[0x10] = local_20[0x10] + local_20[0x11];
        local_20[0x12] = local_20[0x12] + local_20[0x13];
        local_20[0xc] = local_20[0xc] + local_20[0xd];
        local_24[2] = local_24[2] + local_24[3];
        local_24[6] = local_24[6] + local_24[7];
        local_24[8] = local_24[8] + local_24[9];
        local_24[10] = local_24[10] + local_24[0xb];
        local_24[4] = local_24[4] + local_24[5];
        local_24[0xe] = local_24[0xe] + local_24[0xf];
        local_28 = local_28 + 1;
        local_24[0x10] = local_24[0x10] + local_24[0x11];
        local_24[0x12] = local_24[0x12] + local_24[0x13];
        local_24[0xc] = local_24[0xc] + local_24[0xd];
      } while( true );
    }
  }
  return;
}

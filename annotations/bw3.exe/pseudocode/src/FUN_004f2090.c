// Name: FUN_004f2090
// Address: 004f2090
// Address Range: [[004f2090, 004f2428]]
// Convention: unknown
// Signature: void FUN_004f2090(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f2090(int param_1,int param_2)

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
  if (_DAT_01d76cf8 == 0) {
    if (fVar2 <= fVar1) {
      return;
    }
  }
  else if (fVar1 <= fVar2) {
    return;
  }
  iVar4 = 0;
  _DAT_01d80d4c = 0;
  _DAT_01d80844 = 0;
  _DAT_01d80d48 = 0x4b0;
  iVar5 = param_1;
  if (0 < param_2) {
    do {
      iVar3 = iVar4 + 1;
      if (param_2 <= iVar3) {
        iVar3 = 0;
      }
      iVar4 = iVar4 + 1;
      FUN_004f13a0(iVar5,iVar3 * 0x40 + param_1);
      iVar5 = iVar5 + 0x40;
    } while (iVar4 < param_2);
  }
  local_20 = (int *)&DAT_01d80848;
  iVar5 = 0;
  if (0 < _DAT_01d80844) {
    do {
      if ((_DAT_01d80d48 == *local_20) && (local_20 != (int *)0x0)) goto LAB_004f2184;
      iVar5 = iVar5 + 1;
      local_20 = local_20 + 0x14;
    } while (iVar5 < _DAT_01d80844);
  }
  local_20 = (int *)0x0;
LAB_004f2184:
  if (local_20 != (int *)0x0) {
    iVar5 = 0;
    local_24 = (int *)&DAT_01d80848;
    if (0 < _DAT_01d80844) {
      do {
        if ((_DAT_01d80d48 == *local_24) && (local_24 != local_20)) goto LAB_004f21b7;
        iVar5 = iVar5 + 1;
        local_24 = local_24 + 0x14;
      } while (iVar5 < _DAT_01d80844);
    }
    local_24 = (int *)0x0;
LAB_004f21b7:
    if (local_24 != (int *)0x0) {
      local_28 = _DAT_01d80d48;
      do {
        if (local_20[1] <= local_28) {
          *local_20 = -1;
          local_20 = (int *)&DAT_01d80848;
          iVar5 = 0;
          if (0 < _DAT_01d80844) {
            do {
              if ((local_28 == *local_20) && (local_20 != local_24)) goto LAB_004f2204;
              iVar5 = iVar5 + 1;
              local_20 = local_20 + 0x14;
            } while (iVar5 < _DAT_01d80844);
          }
          local_20 = (int *)0x0;
LAB_004f2204:
          if (local_20 == (int *)0x0) {
            return;
          }
        }
        if (local_24[1] <= local_28) {
          *local_24 = -1;
          local_24 = (int *)&DAT_01d80848;
          iVar5 = 0;
          if (0 < _DAT_01d80844) {
            do {
              if ((local_28 == *local_24) && (local_24 != local_20)) goto LAB_004f2248;
              iVar5 = iVar5 + 1;
              local_24 = local_24 + 0x14;
            } while (iVar5 < _DAT_01d80844);
          }
          local_24 = (int *)0x0;
LAB_004f2248:
          if (local_24 == (int *)0x0) {
            return;
          }
        }
        if (_DAT_01c6e2a0 == 0) {
          if (DAT_005fba20 == 0x20) {
            FUN_00562c33();
          }
          else {
            FUN_00562e69();
          }
        }
        else if (DAT_005fba20 == 0x20) {
          FUN_00561fdc();
        }
        else {
          FUN_005625a3();
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

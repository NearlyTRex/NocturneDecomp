// Name: FUN_004f7a50
// Address: 004f7a50
// Address Range: [[004f7a50, 004f7d9d]]
// Convention: unknown
// Signature: void FUN_004f7a50(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f7a50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  int *local_18;
  int *local_14;
  
  if ((*(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x54)) *
      (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x18)) <
      (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x14)) *
      (*(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x58))) {
    iVar3 = 0;
    _DAT_01d17fbc = 0;
    _DAT_01d17ab4 = 0;
    _DAT_01d17fb8 = 0x4b0;
    iVar2 = param_1;
    if (0 < param_2) {
      do {
        iVar1 = iVar3 + 1;
        if (param_2 <= iVar1) {
          iVar1 = 0;
        }
        iVar3 = iVar3 + 1;
        FUN_004f6df0(iVar2,iVar1 * 0x40 + param_1);
        iVar2 = iVar2 + 0x40;
      } while (iVar3 < param_2);
    }
    local_18 = (int *)&DAT_01d17ab8;
    iVar2 = 0;
    if (0 < _DAT_01d17ab4) {
      do {
        if ((_DAT_01d17fb8 == *local_18) && (local_18 != (int *)0x0)) goto LAB_004f7b0a;
        iVar2 = iVar2 + 1;
        local_18 = local_18 + 0x14;
      } while (iVar2 < _DAT_01d17ab4);
    }
    local_18 = (int *)0x0;
LAB_004f7b0a:
    if (local_18 != (int *)0x0) {
      iVar2 = 0;
      local_14 = (int *)&DAT_01d17ab8;
      if (0 < _DAT_01d17ab4) {
        do {
          if ((_DAT_01d17fb8 == *local_14) && (local_14 != local_18)) goto LAB_004f7b3d;
          iVar2 = iVar2 + 1;
          local_14 = local_14 + 0x14;
        } while (iVar2 < _DAT_01d17ab4);
      }
      local_14 = (int *)0x0;
LAB_004f7b3d:
      if (local_14 != (int *)0x0) {
        local_1c = _DAT_01d17fb8;
        do {
          if (local_18[1] <= local_1c) {
            *local_18 = -1;
            local_18 = (int *)&DAT_01d17ab8;
            iVar2 = 0;
            if (0 < _DAT_01d17ab4) {
              do {
                if ((local_1c == *local_18) && (local_18 != local_14)) goto LAB_004f7b8a;
                iVar2 = iVar2 + 1;
                local_18 = local_18 + 0x14;
              } while (iVar2 < _DAT_01d17ab4);
            }
            local_18 = (int *)0x0;
LAB_004f7b8a:
            if (local_18 == (int *)0x0) {
              return;
            }
          }
          if (local_14[1] <= local_1c) {
            *local_14 = -1;
            local_14 = (int *)&DAT_01d17ab8;
            iVar2 = 0;
            if (0 < _DAT_01d17ab4) {
              do {
                if ((local_1c == *local_14) && (local_14 != local_18)) goto LAB_004f7bce;
                iVar2 = iVar2 + 1;
                local_14 = local_14 + 0x14;
              } while (iVar2 < _DAT_01d17ab4);
            }
            local_14 = (int *)0x0;
LAB_004f7bce:
            if (local_14 == (int *)0x0) {
              return;
            }
          }
          if (_DAT_01c38b40 == 0) {
            if (DAT_006141c0 == 0x20) {
              FUN_0055d0b3();
            }
            else {
              FUN_0055d2e9();
            }
          }
          else if (DAT_006141c0 == 0x20) {
            FUN_0055c45c();
          }
          else {
            FUN_0055ca23();
          }
          local_18[2] = local_18[2] + local_18[3];
          local_18[6] = local_18[6] + local_18[7];
          local_18[8] = local_18[8] + local_18[9];
          local_18[10] = local_18[10] + local_18[0xb];
          local_18[4] = local_18[4] + local_18[5];
          local_18[0xe] = local_18[0xe] + local_18[0xf];
          local_18[0x10] = local_18[0x10] + local_18[0x11];
          local_18[0x12] = local_18[0x12] + local_18[0x13];
          local_18[0xc] = local_18[0xc] + local_18[0xd];
          local_14[2] = local_14[2] + local_14[3];
          local_14[6] = local_14[6] + local_14[7];
          local_14[8] = local_14[8] + local_14[9];
          local_14[10] = local_14[10] + local_14[0xb];
          local_14[4] = local_14[4] + local_14[5];
          local_14[0xe] = local_14[0xe] + local_14[0xf];
          local_1c = local_1c + 1;
          local_14[0x10] = local_14[0x10] + local_14[0x11];
          local_14[0x12] = local_14[0x12] + local_14[0x13];
          local_14[0xc] = local_14[0xc] + local_14[0xd];
        } while( true );
      }
    }
  }
  return;
}

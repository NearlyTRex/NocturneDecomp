// Name: cockpit_ckptutil.c_drawLineAA_FUN_0042f600
// Address: 0042f600
// Address Range: [[0042f600, 0042f8b1]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_drawLineAA_FUN_0042f600(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_ckptutil_c_drawLineAA_FUN_0042f600(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  iVar1 = param_1;
  iVar2 = param_2;
  fVar7 = 0.00390625;
  if (param_4 < param_2) {
    param_2 = param_4;
    param_1 = param_3;
    param_3 = iVar1;
    param_4 = iVar2;
  }
  if ((DAT_005ad280 != 0) ||
     (((((_DAT_01c00c58 <= param_1 || (_DAT_01c00c58 <= param_3)) &&
        ((param_1 <= _DAT_01c00c60 || (param_3 <= _DAT_01c00c60)))) &&
       ((_DAT_01c00c5c <= param_2 || (_DAT_01c00c5c <= param_4)))) &&
      ((param_2 <= _DAT_01c00c64 || (param_4 <= _DAT_01c00c64)))))) {
    cockpit_ckptutil_c_putPixel_FUN_00430140(param_1,param_2,param_5,0x3b800000);
    uStack_18 = param_3 - param_1;
    if ((int)uStack_18 < 0) {
      uStack_18 = -uStack_18;
      iStack_1c = -1;
    }
    else {
      iStack_1c = 1;
    }
    uStack_14 = param_4 - param_2;
    if (uStack_14 != 0) {
      if (uStack_18 == 0) {
        do {
          param_2 = param_2 + 1;
          cockpit_ckptutil_c_putPixel_FUN_00430140(param_1,param_2,param_5);
          uStack_14 = uStack_14 - 1;
        } while (uStack_14 != 0);
        return;
      }
      if (uStack_18 != uStack_14) {
        if ((int)uStack_14 < (int)uStack_18) {
          uVar4 = (uStack_14 * 0x10000) / uStack_18;
          uVar6 = 0;
          while (uStack_18 = uStack_18 - 1, uStack_18 != 0) {
            uVar5 = uVar6 + uVar4 & 0xffff;
            if (uVar5 <= uVar6) {
              param_2 = param_2 + 1;
            }
            param_1 = param_1 + iStack_1c;
            fVar3 = (float)(uVar5 >> 8 ^ 0xff) * fVar7;
            cockpit_ckptutil_c_FUN_0042fd60
                      (param_1,param_2,((float)(uVar5 >> 8) + 1.0) * fVar7,param_5);
            cockpit_ckptutil_c_FUN_0042fd60(param_1,param_2 + 1,fVar3,param_5);
            uVar6 = uVar5;
          }
        }
        else {
          uVar4 = (uStack_18 << 0x10) / uStack_14;
          uVar6 = 0;
          while (uStack_14 = uStack_14 - 1, uStack_14 != 0) {
            uVar5 = uVar6 + uVar4 & 0xffff;
            if (uVar5 <= uVar6) {
              param_1 = param_1 + iStack_1c;
            }
            param_2 = param_2 + 1;
            fVar3 = (float)(uVar5 >> 8 ^ 0xff) * fVar7;
            cockpit_ckptutil_c_FUN_0042fd60
                      (param_1,param_2,((float)(uVar5 >> 8) + 1.0) * fVar7,param_5);
            cockpit_ckptutil_c_FUN_0042fd60(iStack_1c + param_1,param_2,fVar3,param_5);
            uVar6 = uVar5;
          }
        }
        cockpit_ckptutil_c_putPixel_FUN_00430140(param_3,param_4,param_5);
        return;
      }
      do {
        param_2 = param_2 + 1;
        param_1 = param_1 + iStack_1c;
        cockpit_ckptutil_c_putPixel_FUN_00430140(param_1,param_2,param_5);
        uStack_14 = uStack_14 - 1;
      } while (uStack_14 != 0);
      return;
    }
    while (uStack_18 = uStack_18 - 1, uStack_18 != 0xffffffff) {
      param_1 = param_1 + iStack_1c;
      cockpit_ckptutil_c_putPixel_FUN_00430140(param_1,param_2,param_5);
    }
  }
  return;
}

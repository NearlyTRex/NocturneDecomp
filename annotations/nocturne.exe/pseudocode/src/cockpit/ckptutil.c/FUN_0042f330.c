// Name: cockpit_ckptutil.c_FUN_0042f330
// Address: 0042f330
// Address Range: [[0042f330, 0042f5f2]]
// Convention: unknown
// Signature: uint cockpit_ckptutil_c_FUN_0042f330(int param_1,int param_2,int param_3,uint param_4,undefined1 param_5,undefined1 param_6,int param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint cockpit_ckptutil_c_FUN_0042f330(int param_1,int param_2,int param_3,uint param_4,byte param_5,byte param_6,int param_7)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_2c;
  uint local_28;
  uint local_24;
  byte local_1c;
  byte local_18;
  
  if ((param_2 <= (int)param_4) &&
     ((DAT_00766c6c != 0 ||
      ((((_DAT_01c00c58 <= param_1 || (_DAT_01c00c58 <= param_3)) &&
        ((param_1 <= _DAT_01c00c60 || (param_3 <= _DAT_01c00c60)))) &&
       (((_DAT_01c00c5c <= param_2 || (_DAT_01c00c5c <= (int)param_4)) &&
        ((param_2 <= _DAT_01c00c64 || ((int)param_4 <= _DAT_01c00c64)))))))))) {
    local_24 = param_3 - param_1;
    if ((int)local_24 < 0) {
      local_24 = -local_24;
      local_2c = -1;
    }
    else {
      local_2c = 1;
    }
    local_28 = param_4 - param_2;
    local_1c = param_5;
    if (local_28 == 0) {
      param_4 = 0;
      while (local_24 = local_24 - 1, local_24 != 0) {
        param_1 = param_1 + local_2c;
        param_4 = cockpit_ckptutil_c_putPixel_FUN_00430140(param_1,param_2,param_5);
      }
    }
    else {
      if (local_24 == 0) {
        do {
          param_2 = param_2 + 1;
          uVar2 = cockpit_ckptutil_c_putPixel_FUN_00430140(param_1,param_2,param_5);
          local_28 = local_28 - 1;
        } while (local_28 != 1);
        return uVar2;
      }
      if ((int)local_28 < (int)local_24) {
        local_18 = local_1c;
        if (param_7 != 0) {
          local_18 = param_6;
        }
        uVar3 = (local_28 * 0x10000) / local_24;
        param_4 = uVar3;
        uVar2 = 0;
        while (local_24 = local_24 - 1, local_24 != 0) {
          uVar4 = uVar2 + uVar3 & 0xffff;
          if (uVar4 <= uVar2) {
            param_2 = param_2 + 1;
          }
          param_1 = param_1 + local_2c;
          uVar2 = uVar4;
          if (param_7 == 0) {
            param_4 = cockpit_ckptutil_c_FUN_0042f8c0
                                (param_1,param_2,((float)(uVar4 >> 8) + 1.0) * 0.00390625,local_18);
          }
          else {
            param_4 = cockpit_ckptutil_c_FUN_0042f8c0
                                (param_1,param_2 + 1,(float)(uVar4 >> 8 ^ 0xff) * 0.00390625,
                                 local_18);
          }
        }
      }
      else {
        if (((param_7 == 0) && (local_2c == 1)) || ((param_7 == 1 && (local_2c == -1)))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          local_1c = param_6;
        }
        uVar3 = (local_24 << 0x10) / local_28;
        uVar2 = 0;
        while( true ) {
          local_28 = local_28 - 1;
          param_4 = 0;
          if (local_28 == 0) break;
          uVar4 = uVar2 + uVar3 & 0xffff;
          if (uVar4 <= uVar2) {
            param_1 = param_1 + local_2c;
          }
          param_2 = param_2 + 1;
          uVar2 = uVar4;
          if (bVar1) {
            cockpit_ckptutil_c_FUN_0042f8c0
                      (param_1,param_2,((float)(uVar4 >> 8) + 1.0) * 0.00390625,local_1c);
          }
          else {
            cockpit_ckptutil_c_FUN_0042f8c0
                      (local_2c + param_1,param_2,(float)(uVar4 >> 8 ^ 0xff) * 0.00390625,local_1c);
          }
        }
      }
    }
  }
  return param_4;
}

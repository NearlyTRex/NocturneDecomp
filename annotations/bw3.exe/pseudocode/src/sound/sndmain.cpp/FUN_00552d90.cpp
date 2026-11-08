// Name: FUN_00552d90
// Address: 00552d90
// Address Range: [[00552d90, 00552f07]]
// Convention: unknown
// Signature: void FUN_00552d90(float *param_1,undefined2 *param_2,uint param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00552d90(float *param_1,ushort *param_2,uint param_3,int param_4,int param_5)

{
  float fVar1;
  ushort *local_30;
  byte local_28;
  ushort local_20;
  int local_18;
  int local_14;
  
  local_30 = param_2;
  if (param_3 < 8) {
LAB_00552edd:
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x619;
    FUN_004e4330("convertMixBufToOutput - invalid bits: %d",param_3);
    return;
  }
  if (param_3 < 9) {
    local_18 = 0;
    if (0 < param_4) {
      do {
        fVar1 = *param_1;
        if (fVar1 <= (float)_DAT_005d2b32) {
          *(byte *)local_30 = 0;
        }
        else if (fVar1 < 1.0) {
          local_28 = (byte)(int)ROUND(fVar1 * _DAT_005d2b2e + _DAT_005d2b3a);
          *(byte *)local_30 = local_28;
        }
        else {
          *(byte *)local_30 = 0xff;
        }
        local_30 = (ushort *)((int)local_30 + param_5);
        param_1 = param_1 + 1;
        local_18 = local_18 + 1;
      } while (local_18 < param_4);
    }
  }
  else {
    if (param_3 != 0x10) goto LAB_00552edd;
    local_14 = 0;
    if (0 < param_4) {
      do {
        fVar1 = *param_1;
        if (fVar1 <= (float)_DAT_005d2b32) {
          *local_30 = 0x8001;
        }
        else if (fVar1 < 1.0) {
          local_20 = (ushort)(int)ROUND(fVar1 * _DAT_005d2b2a);
          *local_30 = local_20;
        }
        else {
          *local_30 = 0x7fff;
        }
        local_30 = (ushort *)((int)local_30 + param_5);
        param_1 = param_1 + 1;
        local_14 = local_14 + 1;
      } while (local_14 < param_4);
    }
  }
  return;
}

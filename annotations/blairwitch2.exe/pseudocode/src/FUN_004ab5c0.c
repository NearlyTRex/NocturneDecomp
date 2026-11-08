// Name: FUN_004ab5c0
// Address: 004ab5c0
// Address Range: [[004ab5c0, 004ab615]]
// Convention: unknown
// Signature: undefined8 FUN_004ab5c0(int param_1,undefined4 param_2,int param_3,int param_4)

#include "nocturne.h"

ulonglong FUN_004ab5c0(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 == -0x81) {
    param_4 = param_3;
  }
  if (param_3 < 0) {
    param_3 = 0;
  }
  if (0xff < param_4) {
    param_4 = 0xff;
  }
  iVar2 = param_3;
  if (param_3 <= param_4) {
    iVar1 = param_3 * 4 + param_1;
    do {
      param_3 = iVar1 + 4;
      iVar2 = iVar2 + 1;
      *(uint *)(iVar1 + 0x3de8) = param_2;
      iVar1 = param_3;
    } while (iVar2 <= param_4);
  }
  return CONCAT44(iVar2,param_3);
}

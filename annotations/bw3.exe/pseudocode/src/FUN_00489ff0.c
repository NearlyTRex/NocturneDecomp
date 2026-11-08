// Name: FUN_00489ff0
// Address: 00489ff0
// Address Range: [[00489ff0, 0048a041]]
// Convention: unknown
// Signature: void FUN_00489ff0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00489ff0(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(0x01D2130C + 0x1f8) == 0) {
    iVar1 = FUN_00491aa0(0x01C6E360,"@Capture" + 1);
    if (iVar1 == 0) {
      FUN_004333e0(param_1,param_2,param_1 + 0xcdf0);
      return;
    }
  }
  FUN_004333e0(param_1,param_2,0);
  return;
}

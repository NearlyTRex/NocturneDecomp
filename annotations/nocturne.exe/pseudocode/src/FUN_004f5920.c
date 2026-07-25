// Name: FUN_004f5920
// Address: 004f5920
// Address Range: [[004f5920, 004f59c0]]
// Convention: unknown
// Signature: void FUN_004f5920(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_004f5920(int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  byte local_74 [100];
  
  FUN_004f5320(param_1);
  FUN_004f5290(param_1);
  FUN_004f5350(param_1,(param_4 - param_3) + 1);
  if (param_3 <= param_4) {
    iVar1 = 0;
    do {
      _sprintf(local_74,param_2,param_3);
      param_3 = param_3 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_004f4e40
                (*(int *)(param_1 + 4) + iVar1,local_74,param_5);
      iVar1 = iVar1 + 0x24;
    } while (param_3 <= param_4);
  }
  FUN_004f52c0(param_1);
  return;
}

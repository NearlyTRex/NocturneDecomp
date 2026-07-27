// Name: cockpit_pkbmpset.cpp_FUN_004f53f0
// Address: 004f53f0
// Address Range: [[004f53f0, 004f54b7]]
// Convention: unknown
// Signature: undefined4 cockpit_pkbmpset_cpp_FUN_004f53f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6,undefined4 param_7,undefined4 param_8)

#include "nocturne.h"

uint cockpit_pkbmpset_cpp_FUN_004f53f0(int param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,uint param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  byte local_74 [100];
  
  cockpit_pkbitmap_cpp_FUN_004f5320(param_1);
  cockpit_pkbitmap_cpp_FUN_004f5290(param_1);
  cockpit_pkbmpset_cpp_FUN_004f5350(param_1,(param_6 - param_5) + 1);
  *(uint *)(param_1 + 0x20) = param_4;
  *(uint *)(param_1 + 0x1c) = param_3;
  uVar1 = param_3;
  if (param_5 <= param_6) {
    iVar2 = 0;
    do {
      _sprintf(local_74,param_2,param_5);
      param_5 = param_5 + 1;
      uVar1 = cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630
                        (*(int *)(param_1 + 4) + iVar2,local_74,param_3,param_4,param_7,param_8);
      iVar2 = iVar2 + 0x24;
    } while (param_5 <= param_6);
  }
  return uVar1;
}

// Name: FUN_004f1ef0
// Address: 004f1ef0
// Address Range: [[004f1ef0, 004f1f73]]
// Convention: unknown
// Signature: void FUN_004f1ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f1ef0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01e312f8) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x1e312fc) == 0) {
        _DAT_01cc4800 = "..\\core\\path.cpp";
        _DAT_01cc4804 = 0x6a8;
        FUN_004c8440("Global pathmap list corruption");
      }
      if (*(int *)(*(int *)(iVar1 + 0x1e312fc) + 0x138c0) < 0x461c3c01) {
        FUN_004f18c0(*(int *)(iVar1 + 0x1e312fc),param_1,param_2,param_3,param_4);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < _DAT_01e312f8);
  }
  return;
}

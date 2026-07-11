// Name: FUN_0040c6d0
// Address: 0040c6d0
// Address Range: [[0040c6d0, 0040c7e3]]
// Convention: unknown
// Signature: void FUN_0040c6d0(undefined1 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040c6d0(byte *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_00763e88 != 1) {
    FUN_005644f0(DAT_00763e84,"%s\"%s\"",&DAT_005acc90,param_1);
    FUN_0040c3a0("String",param_2);
    return;
  }
  do {
    iVar1 = FUN_00564570(DAT_00763e84);
  } while (((&DAT_005c168c)[(byte)((char)iVar1 + 1)] & 2) != 0);
  if (iVar1 != 0x22) {
    FUN_0040c320("String",param_2);
  }
  iVar1 = FUN_00564570(DAT_00763e84);
  if (iVar1 == 0x22) {
    *param_1 = 0;
  }
  else {
    FUN_00564740(iVar1,DAT_00763e84);
    iVar1 = FUN_00563350(DAT_00763e84,"%[^\"]",param_1);
    if (iVar1 != 1) {
      FUN_0040c320("String",param_2);
    }
    iVar1 = FUN_00564570(DAT_00763e84);
    if (iVar1 != 0x22) {
      FUN_0040c320("String",param_2);
      FUN_0040c3a0("String",param_2);
      return;
    }
  }
  FUN_0040c3a0("String",param_2);
  return;
}

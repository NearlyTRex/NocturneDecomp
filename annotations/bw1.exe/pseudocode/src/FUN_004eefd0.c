// Name: FUN_004eefd0
// Address: 004eefd0
// Address Range: [[004eefd0, 004ef01e]]
// Convention: unknown
// Signature: void FUN_004eefd0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004eefd0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (0 < iVar1) {
    iVar1 = FUN_005c04e0(param_1,"ScatDazzle");
    if (iVar1 != 0) {
      if (param_2 != 0) {
        *(uint *)(param_1 + 0x24fc) = 1;
      }
      FUN_00531ae0(param_1,param_2);
      return;
    }
  }
  return;
}

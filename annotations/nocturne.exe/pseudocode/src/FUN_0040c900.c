// Name: FUN_0040c900
// Address: 0040c900
// Address Range: [[0040c900, 0040c973]]
// Convention: unknown
// Signature: void FUN_0040c900(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040c900(uint *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_00763e88 == 1) {
    iVar1 = FUN_00563350(DAT_00763e84,&DAT_00577c81,param_1);
    if (iVar1 != 1) {
      FUN_0040c320("Integer value",param_2);
    }
  }
  else {
    FUN_005644f0(DAT_00763e84,&DAT_00577c84,&DAT_005acc90,*param_1);
  }
  FUN_0040c3a0("Integer value",param_2);
  return;
}

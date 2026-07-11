// Name: FUN_0056db40
// Address: 0056db40
// Address Range: [[0056db40, 0056db77]]
// Convention: unknown
// Signature: int FUN_0056db40(int param_1,uint param_2)

#include "nocturne.h"

int FUN_0056db40(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  for (; (iVar1 = FUN_00570ca0(param_1), iVar1 == 0 && (param_2 != 0)); param_2 = param_2 - uVar2) {
    uVar2 = FUN_0056da50(param_1);
    if (param_2 < uVar2) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    param_1 = param_1 + uVar2;
  }
  return iVar3;
}

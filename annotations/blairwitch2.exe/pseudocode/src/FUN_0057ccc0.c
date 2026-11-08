// Name: FUN_0057ccc0
// Address: 0057ccc0
// Address Range: [[0057ccc0, 0057cd2d]]
// Convention: unknown
// Signature: int FUN_0057ccc0(int *param_1)

#include "nocturne.h"

int FUN_0057ccc0(int *param_1)

{
  int iVar1;
  char cStack_8;
  
  iVar1 = (**(code **)(*param_1 + 4))(param_1);
  while( true ) {
    if (iVar1 < 0) {
      return iVar1;
    }
    cStack_8 = (char)iVar1;
    if (((&DAT_0061ed94)[(byte)(cStack_8 + 1)] & 2) == 0) break;
    iVar1 = (**(code **)(*param_1 + 4))(param_1);
    if (iVar1 == -1) {
      return 0;
    }
  }
  iVar1 = (**(code **)(*param_1 + 8))(param_1,iVar1);
  if (iVar1 != 0) {
    return 0;
  }
  return -2;
}

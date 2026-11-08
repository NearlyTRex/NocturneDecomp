// Name: FUN_00440400
// Address: 00440400
// Address Range: [[00440400, 0044043f]]
// Convention: unknown
// Signature: int FUN_00440400(int *param_1,int *param_2)

#include "nocturne.h"

int FUN_00440400(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 < 8) {
      return 0;
    }
    iVar1 = (**(code **)(*param_2 + 4))(param_2,(char)param_1[1]);
    if (iVar1 < 0) break;
    iVar1 = *param_1 + -8;
    param_1[1] = (uint)param_1[1] >> 8;
    *param_1 = iVar1;
  }
  return iVar1;
}

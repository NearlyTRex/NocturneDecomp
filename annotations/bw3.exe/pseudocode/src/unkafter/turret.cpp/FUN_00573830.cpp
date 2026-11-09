// Name: unkafter_turret.cpp_FUN_00573830
// Address: 00573830
// Address Range: [[00573830, 0057389d]]
// Convention: unknown
// Signature: int unkafter_turret_cpp_FUN_00573830(int *param_1)

#include "nocturne.h"

int unkafter_turret_cpp_FUN_00573830(int *param_1)

{
  int iVar1;
  char cStack_8;
  
  iVar1 = (**(code **)(*param_1 + 4))(param_1);
  while( true ) {
    if (iVar1 < 0) {
      return iVar1;
    }
    cStack_8 = (char)iVar1;
    if (((&DAT_006074b8)[(byte)(cStack_8 + 1)] & 2) == 0) break;
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

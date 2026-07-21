// Name: FUN_00565c50
// Address: 00565c50
// Address Range: [[00565c50, 00565c74]]
// Convention: unknown
// Signature: void FUN_00565c50(int param_1,int param_2)

#include "nocturne.h"

void FUN_00565c50(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = malloc(param_1 * param_2);
  if (iVar1 != 0) {
    memset(iVar1,0,param_1 * param_2);
  }
  return;
}

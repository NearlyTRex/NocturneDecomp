// Name: FUN_00572a35
// Address: 00572a35
// Address Range: [[00572a35, 00572a88]]
// Convention: unknown
// Signature: undefined8 FUN_00572a35(int *param_1)

#include "nocturne.h"

ulonglong FUN_00572a35(int *param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_thunk_FUN_00573ffb_005c2164)(param_1);
  if (iVar1 == 0) {
    FUN_005729e8(*param_1,param_1[1]);
    if (*param_1 == 1) {
      FUN_00568e90();
    }
    else {
      FUN_00568e9c();
    }
  }
  return *(ulonglong *)(param_1 + 6);
}

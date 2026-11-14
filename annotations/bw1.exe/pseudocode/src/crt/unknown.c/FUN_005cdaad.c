// Name: crt_unknown.c_FUN_005cdaad
// Address: 005cdaad
// Address Range: [[005cdaad, 005cdb00]]
// Convention: unknown
// Signature: undefined8 crt_unknown_c_FUN_005cdaad(int *param_1)

#include "nocturne.h"

ulonglong FUN_005cdaad(int *param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005ce114_00626b6c)(param_1);
  if (iVar1 == 0) {
    FUN_005cda60(*param_1,param_1[1]);
    if (*param_1 == 1) {
      FUN_005c6460();
    }
    else {
      FUN_005c646c();
    }
  }
  return *(ulonglong *)(param_1 + 6);
}

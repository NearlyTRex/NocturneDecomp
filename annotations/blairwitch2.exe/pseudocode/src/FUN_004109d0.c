// Name: FUN_004109d0
// Address: 004109d0
// Address Range: [[004109d0, 00410a29]]
// Convention: unknown
// Signature: undefined8 FUN_004109d0(int param_1)

#include "nocturne.h"

ulonglong FUN_004109d0(int param_1)

{
  int iVar1;
  
  FUN_00410ac0(param_1);
  iVar1 = *(int *)(param_1 + 0x6d4);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x10a74) != 0) {
      return 0;
    }
    iVar1 = FUN_005035c0(iVar1 + 0x2b4);
    switch(*(uint *)(iVar1 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      return 1;
    }
  }
  return 0;
}

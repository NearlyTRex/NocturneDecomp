// Name: FUN_00410550
// Address: 00410550
// Address Range: [[00410550, 004105a9]]
// Convention: unknown
// Signature: undefined8 FUN_00410550(int param_1)

#include "nocturne.h"

ulonglong FUN_00410550(int param_1)

{
  int iVar1;
  
  FUN_00410640(param_1);
  iVar1 = *(int *)(param_1 + 0x578);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc1e4) != 0) {
      return 0;
    }
    iVar1 = FUN_00524770(iVar1 + 0x158);
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

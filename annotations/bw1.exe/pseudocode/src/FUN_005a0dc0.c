// Name: FUN_005a0dc0
// Address: 005a0dc0
// Address Range: [[005a0dc0, 005a0e01]]
// Convention: unknown
// Signature: undefined4 FUN_005a0dc0(int param_1)

#include "nocturne.h"

uint FUN_005a0dc0(int param_1)

{
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 4));
    *(uint *)(param_1 + 4) = 0;
  }
  *(uint *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0x10) = 0;
  *(uint *)(param_1 + 8) = 0;
  FUN_005a0e80(param_1);
  return 1;
}

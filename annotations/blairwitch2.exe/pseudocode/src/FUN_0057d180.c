// Name: FUN_0057d180
// Address: 0057d180
// Address Range: [[0057d180, 0057d1c1]]
// Convention: unknown
// Signature: undefined4 FUN_0057d180(int param_1)

#include "nocturne.h"

uint FUN_0057d180(int param_1)

{
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 4));
    *(uint *)(param_1 + 4) = 0;
  }
  *(uint *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0x10) = 0;
  *(uint *)(param_1 + 8) = 0;
  FUN_0057d240(param_1);
  return 1;
}

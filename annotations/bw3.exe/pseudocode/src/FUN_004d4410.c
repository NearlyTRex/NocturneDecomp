// Name: FUN_004d4410
// Address: 004d4410
// Address Range: [[004d4410, 004d44de]]
// Convention: unknown
// Signature: void FUN_004d4410(int param_1)

#include "nocturne.h"

void FUN_004d4410(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x20b94) = 0;
  *(uint *)(param_1 + 0x20b98) = 0;
  *(uint *)(param_1 + 0x20b9c) = 0;
  *(uint *)(param_1 + 0x20ba0) = 0;
  *(uint *)(param_1 + 0x20ba4) = 0;
  *(uint *)(param_1 + 0x20ba8) = 0;
  *(uint *)(param_1 + 0x20bac) = 0;
  *(uint *)(param_1 + 0x26fc) = 0;
  FUN_004de6e0(param_1 + 0x206e8,0xffffffff);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,0);
  iVar2 = param_1;
  do {
    iVar1 = iVar2 + 0x78;
    *(uint *)(iVar2 + 0x25b0) = 0;
    iVar2 = iVar1;
  } while (iVar1 != param_1 + 0xf0);
  *(uint *)(param_1 + 0x20b9c) = 0;
  *(uint *)(param_1 + 0x2704) = 0;
  *(uint *)(param_1 + 0x2740) = 0;
  *(uint *)(param_1 + 0x2760) = 0;
  *(uint *)(param_1 + 0x2764) = 0;
  *(uint *)(param_1 + 0x20b8c) = 0;
  return;
}

// Name: FUN_004d02e0
// Address: 004d02e0
// Address Range: [[004d02e0, 004d0372]]
// Convention: unknown
// Signature: void FUN_004d02e0(int param_1)

#include "nocturne.h"

void FUN_004d02e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x25604) = 0;
  *(uint *)(param_1 + 0x25608) = 0;
  *(uint *)(param_1 + 0x2560c) = 0;
  *(uint *)(param_1 + 0x25610) = 0;
  *(uint *)(param_1 + 0x25614) = 0;
  *(uint *)(param_1 + 0x25618) = 0;
  *(uint *)(param_1 + 0x2561c) = 0;
  *(uint *)(param_1 + 0x276c) = 0;
  FUN_004def40(param_1 + 0x2437c,0xffffffff);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,0);
  iVar2 = param_1;
  do {
    iVar1 = iVar2 + 0x78;
    *(uint *)(iVar2 + 0x2620) = 0;
    iVar2 = iVar1;
  } while (iVar1 != param_1 + 0xf0);
  return;
}

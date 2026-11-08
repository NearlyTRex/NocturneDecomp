// Name: FUN_004da860
// Address: 004da860
// Address Range: [[004da860, 004da8f4]]
// Convention: unknown
// Signature: int FUN_004da860(int param_1)

#include "nocturne.h"

int FUN_004da860(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  while (0 < iVar2) {
    FUN_004db8e0(param_1,*(uint *)(param_1 + 0x14),*(int *)(param_1 + 0x460) == 0);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  iVar2 = param_1;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x5fc) = 0;
    *(uint *)(iVar2 + 0x610) = 0;
    iVar2 = iVar1;
  } while (iVar1 != param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x464);
  *(uint *)(param_1 + 0x460) = 0;
  if (iVar2 != 0) {
    iVar1 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0xd8))(iVar2,2);
    *(uint *)(param_1 + 0x464) = 0;
  }
  *(uint *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 8) = 0;
  return iVar1;
}

// Name: FUN_00485cc0
// Address: 00485cc0
// Address Range: [[00485cc0, 00485d3f]]
// Convention: unknown
// Signature: void FUN_00485cc0(int param_1)

#include "nocturne.h"

void FUN_00485cc0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00569b20(param_1 + 0x158);
  uVar1 = FUN_00569f30(param_1 + 0x158);
  *(uint *)(param_1 + 0xc268) = 0;
  uVar2 = FUN_005634f0(uVar1,"Bipn04",1);
  *(uint *)(param_1 + 0xc26c) = uVar2;
  uVar1 = FUN_005634f0(uVar1,"Bipn09",1);
  *(uint *)(param_1 + 0xc270) = uVar1;
  FUN_004a0510(param_1);
  *(uint *)(param_1 + 0xc274) = 0;
  *(uint *)(param_1 + 0xc278) = 0;
  *(uint *)(param_1 + 0xc27c) = 0;
  return;
}

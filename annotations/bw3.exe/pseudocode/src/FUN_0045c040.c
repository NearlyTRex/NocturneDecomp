// Name: FUN_0045c040
// Address: 0045c040
// Address Range: [[0045c040, 0045c0c7]]
// Convention: unknown
// Signature: undefined4 FUN_0045c040(int param_1)

#include "nocturne.h"

uint FUN_0045c040(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_0057b880(param_1);
  iVar1 = param_1 + 0x20;
  if (iVar2 != 0) {
    FUN_004a39d0(0x01C73654,iVar1,param_1 + 0x30,(uint *)(param_1 + 0x598));
    FUN_005609d0(0x02CF5680,param_1,"wp_disease_throw.wav",iVar1);
    *(uint *)(param_1 + 0x5a0) = 0;
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x5a0);
    *(uint *)(param_1 + 0x598) = *(uint *)(param_1 + 0x59c);
    *(uint *)(param_1 + 0x300) = 0x40000000;
    return 1;
  }
  FUN_005609d0(0x02CF5680,param_1,"wp_nomana.wav",iVar1);
  return 0;
}

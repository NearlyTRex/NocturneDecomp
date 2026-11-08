// Name: FUN_00509d90
// Address: 00509d90
// Address Range: [[00509d90, 00509df3]]
// Convention: unknown
// Signature: void FUN_00509d90(int *param_1)

#include "nocturne.h"

void FUN_00509d90(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  thunk_FUN_00565820();
  iVar6 = 0;
  if (0 < *param_1) {
    piVar5 = param_1;
    piVar7 = param_1 + 0xc9;
    do {
      piVar2 = piVar5 + 0x1a2d;
      piVar3 = piVar5 + 0x19c9;
      piVar4 = piVar5 + 0x65;
      piVar1 = piVar5 + 1;
      piVar5 = piVar5 + 1;
      iVar6 = iVar6 + 1;
      (**(code **)(param_1[0x1a91] + 4))(param_1,piVar7,*piVar1,*piVar4,*piVar3,*piVar2);
      piVar7 = piVar7 + 0x40;
    } while (iVar6 < *param_1);
  }
  FUN_004ec940();
  *param_1 = 0;
  return;
}

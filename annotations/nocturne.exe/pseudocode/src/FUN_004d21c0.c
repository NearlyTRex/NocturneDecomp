// Name: FUN_004d21c0
// Address: 004d21c0
// Address Range: [[004d21c0, 004d23b6]]
// Convention: unknown
// Signature: void FUN_004d21c0(int param_1)

#include "nocturne.h"

void FUN_004d21c0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_10;
  
  local_10 = 0;
  if (param_1 != 0) {
    FUN_0052e850(0x02DC9450);
    FUN_004de860(0x1cc5780);
  }
  iVar3 = 0x1cc7900;
  FUN_0049a890(0x01C775EC);
  iVar1 = 0;
  do {
    *(int *)(iVar1 + 0x1cc7d00) = iVar3;
    iVar1 = iVar1 + 4;
    iVar3 = iVar3 + 0x100;
  } while (iVar1 != 0x10);
  do {
    FUN_0049a8a0(0x01C775EC);
    FUN_004deae0(0x1cc5780,*(uint *)(0x01C775EC + 0x264));
    FUN_004dec50(0x1cc5780);
    uVar2 = FUN_004ee370("?Graphic options" + 1);
    FUN_00563c90(0x1cc7900,uVar2);
    uVar2 = FUN_004ee370("Sound options");
    FUN_00563c90(0x1cc7a00,uVar2);
    uVar2 = FUN_004ee370("Control options");
    FUN_00563c90(0x1cc7b00,uVar2);
    uVar2 = FUN_004ee370("Credits");
    FUN_00563c90(0x1cc7c00,uVar2);
    *(uint *)(0x01C775EC + 0xc0) = 2;
    uVar2 = FUN_004ee370("Option Menu");
    uVar2 = FUN_004cf440(0x1cc7d00,4,&local_10,0xfa,uVar2);
    FUN_00553910();
    switch(uVar2) {
    case 0:
      FUN_004d0080();
      break;
    case 1:
      FUN_004d12e0();
      break;
    case 2:
      iVar1 = *(int *)(0x01C775EC + 0xbc);
      FUN_004d0d20();
      if (iVar1 != *(int *)(0x01C775EC + 0xbc)) {
        FUN_004d2d00();
      }
      break;
    case 3:
      FUN_004a6e90(0x01C775EC);
      FUN_0052e850(0x02DC9450);
    }
    iVar1 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,1);
  } while (iVar1 == 0);
  if (param_1 != 0) {
    FUN_004dea60(0x1cc5780);
    FUN_0052e9c0(0x02DC9450);
    FUN_004be2d0();
    return;
  }
  FUN_004be2d0();
  return;
}

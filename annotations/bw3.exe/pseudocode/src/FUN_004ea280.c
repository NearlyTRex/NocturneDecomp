// Name: FUN_004ea280
// Address: 004ea280
// Address Range: [[004ea280, 004ea4b0]]
// Convention: unknown
// Signature: void FUN_004ea280(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ea280(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_10;
  
  local_10 = 0;
  if (param_1 != 0) {
    FUN_004f94a0(0x1d72cb0);
    FUN_005607d0(0x02CF5680);
  }
  iVar3 = 0x1d75478;
  FUN_004b4430(0x01D2130C);
  iVar1 = 0;
  do {
    *(int *)(iVar1 + 0x1d75878) = iVar3;
    iVar1 = iVar1 + 4;
    iVar3 = iVar3 + 0x100;
  } while (iVar1 != 0x10);
  do {
    FUN_004b4440(0x01D2130C);
    iVar1 = 0x01ED78C8;
    *(uint *)(0x01ED78C8 + 0x15ae84) = 1;
    FUN_0053b100(iVar1,50000,50000,0x10000);
    *(uint *)(0x01ED78C8 + 0x15ae94) = 0xdac;
    FUN_004f9670(0x1d72cb0);
    *(uint *)(0x01ED78C8 + 0x15ae84) = 0;
    uVar2 = FUN_00508960("?Graphic Options" + 1);
    FUN_005a28c0(0x1d75478,uVar2);
    uVar2 = FUN_00508960("Sound Options");
    FUN_005a28c0(0x1d75578,uVar2);
    uVar2 = FUN_00508960("Control Options");
    FUN_005a28c0(0x1d75678,uVar2);
    uVar2 = FUN_00508960("Credits");
    FUN_005a28c0(0x1d75778,uVar2);
    *(uint *)(0x01D2130C + 0xd8) = 9;
    uVar2 = FUN_00508960("Option Menu");
    uVar2 = FUN_004e7860(0x1d75878,4,&local_10,200,uVar2);
    FUN_0057a8a0();
    switch(uVar2) {
    case 0:
      FUN_004e85a0();
      break;
    case 1:
      FUN_004e94f0();
      break;
    case 2:
      _DAT_01d737d8 = *(int *)(0x01D2130C + 0xd4);
      FUN_004e8f80();
      if (_DAT_01d737d8 != *(int *)(0x01D2130C + 0xd4)) {
        FUN_004eae80();
      }
      break;
    case 3:
      FUN_004c02a0(0x01D2130C);
      FUN_005607d0(0x02CF5680);
    }
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
  } while (iVar1 == 0);
  if (param_1 != 0) {
    FUN_004f9580(0x1d72cb0);
    FUN_00560930(0x02CF5680);
    FUN_004d95c0();
    return;
  }
  FUN_004d95c0();
  return;
}

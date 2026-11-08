// Name: FUN_00441cc0
// Address: 00441cc0
// Address Range: [[00441cc0, 00441d62]]
// Convention: unknown
// Signature: void FUN_00441cc0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441cc0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *param_1) {
    piVar6 = param_1 + 1;
    piVar5 = param_1;
    do {
      if (piVar5[0x65] != 0) {
        uVar4 = FUN_0043e620(piVar5[0x65],0);
        FUN_005c0344(uVar4);
      }
      iVar2 = FUN_005c0f32(0x3ab30);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = FUN_0043e5c0(iVar2);
      }
      piVar5[0x65] = iVar3;
      if (iVar3 == 0) {
        _DAT_01d1d400 = "..\\core\\cloth.cpp";
        _DAT_01d1d404 = 0x5b6;
        FUN_005030e0("CClothList::load - out of memory for CCloth object.");
      }
      piVar1 = piVar5 + 0x65;
      piVar5 = piVar5 + 1;
      iVar7 = iVar7 + 1;
      FUN_0043e6d0(*piVar1,piVar6);
      piVar6 = piVar6 + 10;
    } while (iVar7 < *param_1);
  }
  return;
}

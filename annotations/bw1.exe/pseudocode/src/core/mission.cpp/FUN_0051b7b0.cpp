// Name: FUN_0051b7b0
// Address: 0051b7b0
// Address Range: [[0051b7b0, 0051b8c4]]
// Convention: unknown
// Signature: void FUN_0051b7b0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051b7b0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(0x01E82168 + 0x14d164) = 0;
  iVar1 = param_1[0x446];
  do {
    if (iVar1 == 0) {
      FUN_005593e0(0x01E82168);
      FUN_00555ad0(0x01E82168);
      return;
    }
    if (*param_1 == *(int *)(iVar1 + 0x2c)) {
      if (*(int *)(iVar1 + 0x70) == 0) {
        if (*(char *)(iVar1 + 0x78) != '\0') {
          iVar2 = FUN_005c04e0(iVar1 + 0x78,"none");
          if ((iVar2 != 0) && (iVar2 = FUN_004a6c30(0x01C51D80,iVar1 + 0x78), iVar2 == 0))
          goto LAB_0051b8aa;
        }
        iVar2 = FUN_0040cd00(*(uint *)(iVar1 + 0x74));
        if (iVar2 == 0) {
          *(uint *)(iVar1 + 0x70) = 2;
        }
        else {
          *(uint *)(iVar1 + 0x70) = 1;
LAB_0051b82c:
          if (1999 < *(int *)(0x01E82168 + 0x14d164)) {
            _DAT_01d1d400 = "..\\core\\mission.cpp";
            _DAT_01d1d404 = 0x497;
            FUN_005030e0("CDemonMission::buildActiveSetActorList - Too many actors in current set!");
          }
          iVar2 = 0x01E82168;
          *(int *)(0x01E82168 + 0x14d168 + *(int *)(0x01E82168 + 0x14d164) * 4) = iVar1;
          *(int *)(iVar2 + 0x14d164) = *(int *)(iVar2 + 0x14d164) + 1;
        }
      }
      else {
LAB_0051b8aa:
        if (*(int *)(iVar1 + 0x70) == 1) goto LAB_0051b82c;
      }
    }
    iVar1 = *(int *)(iVar1 + 0x14c);
  } while( true );
}

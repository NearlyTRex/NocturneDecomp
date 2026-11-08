// Name: FUN_004f6f80
// Address: 004f6f80
// Address Range: [[004f6f80, 004f7094]]
// Convention: unknown
// Signature: void FUN_004f6f80(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f6f80(int *param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(0x01ED78C8 + 0x14d164) = 0;
  iVar1 = param_1[0x50f];
  do {
    if (iVar1 == 0) {
      FUN_0053eda0(0x01ED78C8);
      FUN_0053b460(0x01ED78C8);
      return;
    }
    if (*param_1 == *(int *)(iVar1 + 0x2c)) {
      if (*(int *)(iVar1 + 0x70) == 0) {
        if (*(char *)(iVar1 + 0x78) != '\0') {
          iVar2 = FUN_005a3260(iVar1 + 0x78,&DAT_005c8b57);
          if ((iVar2 != 0) && (iVar2 = FUN_00491aa0(0x01C6E360,iVar1 + 0x78), iVar2 == 0))
          goto LAB_004f707a;
        }
        iVar2 = FUN_0040cf40(*(uint *)(iVar1 + 0x74));
        if (iVar2 == 0) {
          *(uint *)(iVar1 + 0x70) = 2;
        }
        else {
          *(uint *)(iVar1 + 0x70) = 1;
LAB_004f6ffc:
          if (1999 < *(int *)(0x01ED78C8 + 0x14d164)) {
            _DAT_01d71de0 = "..\\core\\mission.cpp";
            _DAT_01d71de4 = 0x497;
            FUN_004e4330("CDemonMission::buildActiveSetActorList - Too many actors in current set!");
          }
          iVar2 = 0x01ED78C8;
          *(int *)(0x01ED78C8 + 0x14d168 + *(int *)(0x01ED78C8 + 0x14d164) * 4) = iVar1;
          *(int *)(iVar2 + 0x14d164) = *(int *)(iVar2 + 0x14d164) + 1;
        }
      }
      else {
LAB_004f707a:
        if (*(int *)(iVar1 + 0x70) == 1) goto LAB_004f6ffc;
      }
    }
    iVar1 = *(int *)(iVar1 + 0x14c);
  } while( true );
}

// Name: FUN_004fd280
// Address: 004fd280
// Address Range: [[004fd280, 004fd44d]]
// Convention: unknown
// Signature: void FUN_004fd280(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fd280(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_3cc [240];
  
  FUN_00481fc0(local_3cc);
  iVar2 = *(int *)(param_1 + 0x1114);
  while( true ) {
    if (iVar2 == 0) {
      if (local_3cc[0] < 1) {
        FUN_0047bda0(0x01C25594,"Warning: mission has no hero placeholders, and no heros.");
      }
      else {
        iVar2 = FUN_00482250(local_3cc,"Mission has no hero placeholders.\n\nSelect a hero to convert into a hero placeholder, or\npress ESC to leave mission as is.\n\n(You will not be able to play the mission without a hero placeholder.)",0xffffffff,0);
        if (-1 < iVar2) {
          uVar3 = FUN_00481240(local_3cc,iVar2);
          iVar2 = FUN_004fc740(param_1,uVar3);
          if (iVar2 == 0) {
            _DAT_01d046a0 = "..\\core\\mission.cpp";
            _DAT_01d046a4 = 0x6d4;
            FUN_004e4500("Hell froze finding hero.");
          }
          iVar4 = FUN_005b8be2(0x2d8);
          iVar1 = 0;
          if (iVar4 != 0) {
            iVar1 = FUN_004d0940(iVar4);
          }
          *(uint *)(iVar1 + 0x2b4) = 0;
          *(uint *)(iVar1 + 0x20) = *(uint *)(iVar2 + 0x20);
          *(uint *)(iVar1 + 0x24) = *(uint *)(iVar2 + 0x24);
          *(uint *)(iVar1 + 0x28) = *(uint *)(iVar2 + 0x28);
          *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar2 + 0x2c);
          if ((uint *)(iVar1 + 0x30) != (uint *)(iVar2 + 0x30)) {
            *(uint *)(iVar1 + 0x30) = *(uint *)(iVar2 + 0x30);
            *(uint *)(iVar1 + 0x34) = *(uint *)(iVar2 + 0x34);
            *(uint *)(iVar1 + 0x38) = *(uint *)(iVar2 + 0x38);
          }
          FUN_004fcda0(param_1,iVar1);
          FUN_004fc570(param_1,iVar2,1);
          FUN_004fc200(param_1,iVar1);
          FUN_0047bda0(0x01C25594,"Replaced hero OK.  You will need to save the mission for changes to be perminent.");
          FUN_004820b0(local_3cc,0);
          return;
        }
      }
      FUN_004820b0(local_3cc,0);
      return;
    }
    iVar1 = FUN_0040c840(iVar2,"CHero");
    if (iVar1 != 0) {
      FUN_00480e70(local_3cc,iVar2);
    }
    iVar1 = FUN_0040c8f0(iVar2,_DAT_01cedf8c);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2b4) == 0)) break;
    iVar2 = *(int *)(iVar2 + 0x14c);
  }
  FUN_004820b0(local_3cc,0);
  return;
}

// Name: FUN_004f7a20
// Address: 004f7a20
// Address Range: [[004f7a20, 004f7bed]]
// Convention: unknown
// Signature: void FUN_004f7a20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f7a20(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_3cc [240];
  
  FUN_004831c0(local_3cc);
  iVar2 = *(int *)(param_1 + 0x143c);
  while( true ) {
    if (iVar2 == 0) {
      if (local_3cc[0] < 1) {
        FUN_0047ce80(0x01C5B0E4,"Warning: mission has no hero placeholders, and no heros.");
      }
      else {
        iVar2 = FUN_00483450(local_3cc,"Mission has no hero placeholders.\n\nSelect a hero to convert into a hero placeholder, or\npress ESC to leave mission as is.\n\n(You will not be able to play the mission without a hero placeholder.)",0xffffffff,0);
        if (-1 < iVar2) {
          uVar3 = FUN_00482440(local_3cc,iVar2);
          iVar2 = FUN_004f6e90(param_1,uVar3);
          if (iVar2 == 0) {
            _DAT_01d71de0 = "..\\core\\mission.cpp";
            _DAT_01d71de4 = 0x6e6;
            FUN_004e4330("Hell froze finding hero.");
          }
          iVar4 = FUN_005a3cb2(0x17c);
          iVar1 = 0;
          if (iVar4 != 0) {
            iVar1 = FUN_004d4ae0(iVar4);
          }
          *(uint *)(iVar1 + 0x158) = 0;
          *(uint *)(iVar1 + 0x20) = *(uint *)(iVar2 + 0x20);
          *(uint *)(iVar1 + 0x24) = *(uint *)(iVar2 + 0x24);
          *(uint *)(iVar1 + 0x28) = *(uint *)(iVar2 + 0x28);
          *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar2 + 0x2c);
          if ((uint *)(iVar1 + 0x30) != (uint *)(iVar2 + 0x30)) {
            *(uint *)(iVar1 + 0x30) = *(uint *)(iVar2 + 0x30);
            *(uint *)(iVar1 + 0x34) = *(uint *)(iVar2 + 0x34);
            *(uint *)(iVar1 + 0x38) = *(uint *)(iVar2 + 0x38);
          }
          FUN_004f7530(param_1,iVar1);
          FUN_004f6ca0(param_1,iVar2,1);
          FUN_004f6930(param_1,iVar1);
          FUN_0047ce80(0x01C5B0E4,"Replaced hero OK.  You will need to save the mission for changes to be perminent.");
          FUN_004832b0(local_3cc,0);
          return;
        }
      }
      FUN_004832b0(local_3cc,0);
      return;
    }
    iVar1 = FUN_0040c790(iVar2,"CHero");
    if (iVar1 != 0) {
      FUN_00482070(local_3cc,iVar2);
    }
    iVar1 = FUN_0040c840(iVar2,_DAT_01d5baac);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x158) == 0)) break;
    iVar2 = *(int *)(iVar2 + 0x14c);
  }
  FUN_004832b0(local_3cc,0);
  return;
}

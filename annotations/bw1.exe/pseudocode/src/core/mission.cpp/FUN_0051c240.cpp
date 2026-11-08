// Name: FUN_0051c240
// Address: 0051c240
// Address Range: [[0051c240, 0051c40d]]
// Convention: unknown
// Signature: void FUN_0051c240(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051c240(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_3cc [240];
  
  FUN_0049a620(local_3cc);
  iVar2 = *(int *)(param_1 + 0x1118);
  while( true ) {
    if (iVar2 == 0) {
      if (local_3cc[0] < 1) {
        FUN_004942e0(0x01C3EB54,"Warning: mission has no hero placeholders, and no heros.");
      }
      else {
        iVar2 = FUN_0049a8b0(local_3cc,"Mission has no hero placeholders.\n\nSelect a hero to convert into a hero placeholder, or\npress ESC to leave mission as is.\n\n(You will not be able to play the mission without a hero placeholder.)",0xffffffff,0);
        if (-1 < iVar2) {
          uVar3 = FUN_004998a0(local_3cc,iVar2);
          iVar2 = FUN_0051b6c0(param_1,uVar3);
          if (iVar2 == 0) {
            _DAT_01d1d400 = "..\\core\\mission.cpp";
            _DAT_01d1d404 = 0x6e4;
            FUN_005030e0("Hell froze finding hero.");
          }
          iVar4 = FUN_005c0f32(0x17c);
          iVar1 = 0;
          if (iVar4 != 0) {
            iVar1 = FUN_004ecba0(iVar4);
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
          FUN_0051bd60(param_1,iVar1);
          FUN_0051b4d0(param_1,iVar2,1);
          FUN_0051b160(param_1,iVar1);
          FUN_004942e0(0x01C3EB54,"Replaced hero OK.  You will need to save the mission for changes to be perminent.");
          FUN_0049a710(local_3cc,0);
          return;
        }
      }
      FUN_0049a710(local_3cc,0);
      return;
    }
    iVar1 = FUN_0040c550(iVar2,"CHero");
    if (iVar1 != 0) {
      FUN_004994d0(local_3cc,iVar2);
    }
    iVar1 = FUN_0040c600(iVar2,_DAT_01d06b4c);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x158) == 0)) break;
    iVar2 = *(int *)(iVar2 + 0x14c);
  }
  FUN_0049a710(local_3cc,0);
  return;
}

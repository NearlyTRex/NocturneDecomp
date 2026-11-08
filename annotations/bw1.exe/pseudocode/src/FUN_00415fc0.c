// Name: FUN_00415fc0
// Address: 00415fc0
// Address Range: [[00415fc0, 0041656e]]
// Convention: unknown
// Signature: void FUN_00415fc0(int *param_1,int param_2)

#include "nocturne.h"

void FUN_00415fc0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    FUN_0040d1c0(param_1 + 1);
    FUN_0040d1c0(0x7c3984);
    FUN_0040d1c0(0x7c3998);
    FUN_0040d1c0(0x7c39ac);
    iVar1 = 0;
    FUN_0040d1c0(0x7c39c0);
    if (0 < param_1[7]) {
      piVar2 = param_1 + 0x18;
      do {
        FUN_0040d1c0(piVar2);
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 0xb;
      } while (iVar1 < param_1[7]);
    }
    param_1[7] = 0;
    FUN_00573b00();
    param_1[6] = 0;
    param_1[0xc] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0x17] = 0;
    param_1[0x30d] = 0;
    DAT_007c397c = 0xffffffff;
    return;
  }
  FUN_004688e0(param_1 + 0x23e);
  FUN_004688e0(param_1 + 0x29d);
  param_1[0x13] = 1;
  param_1[0xd] = 1;
  param_1[7] = 0;
  FUN_0040d220(param_1 + 1,"radioback",0x280,0x1e0);
  FUN_0040d220(0x7c3984,"radiopointer2",0xd,0x12);
  FUN_0040d220(0x7c3998,"radiotuners2",0x2a,0xc);
  FUN_0040d220(0x7c39ac,"radiotunersleft",0x15,0xc);
  FUN_0040d220(0x7c39c0,"radiotunersright",0x15,0xc);
  (**(code **)(*param_1 + 0x28))(param_1,0,"poweron",0x3d,0x3a,1,0x1f9,0x195,0);
  (**(code **)(*param_1 + 0x28))(param_1,1,"poweroff",0x3d,0x3a,1,0x1f9,0x195,0);
  (**(code **)(*param_1 + 0x28))(param_1,2,"playreverse",0x2d,0x4c,2,0x128,0x8a,0);
  (**(code **)(*param_1 + 0x28))(param_1,3,"playstop",0x2d,0x4c,2,0x128,0x8a,0);
  (**(code **)(*param_1 + 0x28))(param_1,4,"playforward",0x2d,0x4c,2,0x128,0x8a,0);
  (**(code **)(*param_1 + 0x28))(param_1,5,0x5d3e15,0x16,0x20,3,0x171,0x12e,0);
  (**(code **)(*param_1 + 0x28))(param_1,6,0x5d3e1c,0x16,0x20,3,0x195,0x12e,0);
  (**(code **)(*param_1 + 0x28))(param_1,7,0x5d3e23,0x16,0x20,3,0x1bd,0x12e,0);
  (**(code **)(*param_1 + 0x28))(param_1,8,0x5d3e2a,0x16,0x20,3,0x1e3,0x12e,0);
  (**(code **)(*param_1 + 0x28))(param_1,9,0x5d3e31,0x16,0x20,3,0x20a,0x12e,0);
  (**(code **)(*param_1 + 0x28))(param_1,10,"lighton",0x14,0x15,0,0x135,0x62,0);
  (**(code **)(*param_1 + 0x28))(param_1,0xb,"lightoff",0x14,0x15,0,0x135,0x62,0);
  (**(code **)(*param_1 + 0x28))(param_1,0xc,"knobArrow1",0x27,0x27,2,0x4b,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0xd,"knobArrow2",0x27,0x27,2,0x4b,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0xe,"knobArrow3",0x27,0x27,2,0x4b,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0xf,"knobArrow4",0x27,0x27,2,0x4b,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x10,"knobArrow5",0x27,0x27,2,0x4b,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x11,"knobArrow1",0x27,0x27,2,0xaf,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x12,"knobArrow2",0x27,0x27,2,0xaf,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x13,"knobArrow3",0x27,0x27,2,0xaf,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x14,"knobArrow4",0x27,0x27,2,0xaf,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x15,"knobArrow5",0x27,0x27,2,0xaf,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x16,"knobArrow1",0x27,0x27,2,0x111,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x17,"knobArrow2",0x27,0x27,2,0x111,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x18,"knobArrow3",0x27,0x27,2,0x111,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x19,"knobArrow4",0x27,0x27,2,0x111,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x1a,"knobArrow5",0x27,0x27,2,0x111,0x1a3,0);
  iVar1 = FUN_004a6c30(0x01C51D80,"AudioPuzzleTelOsMah");
  if (iVar1 == 0) {
    iVar1 = FUN_004a6c30(0x01C51D80,"AudioPuzzleMary");
    if (iVar1 != 0) {
      param_1[0x309] = 1;
      param_1[0x30a] = 4;
      param_1[0x30b] = 1;
      param_1[0x30c] = 2;
      param_1[0x304] = 2;
      param_1[0x308] = 3;
      param_1[0x30d] = 0;
      return;
    }
  }
  else {
    param_1[0x309] = 4;
    param_1[0x30a] = 2;
    param_1[0x30b] = 3;
    param_1[0x30c] = 0;
    param_1[0x304] = 1;
    param_1[0x308] = 1;
  }
  param_1[0x30d] = 0;
  return;
}

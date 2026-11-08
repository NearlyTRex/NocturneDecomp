// Name: FUN_00556ed0
// Address: 00556ed0
// Address Range: [[00556ed0, 00556f71]]
// Convention: unknown
// Signature: undefined4 FUN_00556ed0(undefined4 param_1,int param_2)

#include "nocturne.h"

uint FUN_00556ed0(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piStack_19c;
  byte *puStack_198;
  byte bStack_c;
  byte auStack_4 [4];
  
  iVar1 = *(int *)(param_2 + 0x60);
  if (((0 < iVar1) && (iVar1 < 0x1f)) && (*(int *)(iVar1 * 0x24 + 0x264ac10) != 0)) {
    puStack_198 = auStack_4;
    piStack_19c = *(int **)(iVar1 * 0x24 + 0x264ac10);
    iVar1 = (**(code **)(*piStack_19c + 0x24))();
    if (iVar1 != 0) {
      uVar2 = FUN_00554ad0(iVar1);
      FUN_005b7790(&piStack_19c,"DirectSux: Unable to %s.  (%s)",
                   "@Get active sfx secondary buffer status" + 1,uVar2);
      FUN_005549c0(&piStack_19c);
      return 0;
    }
    if ((bStack_c & 1) != 0) {
      return 1;
    }
  }
  return 0;
}

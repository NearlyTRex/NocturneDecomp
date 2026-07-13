// Name: FUN_0052af50
// Address: 0052af50
// Address Range: [[0052af50, 0052b236]]
// Convention: unknown
// Signature: int FUN_0052af50(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0052af50(uint param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  byte auStack_650 [388];
  byte auStack_4cc [400];
  byte auStack_33c [400];
  byte auStack_1ac [412];
  
  if (((param_2 < 1) || (0x18 < param_2)) || (*(int *)(&DAT_02dc9244 + param_2 * 4) == 0)) {
    _DAT_01cc4800 = "..\\sound\\snddx.cpp";
    _DAT_01cc4804 = 0x2be;
    FUN_004c8440("DirectSoundDevice::allocateSfx - Invalid sample handle: %d",param_2);
  }
  if (_DAT_02dc9214 == (int *)0x0) {
    _DAT_01cc4800 = "..\\sound\\snddx.cpp";
    _DAT_01cc4804 = 0x2bf;
    FUN_004c8440("DirectSoundDevice::allocateSfx - dSound not allocated?");
  }
  iVar6 = 1;
  iVar4 = 4;
  iVar3 = _DAT_02dc92ac;
  while (iVar3 != 0) {
    iVar6 = iVar6 + 1;
    if (0x7b < iVar4 + 4) break;
    iVar3 = *(int *)(&DAT_02dc92ac + iVar4);
    iVar4 = iVar4 + 4;
  }
  if (0x1e < iVar6) {
    FUN_0043ac60(PTR_DAT_005ad350,"DirectSoundDevice::allocateSfx - no free buffers\n");
    return 0;
  }
  piVar1 = *(int **)(iVar6 * 4 + 0x2dc92a8);
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0x48))(piVar1);
    if (iVar3 != 0) {
      uVar5 = FUN_00529a90(iVar3);
      FUN_00563c90(auStack_650,"DirectSux: Unable to %s.  (%s)",
                   "Stop hardware sfx secondary buffer",uVar5);
      FUN_00529980(auStack_650);
      goto LAB_0052b04d;
    }
  }
  piVar7 = (int *)(iVar6 * 4 + 0x2dc9324);
  piVar1 = (int *)*piVar7;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar7 = 0;
  }
  piVar7 = (int *)(iVar6 * 4 + 0x2dc92a8);
  piVar1 = (int *)*piVar7;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar7 = 0;
  }
LAB_0052b04d:
  iVar3 = iVar6 * 4;
  iVar4 = (**(code **)(*_DAT_02dc9214 + 0x14))
                    (_DAT_02dc9214,*(uint *)(&DAT_02dc9244 + param_2 * 4),iVar3 + 0x2dc92a8);
  if (iVar4 == 0) {
    puVar2 = *(uint **)(iVar3 + 0x2dc92a8);
    if (puVar2 != (uint *)0x0) {
      iVar4 = (**(code **)*puVar2)(puVar2,&DAT_005c3918,iVar3 + 0x2dc9324);
      if (iVar4 == 0) {
        if (*(int *)(iVar3 + 0x2dc9324) != 0) {
          return iVar6;
        }
      }
      else {
        uVar5 = FUN_00529a90(iVar4);
        FUN_00563c90(auStack_4cc,"DirectSux: Unable to %s.  (%s)",
                     "get DirectSound3DBuffer interface from sfx secondary buffer",uVar5);
        FUN_00529980(auStack_4cc);
      }
    }
  }
  else {
    uVar5 = FUN_00529a90(iVar4);
    FUN_00563c90(auStack_33c,"DirectSux: Unable to %s.  (%s)",
                 "Duplicate sound buffer",uVar5);
    FUN_00529980(auStack_33c);
  }
  piVar1 = *(int **)(iVar6 * 4 + 0x2dc92a8);
  if ((piVar1 != (int *)0x0) && (iVar3 = (**(code **)(*piVar1 + 0x48))(piVar1), iVar3 != 0)) {
    uVar5 = FUN_00529a90(iVar3);
    FUN_00563c90(auStack_1ac,"DirectSux: Unable to %s.  (%s)",
                 "Stop hardware sfx secondary buffer",uVar5);
    FUN_00529980(auStack_1ac);
    return 0;
  }
  piVar7 = (int *)(iVar6 * 4 + 0x2dc9324);
  piVar1 = (int *)*piVar7;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar7 = 0;
  }
  piVar7 = (int *)(iVar6 * 4 + 0x2dc92a8);
  piVar1 = (int *)*piVar7;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar7 = 0;
  }
  return 0;
}

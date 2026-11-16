// Name: FUN_00537aa0
// Address: 00537aa0
// Address Range: [[00537aa0, 00537bd2]]
// Convention: unknown
// Signature: void FUN_00537aa0(int param_1,int param_2,int param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00537aa0(int param_1,int param_2,int param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iStack_1c;
  int iStack_18;
  code *pcStack_14;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  iStack_18 = 0;
  if (param_4 < 0x10) {
    if (param_4 == 8) {
      pcStack_14 = (code *)FUN_00437290();
      goto LAB_00537af0;
    }
  }
  else {
    if (param_4 < 0x11) {
      pcStack_14 = (code *)FUN_004372b0();
      goto LAB_00537af0;
    }
    if (param_4 == 0x20) {
      pcStack_14 = (code *)FUN_00437280();
      goto LAB_00537af0;
    }
  }
  _DAT_01d1d400 = "..\\cockpit\\pkbitmap.cpp";
  _DAT_01d1d404 = 0x2a2;
  core_main_c_displayErrorAndQuit_FUN_005030e0("CPackedBitmap::copyNoClip - invalid destBitsPerPixel: %d");
LAB_00537af0:
  iStack_1c = 0;
  puVar5 = (ushort *)(*(int *)(param_1 + 0x14) + **(int **)(param_1 + 0x20));
  do {
    iVar2 = *(int *)(param_1 + 0x14);
    iVar3 = *(int *)(*(int *)(param_1 + 0x20) + iStack_1c + 4);
    for (; puVar5 < (ushort *)(iVar2 + iVar3);
        puVar5 = (ushort *)((uVar1 + 3 & 0xfffffffc) + (int)(puVar5 + 2))) {
      iVar4 = (int)(*puVar5 * param_4) >> 0x1f;
      uVar1 = puVar5[1];
      (*pcStack_14)(((int)((*puVar5 * param_4 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3) +
                    param_2,puVar5 + 2,(uint)uVar1);
    }
    iStack_1c = iStack_1c + 4;
    iStack_18 = iStack_18 + 1;
    param_2 = param_2 + param_3;
  } while (iStack_18 < *(int *)(param_1 + 0x1c));
  return;
}

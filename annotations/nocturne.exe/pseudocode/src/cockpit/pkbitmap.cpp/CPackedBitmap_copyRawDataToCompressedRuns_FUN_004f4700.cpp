// Name: cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700
// Address: 004f4700
// Address Range: [[004f4700, 004f47a6]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700(int param_1,int param_2,int param_3)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  ushort *puVar7;
  uint *puVar8;
  ushort *puVar9;
  int iStack_18;
  int iStack_14;
  
  if (param_3 == 0) {
    param_3 = *(int *)(param_1 + 0x18);
  }
  iStack_14 = 0;
  iStack_18 = 0;
  do {
    piVar5 = (int *)(*(int *)(param_1 + 0x20) + iStack_14);
    iVar3 = *(int *)(param_1 + 0x14);
    iVar4 = piVar5[1];
    puVar7 = (ushort *)(*piVar5 + iVar3);
    while (puVar7 < (ushort *)(iVar3 + iVar4)) {
      puVar9 = puVar7 + 2;
      uVar1 = puVar7[1];
      uVar2 = *puVar7;
      puVar7 = (ushort *)((uVar1 + 3 & 0xfffffffc) + (int)puVar9);
      puVar8 = (uint *)((uint)uVar2 + param_2);
      for (uVar6 = (uint)(uVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint *)puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 2;
      }
      for (uVar6 = (byte)uVar1 & 0xffffff03; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(byte *)puVar9 = *(byte *)puVar8;
        puVar8 = (uint *)((int)puVar8 + 1);
        puVar9 = (ushort *)((int)puVar9 + 1);
      }
    }
    iStack_18 = iStack_18 + 1;
    param_2 = param_2 + param_3;
    iStack_14 = iStack_14 + 4;
  } while (iStack_18 < *(int *)(param_1 + 0x1c));
  return;
}

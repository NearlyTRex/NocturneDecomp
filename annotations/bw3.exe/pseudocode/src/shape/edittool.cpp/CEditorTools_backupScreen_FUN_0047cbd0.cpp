// Name: shape_edittool.cpp_CEditorTools_backupScreen_FUN_0047cbd0
// Address: 0047cbd0
// Address Range: [[0047cbd0, 0047cca5]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_backupScreen_FUN_0047cbd0(CEditorTools *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_backupScreen_FUN_0047cbd0(CEditorTools *this_ptr)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  int local_12c8 [1200];
  
  bVar7 = 0;
  if ((_DAT_01c6cee8 != 0) && (_DAT_01c5faec != 0)) {
    if (0 < DAT_005fba1c) {
      iVar2 = 0;
      do {
        iVar1 = iVar2 + 4;
        *(uint *)((int)local_12c8 + iVar2) = *(uint *)(&DAT_01c5faec + iVar2);
        iVar2 = iVar1;
      } while (iVar1 < DAT_005fba1c * 4);
    }
    iVar2 = engine_special_cpp_FUN_00565820();
    if (iVar2 != 0) {
      iVar2 = DAT_005fba18 * DAT_005fba20 >> 0x1f;
      uVar3 = (int)((DAT_005fba18 * DAT_005fba20 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
      iVar2 = 0;
      if (0 < DAT_005fba1c) {
        iVar1 = 0;
        do {
          if ((*(uint **)(&DAT_01c5faec + iVar1) != (uint *)0x0) &&
             (*(int *)((int)local_12c8 + iVar1) != 0)) {
            puVar5 = *(uint **)(&DAT_01c5faec + iVar1);
            puVar6 = *(uint **)((int)local_12c8 + iVar1);
            for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
              puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
            }
            for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(byte *)puVar6 = *(byte *)puVar5;
              puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
              puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
            }
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 4;
        } while (iVar2 < DAT_005fba1c);
      }
      engine_special_cpp_unlockFrame_FUN_00565870(1);
    }
  }
  return;
}

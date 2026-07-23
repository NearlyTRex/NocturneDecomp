// Name: cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_004f47b0
// Address: 004f47b0
// Address Range: [[004f47b0, 004f49d7]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_004f47b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_004f47b0(int param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  byte bVar11;
  byte auStack_154 [300];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar11 = 0;
  FUN_004f3f50(param_1);
  *(uint *)(param_1 + 0x18) = param_3;
  *(uint *)(param_1 + 0x1c) = param_4;
  if (param_6 == 0) {
    param_6 = *(int *)(param_1 + 0x18);
  }
  iVar1 = shape_memdbg_cpp_malloc_FUN_00564c18((*(int *)(param_1 + 0x1c) + 1) * 4);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01cc4804 = 0x37d;
    FUN_004c8440("Unable to allocate memory for rowOffset table in CPackedBitmap::load");
  }
  iVar1 = 0;
  iStack_24 = 0;
  iStack_14 = param_2;
  iStack_28 = 0;
  iStack_18 = 0;
  do {
    *(int *)(*(int *)(param_1 + 0x20) + iStack_28) = iVar1;
    if (*(int *)(param_1 + 0x1c) <= iStack_24) {
      uVar6 = realloc(*(uint *)(param_1 + 0x14),iVar1);
      *(uint *)(param_1 + 0x14) = uVar6;
      return;
    }
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        pbVar2 = (byte *)(iStack_14 + iVar4);
        iVar8 = iVar4;
        if (*pbVar2 == param_5) {
          iVar8 = iVar4 + 1;
        }
        else {
          do {
            iVar8 = iVar8 + 1;
            pbVar2 = pbVar2 + 1;
            if (*(int *)(param_1 + 0x18) <= iVar8) break;
          } while (*pbVar2 != param_5);
          uVar10 = iVar8 - iVar4;
          iVar3 = (uVar10 + 3 & 0xfffffffc) + iVar1;
          iStack_1c = iVar3 + 4;
          iStack_20 = iVar4;
          if (iStack_18 < iStack_1c) {
            iStack_18 = iVar3 + 0x4004;
            iVar4 = realloc(*(uint *)(param_1 + 0x14),iStack_18);
            *(int *)(param_1 + 0x14) = iVar4;
            if (iVar4 == 0) {
              _sprintf(auStack_154,"Out of memory packing file \"%s\" on row %u trying to get %u bytes",param_1,iStack_24,iStack_18
                        );
              _DAT_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
              _DAT_01cc4804 = 0x3b5;
              FUN_004c8440(auStack_154);
            }
          }
          puVar5 = (ushort *)(*(int *)(param_1 + 0x14) + iVar1);
          *puVar5 = (ushort)iStack_20;
          puVar5[1] = (ushort)uVar10;
          puVar9 = (uint *)((uint)*puVar5 + iStack_14);
          puVar5 = puVar5 + 2;
          for (uVar7 = (uVar10 & 0xffff) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(uint *)puVar5 = *puVar9;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar11 * -4 + 2;
          }
          for (uVar10 = uVar10 & 3; iVar1 = iStack_1c, uVar10 != 0; uVar10 = uVar10 - 1) {
            *(byte *)puVar5 = *(byte *)puVar9;
            puVar9 = (uint *)((int)puVar9 + (uint)bVar11 * -2 + 1);
            puVar5 = (ushort *)((int)puVar5 + (uint)bVar11 * -2 + 1);
          }
        }
        iVar4 = iVar8;
      } while (iVar8 < *(int *)(param_1 + 0x18));
    }
    iStack_24 = iStack_24 + 1;
    iStack_28 = iStack_28 + 4;
    iStack_14 = iStack_14 + param_6;
  } while( true );
}

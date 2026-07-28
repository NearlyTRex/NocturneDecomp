// Name: cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_004f47b0
// Address: 004f47b0
// Address Range: [[004f47b0, 004f49d7]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_004f47b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,int param_6)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_004f47b0(int param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  void *pvVar1;
  byte *pbVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong new_size;
  uint *puVar8;
  uint uVar9;
  byte bVar10;
  byte auStack_154 [300];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  ulong uStack_1c;
  ulong uStack_18;
  int iStack_14;
  
  bVar10 = 0;
  cockpit_pkbitmap_cpp_FUN_004f3f50(param_1);
  *(uint *)(param_1 + 0x18) = param_3;
  *(uint *)(param_1 + 0x1c) = param_4;
  if (param_6 == 0) {
    param_6 = *(int *)(param_1 + 0x18);
  }
  pvVar1 = shape_memdbg_cpp_malloc_FUN_00564c18((*(int *)(param_1 + 0x1c) + 1) * 4);
  *(void **)(param_1 + 0x20) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    PTR_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
    INT_01cc4804 = 0x37d;
    core_main_c_FUN_004c8440("Unable to allocate memory for rowOffset table in CPackedBitmap::load");
  }
  new_size = 0;
  iStack_24 = 0;
  iStack_14 = param_2;
  iStack_28 = 0;
  uStack_18 = 0;
  do {
    *(ulong *)(*(int *)(param_1 + 0x20) + iStack_28) = new_size;
    if (*(int *)(param_1 + 0x1c) <= iStack_24) {
      pvVar1 = realloc(*(void **)(param_1 + 0x14),new_size);
      *(void **)(param_1 + 0x14) = pvVar1;
      return;
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        pbVar2 = (byte *)(iStack_14 + iVar6);
        iVar7 = iVar6;
        if (*pbVar2 == param_5) {
          iVar7 = iVar6 + 1;
        }
        else {
          do {
            iVar7 = iVar7 + 1;
            pbVar2 = pbVar2 + 1;
            if (*(int *)(param_1 + 0x18) <= iVar7) break;
          } while (*pbVar2 != param_5);
          uVar9 = iVar7 - iVar6;
          iVar3 = (uVar9 + 3 & 0xfffffffc) + new_size;
          uStack_1c = iVar3 + 4;
          iStack_20 = iVar6;
          if ((int)uStack_18 < (int)uStack_1c) {
            uStack_18 = iVar3 + 0x4004;
            pvVar1 = realloc(*(void **)(param_1 + 0x14),uStack_18);
            *(void **)(param_1 + 0x14) = pvVar1;
            if (pvVar1 == (void *)0x0) {
              _sprintf(auStack_154,"Out of memory packing file \"%s\" on row %u trying to get %u bytes",param_1,iStack_24,uStack_18
                        );
              PTR_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
              INT_01cc4804 = 0x3b5;
              core_main_c_FUN_004c8440(auStack_154);
            }
          }
          puVar4 = (ushort *)(*(int *)(param_1 + 0x14) + new_size);
          *puVar4 = (ushort)iStack_20;
          puVar4[1] = (ushort)uVar9;
          puVar8 = (uint *)((uint)*puVar4 + iStack_14);
          puVar4 = puVar4 + 2;
          for (uVar5 = (uVar9 & 0xffff) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(uint *)puVar4 = *puVar8;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
            puVar4 = puVar4 + (uint)bVar10 * -4 + 2;
          }
          for (uVar9 = uVar9 & 3; new_size = uStack_1c, uVar9 != 0; uVar9 = uVar9 - 1) {
            *(byte *)puVar4 = *(byte *)puVar8;
            puVar8 = (uint *)((int)puVar8 + (uint)bVar10 * -2 + 1);
            puVar4 = (ushort *)((int)puVar4 + (uint)bVar10 * -2 + 1);
          }
        }
        iVar6 = iVar7;
      } while (iVar7 < *(int *)(param_1 + 0x18));
    }
    iStack_24 = iStack_24 + 1;
    iStack_28 = iStack_28 + 4;
    iStack_14 = iStack_14 + param_6;
  } while( true );
}

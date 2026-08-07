// Name: cockpit_pkbitmap.cpp_FUN_004f4050
// Address: 004f4050
// Address Range: [[004f4050, 004f416a]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_004f4050(int param_1,int param_2,int param_3)

#include "nocturne.h"

void cockpit_pkbitmap_cpp_FUN_004f4050(int param_1,int param_2,int param_3)

{
  ushort *puVar1;
  ushort *src_buffer;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ColorConversionFunc *pCVar5;
  void *dest_buffer;
  int iVar6;
  ushort *puVar7;
  int local_24;
  int local_20;
  int local_1c;
  
  if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    local_1c = 0;
    if (g_BitsPerPixel == 0x10) {
      param_2 = param_2 * 2;
    }
    pCVar5 = cockpit_ckptutil_c_FUN_0042d130();
    local_20 = param_3 << 2;
    local_24 = 0;
    puVar7 = (ushort *)(*(int *)(param_1 + 0x14) + **(int **)(param_1 + 0x20));
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x20) + local_24 + 4);
      iVar4 = *(int *)(param_1 + 0x14);
      iVar6 = param_2 + *(int *)((int)g_ScreenBufferArray + local_20);
      while (puVar7 < (ushort *)(iVar4 + iVar3)) {
        puVar1 = puVar7 + 1;
        src_buffer = puVar7 + 2;
        uVar2 = *puVar7;
        puVar7 = (ushort *)((int)src_buffer + (*puVar1 + 3 & 0xfffffffc));
        dest_buffer = (void *)(iVar6 + (uint)uVar2);
        if (g_BitsPerPixel == 0x10) {
          dest_buffer = (void *)((int)dest_buffer + (uint)uVar2);
        }
        (*pCVar5)(dest_buffer,src_buffer,(uint)*puVar1);
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + 4;
      local_24 = local_24 + 4;
    } while (local_1c < *(int *)(param_1 + 0x1c));
  }
  return;
}

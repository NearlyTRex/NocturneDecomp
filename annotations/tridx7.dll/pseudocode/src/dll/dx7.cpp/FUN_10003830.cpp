// Name: dll_dx7.cpp_FUN_10003830
// Address: 10003830
// Address Range: [[10003830, 10003a2e]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_10003830(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dll_dx7_cpp_FUN_10003830(void)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *local_10;
  uint local_4;
  
  if (DAT_10226a64 == 0x20) {
    _DAT_10226a4c = _DAT_101386a8;
    _DAT_10226a54 = _DAT_10240620;
    _DAT_10139040 = _DAT_10226e80;
  }
  else {
    _DAT_10226a4c = 0x10;
    _DAT_10226a54 = 8;
    _DAT_10139040 = 0;
  }
  pbVar4 = g_TexturePalette;
  puVar6 = &DAT_10226a80;
  do {
    puVar8 = puVar6 + 1;
    *puVar6 = (uint)pbVar4[2] << (DAT_10139040 & 0x1f) | (uint)pbVar4[1] << (DAT_10226a54 & 0x1f) |
              (uint)*pbVar4 << (DAT_10226a4c & 0x1f);
    pvVar1 = g_TextureOpacity;
    pbVar4 = pbVar4 + 3;
    puVar6 = puVar8;
  } while (puVar8 < &DAT_10226e80);
  puVar6 = &DAT_101b88e0;
  iVar9 = *g_ExternalRendererBridge.texture_dimension * *g_ExternalRendererBridge.texture_dimension;
  if (g_TextureOpacity == (void *)0x0) {
    pbVar4 = g_TextureData;
    if (0 < iVar9) {
      do {
        uVar5 = 0;
        if ((&DAT_10226a80)[*pbVar4] != 0) {
          uVar5 = (&DAT_10226a80)[*pbVar4] | 0xff000000;
        }
        *puVar6 = uVar5;
        pbVar4 = pbVar4 + 1;
        puVar6 = puVar6 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else {
    iVar2 = 0;
    pbVar4 = g_TextureData;
    if (0 < iVar9) {
      do {
        iVar3 = iVar2 + 1;
        *puVar6 = (&DAT_10226a80)[*pbVar4] | (uint)*(byte *)(iVar2 + (int)pvVar1) << 0x18;
        iVar2 = iVar3;
        pbVar4 = pbVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar3 < iVar9);
    }
  }
  if ((*g_ExternalRendererBridge.agp_texture_mode == 0) || (DAT_10060670 != 0)) {
    local_10 = &DAT_101b88e0;
    for (iVar9 = *g_ExternalRendererBridge.texture_dimension; 1 < iVar9; iVar9 = iVar9 / 2) {
      puVar6 = local_10 + iVar9 * iVar9;
      if (0 < iVar9) {
        uVar5 = iVar9 + 1U >> 1;
        puVar8 = puVar6;
        local_4 = uVar5;
        do {
          puVar7 = puVar8;
          uVar10 = uVar5;
          puVar11 = local_10;
          if (0 < iVar9) {
            do {
              puVar8 = puVar7 + 1;
              uVar10 = uVar10 - 1;
              *puVar7 = ((((puVar11[iVar9 + 1] & 0xfefefeff) >> 1) +
                          ((puVar11[iVar9] & 0xfefefeff) >> 1) & 0xfefefeff) >> 1) +
                        ((((puVar11[1] & 0xfefefeff) >> 1) + ((*puVar11 & 0xfefefeff) >> 1) &
                         0xfefefeff) >> 1);
              puVar7 = puVar8;
              puVar11 = puVar11 + 2;
            } while (uVar10 != 0);
          }
          local_10 = local_10 + iVar9 * 2;
          local_4 = local_4 - 1;
        } while (local_4 != 0);
      }
      if ((*g_ExternalRendererBridge.agp_texture_mode == 0) && (DAT_10060670 == 0)) {
        return;
      }
      local_10 = puVar6;
    }
  }
  return;
}

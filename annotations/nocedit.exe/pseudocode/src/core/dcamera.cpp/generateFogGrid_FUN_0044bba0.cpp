// Name: core_dcamera.cpp_generateFogGrid_FUN_0044bba0
// Address: 0044bba0
// Address Range: [[0044bba0, 0044bdc8]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_generateFogGrid_FUN_0044bba0(SFogGrid *fog)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_generateFogGrid_FUN_0044bba0(SFogGrid *fog)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char *local_4c;
  char *local_48;
  char *local_40;
  int local_3c;
  uint local_30;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_14;
  
  iVar6 = 0;
  memset(fog,0,0x1000);
  local_3c = 0x1000;
  do {
    iVar9 = 0;
    do {
      pcVar7 = fog->planes[0].grid[iVar9] + local_3c;
      pcVar5 = fog->planes[0].grid[iVar9] + iVar6;
      do {
        pcVar4 = pcVar5 + 0x100;
        iVar2 = rand();
        *pcVar5 = (char)iVar2;
        pcVar5 = pcVar4;
      } while (pcVar4 != pcVar7);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x10);
    local_3c = local_3c + 1;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x10);
  local_14 = (uint)pcVar4 ^ (uint)pcVar7;
  local_30 = 0xffffffff;
  do {
    local_24 = 0xffffffff;
    local_1c = 0;
    local_20 = 0;
    do {
      uVar8 = 0;
      local_40 = fog->planes[0].grid[0] + (local_14 + 1 & 0xf) + local_1c;
      pcVar7 = fog->planes[0].grid[0] + (local_30 & 0xf) + local_1c;
      local_4c = fog->planes[0].grid[local_20 + 1U & 0xf] + local_14;
      local_48 = fog->planes[0].grid[local_24 & 0xf] + local_14;
      uVar10 = 0xffffffff;
      pcVar5 = fog->planes[0].grid[0] + local_14 + local_1c;
      do {
        uVar3 = uVar10 & 0xf;
        uVar8 = uVar8 + 1;
        bVar1 = *pcVar7;
        pcVar7 = pcVar7 + 0x100;
        uVar10 = uVar10 + 1;
        *pcVar5 = (byte)((ulonglong)
                         ((uint)(byte)*local_40 +
                         (uint)bVar1 +
                         (uint)(byte)*local_4c +
                         (uint)(byte)*pcVar5 +
                         (uint)(byte)fog->planes[uVar3].grid[0][local_14 + local_1c] +
                         (uint)(byte)fog->planes[uVar8 & 0xf].grid[0][local_14 + local_1c] +
                         (uint)(byte)*local_48) / 7);
        local_40 = local_40 + 0x100;
        local_48 = local_48 + 0x100;
        local_4c = local_4c + 0x100;
        pcVar5 = pcVar5 + 0x100;
      } while ((int)uVar8 < 0x10);
      local_1c = local_1c + 0x10;
      local_20 = local_20 + 1;
      local_24 = local_24 + 1;
    } while (local_20 < 0x10);
    local_14 = local_14 + 1;
    local_30 = local_30 + 1;
  } while ((int)local_14 < 0x10);
  core_dcamera_cpp_resetFogSamplingOffset_FUN_0044bb70(fog);
  return;
}

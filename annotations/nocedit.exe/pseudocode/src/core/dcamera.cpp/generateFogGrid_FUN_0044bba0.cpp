// Name: core_dcamera.cpp_generateFogGrid_FUN_0044bba0
// Address: 0044bba0
// Address Range: [[0044bba0, 0044bdc8]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_generateFogGrid_FUN_0044bba0(SFogGrid * fog)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_generateFogGrid_FUN_0044bba0(SFogGrid *fog)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  byte *puVar5;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  byte *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int in_stack_00000008;
  SFogGrid *in_stack_0000000c;
  char *local_40;
  char *local_38;
  int local_34;
  uint local_28;
  uint local_1c;
  int local_18;
  int local_14;
  byte *puVar6;
  
  iVar9 = 0;
  crt_memory_c_memset_FUN_005fde40(fog,0,0x1000);
  local_34 = in_stack_00000008;
  do {
    iVar13 = 0;
    do {
      puVar11 = (byte *)(local_34 + iVar13 * 0x10 + 0x1000);
      puVar6 = (byte *)(iVar13 * 0x10 + iVar9 + in_stack_00000008);
      do {
        puVar5 = puVar6 + 0x100;
        iVar2 = crt_stdlib_c_rand_FUN_005feb5c();
        *puVar6 = (char)iVar2;
        puVar6 = puVar5;
      } while (puVar5 != puVar11);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 0x10);
    local_34 = local_34 + 1;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  uVar7 = (uint)puVar5 ^ (uint)puVar11;
  local_28 = 0xffffffff;
  do {
    local_1c = 0xffffffff;
    local_14 = 0;
    local_18 = 0;
    do {
      uVar12 = 0;
      local_38 = in_stack_0000000c->planes[0].grid[0] + (uVar7 + 1 & 0xf) + local_14;
      pcVar10 = in_stack_0000000c->planes[0].grid[0] + (local_28 & 0xf) + local_14;
      pcVar3 = in_stack_0000000c->planes[0].grid[local_18 + 1U & 0xf] + uVar7;
      local_40 = in_stack_0000000c->planes[0].grid[local_1c & 0xf] + uVar7;
      uVar14 = 0xffffffff;
      pcVar8 = in_stack_0000000c->planes[0].grid[0] + uVar7 + local_14;
      do {
        uVar4 = uVar14 & 0xf;
        uVar12 = uVar12 + 1;
        bVar1 = *pcVar10;
        pcVar10 = pcVar10 + 0x100;
        uVar14 = uVar14 + 1;
        *pcVar8 = (byte)((ulonglong)
                         ((uint)(byte)*local_38 +
                         (uint)bVar1 +
                         (uint)(byte)*pcVar3 +
                         (uint)(byte)*pcVar8 +
                         (uint)(byte)in_stack_0000000c->planes[uVar4].grid[0][uVar7 + local_14] +
                         (uint)(byte)in_stack_0000000c->planes[uVar12 & 0xf].grid[0]
                                     [uVar7 + local_14] + (uint)(byte)*local_40) / 7);
        local_38 = local_38 + 0x100;
        local_40 = local_40 + 0x100;
        pcVar3 = pcVar3 + 0x100;
        pcVar8 = pcVar8 + 0x100;
      } while ((int)uVar12 < 0x10);
      local_14 = local_14 + 0x10;
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
    } while (local_18 < 0x10);
    uVar7 = uVar7 + 1;
    local_28 = local_28 + 1;
  } while ((int)uVar7 < 0x10);
  core_dcamera_cpp_resetFogSamplingOffset_FUN_0044bb70(in_stack_0000000c);
  return;
}

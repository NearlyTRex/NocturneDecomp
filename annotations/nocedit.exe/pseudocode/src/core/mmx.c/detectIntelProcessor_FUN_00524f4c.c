// Name: core_mmx.c_detectIntelProcessor_FUN_00524f4c
// Address: 00524f4c
// Address Range: [[00524f4c, 00524ff8]]
// Convention: __cdecl
// Signature: void __cdecl core_mmx_c_detectIntelProcessor_FUN_00524f4c(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00524fc7) */
/* WARNING: Removing unreachable block (ram,0x00524f8f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mmx_c_detectIntelProcessor_FUN_00524f4c(void)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  uint *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  byte local_1;
  byte local_2;
  byte local_3;
  byte local_4;
  byte local_5;
  byte local_6;
  byte local_7;
  byte local_8;
  byte local_9;
  byte local_10;
  byte local_11;
  byte local_12;
  byte local_13;
  uint uVar10;
  
  uVar10 = (uint)(local_9 & 1) * 0x4000 | (uint)(local_8 & 1) * 0x800 | (uint)(local_7 & 1) * 0x200
           | (uint)(local_6 & 1) * 0x100 | (uint)(local_5 & 1) * 0x80 | (uint)(local_4 & 1) * 0x40 |
           (uint)(local_3 & 1) * 0x10 | (uint)(local_2 & 1) * 4 | (uint)(local_1 & 1) |
           (uint)(local_13 & 1) * 0x200000 | (uint)(local_12 & 1) * 0x100000 |
           (uint)(local_11 & 1) * 0x80000 | (uint)(local_10 & 1) * 0x40000;
  uVar6 = uVar10 ^ 0x40000;
  g_CPUInfoFamily = 3;
  if (((uint)((uVar6 & 0x4000) != 0) * 0x4000 | (uint)((uVar6 & 0x800) != 0) * 0x800 |
       (uint)((uVar6 & 0x200) != 0) * 0x200 | (uint)((uVar6 & 0x100) != 0) * 0x100 |
       (uint)((uVar6 & 0x80) != 0) * 0x80 | (uint)((uVar6 & 0x40) != 0) * 0x40 |
       (uint)((uVar6 & 0x10) != 0) * 0x10 | (uint)((uVar6 & 4) != 0) * 4 | (uint)((uVar6 & 1) != 0)
       | (uint)((uVar6 & 0x200000) != 0) * 0x200000 | (uint)((uVar6 & 0x40000) != 0) * 0x40000) !=
      uVar10) {
    g_CPUInfoFamily = 4;
    uVar6 = uVar10 ^ 0x200000;
    if (((uint)((uVar6 & 0x4000) != 0) * 0x4000 | (uint)((uVar6 & 0x800) != 0) * 0x800 |
         (uint)((uVar6 & 0x200) != 0) * 0x200 | (uint)((uVar6 & 0x100) != 0) * 0x100 |
         (uint)((uVar6 & 0x80) != 0) * 0x80 | (uint)((uVar6 & 0x40) != 0) * 0x40 |
         (uint)((uVar6 & 0x10) != 0) * 0x10 | (uint)((uVar6 & 4) != 0) * 4 |
         (uint)((uVar6 & 1) != 0) | (uint)((uVar6 & 0x200000) != 0) * 0x200000 |
        (uint)((uVar6 & 0x40000) != 0) * 0x40000) != uVar10) {
      g_CPUIDSupported = 1;
      piVar3 = (int *)cpuid_basic_info(0);
      register0x0000000c = piVar3[1];
      g_CPUInfoBasicInfo2 = piVar3[2];
      g_CPUInfoBaseInfo3 = piVar3[3];
      iVar7 = 1;
      pcVar8 = "GenuineIntel" + 0xc;
      pcVar9 = "GenuineIntel";
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        cVar2 = *pcVar9;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 == cVar2);
      if ((iVar7 == 0) && (g_CPUInfoIntelCPU = 1, 0 < *piVar3)) {
        puVar4 = (uint *)cpuid_Version_info(1);
        g_CPUFeatureFlags = puVar4[2];
        bVar5 = (byte)*puVar4;
        g_CPUInfoStepping = bVar5 & 0xf;
        g_CPUInfoModel = bVar5 >> 4;
        g_CPUInfoFamily = (byte)((uint)*puVar4 >> 8) & 0xf;
      }
    }
  }
  return;
}

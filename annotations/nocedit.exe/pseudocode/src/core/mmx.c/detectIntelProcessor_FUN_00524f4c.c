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
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar10;
  
  uVar10 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
           (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
           (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1) |
           (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
           (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
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

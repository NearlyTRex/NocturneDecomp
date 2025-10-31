// Name: core_mmx.c_detectIntelProcessor_FUN_00524f4c
// Address: 00524f4c
// Address Range: [[00524f4c, 00524ff8]]
// Convention: __watcallRegister
// Signature: void core_mmx.c_detectIntelProcessor_FUN_00524f4c(void)
// Cross-references:
//   core_mmx.c_detectCPUFeatures_FUN_00524f10 (00524f10) at 00524f11 [UNCONDITIONAL_CALL]
//   core_mmx.c_getCPUInfo_FUN_0052500f (0052500f) at 00525020 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_GenuineIntel_0067d6c0
//   undefined4 s__0067d6cc
//   undefined4 g_cpuidbasicinfo_2
//   undefined4 g_cpuidbasicinfo_3
//   byte g_CPUInfoFamily = 0x96
//   byte g_CPUInfoModel = 0x13
//   byte g_CPUInfoStepping = 0x0
//   bool g_CPUIDSupported = False
//   bool g_CPUInfoIntelCPU = False
//   uint g_CPUFeatureFlags = 0x0

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00524fc7) */
/* WARNING: Removing unreachable block (ram,0x00524f8f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mmx_c_detectIntelProcessor_FUN_00524f4c(void)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
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
      g_CPUIDSupported = true;
      piVar3 = (int *)cpuid_basic_info(0);
      register0x0000000c = piVar3[1];
      _g_cpuidbasicinfo_2 = piVar3[2];
      _g_cpuidbasicinfo_3 = piVar3[3];
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
      if ((iVar7 == 0) && (g_CPUInfoIntelCPU = true, 0 < *piVar3)) {
        puVar4 = (undefined4 *)cpuid_Version_info(1);
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


// Assembly code:
// 00524f4c: PUSH ESI
//   Label: core_mmx.c_detectIntelProcessor_FUN_00524f4c
// 00524f4d: PUSH EDI
// 00524f4e: PUSH EAX
// 00524f4f: PUSH EBX
// 00524f50: PUSH ECX
// 00524f51: PUSH EDX
// 00524f52: PUSHFD
// 00524f53: POP EAX
// 00524f54: MOV ECX,EAX
// 00524f56: XOR EAX,0x40000
// 00524f5b: PUSH EAX
// 00524f5c: POPFD
// 00524f5d: PUSHFD
// 00524f5e: POP EAX
// 00524f5f: XOR EAX,ECX
// 00524f61: MOV byte ptr [0x0067d6d8],0x3
//   XREF to: 0067d6d8 (WRITE)
// 00524f68: JZ 0x00524ff2
//   XREF to: 00524ff2 (CONDITIONAL_JUMP)
// 00524f6e: PUSH ECX
// 00524f6f: POPFD
// 00524f70: MOV byte ptr [0x0067d6d8],0x4
//   XREF to: 0067d6d8 (WRITE)
// 00524f77: MOV EAX,ECX
// 00524f79: XOR EAX,0x200000
// 00524f7e: PUSH EAX
// 00524f7f: POPFD
// 00524f80: PUSHFD
// 00524f81: POP EAX
// 00524f82: XOR EAX,ECX
// 00524f84: JZ 0x00524ff2
//   XREF to: 00524ff2 (CONDITIONAL_JUMP)
// 00524f86: MOV byte ptr [0x0067d6db],0x1
//   XREF to: 0067d6db (WRITE)
// 00524f8d: XOR EAX,EAX
// 00524f8f: CPUID
// 00524f91: MOV dword ptr [0x0067d6cc],EBX
//   XREF to: 0067d6cc (WRITE)
// 00524f97: MOV dword ptr [0x0067d6d0],EDX
//   XREF to: 0067d6d0 (WRITE)
// 00524f9d: MOV dword ptr [0x0067d6d4],ECX
//   XREF to: 0067d6d4 (WRITE)
// 00524fa3: MOV ESI,0x67d6cc
//   XREF to: 0067d6cc (DATA)
// 00524fa8: MOV EDI,0x67d6c0
//   XREF to: 0067d6c0 (DATA)
// 00524fad: MOV ECX,0x1
// 00524fb2: CMPSB.REPE ES:EDI,ESI
//   XREF to: 0067d6c0 (READ)
//   XREF to: 0067d6cc (READ)
// 00524fb4: OR ECX,ECX
// 00524fb6: JNZ 0x00524ff2
//   XREF to: 00524ff2 (CONDITIONAL_JUMP)
// 00524fb8: MOV byte ptr [0x0067d6dc],0x1
//   XREF to: 0067d6dc (WRITE)
// 00524fbf: CMP EAX,0x1
// 00524fc2: JL 0x00524ff2
//   XREF to: 00524ff2 (CONDITIONAL_JUMP)
// 00524fc4: XOR EAX,EAX
// 00524fc6: INC EAX
// 00524fc7: CPUID
// 00524fc9: MOV [0x0067d6da],AL
//   XREF to: 0067d6da (WRITE)
// 00524fce: AND byte ptr [0x0067d6da],0xf
//   XREF to: 0067d6da (READ_WRITE)
// 00524fd5: AND AL,0xf0
// 00524fd7: SHR AL,0x4
// 00524fda: MOV [0x0067d6d9],AL
//   XREF to: 0067d6d9 (WRITE)
// 00524fdf: AND EAX,0xf00
// 00524fe4: SHR EAX,0x8
// 00524fe7: MOV [0x0067d6d8],AL
//   XREF to: 0067d6d8 (WRITE)
// 00524fec: MOV dword ptr [0x0067d6dd],EDX
//   XREF to: 0067d6dd (WRITE)
// 00524ff2: POP EDX
//   Label: LAB_00524ff2
// 00524ff3: POP ECX
// 00524ff4: POP EBX
// 00524ff5: POP EAX
// 00524ff6: POP EDI
// 00524ff7: POP ESI
// 00524ff8: RET

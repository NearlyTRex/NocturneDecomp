// Name: core_mmx.c_getCPUInfo_FUN_0052500f
// Address: 0052500f
// Address Range: [[0052500f, 00525062]]
// Convention: __cdecl
// Signature: bool core_mmx.c_getCPUInfo_FUN_0052500f(SCPUInfo * cpu_info)
// Globals:
//   byte g_CPUInfoFamily = 0x96
//   byte g_CPUInfoModel = 0x13
//   byte g_CPUInfoStepping = 0x0
//   bool g_CPUInfoIntelCPU = False
//   undefined1 g_CPUInfoMMXSupported
// Function calls:
//   core_mmx.c_detectIntelProcessor_FUN_00524f4c
//   core_mmx.c_detectMMXSupport_FUN_00524ff9

#include "nocturne.h"

bool __cdecl core_mmx_c_getCPUInfo_FUN_0052500f(SCPUInfo *cpu_info)

{
  if (cpu_info != (SCPUInfo *)0x0) {
    core_mmx_c_detectIntelProcessor_FUN_00524f4c();
    core_mmx_c_detectMMXSupport_FUN_00524ff9();
    cpu_info->family = (uint)g_CPUInfoFamily;
    cpu_info->model = (uint)g_CPUInfoModel;
    cpu_info->stepping = (uint)g_CPUInfoStepping;
    cpu_info->is_intel = (uint)g_CPUInfoIntelCPU;
    cpu_info->mmx_supported = (uint)g_CPUInfoMMXSupported;
  }
  return cpu_info != (SCPUInfo *)0x0;
}


// Assembly code:
// 0052500f: PUSH EBP
//   Label: core_mmx.c_getCPUInfo_FUN_0052500f
// 00525010: MOV EBP,ESP
// 00525012: PUSH EDI
// 00525013: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00525016: MOV EAX,0x0
// 0052501b: CMP EDI,0x0
// 0052501e: JZ 0x00525060
//   XREF to: 00525060 (CONDITIONAL_JUMP)
// 00525020: CALL core_mmx.c_detectIntelProcessor_FUN_00524f4c
//   XREF to: 00524f4c (UNCONDITIONAL_CALL)
// 00525025: CALL core_mmx.c_detectMMXSupport_FUN_00524ff9
//   XREF to: 00524ff9 (UNCONDITIONAL_CALL)
// 0052502a: MOVZX EAX,byte ptr [0x0067d6d8]
//   XREF to: 0067d6d8 (READ)
// 00525031: MOV dword ptr [EDI],EAX
// 00525033: MOVZX EAX,byte ptr [0x0067d6d9]
//   XREF to: 0067d6d9 (READ)
// 0052503a: MOV dword ptr [EDI + 0x4],EAX
// 0052503d: MOVZX EAX,byte ptr [0x0067d6da]
//   XREF to: 0067d6da (READ)
// 00525044: MOV dword ptr [EDI + 0x8],EAX
// 00525047: MOVZX EAX,byte ptr [0x0067d6dc]
//   XREF to: 0067d6dc (READ)
// 0052504e: MOV dword ptr [EDI + 0xc],EAX
// 00525051: MOVZX EAX,byte ptr [0x0067d6e1]
//   XREF to: 0067d6e1 (READ)
// 00525058: MOV dword ptr [EDI + 0x10],EAX
// 0052505b: MOV EAX,0x1
// 00525060: POP EDI
//   Label: LAB_00525060
// 00525061: LEAVE
// 00525062: RET

// Name: core_mmx.c_detectCPUFeatures_FUN_00524f10
// Address: 00524f10
// Address Range: [[00524f10, 00524f40]]
// Convention: __cdecl
// Signature: void core_mmx.c_detectCPUFeatures_FUN_00524f10(void)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507b87 [UNCONDITIONAL_CALL]
// Globals:
//   uint g_CPUFamily = 0x5
//   byte g_CPUInfoFamily = 0x96
//   bool g_CPUInfoIntelCPU = False
//   undefined1 g_CPUInfoMMXSupported
//   BOOL g_MMXSupported
//   int g_CPUModel
// Function calls:
//   core_mmx.c_detectIntelProcessor_FUN_00524f4c
//   core_mmx.c_detectMMXSupport_FUN_00524ff9

#include "nocturne.h"

void __cdecl core_mmx_c_detectCPUFeatures_FUN_00524f10(void)

{
  core_mmx_c_detectIntelProcessor_FUN_00524f4c();
  core_mmx_c_detectMMXSupport_FUN_00524ff9();
  g_MMXSupported = (uint)g_CPUInfoMMXSupported;
  g_CPUFamily = (uint)g_CPUInfoFamily;
  g_CPUModel = (uint)g_CPUInfoIntelCPU;
  return;
}


// Assembly code:
// 00524f10: PUSH EAX
//   Label: core_mmx.c_detectCPUFeatures_FUN_00524f10
// 00524f11: CALL core_mmx.c_detectIntelProcessor_FUN_00524f4c
//   XREF to: 00524f4c (UNCONDITIONAL_CALL)
// 00524f16: CALL core_mmx.c_detectMMXSupport_FUN_00524ff9
//   XREF to: 00524ff9 (UNCONDITIONAL_CALL)
// 00524f1b: XOR EAX,EAX
// 00524f1d: MOV AL,[0x0067d6e1]
//   XREF to: 0067d6e1 (READ)
// 00524f22: MOV [0x02d05248],EAX
//   XREF to: 02d05248 (WRITE)
// 00524f27: XOR EAX,EAX
// 00524f29: MOV AL,[0x0067d6d8]
//   XREF to: 0067d6d8 (READ)
// 00524f2e: MOV [0x006793b0],EAX
//   XREF to: 006793b0 (WRITE)
// 00524f33: MOVZX EAX,byte ptr [0x0067d6dc]
//   XREF to: 0067d6dc (READ)
// 00524f3a: MOV [0x02d0524c],EAX
//   XREF to: 02d0524c (WRITE)
// 00524f3f: POP EAX
// 00524f40: RET

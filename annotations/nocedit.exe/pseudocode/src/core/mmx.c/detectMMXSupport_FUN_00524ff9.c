// Name: core_mmx.c_detectMMXSupport_FUN_00524ff9
// Address: 00524ff9
// Address Range: [[00524ff9, 0052500e]]
// Convention: __cdecl
// Signature: void core_mmx.c_detectMMXSupport_FUN_00524ff9(void)
// Cross-references:
//   core_mmx.c_detectCPUFeatures_FUN_00524f10 (00524f10) at 00524f16 [UNCONDITIONAL_CALL]
//   core_mmx.c_getCPUInfo_FUN_0052500f (0052500f) at 00525025 [UNCONDITIONAL_CALL]
// Globals:
//   uint g_CPUFeatureFlags = 0x0
//   undefined1 g_CPUInfoMMXSupported
//   undefined4 DAT_00800000

#include "nocturne.h"

void __cdecl core_mmx_c_detectMMXSupport_FUN_00524ff9(void)

{
  if ((g_CPUFeatureFlags & 0x800000) != 0) {
    g_CPUInfoMMXSupported = 1;
  }
  return;
}


// Assembly code:
// 00524ff9: PUSH EAX
//   Label: core_mmx.c_detectMMXSupport_FUN_00524ff9
// 00524ffa: MOV EAX,[0x0067d6dd]
//   XREF to: 0067d6dd (READ)
// 00524fff: TEST EAX,0x800000
//   XREF to: 00800000 (DATA)
// 00525004: JZ 0x0052500d
//   XREF to: 0052500d (CONDITIONAL_JUMP)
// 00525006: MOV byte ptr [0x0067d6e1],0x1
//   XREF to: 0067d6e1 (WRITE)
// 0052500d: POP EAX
//   Label: LAB_0052500d
// 0052500e: RET

// Name: core_fire.cpp_FUN_004c3870
// Address: 004c3870
// Address Range: [[004c3870, 004c38bd]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004c3870()
// Cross-references:
//   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 (004c6ec0) at 004c6ed6 [UNCONDITIONAL_CALL]
// Globals:
//   int g_GlobalDeltaTimeInt
//   undefined4 DAT_02d13560
//   undefined4 DAT_02d13564

#include "nocturne.h"

void core_fire_cpp_FUN_004c3870(void)

{
  int iVar1;
  
  iVar1 = g_GlobalDeltaTimeInt >> 0x1f;
  DAT_02d13564 = DAT_02d13564 +
                 ((int)((g_GlobalDeltaTimeInt + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0)) >> 8) &
                 0xff;
  DAT_02d13560 = DAT_02d13560 +
                 ((int)((g_GlobalDeltaTimeInt + iVar1 * -0x80) - (uint)(iVar1 << 6 < 0)) >> 7) &
                 0x7f;
  return;
}


// Assembly code:
// 004c3870: PUSH EBX
//   Label: core_fire.cpp_FUN_004c3870
// 004c3871: PUSH ESI
// 004c3872: MOV ECX,dword ptr [0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 004c3878: MOV EBX,dword ptr [0x02d13564]
//   XREF to: 02d13564 (READ)
// 004c387e: MOV ESI,dword ptr [0x02d13560]
//   XREF to: 02d13560 (READ)
// 004c3884: MOV EDX,ECX
// 004c3886: MOV EAX,ECX
// 004c3888: SAR EDX,0x1f
// 004c388b: SHL EDX,0x8
// 004c388e: SBB EAX,EDX
// 004c3890: SAR EAX,0x8
// 004c3893: MOV EDX,ECX
// 004c3895: ADD EBX,EAX
// 004c3897: MOV EAX,ECX
// 004c3899: SAR EDX,0x1f
// 004c389c: SHL EDX,0x7
// 004c389f: SBB EAX,EDX
// 004c38a1: SAR EAX,0x7
// 004c38a4: ADD ESI,EAX
// 004c38a6: AND EBX,0xff
// 004c38ac: AND ESI,0x7f
// 004c38af: MOV dword ptr [0x02d13564],EBX
//   XREF to: 02d13564 (WRITE)
// 004c38b5: MOV dword ptr [0x02d13560],ESI
//   XREF to: 02d13560 (WRITE)
// 004c38bb: POP ESI
// 004c38bc: POP EBX
// 004c38bd: RET

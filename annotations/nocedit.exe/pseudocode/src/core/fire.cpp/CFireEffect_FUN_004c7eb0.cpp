// Name: core_fire.cpp_CFireEffect_FUN_004c7eb0
// Address: 004c7eb0
// Address Range: [[004c7eb0, 004c7f11]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c7eb0(CFireEffect * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c7f80 (004c7f80) at 004c8127 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c8230 (004c8230) at 004c8b13 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02d667ac
//   CLaserBeam[64] g_CFireEffectLaserBeams
// Function calls:
//   core_fire.cpp_CLaserBeam_FUN_004c2420

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7eb0(CFireEffect *this_ptr)

{
  if (0x3f < DAT_02d667ac) {
    return;
  }
  core_fire_cpp_CLaserBeam_FUN_004c2420(g_CFireEffectLaserBeams + DAT_02d667ac);
  DAT_02d667ac = DAT_02d667ac + 1;
  return;
}


// Assembly code:
// 004c7eb0: PUSH EBP
//   Label: core_fire.cpp_CFireEffect_FUN_004c7eb0
// 004c7eb1: MOV EDX,dword ptr [0x02d667ac]
//   XREF to: 02d667ac (READ)
// 004c7eb7: CMP EDX,0x40
// 004c7eba: JL 0x004c7ebe
//   XREF to: 004c7ebe (CONDITIONAL_JUMP)
// 004c7ebc: POP EBP
// 004c7ebd: RET
// 004c7ebe: PUSH EDI
//   Label: LAB_004c7ebe
// 004c7ebf: PUSH ESI
// 004c7ec0: PUSH EBX
// 004c7ec1: PUSH 0x0
// 004c7ec3: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x24] (READ)
// 004c7ec7: PUSH dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x28] (READ)
// 004c7ecb: PUSH ECX
// 004c7ecc: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x20] (READ)
// 004c7ed0: PUSH EBX
// 004c7ed1: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x1c] (READ)
// 004c7ed5: PUSH ESI
// 004c7ed6: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x18] (READ)
// 004c7eda: PUSH EDI
// 004c7edb: PUSH dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x14] (READ)
// 004c7edf: MOV EBP,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 004c7ee3: PUSH dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 004c7ee7: PUSH EBP
// 004c7ee8: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 004c7eec: PUSH EAX
// 004c7eed: MOV EAX,EDX
// 004c7eef: SHL EAX,0x6
// 004c7ef2: ADD EAX,0x2d667b0
//   XREF to: 02d667b0 (DATA)
// 004c7ef7: PUSH EAX
// 004c7ef8: CALL core_fire.cpp_CLaserBeam_FUN_004c2420
//   XREF to: 004c2420 (UNCONDITIONAL_CALL)
// 004c7efd: MOV EDX,dword ptr [0x02d667ac]
//   XREF to: 02d667ac (READ)
// 004c7f03: INC EDX
// 004c7f04: ADD ESP,0x2c
// 004c7f07: MOV dword ptr [0x02d667ac],EDX
//   XREF to: 02d667ac (WRITE)
// 004c7f0d: POP EBX
// 004c7f0e: POP ESI
// 004c7f0f: POP EDI
// 004c7f10: POP EBP
// 004c7f11: RET

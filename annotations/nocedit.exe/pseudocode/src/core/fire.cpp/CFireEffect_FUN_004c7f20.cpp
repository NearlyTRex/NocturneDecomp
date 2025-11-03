// Name: core_fire.cpp_CFireEffect_FUN_004c7f20
// Address: 004c7f20
// Address Range: [[004c7f20, 004c7f7e]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c7f20(CFireEffect * this_ptr)
// Cross-references:
//   core_elephant.cpp_FUN_004a79f0 (004a79f0) at 004a7b64 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_005066b0 (005066b0) at 0050684a [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_FUN_005888f0 (005888f0) at 00588a64 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065dcc0
//   CRock* g_CFireEffectRocksEnd
//   CLaserBeam[64] g_LaserBeamPool
// Function calls:
//   core_fire.cpp_CLaserBeam_FUN_004c2420

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7f20(CFireEffect *this_ptr)

{
  if (0x3f < (int)g_CFireEffectRocksEnd) {
    return;
  }
  core_fire_cpp_CLaserBeam_FUN_004c2420(g_LaserBeamPool + (int)g_CFireEffectRocksEnd);
  g_CFireEffectRocksEnd = (CRock *)((int)&(g_CFireEffectRocksEnd->base).position.x + 1);
  return;
}


// Assembly code:
// 004c7f20: PUSH EBP
//   Label: core_fire.cpp_CFireEffect_FUN_004c7f20
// 004c7f21: MOV EDX,dword ptr [0x02d667ac]
//   XREF to: 02d667ac (READ)
// 004c7f27: CMP EDX,0x40
// 004c7f2a: JL 0x004c7f2e
//   XREF to: 004c7f2e (CONDITIONAL_JUMP)
// 004c7f2c: POP EBP
// 004c7f2d: RET
// 004c7f2e: PUSH EDI
//   Label: LAB_004c7f2e
// 004c7f2f: PUSH ESI
// 004c7f30: PUSH EBX
// 004c7f31: PUSH dword ptr [ESP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 004c7f35: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x1c] (READ)
// 004c7f39: PUSH dword ptr [0x0065dcc0]
//   XREF to: 0065dcc0 (READ)
// 004c7f3f: PUSH ECX
// 004c7f40: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x18] (READ)
// 004c7f44: PUSH EBX
// 004c7f45: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 004c7f49: PUSH ESI
// 004c7f4a: PUSH 0x0
// 004c7f4c: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 004c7f50: PUSH 0x0
// 004c7f52: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 004c7f56: PUSH dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 004c7f5a: MOV EAX,EDX
// 004c7f5c: PUSH EDI
// 004c7f5d: SHL EAX,0x6
// 004c7f60: PUSH EBP
// 004c7f61: ADD EAX,0x2d667b0
//   XREF to: 02d667b0 (DATA)
// 004c7f66: PUSH EAX
// 004c7f67: CALL core_fire.cpp_CLaserBeam_FUN_004c2420
//   XREF to: 004c2420 (UNCONDITIONAL_CALL)
// 004c7f6c: MOV EAX,[0x02d667ac]
//   XREF to: 02d667ac (READ)
// 004c7f71: INC EAX
// 004c7f72: ADD ESP,0x2c
// 004c7f75: MOV [0x02d667ac],EAX
//   XREF to: 02d667ac (WRITE)
// 004c7f7a: POP EBX
// 004c7f7b: POP ESI
// 004c7f7c: POP EDI
// 004c7f7d: POP EBP
// 004c7f7e: RET

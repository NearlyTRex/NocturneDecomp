// Name: core_fire.cpp_CFireEffect_FUN_004c7d60
// Address: 004c7d60
// Address Range: [[004c7d60, 004c7daf]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c7d60(CFireEffect * this_ptr)
// Globals:
//   CGlassParticle* g_CFireEffectGlassParticlesEnd
//   CBulletTrail[10] g_CFireEffectBulletTrails
// Function calls:
//   core_fire.cpp_FUN_004c2170

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7d60(CFireEffect *this_ptr)

{
  g_CFireEffectGlassParticlesEnd =
       (CGlassParticle *)((int)&(g_CFireEffectGlassParticlesEnd->base).position.x + 1);
  if (9 < (int)g_CFireEffectGlassParticlesEnd) {
    g_CFireEffectGlassParticlesEnd = (CGlassParticle *)0x0;
  }
  core_fire_cpp_FUN_004c2170();
  return;
}


// Assembly code:
// 004c7d60: PUSH ESI
//   Label: core_fire.cpp_CFireEffect_FUN_004c7d60
// 004c7d61: PUSH EDI
// 004c7d62: PUSH EBP
// 004c7d63: MOV EDX,dword ptr [0x02d62d38]
//   XREF to: 02d62d38 (READ)
// 004c7d69: LEA EAX,[EDX*0x8 + 0x0]
// 004c7d70: ADD EAX,EDX
// 004c7d72: SHL EAX,0x2
// 004c7d75: INC EDX
// 004c7d76: ADD EAX,0x2d62d3c
//   XREF to: 02d62d3c (DATA)
// 004c7d7b: MOV dword ptr [0x02d62d38],EDX
//   XREF to: 02d62d38 (WRITE)
// 004c7d81: CMP EDX,0xa
// 004c7d84: JL 0x004c7d90
//   XREF to: 004c7d90 (CONDITIONAL_JUMP)
// 004c7d86: PUSH EBX
// 004c7d87: XOR EBX,EBX
// 004c7d89: MOV dword ptr [0x02d62d38],EBX
//   XREF to: 02d62d38 (WRITE)
// 004c7d8f: POP EBX
// 004c7d90: MOV ESI,dword ptr [ESP + 0x1c]
//   Label: LAB_004c7d90
//   XREF to: Stack[0x10] (READ)
// 004c7d94: PUSH dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 004c7d98: PUSH ESI
// 004c7d99: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004c7d9d: PUSH EDI
// 004c7d9e: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004c7da2: PUSH EBP
// 004c7da3: PUSH EAX
// 004c7da4: CALL core_fire.cpp_FUN_004c2170
//   XREF to: 004c2170 (UNCONDITIONAL_CALL)
// 004c7da9: ADD ESP,0x14
// 004c7dac: POP EBP
// 004c7dad: POP EDI
// 004c7dae: POP ESI
// 004c7daf: RET

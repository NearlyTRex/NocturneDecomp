// Name: core_fire.cpp_CFireEffect_FUN_004c7d00
// Address: 004c7d00
// Address Range: [[004c7d00, 004c7d5d]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c7d00(CFireEffect * this_ptr)
// Cross-references:
//   core_glass.cpp_FUN_004ea1c0 (004ea1c0) at 004ea362 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0 (0059cec0) at 0059d424 [UNCONDITIONAL_CALL]
// Globals:
//   CMuzzleFlash* g_CFireEffectMuzzleFlashesEnd
//   CGlassParticle[256] g_CFireEffectGlassParticles
// Function calls:
//   core_fire.cpp_FUN_004c1c00

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7d00(CFireEffect *this_ptr)

{
  g_CFireEffectMuzzleFlashesEnd = (CMuzzleFlash *)(g_CFireEffectMuzzleFlashesEnd->field0_0x0 + 1);
  if (0xff < (int)g_CFireEffectMuzzleFlashesEnd) {
    g_CFireEffectMuzzleFlashesEnd = (CMuzzleFlash *)0x0;
  }
  core_fire_cpp_FUN_004c1c00();
  return;
}


// Assembly code:
// 004c7d00: PUSH ESI
//   Label: core_fire.cpp_CFireEffect_FUN_004c7d00
// 004c7d01: PUSH EDI
// 004c7d02: PUSH EBP
// 004c7d03: MOV EDX,dword ptr [0x02d59134]
//   XREF to: 02d59134 (READ)
// 004c7d09: LEA EAX,[EDX*0x4 + 0x0]
// 004c7d10: ADD EAX,EDX
// 004c7d12: SHL EAX,0x3
// 004c7d15: SUB EAX,EDX
// 004c7d17: SHL EAX,0x2
// 004c7d1a: INC EDX
// 004c7d1b: ADD EAX,0x2d59138
//   XREF to: 02d59138 (DATA)
// 004c7d20: MOV dword ptr [0x02d59134],EDX
//   XREF to: 02d59134 (WRITE)
// 004c7d26: CMP EDX,0x100
// 004c7d2c: JL 0x004c7d38
//   XREF to: 004c7d38 (CONDITIONAL_JUMP)
// 004c7d2e: PUSH EBX
// 004c7d2f: XOR EBX,EBX
// 004c7d31: MOV dword ptr [0x02d59134],EBX
//   XREF to: 02d59134 (WRITE)
// 004c7d37: POP EBX
// 004c7d38: MOV ESI,dword ptr [ESP + 0x24]
//   Label: LAB_004c7d38
//   XREF to: Stack[0x18] (READ)
// 004c7d3c: PUSH ESI
// 004c7d3d: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004c7d41: PUSH EDI
// 004c7d42: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 004c7d46: PUSH EBP
// 004c7d47: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 004c7d4b: PUSH EDX
// 004c7d4c: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004c7d50: PUSH ECX
// 004c7d51: PUSH EAX
// 004c7d52: CALL core_fire.cpp_FUN_004c1c00
//   XREF to: 004c1c00 (UNCONDITIONAL_CALL)
// 004c7d57: ADD ESP,0x18
// 004c7d5a: POP EBP
// 004c7d5b: POP EDI
// 004c7d5c: POP ESI
// 004c7d5d: RET

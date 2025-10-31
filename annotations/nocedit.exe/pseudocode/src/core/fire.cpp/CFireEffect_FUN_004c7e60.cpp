// Name: core_fire.cpp_CFireEffect_FUN_004c7e60
// Address: 004c7e60
// Address Range: [[004c7e60, 004c7eab]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c7e60(CFireEffect * this_ptr)
// Cross-references:
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a846f [UNCONDITIONAL_CALL]
// Globals:
//   CFireball* g_CFireEffectFireballsEnd
// Function calls:
//   core_fire.cpp_FUN_004c17c0

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7e60(CFireEffect *this_ptr)

{
  g_CFireEffectFireballsEnd = (CFireball *)((int)&(g_CFireEffectFireballsEnd->base).position.x + 1);
  if (0x3f < (int)g_CFireEffectFireballsEnd) {
    g_CFireEffectFireballsEnd = (CFireball *)0x0;
  }
  core_fire_cpp_FUN_004c17c0();
  return;
}


// Assembly code:
// 004c7e60: PUSH ESI
//   Label: core_fire.cpp_CFireEffect_FUN_004c7e60
// 004c7e61: PUSH EDI
// 004c7e62: PUSH EBP
// 004c7e63: MOV EDX,dword ptr [0x02d655a8]
//   XREF to: 02d655a8 (READ)
// 004c7e69: LEA EAX,[EDX*0x8 + 0x0]
// 004c7e70: ADD EAX,EDX
// 004c7e72: SHL EAX,0x3
// 004c7e75: INC EDX
// 004c7e76: ADD EAX,0x2d655ac
// 004c7e7b: MOV dword ptr [0x02d655a8],EDX
//   XREF to: 02d655a8 (WRITE)
// 004c7e81: CMP EDX,0x40
// 004c7e84: JL 0x004c7e90
//   XREF to: 004c7e90 (CONDITIONAL_JUMP)
// 004c7e86: PUSH EBX
// 004c7e87: XOR EBX,EBX
// 004c7e89: MOV dword ptr [0x02d655a8],EBX
//   XREF to: 02d655a8 (WRITE)
// 004c7e8f: POP EBX
// 004c7e90: MOV ESI,dword ptr [ESP + 0x1c]
//   Label: LAB_004c7e90
//   XREF to: Stack[0x10] (READ)
// 004c7e94: PUSH ESI
// 004c7e95: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004c7e99: PUSH EDI
// 004c7e9a: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004c7e9e: PUSH EBP
// 004c7e9f: PUSH EAX
// 004c7ea0: CALL core_fire.cpp_FUN_004c17c0
//   XREF to: 004c17c0 (UNCONDITIONAL_CALL)
// 004c7ea5: ADD ESP,0x10
// 004c7ea8: POP EBP
// 004c7ea9: POP EDI
// 004c7eaa: POP ESI
// 004c7eab: RET

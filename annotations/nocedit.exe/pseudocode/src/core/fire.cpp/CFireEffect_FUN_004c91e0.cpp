// Name: core_fire.cpp_CFireEffect_FUN_004c91e0
// Address: 004c91e0
// Address Range: [[004c91e0, 004c923c]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c91e0(CFireEffect * this_ptr)
// Globals:
//   undefined4 DAT_02d72588
// Function calls:
//   core_fire.cpp_FUN_004c6170

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_FUN_004c91e0(CFireEffect *this_ptr)

{
  core_fire_cpp_FUN_004c6170();
  _DAT_02d72588 = _DAT_02d72588 + 1;
  if (_DAT_02d72588 < 0x32) {
    return;
  }
  _DAT_02d72588 = 0;
  return;
}


// Assembly code:
// 004c91e0: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c91e0
// 004c91e1: PUSH ESI
// 004c91e2: PUSH EDI
// 004c91e3: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 004c91e7: PUSH EDX
// 004c91e8: MOV EDX,dword ptr [0x02d72588]
//   XREF to: 02d72588 (READ)
// 004c91ee: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004c91f2: LEA EAX,[EDX*0x4 + 0x0]
// 004c91f9: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004c91fd: SUB EAX,EDX
// 004c91ff: PUSH ECX
// 004c9200: SHL EAX,0x2
// 004c9203: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004c9207: SUB EAX,EDX
// 004c9209: PUSH EBX
// 004c920a: SHL EAX,0x3
// 004c920d: PUSH ESI
// 004c920e: ADD EAX,0x2d7258c
// 004c9213: PUSH EAX
// 004c9214: CALL core_fire.cpp_FUN_004c6170
//   XREF to: 004c6170 (UNCONDITIONAL_CALL)
// 004c9219: MOV EDI,dword ptr [0x02d72588]
//   XREF to: 02d72588 (READ)
// 004c921f: INC EDI
// 004c9220: ADD ESP,0x14
// 004c9223: MOV dword ptr [0x02d72588],EDI
//   XREF to: 02d72588 (WRITE)
// 004c9229: CMP EDI,0x32
// 004c922c: JGE 0x004c9232
//   XREF to: 004c9232 (CONDITIONAL_JUMP)
// 004c922e: POP EDI
// 004c922f: POP ESI
// 004c9230: POP EBX
// 004c9231: RET
// 004c9232: XOR EAX,EAX
//   Label: LAB_004c9232
// 004c9234: MOV [0x02d72588],EAX
//   XREF to: 02d72588 (WRITE)
// 004c9239: POP EDI
// 004c923a: POP ESI
// 004c923b: POP EBX
// 004c923c: RET

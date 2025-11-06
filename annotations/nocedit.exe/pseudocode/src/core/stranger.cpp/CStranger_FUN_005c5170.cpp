// Name: core_stranger.cpp_CStranger_FUN_005c5170
// Address: 005c5170
// Address Range: [[005c5170, 005c51b0]]
// Convention: __cdecl
// Signature: void core_stranger.cpp_CStranger_FUN_005c5170(CStranger * this_ptr)
// Function calls:
//   core_stranger.cpp_CStranger_FUN_005c07b0

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c5170(CStranger *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 auStack_34 [11];
  
  bVar3 = 0;
  core_stranger_cpp_CStranger_FUN_005c07b0();
  puVar2 = auStack_34;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}


// Assembly code:
// 005c5170: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c5170
// 005c5171: PUSH EDI
// 005c5172: SUB ESP,0x30
// 005c5175: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 005c5179: MOV EBX,ESI
// 005c517b: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 005c517f: MOV EAX,EDX
// 005c5181: SHL EAX,0x4
// 005c5184: ADD EAX,EDX
// 005c5186: PUSH EDX
// 005c5187: MOV EDX,dword ptr [ESI + EAX*0x4 + 0x24b4]
// 005c518e: PUSH EDX
// 005c518f: PUSH ESI
// 005c5190: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x38] (DATA)
// 005c5194: MOV EDI,EBX
// 005c5196: CALL core_stranger.cpp_CStranger_FUN_005c07b0
//   XREF to: 005c07b0 (UNCONDITIONAL_CALL)
// 005c519b: MOV ECX,0xc
// 005c51a0: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x38] (DATA)
// 005c51a4: ADD ESP,0xc
// 005c51a7: MOVSD.REP ES:EDI,ESI
// 005c51a9: MOV EAX,EBX
// 005c51ab: ADD ESP,0x30
// 005c51ae: POP EDI
// 005c51af: POP EBX
// 005c51b0: RET

// Name: core_skeleton.cpp_FUN_005a0fe0
// Address: 005a0fe0
// Address Range: [[005a0fe0, 005a1037]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_FUN_005a0fe0()
// Function calls:
//   core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   core_bodypart.cpp_FUN_0041a050
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a1040

#include "nocturne.h"

int core_skeleton_cpp_FUN_005a0fe0(void)

{
  int iVar1;
  CDeformableModelInstance *in_stack_00000008;
  
  iVar1 = core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a1040(in_stack_00000008);
  if (iVar1 == 0) {
    return 0;
  }
  core_bodypart_cpp_FUN_0041a050();
  return iVar1;
}


// Assembly code:
// 005a0fe0: PUSH EBX
//   Label: core_skeleton.cpp_FUN_005a0fe0
// 005a0fe1: PUSH ESI
// 005a0fe2: PUSH EDI
// 005a0fe3: PUSH EBP
// 005a0fe4: PUSH 0x0
// 005a0fe6: PUSH 0x0
// 005a0fe8: PUSH 0x0
// 005a0fea: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x18] (READ)
// 005a0fee: PUSH EDX
// 005a0fef: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 005a0ff3: PUSH ECX
// 005a0ff4: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x10] (READ)
// 005a0ff8: PUSH EBX
// 005a0ff9: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 005a0ffd: PUSH ESI
// 005a0ffe: CALL core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   XREF to: 00418e10 (UNCONDITIONAL_CALL)
// 005a1003: ADD ESP,0x1c
// 005a1006: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a100a: PUSH EDI
// 005a100b: PUSH EAX
// 005a100c: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005a1010: PUSH EBP
// 005a1011: MOV EBX,EAX
// 005a1013: MOV ESI,EAX
// 005a1015: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a1040
//   XREF to: 005a1040 (UNCONDITIONAL_CALL)
// 005a101a: ADD ESP,0xc
// 005a101d: TEST EBX,EBX
// 005a101f: JNZ 0x005a1028
//   XREF to: 005a1028 (CONDITIONAL_JUMP)
// 005a1021: MOV EAX,ESI
// 005a1023: POP EBP
// 005a1024: POP EDI
// 005a1025: POP ESI
// 005a1026: POP EBX
// 005a1027: RET
// 005a1028: PUSH EBX
//   Label: LAB_005a1028
// 005a1029: CALL core_bodypart.cpp_FUN_0041a050
//   XREF to: 0041a050 (UNCONDITIONAL_CALL)
// 005a102e: ADD ESP,0x4
// 005a1031: MOV EAX,ESI
// 005a1033: POP EBP
// 005a1034: POP EDI
// 005a1035: POP ESI
// 005a1036: POP EBX
// 005a1037: RET

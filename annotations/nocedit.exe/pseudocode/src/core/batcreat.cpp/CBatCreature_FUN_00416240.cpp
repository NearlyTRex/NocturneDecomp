// Name: core_batcreat.cpp_CBatCreature_FUN_00416240
// Address: 00416240
// Address Range: [[00416240, 0041628f]]
// Convention: __cdecl
// Signature: int core_batcreat.cpp_CBatCreature_FUN_00416240(CBatCreature * this_ptr)
// Globals:
//   undefined4 DAT_0082274c
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00

#include "nocturne.h"

int __cdecl core_batcreat_cpp_CBatCreature_FUN_00416240(CBatCreature *this_ptr)

{
  undefined4 *puVar1;
  undefined4 *in_stack_00000008;
  
  puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  if (in_stack_00000008 == puVar1) {
    return 1;
  }
  *in_stack_00000008 = *puVar1;
  in_stack_00000008[1] = puVar1[1];
  in_stack_00000008[2] = puVar1[2];
  return 1;
}


// Assembly code:
// 00416240: PUSH EBX
//   Label: core_batcreat.cpp_CBatCreature_FUN_00416240
// 00416241: PUSH ESI
// 00416242: SUB ESP,0xc
// 00416245: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00416249: MOV EDX,dword ptr [0x0082274c]
//   XREF to: 0082274c (READ)
// 0041624f: PUSH EDX
// 00416250: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x14] (DATA)
// 00416254: PUSH EAX
// 00416255: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00416259: ADD EAX,0x158
// 0041625e: PUSH EAX
// 0041625f: MOV EBX,0x1
// 00416264: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00416269: ADD ESP,0xc
// 0041626c: CMP ESI,EAX
// 0041626e: JNZ 0x00416278
//   XREF to: 00416278 (CONDITIONAL_JUMP)
// 00416270: MOV EAX,EBX
// 00416272: ADD ESP,0xc
// 00416275: POP ESI
// 00416276: POP EBX
// 00416277: RET
// 00416278: MOV EDX,dword ptr [EAX]
//   Label: LAB_00416278
// 0041627a: MOV dword ptr [ESI],EDX
// 0041627c: MOV EDX,dword ptr [EAX + 0x4]
// 0041627f: MOV dword ptr [ESI + 0x4],EDX
// 00416282: MOV EDX,dword ptr [EAX + 0x8]
// 00416285: MOV dword ptr [ESI + 0x8],EDX
// 00416288: MOV EAX,EBX
// 0041628a: ADD ESP,0xc
// 0041628d: POP ESI
// 0041628e: POP EBX
// 0041628f: RET

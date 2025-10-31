// Name: core_tvbat.cpp_FUN_005e5130
// Address: 005e5130
// Address Range: [[005e5130, 005e519d]]
// Convention: unknown
// Signature: undefined core_tvbat.cpp_FUN_005e5130()
// Globals:
//   CGore* g_CGorePtr = 02d83364
//   CGore g_CGoreInstance
// Function calls:
//   core_enemy.cpp_FUN_004a9f10
//   core_gore.cpp_FUN_004edbb0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_tvbat.cpp_FUN_005e5130(undefined4 param_1, undefined4 param_2)
    */

void core_tvbat_cpp_FUN_005e5130(void)

{
  float fVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  fVar1 = *(float *)(in_stack_00000004 + 0x243c) - *(float *)(in_stack_00000008 + 4);
  *(float *)(in_stack_00000004 + 0x243c) = fVar1;
  if (0.0 < fVar1) {
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
  *(undefined4 *)(in_stack_00000004 + 0x243c) = 0;
  core_gore_cpp_FUN_004edbb0();
  *(undefined4 *)(in_stack_00000004 + 0xc078) = 1;
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 005e5130: PUSH EBX
//   Label: core_tvbat.cpp_FUN_005e5130
// 005e5131: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e5135: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005e5139: FLD float ptr [EAX + 0x4]
// 005e513c: FSUBR float ptr [EBX + 0x243c]
// 005e5142: FST float ptr [EBX + 0x243c]
// 005e5148: FLDZ
// 005e514a: FCOMPP
// 005e514c: FNSTSW AX
// 005e514e: SAHF
// 005e514f: JNC 0x005e5161
//   XREF to: 005e5161 (CONDITIONAL_JUMP)
// 005e5151: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005e5155: PUSH ECX
// 005e5156: PUSH EBX
// 005e5157: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 005e515c: ADD ESP,0x8
// 005e515f: POP EBX
// 005e5160: RET
// 005e5161: PUSH 0x0
//   Label: LAB_005e5161
// 005e5163: PUSH 0xa
// 005e5165: PUSH 0x0
// 005e5167: LEA EAX,[EBX + 0x20]
// 005e516a: PUSH EAX
// 005e516b: MOV EDX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 005e5171: PUSH EDX
//   XREF to: 02d83364 (DATA)
// 005e5172: MOV dword ptr [EBX + 0x243c],0x0
// 005e517c: CALL core_gore.cpp_FUN_004edbb0
//   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
// 005e5181: ADD ESP,0x14
// 005e5184: MOV dword ptr [EBX + 0xc078],0x1
// 005e518e: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005e5192: PUSH ECX
// 005e5193: PUSH EBX
// 005e5194: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 005e5199: ADD ESP,0x8
// 005e519c: POP EBX
// 005e519d: RET

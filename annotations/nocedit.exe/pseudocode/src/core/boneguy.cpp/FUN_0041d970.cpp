// Name: core_boneguy.cpp_FUN_0041d970
// Address: 0041d970
// Address Range: [[0041d970, 0041d98e]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041d970()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042bc20

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_boneguy.cpp_FUN_0041d970(undefined4 param_1, undefined4
   param_2) */

int core_boneguy_cpp_FUN_0041d970(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  
  if (*(int *)(in_stack_00000004[1].model.padding_0x0 + 0x560) != 0) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_FUN_0042bc20(in_stack_00000004);
  return iVar1;
}


// Assembly code:
// 0041d970: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_boneguy.cpp_FUN_0041d970
//   XREF to: Stack[0x4] (READ)
// 0041d974: CMP dword ptr [EAX + 0xc4dc],0x0
// 0041d97b: JZ 0x0041d980
//   XREF to: 0041d980 (CONDITIONAL_JUMP)
// 0041d97d: XOR EAX,EAX
// 0041d97f: RET
// 0041d980: MOV ECX,dword ptr [ESP + 0x8]
//   Label: LAB_0041d980
//   XREF to: Stack[0x8] (READ)
// 0041d984: PUSH ECX
// 0041d985: PUSH EAX
// 0041d986: CALL core_charactr.cpp_CCharacter_FUN_0042bc20
//   XREF to: 0042bc20 (UNCONDITIONAL_CALL)
// 0041d98b: ADD ESP,0x8
// 0041d98e: RET

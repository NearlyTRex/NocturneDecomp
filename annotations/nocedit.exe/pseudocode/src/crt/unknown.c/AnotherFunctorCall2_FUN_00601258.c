// Name: crt_unknown.c_AnotherFunctorCall2_FUN_00601258
// Address: 00601258
// Address Range: [[00601258, 00601271]]
// Convention: unknown
// Signature: undefined crt_unknown.c_AnotherFunctorCall2_FUN_00601258()
// Function calls:
//   crt_memory.c_dispatchObjectArrayConstructor_FUN_00601200

#include "nocturne.h"

/* Signature: undefined1 unk_AnotherFunctorCall2(undefined4 param_1, undefined4 param_2, undefined4
   param_3) */

void crt_unknown_c_AnotherFunctorCall2_FUN_00601258(void)

{
  void *in_stack_00000004;
  int in_stack_00000008;
  WatcomTypeInfo *in_stack_0000000c;
  
  crt_memory_c_dispatchObjectArrayConstructor_FUN_00601200
            (in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}


// Assembly code:
// 00601258: PUSH EBX
//   Label: crt_unknown.c_AnotherFunctorCall2_FUN_00601258
// 00601259: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060125d: PUSH EDX
// 0060125e: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00601262: PUSH ECX
// 00601263: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00601267: PUSH EBX
// 00601268: CALL crt_memory.c_dispatchObjectArrayConstructor_FUN_00601200
//   XREF to: 00601200 (UNCONDITIONAL_CALL)
// 0060126d: ADD ESP,0xc
// 00601270: POP EBX
// 00601271: RET

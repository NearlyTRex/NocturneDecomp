// Name: crt_unknown.c_FUN_00600ee4
// Address: 00600ee4
// Address Range: [[00600ee4, 00600f32]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00600ee4()
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1591 [UNCONDITIONAL_CALL]
//   engine_dosio.c_reopenFileStream_FUN_00481b50 (00481b50) at 00481c13 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_reportStreamError_FUN_00606020
//   crt_stdio.c_stream_valid_FUN_00608cd1

#include "nocturne.h"

/* Signature: int* FUN_00600ee4(FILE* param_1, int param_2) */

FILE * crt_unknown_c_FUN_00600ee4(void)

{
  int iVar1;
  FILE *in_stack_00000004;
  
  iVar1 = crt_stdio_c_stream_valid_FUN_00608cd1(in_stack_00000004,1);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(*(int *)((int)&in_stack_00000004->_cnt +
                                          *(int *)(in_stack_00000004->_ptr + 4)) + 0x28) + 0x18))();
    if (iVar1 == -1) {
      crt_stdio_c_reportStreamError_FUN_00606020
                ((FileEmbeddedData *)
                 ((int)&in_stack_00000004->_ptr + *(int *)(in_stack_00000004->_ptr + 4)),2);
      return in_stack_00000004;
    }
  }
  return in_stack_00000004;
}


// Assembly code:
// 00600ee4: PUSH EBX
//   Label: crt_unknown.c_FUN_00600ee4
// 00600ee5: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00600ee9: PUSH 0x1
// 00600eeb: PUSH EBX
// 00600eec: CALL crt_stdio.c_stream_valid_FUN_00608cd1
//   XREF to: 00608cd1 (UNCONDITIONAL_CALL)
// 00600ef1: ADD ESP,0x8
// 00600ef4: TEST EAX,EAX
// 00600ef6: JNZ 0x00600efc
//   XREF to: 00600efc (CONDITIONAL_JUMP)
// 00600ef8: MOV EAX,EBX
//   Label: LAB_00600ef8
// 00600efa: POP EBX
// 00600efb: RET
// 00600efc: PUSH 0x1
//   Label: LAB_00600efc
// 00600efe: MOV EAX,dword ptr [EBX]
// 00600f00: PUSH 0x0
// 00600f02: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00600f06: MOV EAX,dword ptr [EAX + 0x4]
// 00600f09: PUSH ECX
// 00600f0a: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4]
// 00600f0e: PUSH EAX
// 00600f0f: MOV EDX,dword ptr [EAX + 0x28]
// 00600f12: CALL dword ptr [EDX + 0x18]
// 00600f15: ADD ESP,0x10
// 00600f18: CMP EAX,-0x1
// 00600f1b: JNZ 0x00600ef8
//   XREF to: 00600ef8 (CONDITIONAL_JUMP)
// 00600f1d: MOV EAX,dword ptr [EBX]
// 00600f1f: MOV EAX,dword ptr [EAX + 0x4]
// 00600f22: PUSH 0x2
// 00600f24: ADD EAX,EBX
// 00600f26: PUSH EAX
// 00600f27: CALL crt_stdio.c_reportStreamError_FUN_00606020
//   XREF to: 00606020 (UNCONDITIONAL_CALL)
// 00600f2c: ADD ESP,0x8
// 00600f2f: MOV EAX,EBX
// 00600f31: POP EBX
// 00600f32: RET

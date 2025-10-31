// Name: crt_cpp.c_handlePureVirtualCall_FUN_006015f1
// Address: 006015f1
// Address Range: [[006015f1, 00601619]]
// Convention: unknown
// Signature: undefined crt_cpp.c_handlePureVirtualCall_FUN_006015f1()
// Globals:
//   TerminatedCString s_pure_virtual_function_ca_00658f78
//   short g_PureVirtualCallFlag = 0x0
// Function calls:
//   crt_cpp.c_reportPureVirtualError_FUN_00605b23

#include "nocturne.h"

void crt_cpp_c_handlePureVirtualCall_FUN_006015f1(void)

{
  if (g_PureVirtualCallFlag != 0) {
    return;
  }
  g_PureVirtualCallFlag = 1;
  crt_cpp_c_reportPureVirtualError_FUN_00605b23("pure virtual function called!",1);
  return;
}


// Assembly code:
// 006015f1: CMP word ptr [0x00685278],0x0
//   Label: crt_cpp.c_handlePureVirtualCall_FUN_006015f1
//   XREF to: 00685278 (READ)
// 006015f9: JZ 0x006015fc
//   XREF to: 006015fc (CONDITIONAL_JUMP)
// 006015fb: RET
// 006015fc: PUSH EBX
//   Label: LAB_006015fc
// 006015fd: PUSH 0x1
// 006015ff: MOV EBX,0x1
// 00601604: PUSH 0x658f78
//   XREF to: 00658f78 (DATA)
// 00601609: MOV word ptr [0x00685278],BX
//   XREF to: 00685278 (WRITE)
// 00601610: CALL crt_cpp.c_reportPureVirtualError_FUN_00605b23
//   XREF to: 00605b23 (UNCONDITIONAL_CALL)
// 00601615: ADD ESP,0x8
// 00601618: POP EBX
// 00601619: RET

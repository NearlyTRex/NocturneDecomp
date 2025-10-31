// Name: crt_cpp.c_pureVirtualStub_FUN_005fee9f
// Address: 005fee9f
// Address Range: [[005fee9f, 005feeae]]
// Convention: __watcallStack
// Signature: void crt_cpp.c_pureVirtualStub_FUN_005fee9f(void)
// Globals:
//   TerminatedCString s_undefined_constructor_or_00658af4
// Function calls:
//   crt_cpp.c_reportPureVirtualError_FUN_00605b23

#include "nocturne.h"

void __watcallStack crt_cpp_c_pureVirtualStub_FUN_005fee9f(void)

{
  crt_cpp_c_reportPureVirtualError_FUN_00605b23("undefined constructor or destructor called!",1);
  return;
}


// Assembly code:
// 005fee9f: PUSH 0x1
//   Label: crt_cpp.c_pureVirtualStub_FUN_005fee9f
// 005feea1: PUSH 0x658af4
//   XREF to: 00658af4 (DATA)
// 005feea6: CALL crt_cpp.c_reportPureVirtualError_FUN_00605b23
//   XREF to: 00605b23 (UNCONDITIONAL_CALL)
// 005feeab: ADD ESP,0x8
// 005feeae: RET

// Name: shape_meshlod.cpp_FUN_0051b720
// Address: 0051b720
// Address Range: [[0051b720, 0051b760]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051b720()
// Globals:
//   TerminatedCString s_rt_00637d0d
//   TerminatedCString s_shape_meshlod_cpp_00637d10
// Function calls:
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_meshlod.cpp_CLodMesh_FUN_0051b8a0
//   shape_meshlod.cpp_FUN_0051b770

#include "nocturne.h"

int shape_meshlod_cpp_FUN_0051b720(void)

{
  FILE *file_ptr;
  int iVar1;
  CLodMesh *in_stack_00000004;
  
  file_ptr = (FILE *)shape_meshlod_cpp_FUN_0051b770();
  if (file_ptr == (FILE *)0x0) {
    return 0;
  }
  iVar1 = shape_meshlod_cpp_CLodMesh_FUN_0051b8a0(in_stack_00000004);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\shape\\meshlod.cpp",0x121e);
  return iVar1;
}


// Assembly code:
// 0051b720: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051b720
// 0051b721: PUSH ESI
// 0051b722: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0051b726: PUSH 0x637d0d
//   XREF to: 00637d0d (DATA)
// 0051b72b: PUSH ESI
// 0051b72c: CALL shape_meshlod.cpp_FUN_0051b770
//   XREF to: 0051b770 (UNCONDITIONAL_CALL)
// 0051b731: MOV EBX,EAX
// 0051b733: ADD ESP,0x8
// 0051b736: TEST EAX,EAX
// 0051b738: JNZ 0x0051b73d
//   XREF to: 0051b73d (CONDITIONAL_JUMP)
// 0051b73a: POP ESI
// 0051b73b: POP EBX
// 0051b73c: RET
// 0051b73d: PUSH EAX
//   Label: LAB_0051b73d
// 0051b73e: PUSH ESI
// 0051b73f: CALL shape_meshlod.cpp_CLodMesh_FUN_0051b8a0
//   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)
// 0051b744: ADD ESP,0x8
// 0051b747: PUSH 0x121e
// 0051b74c: PUSH 0x637d10
//   XREF to: 00637d10 (DATA)
// 0051b751: PUSH EBX
// 0051b752: MOV ESI,EAX
// 0051b754: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0051b759: ADD ESP,0xc
// 0051b75c: MOV EAX,ESI
// 0051b75e: POP ESI
// 0051b75f: POP EBX
// 0051b760: RET

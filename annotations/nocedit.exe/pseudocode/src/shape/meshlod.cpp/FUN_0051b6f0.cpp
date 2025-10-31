// Name: shape_meshlod.cpp_FUN_0051b6f0
// Address: 0051b6f0
// Address Range: [[0051b6f0, 0051b71f]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051b6f0()
// Cross-references:
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589c6c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rt_00637cf5
//   TerminatedCString s_shape_meshlod_cpp_00637cf8
// Function calls:
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_meshlod.cpp_FUN_0051b770

#include "nocturne.h"

undefined4 shape_meshlod_cpp_FUN_0051b6f0(void)

{
  FILE *file_ptr;
  
  file_ptr = (FILE *)shape_meshlod_cpp_FUN_0051b770();
  if (file_ptr == (FILE *)0x0) {
    return 0;
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\shape\\meshlod.cpp",0x1210);
  return 1;
}


// Assembly code:
// 0051b6f0: PUSH 0x637cf5
//   Label: shape_meshlod.cpp_FUN_0051b6f0
//   XREF to: 00637cf5 (DATA)
// 0051b6f5: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0051b6f9: PUSH EDX
// 0051b6fa: CALL shape_meshlod.cpp_FUN_0051b770
//   XREF to: 0051b770 (UNCONDITIONAL_CALL)
// 0051b6ff: ADD ESP,0x8
// 0051b702: TEST EAX,EAX
// 0051b704: JNZ 0x0051b707
//   XREF to: 0051b707 (CONDITIONAL_JUMP)
// 0051b706: RET
// 0051b707: PUSH 0x1210
//   Label: LAB_0051b707
// 0051b70c: PUSH 0x637cf8
//   XREF to: 00637cf8 (DATA)
// 0051b711: PUSH EAX
// 0051b712: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0051b717: MOV EAX,0x1
// 0051b71c: ADD ESP,0xc
// 0051b71f: RET

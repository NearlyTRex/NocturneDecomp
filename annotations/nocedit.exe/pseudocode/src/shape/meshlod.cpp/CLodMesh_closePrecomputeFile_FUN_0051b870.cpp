// Name: shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870
// Address: 0051b870
// Address Range: [[0051b870, 0051b899]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(CLodMesh * this_ptr)
// Cross-references:
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589dd2 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_free_FUN_00515970 (00515970) at 00515979 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0 (00516ba0) at 00516d38 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_00637d43
// Function calls:
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(CLodMesh *this_ptr)

{
  if (this_ptr->precompute_file == (FILE *)0x0) {
    return;
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0
            (this_ptr->precompute_file,"..\\shape\\meshlod.cpp",0x123e);
  this_ptr->precompute_file = (FILE *)0x0;
  return;
}


// Assembly code:
// 0051b870: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870
// 0051b871: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0051b875: MOV EDX,dword ptr [EBX + 0x38]
// 0051b878: TEST EDX,EDX
// 0051b87a: JNZ 0x0051b87e
//   XREF to: 0051b87e (CONDITIONAL_JUMP)
// 0051b87c: POP EBX
// 0051b87d: RET
// 0051b87e: PUSH 0x123e
//   Label: LAB_0051b87e
// 0051b883: PUSH 0x637d43
//   XREF to: 00637d43 (DATA)
// 0051b888: PUSH EDX
// 0051b889: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0051b88e: ADD ESP,0xc
// 0051b891: MOV dword ptr [EBX + 0x38],0x0
// 0051b898: POP EBX
// 0051b899: RET

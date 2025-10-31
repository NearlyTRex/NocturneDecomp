// Name: core_setutil.cpp_C3DSCamera_free_FUN_00585360
// Address: 00585360
// Address Range: [[00585360, 005853a0]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_free_FUN_00585360(C3DSCamera * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_clear_FUN_005693c0 (005693c0) at 005693df [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_dtor_FUN_00585340 (00585340) at 00585346 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_reset_FUN_005853b0 (005853b0) at 005853b6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setutil_cpp_006491bb
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_free_FUN_00585360(C3DSCamera *this_ptr)

{
  if (this_ptr->pvs_list == (int *)0x0) {
    this_ptr->pvs_count = 0;
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->pvs_list,"..\\core\\setutil.cpp",0x61);
  this_ptr->pvs_list = (int *)0x0;
  this_ptr->pvs_count = 0;
  return;
}


// Assembly code:
// 00585360: PUSH EBX
//   Label: core_setutil.cpp_C3DSCamera_free_FUN_00585360
// 00585361: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00585365: MOV EDX,dword ptr [EBX + 0x198]
// 0058536b: TEST EDX,EDX
// 0058536d: JNZ 0x0058537b
//   XREF to: 0058537b (CONDITIONAL_JUMP)
// 0058536f: MOV dword ptr [EBX + 0x194],0x0
// 00585379: POP EBX
// 0058537a: RET
// 0058537b: PUSH 0x61
//   Label: LAB_0058537b
// 0058537d: PUSH 0x6491bb
//   XREF to: 006491bb (DATA)
// 00585382: PUSH EDX
// 00585383: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00585388: ADD ESP,0xc
// 0058538b: MOV dword ptr [EBX + 0x198],0x0
// 00585395: MOV dword ptr [EBX + 0x194],0x0
// 0058539f: POP EBX
// 005853a0: RET

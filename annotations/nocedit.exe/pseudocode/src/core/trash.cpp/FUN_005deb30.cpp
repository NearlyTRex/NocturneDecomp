// Name: core_trash.cpp_FUN_005deb30
// Address: 005deb30
// Address Range: [[005deb30, 005deb52]]
// Convention: unknown
// Signature: undefined core_trash.cpp_FUN_005deb30()
// Cross-references:
//   core_trash.cpp_staticInit_FUN_005deb00 (005deb00) at 005deb0c [DATA]
// Globals:
//   TerminatedCString s_core_trash_cpp_0065556d
// Function calls:
//   core_trash.cpp_CTrash_ctor_FUN_005deb70
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_trash_cpp_FUN_005deb30(void)

{
  CTrash *this_ptr;
  
  this_ptr = (CTrash *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x328,"..\\core\\trash.cpp",0x43);
  if (this_ptr == (CTrash *)0x0) {
    return;
  }
  core_trash_cpp_CTrash_ctor_FUN_005deb70(this_ptr);
  return;
}


// Assembly code:
// 005deb30: PUSH 0x43
//   Label: core_trash.cpp_FUN_005deb30
// 005deb32: PUSH 0x65556d
//   XREF to: 0065556d (DATA)
// 005deb37: PUSH 0x328
// 005deb3c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005deb41: ADD ESP,0xc
// 005deb44: TEST EAX,EAX
// 005deb46: JNZ 0x005deb49
//   XREF to: 005deb49 (CONDITIONAL_JUMP)
// 005deb48: RET
// 005deb49: PUSH EAX
//   Label: LAB_005deb49
// 005deb4a: CALL core_trash.cpp_CTrash_ctor_FUN_005deb70
//   XREF to: 005deb70 (UNCONDITIONAL_CALL)
// 005deb4f: ADD ESP,0x4
// 005deb52: RET

// Name: core_shotgun.cpp_FUN_00587ea0
// Address: 00587ea0
// Address Range: [[00587ea0, 00587ec2]]
// Convention: unknown
// Signature: undefined core_shotgun.cpp_FUN_00587ea0()
// Cross-references:
//   core_shotgun.cpp_staticInit_FUN_00587e70 (00587e70) at 00587e7c [DATA]
// Globals:
//   TerminatedCString s_core_shotgun_cpp_00649ae8
// Function calls:
//   core_shotgun.cpp_CShotgun_ctor_FUN_00587ee0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_shotgun_cpp_FUN_00587ea0(void)

{
  CShotgun *this_ptr;
  
  this_ptr = (CShotgun *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x584,"..\\core\\shotgun.cpp",0x2e);
  if (this_ptr == (CShotgun *)0x0) {
    return;
  }
  core_shotgun_cpp_CShotgun_ctor_FUN_00587ee0(this_ptr);
  return;
}


// Assembly code:
// 00587ea0: PUSH 0x2e
//   Label: core_shotgun.cpp_FUN_00587ea0
// 00587ea2: PUSH 0x649ae8
//   XREF to: 00649ae8 (DATA)
// 00587ea7: PUSH 0x584
// 00587eac: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00587eb1: ADD ESP,0xc
// 00587eb4: TEST EAX,EAX
// 00587eb6: JNZ 0x00587eb9
//   XREF to: 00587eb9 (CONDITIONAL_JUMP)
// 00587eb8: RET
// 00587eb9: PUSH EAX
//   Label: LAB_00587eb9
// 00587eba: CALL core_shotgun.cpp_CShotgun_ctor_FUN_00587ee0
//   XREF to: 00587ee0 (UNCONDITIONAL_CALL)
// 00587ebf: ADD ESP,0x4
// 00587ec2: RET

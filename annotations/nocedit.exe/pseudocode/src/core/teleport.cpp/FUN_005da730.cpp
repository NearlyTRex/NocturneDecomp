// Name: core_teleport.cpp_FUN_005da730
// Address: 005da730
// Address Range: [[005da730, 005da752]]
// Convention: unknown
// Signature: undefined core_teleport.cpp_FUN_005da730()
// Cross-references:
//   core_teleport.cpp_staticInit_FUN_005da6e0 (005da6e0) at 005da6ec [DATA]
// Globals:
//   TerminatedCString s_core_teleport_cpp_00654c2b
// Function calls:
//   core_teleport.cpp_CTeleportDest_ctor_FUN_005da770
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_teleport_cpp_FUN_005da730(void)

{
  CTeleportDest *this_ptr;
  
  this_ptr = (CTeleportDest *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x158,"..\\core\\teleport.cpp",0x2a);
  if (this_ptr == (CTeleportDest *)0x0) {
    return;
  }
  core_teleport_cpp_CTeleportDest_ctor_FUN_005da770(this_ptr);
  return;
}


// Assembly code:
// 005da730: PUSH 0x2a
//   Label: core_teleport.cpp_FUN_005da730
// 005da732: PUSH 0x654c2b
//   XREF to: 00654c2b (DATA)
// 005da737: PUSH 0x158
// 005da73c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005da741: ADD ESP,0xc
// 005da744: TEST EAX,EAX
// 005da746: JNZ 0x005da749
//   XREF to: 005da749 (CONDITIONAL_JUMP)
// 005da748: RET
// 005da749: PUSH EAX
//   Label: LAB_005da749
// 005da74a: CALL core_teleport.cpp_CTeleportDest_ctor_FUN_005da770
//   XREF to: 005da770 (UNCONDITIONAL_CALL)
// 005da74f: ADD ESP,0x4
// 005da752: RET

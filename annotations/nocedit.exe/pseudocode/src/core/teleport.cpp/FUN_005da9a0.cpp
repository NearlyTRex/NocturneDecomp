// Name: core_teleport.cpp_FUN_005da9a0
// Address: 005da9a0
// Address Range: [[005da9a0, 005da9c5]]
// Convention: unknown
// Signature: undefined core_teleport.cpp_FUN_005da9a0()
// Cross-references:
//   core_teleport.cpp_staticInit_FUN_005da6e0 (005da6e0) at 005da70f [DATA]
// Globals:
//   TerminatedCString s_core_teleport_cpp_00654cc2
// Function calls:
//   core_teleport.cpp_CTeleport_ctor_FUN_005da9e0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_teleport_cpp_FUN_005da9a0(void)

{
  CTeleport *this_ptr;
  
  this_ptr = (CTeleport *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x168,"..\\core\\teleport.cpp",0x8b);
  if (this_ptr == (CTeleport *)0x0) {
    return;
  }
  core_teleport_cpp_CTeleport_ctor_FUN_005da9e0(this_ptr);
  return;
}


// Assembly code:
// 005da9a0: PUSH 0x8b
//   Label: core_teleport.cpp_FUN_005da9a0
// 005da9a5: PUSH 0x654cc2
//   XREF to: 00654cc2 (DATA)
// 005da9aa: PUSH 0x168
// 005da9af: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005da9b4: ADD ESP,0xc
// 005da9b7: TEST EAX,EAX
// 005da9b9: JNZ 0x005da9bc
//   XREF to: 005da9bc (CONDITIONAL_JUMP)
// 005da9bb: RET
// 005da9bc: PUSH EAX
//   Label: LAB_005da9bc
// 005da9bd: CALL core_teleport.cpp_CTeleport_ctor_FUN_005da9e0
//   XREF to: 005da9e0 (UNCONDITIONAL_CALL)
// 005da9c2: ADD ESP,0x4
// 005da9c5: RET

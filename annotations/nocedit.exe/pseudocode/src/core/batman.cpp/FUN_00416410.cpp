// Name: core_batman.cpp_FUN_00416410
// Address: 00416410
// Address Range: [[00416410, 00416432]]
// Convention: unknown
// Signature: undefined core_batman.cpp_FUN_00416410()
// Cross-references:
//   core_batman.cpp_staticInit_FUN_004163e0 (004163e0) at 004163ec [DATA]
// Globals:
//   TerminatedCString s_core_batman_cpp_006156cd
// Function calls:
//   core_batman.cpp_CBatman_ctor_FUN_00416450
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_batman_cpp_FUN_00416410(void)

{
  CBatman *this_ptr;
  
  this_ptr = (CBatman *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf78,"..\\core\\batman.cpp",0x58);
  if (this_ptr == (CBatman *)0x0) {
    return;
  }
  core_batman_cpp_CBatman_ctor_FUN_00416450(this_ptr);
  return;
}


// Assembly code:
// 00416410: PUSH 0x58
//   Label: core_batman.cpp_FUN_00416410
// 00416412: PUSH 0x6156cd
//   XREF to: 006156cd (DATA)
// 00416417: PUSH 0xbf78
// 0041641c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00416421: ADD ESP,0xc
// 00416424: TEST EAX,EAX
// 00416426: JNZ 0x00416429
//   XREF to: 00416429 (CONDITIONAL_JUMP)
// 00416428: RET
// 00416429: PUSH EAX
//   Label: LAB_00416429
// 0041642a: CALL core_batman.cpp_CBatman_ctor_FUN_00416450
//   XREF to: 00416450 (UNCONDITIONAL_CALL)
// 0041642f: ADD ESP,0x4
// 00416432: RET

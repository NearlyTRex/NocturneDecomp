// Name: core_armour.cpp_constructor_FUN_00412160
// Address: 00412160
// Address Range: [[00412160, 00412182]]
// Convention: unknown
// Signature: undefined core_armour.cpp_constructor_FUN_00412160()
// Cross-references:
//   core_armour.cpp_staticInit_FUN_00412130 (00412130) at 0041213c [DATA]
// Globals:
//   TerminatedCString s_core_armour_cpp_00614da8
// Function calls:
//   core_armour.cpp_CArmour_ctor_FUN_004121a0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_armour_cpp_constructor_FUN_00412160(void)

{
  CArmour *this_ptr;
  
  this_ptr = (CArmour *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf20,"..\\core\\armour.cpp",0x2f);
  if (this_ptr == (CArmour *)0x0) {
    return;
  }
  core_armour_cpp_CArmour_ctor_FUN_004121a0(this_ptr);
  return;
}


// Assembly code:
// 00412160: PUSH 0x2f
//   Label: core_armour.cpp_constructor_FUN_00412160
// 00412162: PUSH 0x614da8
//   XREF to: 00614da8 (DATA)
// 00412167: PUSH 0xbf20
// 0041216c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00412171: ADD ESP,0xc
// 00412174: TEST EAX,EAX
// 00412176: JNZ 0x00412179
//   XREF to: 00412179 (CONDITIONAL_JUMP)
// 00412178: RET
// 00412179: PUSH EAX
//   Label: LAB_00412179
// 0041217a: CALL core_armour.cpp_CArmour_ctor_FUN_004121a0
//   XREF to: 004121a0 (UNCONDITIONAL_CALL)
// 0041217f: ADD ESP,0x4
// 00412182: RET

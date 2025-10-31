// Name: core_battery.cpp_FUN_00417e50
// Address: 00417e50
// Address Range: [[00417e50, 00417e72]]
// Convention: unknown
// Signature: undefined core_battery.cpp_FUN_00417e50()
// Cross-references:
//   core_battery.cpp_staticInit_FUN_00417e20 (00417e20) at 00417e2c [DATA]
// Globals:
//   TerminatedCString s_core_battery_cpp_006159c5
// Function calls:
//   core_battery.cpp_CBattery_ctor_FUN_00417e90
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_battery_cpp_FUN_00417e50(void)

{
  CBattery *this_ptr;
  
  this_ptr = (CBattery *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2e0,"..\\core\\battery.cpp",0x1f);
  if (this_ptr == (CBattery *)0x0) {
    return;
  }
  core_battery_cpp_CBattery_ctor_FUN_00417e90(this_ptr);
  return;
}


// Assembly code:
// 00417e50: PUSH 0x1f
//   Label: core_battery.cpp_FUN_00417e50
// 00417e52: PUSH 0x6159c5
//   XREF to: 006159c5 (DATA)
// 00417e57: PUSH 0x2e0
// 00417e5c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00417e61: ADD ESP,0xc
// 00417e64: TEST EAX,EAX
// 00417e66: JNZ 0x00417e69
//   XREF to: 00417e69 (CONDITIONAL_JUMP)
// 00417e68: RET
// 00417e69: PUSH EAX
//   Label: LAB_00417e69
// 00417e6a: CALL core_battery.cpp_CBattery_ctor_FUN_00417e90
//   XREF to: 00417e90 (UNCONDITIONAL_CALL)
// 00417e6f: ADD ESP,0x4
// 00417e72: RET

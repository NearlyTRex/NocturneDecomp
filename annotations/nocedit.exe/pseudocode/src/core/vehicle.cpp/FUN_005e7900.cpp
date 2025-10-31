// Name: core_vehicle.cpp_FUN_005e7900
// Address: 005e7900
// Address Range: [[005e7900, 005e7922]]
// Convention: unknown
// Signature: undefined core_vehicle.cpp_FUN_005e7900()
// Cross-references:
//   core_vehicle.cpp_staticInit_FUN_005e78d0 (005e78d0) at 005e78dc [DATA]
// Globals:
//   TerminatedCString s_core_vehicle_cpp_00656db7
// Function calls:
//   core_vehicle.cpp_CVehicle_ctor_FUN_005e7940
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_vehicle_cpp_FUN_005e7900(void)

{
  CVehicle *this_ptr;
  
  this_ptr = (CVehicle *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1078,"..\\core\\vehicle.cpp",0x40);
  if (this_ptr == (CVehicle *)0x0) {
    return;
  }
  core_vehicle_cpp_CVehicle_ctor_FUN_005e7940(this_ptr);
  return;
}


// Assembly code:
// 005e7900: PUSH 0x40
//   Label: core_vehicle.cpp_FUN_005e7900
// 005e7902: PUSH 0x656db7
//   XREF to: 00656db7 (DATA)
// 005e7907: PUSH 0x1078
// 005e790c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005e7911: ADD ESP,0xc
// 005e7914: TEST EAX,EAX
// 005e7916: JNZ 0x005e7919
//   XREF to: 005e7919 (CONDITIONAL_JUMP)
// 005e7918: RET
// 005e7919: PUSH EAX
//   Label: LAB_005e7919
// 005e791a: CALL core_vehicle.cpp_CVehicle_ctor_FUN_005e7940
//   XREF to: 005e7940 (UNCONDITIONAL_CALL)
// 005e791f: ADD ESP,0x4
// 005e7922: RET

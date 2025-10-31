// Name: core_waypoint.cpp_FUN_005ebe30
// Address: 005ebe30
// Address Range: [[005ebe30, 005ebe52]]
// Convention: unknown
// Signature: undefined core_waypoint.cpp_FUN_005ebe30()
// Cross-references:
//   core_waypoint.cpp_staticInit_FUN_005ebd10 (005ebd10) at 005ebd1c [DATA]
// Globals:
//   undefined4 s_..\core\waypoint.cpp_00657527
// Function calls:
//   core_waypoint.cpp_CWayPoint_ctor_FUN_005ebe70
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_waypoint_cpp_FUN_005ebe30(void)

{
  CWayPoint *this_ptr;
  
  this_ptr = (CWayPoint *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                       (0x558,"9@..\\core\\waypoint.cpp" + 2,0x53);
  if (this_ptr == (CWayPoint *)0x0) {
    return;
  }
  core_waypoint_cpp_CWayPoint_ctor_FUN_005ebe70(this_ptr);
  return;
}


// Assembly code:
// 005ebe30: PUSH 0x53
//   Label: core_waypoint.cpp_FUN_005ebe30
// 005ebe32: PUSH 0x657527
//   XREF to: 00657527 (DATA)
// 005ebe37: PUSH 0x558
// 005ebe3c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005ebe41: ADD ESP,0xc
// 005ebe44: TEST EAX,EAX
// 005ebe46: JNZ 0x005ebe49
//   XREF to: 005ebe49 (CONDITIONAL_JUMP)
// 005ebe48: RET
// 005ebe49: PUSH EAX
//   Label: LAB_005ebe49
// 005ebe4a: CALL core_waypoint.cpp_CWayPoint_ctor_FUN_005ebe70
//   XREF to: 005ebe70 (UNCONDITIONAL_CALL)
// 005ebe4f: ADD ESP,0x4
// 005ebe52: RET

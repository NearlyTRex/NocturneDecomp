// Name: core_path.cpp_FUN_00548500
// Address: 00548500
// Address Range: [[00548500, 0054850d]]
// Convention: unknown
// Signature: undefined core_path.cpp_FUN_00548500()
// Cross-references:
//   core_bugs.cpp_FUN_00425cc0 (00425cc0) at 00425e0f [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425fe0 (00425fe0) at 0042628d [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 (004286e0) at 00428849 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043ff20 (0043ff20) at 00440343 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f13f0 (004f13f0) at 004f1863 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f8c70 (004f8c70) at 004f9207 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005578e0 (005578e0) at 00557ab9 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_FUN_005d9260 (005d9260) at 005d97f7 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWaypoint_FUN_005ebf70 (005ebf70) at 005ec112 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_FUN_005ebd40 (005ebd40) at 005ebe00 [UNCONDITIONAL_CALL]
// Function calls:
//   core_path.cpp_FUN_00548390

#include "nocturne.h"

void core_path_cpp_FUN_00548500(void)

{
  core_path_cpp_FUN_00548390();
  return;
}


// Assembly code:
// 00548500: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_path.cpp_FUN_00548500
//   XREF to: Stack[0x4] (READ)
// 00548504: PUSH EDX
// 00548505: CALL core_path.cpp_FUN_00548390
//   XREF to: 00548390 (UNCONDITIONAL_CALL)
// 0054850a: ADD ESP,0x4
// 0054850d: RET

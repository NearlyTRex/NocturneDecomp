// Name: core_path.cpp_FUN_00546330
// Address: 00546330
// Address Range: [[00546330, 00546345]]
// Convention: unknown
// Signature: undefined core_path.cpp_FUN_00546330()
// Globals:
//   int g_PathfindingQueueHead
//   int g_PathfindingQueueTail

#include "nocturne.h"

bool core_path_cpp_FUN_00546330(void)

{
  return g_PathfindingQueueHead == g_PathfindingQueueTail;
}


// Assembly code:
// 00546330: MOV EDX,dword ptr [0x030d2850]
//   Label: core_path.cpp_FUN_00546330
//   XREF to: 030d2850 (READ)
// 00546336: MOV EAX,[0x030d284c]
//   XREF to: 030d284c (READ)
// 0054633b: CMP EAX,EDX
// 0054633d: SETZ AL
// 00546340: AND EAX,0xff
// 00546345: RET

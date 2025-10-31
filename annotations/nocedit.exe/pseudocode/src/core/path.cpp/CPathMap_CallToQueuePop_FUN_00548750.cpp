// Name: core_path.cpp_CPathMap_CallToQueuePop_FUN_00548750
// Address: 00548750
// Address Range: [[00548750, 00548799]]
// Convention: __cdecl
// Signature: void core_path.cpp_CPathMap_CallToQueuePop_FUN_00548750(CPathMap * this_ptr)
// Cross-references:
//   core_waypoint.cpp_CWaypoint_FUN_005ebf70 (005ebf70) at 005ec11d [UNCONDITIONAL_CALL]
// Globals:
//   int g_PathfindingMaxClimbHeight
//   int g_PathfindingCurrentX
//   int g_PathfindingCurrentZ
//   int g_PathfindingDestX
//   int g_PathfindingDestZ
// Function calls:
//   core_path.cpp_CPathMap_queuePop_FUN_005487a0

#include "nocturne.h"

void __cdecl core_path_cpp_CPathMap_CallToQueuePop_FUN_00548750(CPathMap *this_ptr)

{
  g_PathfindingDestZ = 100;
  g_PathfindingDestX = 99;
  g_PathfindingCurrentX = 0x32;
  g_PathfindingCurrentZ = 0x32;
  g_PathfindingMaxClimbHeight = 2;
  core_path_cpp_CPathMap_queuePop_FUN_005487a0(this_ptr,(this_ptr->voxel_coords).y);
  return;
}


// Assembly code:
// 00548750: PUSH EBX
//   Label: core_path.cpp_CPathMap_CallToQueuePop_FUN_00548750
// 00548751: PUSH EDI
// 00548752: PUSH EBP
// 00548753: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00548757: MOV EDX,0x64
// 0054875c: MOV ECX,0x63
// 00548761: MOV EBX,0x32
// 00548766: MOV EDI,0x2
// 0054876b: MOV EBP,dword ptr [EAX + 0x10]
// 0054876e: MOV dword ptr [0x030c3de8],EDX
//   XREF to: 030c3de8 (WRITE)
// 00548774: PUSH EBP
// 00548775: MOV dword ptr [0x030c3de4],ECX
//   XREF to: 030c3de4 (WRITE)
// 0054877b: MOV dword ptr [0x030c3ddc],EBX
//   XREF to: 030c3ddc (WRITE)
// 00548781: PUSH EAX
// 00548782: MOV dword ptr [0x030c3de0],EBX
//   XREF to: 030c3de0 (WRITE)
// 00548788: MOV dword ptr [0x030c3ab4],EDI
//   XREF to: 030c3ab4 (WRITE)
// 0054878e: CALL core_path.cpp_CPathMap_queuePop_FUN_005487a0
//   XREF to: 005487a0 (UNCONDITIONAL_CALL)
// 00548793: ADD ESP,0x8
// 00548796: POP EBP
// 00548797: POP EDI
// 00548798: POP EBX
// 00548799: RET

// Name: core_path.cpp_isPathfindingQueueEmpty_FUN_00532ec0
// Address: 00532ec0
// Address Range: [[00532ec0, 00532ed5]]
// Convention: __cdecl
// Signature: int __cdecl core_path_cpp_isPathfindingQueueEmpty_FUN_00532ec0(void)

#include "nocturne.h"

int __cdecl core_path_cpp_isPathfindingQueueEmpty_FUN_00532ec0(void)

{
  return (uint)(g_PathfindingQueueHead == g_PathfindingQueueTail);
}

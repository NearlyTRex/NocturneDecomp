// Name: core_path.cpp_isPathfindingQueueEmpty_FUN_0050aba0
// Address: 0050aba0
// Address Range: [[0050aba0, 0050abb5]]
// Convention: __cdecl
// Signature: int __cdecl core_path_cpp_isPathfindingQueueEmpty_FUN_0050aba0(void)

#include "nocturne.h"

int __cdecl core_path_cpp_isPathfindingQueueEmpty_FUN_0050aba0(void)

{
  return (uint)(g_PathfindingQueueHead == g_PathfindingQueueTail);
}

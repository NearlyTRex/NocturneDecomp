// Name: core_bugs.cpp_FUN_00425660
// Address: 00425660
// Address Range: [[00425660, 00425736]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_00425660(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_bugs.cpp_FUN_00425660(uint param_1, uint param_2,
   uint param_3) */

void core_bugs_cpp_FUN_00425660(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  *(uint *)(in_stack_00000004 + 0x12b34) = 0;
  iVar1 = 0;
  memset((void *)(in_stack_00000004 + 0x12b38),0,28000);
  if (0 < in_stack_00000008) {
    do {
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740();
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740();
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740();
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740();
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740();
      iVar1 = iVar1 + 1;
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740();
    } while (iVar1 < in_stack_00000008);
  }
  return;
}

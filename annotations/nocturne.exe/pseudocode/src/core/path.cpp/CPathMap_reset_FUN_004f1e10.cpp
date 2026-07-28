// Name: core_path.cpp_CPathMap_reset_FUN_004f1e10
// Address: 004f1e10
// Address Range: [[004f1e10, 004f1e80]]
// Convention: unknown
// Signature: void core_path_cpp_CPathMap_reset_FUN_004f1e10(int param_1)

#include "nocturne.h"

void core_path_cpp_CPathMap_reset_FUN_004f1e10(int param_1)

{
  uint uVar1;
  
  memset((void *)(param_1 + 0x9c70),0x7f,40000);
  *(uint *)(param_1 + 0x138bc) = 0;
  *(uint *)(param_1 + 0x138c8) = 0;
  *(uint *)(param_1 + 0x138c4) = *(uint *)(param_1 + 0x138c8);
  *(uint *)(param_1 + 0x138c0) = *(uint *)(param_1 + 0x138c4);
  *(uint *)(param_1 + 0x138c0) = 0x7149f2ca;
  *(uint *)(param_1 + 0x138d4) = 0;
  *(uint *)(param_1 + 0x138d0) = *(uint *)(param_1 + 0x138d4);
  *(uint *)(param_1 + 0x138cc) = *(uint *)(param_1 + 0x138d0);
  uVar1 = rand();
  *(uint *)(param_1 + 0x138d8) = uVar1 & 0x3fff;
  return;
}

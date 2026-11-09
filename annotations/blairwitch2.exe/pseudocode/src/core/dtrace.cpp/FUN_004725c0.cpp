// Name: core_dtrace.cpp_FUN_004725c0
// Address: 004725c0
// Address Range: [[004725c0, 004725f7]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_004725c0(int param_1)

#include "nocturne.h"

void core_dtrace_cpp_FUN_004725c0(int param_1)

{
  void *ptr;
  
  ptr = (void *)__vec_delete
                          (*(uint *)(param_1 + 0x50),&g_CDemonCubeTypeInfo);
  FUN_005b7fce(ptr);
  *(uint *)(param_1 + 0x50) = 0;
  *(uint *)(param_1 + 0x48) = 0;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x48);
  return;
}

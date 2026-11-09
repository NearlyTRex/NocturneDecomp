// Name: core_dtrace.cpp_FUN_0048aab0
// Address: 0048aab0
// Address Range: [[0048aab0, 0048aae7]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_0048aab0(int param_1)

#include "nocturne.h"

void core_dtrace_cpp_FUN_0048aab0(int param_1)

{
  void *ptr;
  
  ptr = (void *)__vec_delete
                          (*(uint *)(param_1 + 0x50),&g_CDemonCubeTypeInfo);
  FUN_005c0336(ptr);
  *(uint *)(param_1 + 0x50) = 0;
  *(uint *)(param_1 + 0x48) = 0;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x48);
  return;
}

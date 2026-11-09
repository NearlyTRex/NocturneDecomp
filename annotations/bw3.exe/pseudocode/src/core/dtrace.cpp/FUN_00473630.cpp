// Name: core_dtrace.cpp_FUN_00473630
// Address: 00473630
// Address Range: [[00473630, 00473667]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_00473630(int param_1)

#include "nocturne.h"

void core_dtrace_cpp_FUN_00473630(int param_1)

{
  void *ptr;
  
  ptr = (void *)__vec_delete
                          (*(uint *)(param_1 + 0x50),&g_CDemonCubeTypeInfo);
  FUN_005a30b6(ptr);
  *(uint *)(param_1 + 0x50) = 0;
  *(uint *)(param_1 + 0x48) = 0;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x48);
  return;
}

// Name: core_dtrace.cpp_FUN_004673a0
// Address: 004673a0
// Address Range: [[004673a0, 004673d7]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_004673a0(int param_1)

#include "nocturne.h"

void core_dtrace_cpp_FUN_004673a0(int param_1)

{
  uint uVar1;
  
  uVar1 = __vec_delete
                    (*(uint *)(param_1 + 0x50),&g_CDemonCubeTypeInfo_0059c8c0);
  shape_memdbg_cpp_free_FUN_00564486(uVar1);
  *(uint *)(param_1 + 0x50) = 0;
  *(uint *)(param_1 + 0x48) = 0;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x48);
  return;
}

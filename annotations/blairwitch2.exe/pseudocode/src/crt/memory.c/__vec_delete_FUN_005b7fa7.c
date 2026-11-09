// Name: crt_memory.c___vec_delete_FUN_005b7fa7
// Address: 005b7fa7
// Address Range: [[005b7fa7, 005b7fcd]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl crt_memory_c___vec_delete_FUN_005b7fa7(int param_1,undefined4 param_2)

#include "nocturne.h"

uint * __cdecl __vec_delete(int param_1,uint param_2)

{
  if (param_1 == 0) {
    return (uint *)0x0;
  }
  __arrfini(param_1,*(uint *)(param_1 + -4),param_2);
  return (uint *)(param_1 + -4);
}

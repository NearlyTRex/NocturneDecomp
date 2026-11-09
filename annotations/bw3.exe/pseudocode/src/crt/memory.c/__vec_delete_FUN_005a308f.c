// Name: crt_memory.c___vec_delete_FUN_005a308f
// Address: 005a308f
// Address Range: [[005a308f, 005a30b5]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl crt_memory_c___vec_delete_FUN_005a308f(int param_1,undefined4 param_2)

#include "nocturne.h"

uint * __cdecl __vec_delete(int param_1,uint param_2)

{
  if (param_1 == 0) {
    return (uint *)0x0;
  }
  __arrfini(param_1,*(uint *)(param_1 + -4),param_2);
  return (uint *)(param_1 + -4);
}

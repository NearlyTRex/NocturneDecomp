// Name: crt_memory.c___vec_delete_FUN_0056445f
// Address: 0056445f
// Address Range: [[0056445f, 00564485]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl crt_memory_c___vec_delete_FUN_0056445f(int param_1,undefined4 param_2)

#include "nocturne.h"

uint * __cdecl __vec_delete(int param_1,uint param_2)

{
  if (param_1 == 0) {
    return (uint *)0x0;
  }
  __arrfini(param_1,*(uint *)(param_1 + -4),param_2);
  return (uint *)(param_1 + -4);
}

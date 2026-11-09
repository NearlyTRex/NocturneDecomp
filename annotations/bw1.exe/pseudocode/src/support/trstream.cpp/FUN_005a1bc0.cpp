// Name: support_trstream.cpp_FUN_005a1bc0
// Address: 005a1bc0
// Address Range: [[005a1bc0, 005a1c2e]]
// Convention: unknown
// Signature: undefined4 support_trstream_cpp_FUN_005a1bc0(int param_1,undefined1 param_2)

#include "nocturne.h"

uint support_trstream_cpp_FUN_005a1bc0(int param_1,byte param_2)

{
  ulong new_size;
  void *pvVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      return 0xffffffff;
    }
    new_size = *(int *)(param_1 + 0xc) + 0x4000;
    pvVar1 = realloc(*(void **)(param_1 + 4),new_size);
    if (pvVar1 == (void *)0x0) {
      return 0xfffffffe;
    }
    *(void **)(param_1 + 4) = pvVar1;
    *(ulong *)(param_1 + 8) = new_size;
  }
  *(byte *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc)) = param_2;
  iVar2 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar2;
  if (*(int *)(param_1 + 0x10) <= iVar2) {
    *(int *)(param_1 + 0x10) = iVar2;
  }
  return 0;
}

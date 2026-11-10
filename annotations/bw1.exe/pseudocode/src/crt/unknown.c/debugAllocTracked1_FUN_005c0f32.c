// Name: crt_unknown.c_debugAllocTracked1_FUN_005c0f32
// Address: 005c0f32
// Address Range: [[005c0f32, 005c0f74]]
// Convention: unknown
// Signature: void * crt_unknown_c_debugAllocTracked1_FUN_005c0f32(ulong param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * debugAllocTracked1(ulong param_1)

{
  void *pvVar1;
  int iVar2;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    do {
      pvVar1 = FUN_005c08d0(param_1);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
    } while ((_DAT_02c9f6bc != (code *)0x0) && (iVar2 = (*_DAT_02c9f6bc)(param_1), iVar2 != 0));
    if (_DAT_02c9f6b8 == (code *)0x0) break;
    (*_DAT_02c9f6b8)();
  }
  return (void *)0x0;
}

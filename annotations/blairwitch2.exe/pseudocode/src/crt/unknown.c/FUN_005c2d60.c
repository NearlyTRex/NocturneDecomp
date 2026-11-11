// Name: crt_unknown.c_FUN_005c2d60
// Address: 005c2d60
// Address Range: [[005c2d60, 005c2d99]]
// Convention: unknown
// Signature: void * crt_unknown_c_FUN_005c2d60(undefined4 param_1)

#include "nocturne.h"

void * FUN_005c2d60(uint param_1)

{
  ulong size;
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_005c4cc0(param_1);
  size = (iVar1 + 1) * 2;
  pvVar2 = malloc(size);
  if (pvVar2 != (void *)0x0) {
    FUN_005c4cf0(pvVar2,param_1,size);
  }
  return pvVar2;
}

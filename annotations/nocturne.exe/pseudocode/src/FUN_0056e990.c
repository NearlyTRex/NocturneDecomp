// Name: FUN_0056e990
// Address: 0056e990
// Address Range: [[0056e990, 0056e9c9]]
// Convention: unknown
// Signature: void * FUN_0056e990(undefined4 param_1)

#include "nocturne.h"

void * FUN_0056e990(uint param_1)

{
  ulong size;
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_005713e0(param_1);
  size = (iVar1 + 1) * 2;
  pvVar2 = malloc(size);
  if (pvVar2 != (void *)0x0) {
    FUN_00571410(pvVar2,param_1,size);
  }
  return pvVar2;
}

// Name: crt_unknown.c_FUN_005cb060
// Address: 005cb060
// Address Range: [[005cb060, 005cb099]]
// Convention: unknown
// Signature: void * crt_unknown_c_FUN_005cb060(undefined4 param_1)

#include "nocturne.h"

void * FUN_005cb060(uint param_1)

{
  ulong size;
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_005ccfc0(param_1);
  size = (iVar1 + 1) * 2;
  pvVar2 = malloc(size);
  if (pvVar2 != (void *)0x0) {
    FUN_005ccff0(pvVar2,param_1,size);
  }
  return pvVar2;
}

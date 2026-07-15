// Name: crt_fpu.c__fpreset_FUN_100098f0
// Address: 100098f0
// Address Range: [[100098f0, 10009920]]
// Convention: __cdecl
// Signature: void __cdecl crt_fpu_c__fpreset_FUN_100098f0(void)

#include "nocturne.h"

void __cdecl _fpreset(void)

{
  void *pvVar1;
  uint *puVar2;
  void **ppvVar3;
  
  ppvVar3 = __pxcptinfoptrs();
  pvVar1 = *ppvVar3;
  _setdefaultprecision();
  if ((pvVar1 != (void *)0x0) && (puVar2 = *(uint **)((int)pvVar1 + 4), (*puVar2 & 0x10008) != 0)) {
    puVar2[8] = 0;
    puVar2[9] = 0xffff;
  }
  return;
}

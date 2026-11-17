// Name: crt_unknown.c_FUN_005cce60
// Address: 005cce60
// Address Range: [[005cce60, 005ccecb]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005cce60(undefined4 param_1,int param_2)

#include "nocturne.h"

uint FUN_005cce60(uint param_1,int param_2)

{
  uint *ptr;
  int iVar1;
  uint uVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626628)();
  uVar2 = 1;
  ptr = (uint *)calloc(1,0x10);
  if (ptr == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_005ce000(param_2);
    if (iVar1 == 0) {
      ptr[2] = param_2;
      ptr[1] = param_1;
      ptr[3] = (uint)*(byte *)(param_2 + 0x52);
      *ptr = g_PTR_02c9ffa0;
      g_PTR_02c9ffa0 = (byte *)ptr;
    }
    else {
      debugFree(ptr);
      uVar2 = 0;
    }
  }
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_0062662c)();
  return uVar2;
}

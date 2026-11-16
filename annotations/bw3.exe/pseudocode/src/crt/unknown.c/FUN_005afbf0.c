// Name: crt_unknown.c_FUN_005afbf0
// Address: 005afbf0
// Address Range: [[005afbf0, 005afc5b]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005afbf0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005afbf0(uint param_1,int param_2)

{
  uint *ptr;
  int iVar1;
  uint uVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079cc)();
  uVar2 = 1;
  ptr = (uint *)calloc(1,0x10);
  if (ptr == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_005b0d90(param_2);
    if (iVar1 == 0) {
      ptr[2] = param_2;
      ptr[1] = param_1;
      ptr[3] = (uint)*(byte *)(param_2 + 0x52);
      *ptr = _DAT_02d261f0;
      _DAT_02d261f0 = ptr;
    }
    else {
      debugFree(ptr);
      uVar2 = 0;
    }
  }
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079d0)();
  return uVar2;
}

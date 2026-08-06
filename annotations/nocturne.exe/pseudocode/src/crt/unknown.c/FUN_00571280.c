// Name: crt_unknown.c_FUN_00571280
// Address: 00571280
// Address Range: [[00571280, 005712eb]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_00571280(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00571280(uint param_1,int param_2)

{
  uint *ptr;
  int iVar1;
  uint uVar2;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ae8)();
  uVar2 = 1;
  ptr = (uint *)calloc(1,0x10);
  if (ptr == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00572e90(param_2);
    if (iVar1 == 0) {
      ptr[2] = param_2;
      ptr[1] = param_1;
      ptr[3] = (uint)*(byte *)(param_2 + 0x52);
      *ptr = _DAT_02de5d70;
      _DAT_02de5d70 = ptr;
    }
    else {
      free(ptr);
      uVar2 = 0;
    }
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1aec)();
  return uVar2;
}

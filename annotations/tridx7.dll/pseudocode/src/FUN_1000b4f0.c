// Name: FUN_1000b4f0
// Address: 1000b4f0
// Address Range: [[1000b4f0, 1000b557]]
// Convention: unknown
// Signature: undefined4 FUN_1000b4f0(uint param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_1000b4f0(uint param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  
  if ((param_1 < DAT_10241970) &&
     ((*(byte *)(*(int *)((int)&DAT_10241870 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 +
                (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    __lock_fhandle(param_1);
    uVar1 = __chsize_lk(param_1,param_2);
    __unlock_fhandle(param_1);
    return uVar1;
  }
  puVar2 = (uint *)FUN_10008a20();
  *puVar2 = 9;
  return 0xffffffff;
}

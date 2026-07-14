// Name: FUN_1000b6a0
// Address: 1000b6a0
// Address Range: [[1000b6a0, 1000b717]]
// Convention: unknown
// Signature: undefined4 FUN_1000b6a0(uint param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_1000b6a0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  
  if ((param_1 < DAT_10241970) &&
     ((*(byte *)(*(int *)((int)&DAT_10241870 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 +
                (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    __lock_fhandle(param_1);
    uVar1 = FUN_1000b720(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
    return uVar1;
  }
  puVar2 = (uint *)FUN_10008a20();
  *puVar2 = 9;
  puVar2 = (uint *)FUN_10008a30();
  *puVar2 = 0;
  return 0xffffffff;
}

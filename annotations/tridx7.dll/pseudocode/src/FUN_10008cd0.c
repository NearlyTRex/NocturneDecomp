// Name: FUN_10008cd0
// Address: 10008cd0
// Address Range: [[10008cd0, 10008d19]]
// Convention: unknown
// Signature: undefined4 FUN_10008cd0(uint param_1)

#include "nocturne.h"

uint FUN_10008cd0(uint param_1)

{
  uint *puVar1;
  
  if ((param_1 < DAT_10241970) &&
     (puVar1 = (uint *)
               (*(int *)((int)&DAT_10241870 + ((int)(param_1 & 0xffffffe7) >> 3)) +
               (param_1 & 0x1f) * 0x24), (*(byte *)(puVar1 + 1) & 1) != 0)) {
    return *puVar1;
  }
  puVar1 = (uint *)FUN_10008a20();
  *puVar1 = 9;
  puVar1 = (uint *)FUN_10008a30();
  *puVar1 = 0;
  return 0xffffffff;
}

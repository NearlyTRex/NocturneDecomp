// Name: FUN_00572ef0
// Address: 00572ef0
// Address Range: [[00572ef0, 00572f3d]]
// Convention: unknown
// Signature: uint FUN_00572ef0(uint param_1,uint param_2)

#include "nocturne.h"

uint FUN_00572ef0(uint param_1,uint param_2)

{
  ushort in_FPUControlWord;
  uint uStack_c;
  
  uStack_c = 0;
  if ((DAT_005c1794 != '\0') && (uStack_c = (uint)in_FPUControlWord, param_2 != 0)) {
    uStack_c = ~param_2 & uStack_c | param_1 & param_2 & 0xffff;
  }
  return uStack_c;
}

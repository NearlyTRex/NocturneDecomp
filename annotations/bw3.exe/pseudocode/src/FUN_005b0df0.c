// Name: FUN_005b0df0
// Address: 005b0df0
// Address Range: [[005b0df0, 005b0e3d]]
// Convention: unknown
// Signature: uint FUN_005b0df0(uint param_1,uint param_2)

#include "nocturne.h"

uint FUN_005b0df0(uint param_1,uint param_2)

{
  ushort in_FPUControlWord;
  uint uStack_c;
  
  uStack_c = 0;
  if ((DAT_006075c0 != '\0') && (uStack_c = (uint)in_FPUControlWord, param_2 != 0)) {
    uStack_c = ~param_2 & uStack_c | param_1 & param_2 & 0xffff;
  }
  return uStack_c;
}

// Name: FUN_00571564
// Address: 00571564
// Address Range: [[00571564, 00571587]]
// Convention: unknown
// Signature: undefined4 FUN_00571564(int param_1)

#include "nocturne.h"

uint FUN_00571564(int param_1)

{
  int iVar1;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar1 = (*(code *)PTR_FUN_005c1abc)();
    return *(uint *)(iVar1 + 0x58 + param_1 * 8);
  }
  return *(uint *)(&DAT_005c20d8 + param_1 * 8);
}

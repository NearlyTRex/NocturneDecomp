// Name: FUN_0040e450
// Address: 0040e450
// Address Range: [[0040e450, 0040e489]]
// Convention: unknown
// Signature: undefined4 FUN_0040e450(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0040e450(int param_1,int param_2)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x470)) {
    iVar1 = FUN_004db880(param_2 + 0x2437c,&DAT_005cb23d);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x470) = *(int *)(param_1 + 0x470) + -1;
      return 1;
    }
  }
  return 0;
}

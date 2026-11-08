// Name: FUN_00589c80
// Address: 00589c80
// Address Range: [[00589c80, 00589d58]]
// Convention: unknown
// Signature: void FUN_00589c80(int param_1,float param_2)

#include "nocturne.h"

void FUN_00589c80(int param_1,float param_2)

{
  float fVar1;
  
  if ((0.0 < *(float *)(param_1 + 0x45c)) &&
     (fVar1 = *(float *)(param_1 + 0x45c) - param_2, *(float *)(param_1 + 0x45c) = fVar1,
     fVar1 < 0.0)) {
    *(uint *)(param_1 + 0x45c) = 0;
  }
  if (((*(int *)(param_1 + 0x460) == 0) && (*(int *)(param_1 + 0x430) == 0)) &&
     (0.0 < *(float *)(param_1 + 0x6cc))) {
    fVar1 = *(float *)(param_1 + 0x6cc) - param_2;
    *(float *)(param_1 + 0x6cc) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0x6cc) = 0;
    }
    FUN_005b2290((uint *)(param_1 + 0x464),param_2);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x464);
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x468);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x46c);
    if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0x470)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x470);
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x474);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x478);
    }
  }
  FUN_00408ae0(param_1);
  return;
}

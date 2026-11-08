// Name: FUN_005c4404
// Address: 005c4404
// Address Range: [[005c4404, 005c445b]]
// Convention: unknown
// Signature: void FUN_005c4404(float10 *param_1,uint param_2)

#include "nocturne.h"

void FUN_005c4404(float10 *param_1,uint param_2)

{
  float10 *pfVar1;
  
  if (0x1fff < (int)param_2) {
    param_2 = 0x2000;
  }
  pfVar1 = (float10 *)&DAT_006264f8;
  for (; 0 < (int)param_2; param_2 = (int)param_2 >> 1) {
    if ((param_2 & 1) != 0) {
      *param_1 = *pfVar1 * *param_1;
    }
    pfVar1 = (float10 *)((int)pfVar1 + 10);
  }
  FUN_005c4bee();
  return;
}

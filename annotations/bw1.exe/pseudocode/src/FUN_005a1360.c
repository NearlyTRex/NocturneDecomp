// Name: FUN_005a1360
// Address: 005a1360
// Address Range: [[005a1360, 005a13af]]
// Convention: unknown
// Signature: longlong FUN_005a1360(uint param_1,int param_2,uint param_3)

#include "nocturne.h"

longlong FUN_005a1360(uint param_1,int param_2,uint param_3)

{
  if (*(int *)(param_1 + 4) == 0) {
    return CONCAT44(param_1,0xfffffffe);
  }
  if (param_3 != 0) {
    if (param_3 < 2) {
      param_2 = param_2 + *(int *)(param_1 + 0xc);
    }
    else {
      if (param_3 != 2) {
        return (ulonglong)param_1 << 0x20;
      }
      param_2 = param_2 + *(int *)(param_1 + 8);
    }
  }
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 8))) {
    *(int *)(param_1 + 0xc) = param_2;
    return CONCAT44(param_1,1);
  }
  return (ulonglong)param_1 << 0x20;
}

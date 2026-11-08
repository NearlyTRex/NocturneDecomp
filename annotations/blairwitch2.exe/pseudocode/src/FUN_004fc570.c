// Name: FUN_004fc570
// Address: 004fc570
// Address Range: [[004fc570, 004fc59a]]
// Convention: unknown
// Signature: void FUN_004fc570(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_004fc570(uint param_1,int param_2,int param_3)

{
  if (param_2 != 0) {
    FUN_004fc270(param_1,param_2);
    if (param_3 != 0) {
      FUN_00408730(param_2);
      return;
    }
  }
  return;
}

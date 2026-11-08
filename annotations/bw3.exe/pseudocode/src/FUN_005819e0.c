// Name: FUN_005819e0
// Address: 005819e0
// Address Range: [[005819e0, 00581a1c]]
// Convention: unknown
// Signature: void FUN_005819e0(HANDLE param_1,uint param_2)

#include "nocturne.h"

void FUN_005819e0(HANDLE param_1,uint param_2)

{
  int nPriority;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      nPriority = -1;
    }
    else {
      nPriority = 0;
    }
  }
  else if (param_2 < 3) {
    nPriority = 1;
  }
  else if (param_2 == 3) {
    nPriority = 2;
  }
  else {
    nPriority = 0;
  }
  SetThreadPriority(param_1,nPriority);
  return;
}

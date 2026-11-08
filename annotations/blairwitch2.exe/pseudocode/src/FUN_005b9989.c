// Name: FUN_005b9989
// Address: 005b9989
// Address Range: [[005b9989, 005b999d]]
// Convention: unknown
// Signature: void FUN_005b9989(void)

#include "nocturne.h"

void FUN_005b9989(void)

{
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  
  if ((DAT_0061f458 & 1) == 0) {
    fpatan(in_ST0,in_ST1);
  }
  else {
    FUN_005bfc84();
  }
  return;
}

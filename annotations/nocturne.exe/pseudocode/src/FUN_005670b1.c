// Name: FUN_005670b1
// Address: 005670b1
// Address Range: [[005670b1, 005670c0]]
// Convention: unknown
// Signature: undefined4 FUN_005670b1(void)

#include "nocturne.h"

uint FUN_005670b1(void)

{
  uint in_EAX;
  uint uStack00000004;
  
  LOCK();
  UNLOCK();
  uStack00000004 = in_EAX;
  FUN_005670c1();
  return uStack00000004;
}

// Name: FUN_005badc7
// Address: 005badc7
// Address Range: [[005badc7, 005badd6]]
// Convention: unknown
// Signature: undefined4 FUN_005badc7(void)

#include "nocturne.h"

uint FUN_005badc7(void)

{
  uint in_EAX;
  uint uStack00000004;
  
  LOCK();
  UNLOCK();
  uStack00000004 = in_EAX;
  FUN_005badd7();
  return uStack00000004;
}

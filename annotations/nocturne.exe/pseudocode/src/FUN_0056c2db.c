// Name: FUN_0056c2db
// Address: 0056c2db
// Address Range: [[0056c2db, 0056c2f9]]
// Convention: unknown
// Signature: void FUN_0056c2db(void)

#include "nocturne.h"

void FUN_0056c2db(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_0056be50();
  return;
}

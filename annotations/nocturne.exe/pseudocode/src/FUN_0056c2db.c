// Name: FUN_0056c2db
// Address: 0056c2db
// Address Range: [[0056c2db, 0056c2f9]]
// Convention: unknown
// Signature: void FUN_0056c2db(void)

#include "nocturne.h"

void FUN_0056c2db(void)

{
  code *pcVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST2,in_ST3);
  return;
}

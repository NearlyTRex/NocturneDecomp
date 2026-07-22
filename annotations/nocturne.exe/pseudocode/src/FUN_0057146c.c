// Name: FUN_0057146c
// Address: 0057146c
// Address Range: [[0057146c, 005714dc]]
// Convention: unknown
// Signature: void FUN_0057146c(void)

#include "nocturne.h"

void FUN_0057146c(void)

{
  (*(code *)PTR_FUN_005c1ac0)(0);
  if (DAT_005c20d0 == -1) {
    DAT_005c20d0 = (int)CreateFileA("conin$",0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                                    (HANDLE)0x0);
  }
  if (DAT_005c20d4 == -1) {
    DAT_005c20d4 = (int)CreateFileA("conout$",0x40000000,2,(LPSECURITY_ATTRIBUTES)0x0,3,0x80
                                    ,(HANDLE)0x0);
  }
  (*(code *)PTR_FUN_005c1ac4)(0);
  return;
}

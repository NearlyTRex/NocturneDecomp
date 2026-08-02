// Name: crt_unknown.c_FUN_0056e6b8
// Address: 0056e6b8
// Address Range: [[0056e6b8, 0056e6c3]]
// Convention: unknown
// Signature: BOOL crt_unknown_c_FUN_0056e6b8(void)

#include "nocturne.h"

BOOL FUN_0056e6b8(void)

{
  BOOL BVar1;
  
  BVar1 = FUN_0056e664(1);
  if (DAT_005c1ab8 != -1) {
    BVar1 = TlsFree(DAT_005c1ab8);
    DAT_005c1ab8 = -1;
  }
  return BVar1;
}

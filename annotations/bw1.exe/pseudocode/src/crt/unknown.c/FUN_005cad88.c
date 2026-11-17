// Name: crt_unknown.c_FUN_005cad88
// Address: 005cad88
// Address Range: [[005cad88, 005cad93]]
// Convention: unknown
// Signature: BOOL crt_unknown_c_FUN_005cad88(void)

#include "nocturne.h"

BOOL FUN_005cad88(void)

{
  BOOL BVar1;
  
  BVar1 = FUN_005cad34(1);
  if (g_INT_006265f8 != -1) {
    BVar1 = TlsFree(g_INT_006265f8);
    g_INT_006265f8 = -1;
  }
  return BVar1;
}

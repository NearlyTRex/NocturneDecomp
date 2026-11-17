// Name: crt_unknown.c_FUN_005affd8
// Address: 005affd8
// Address Range: [[005affd8, 005b0001]]
// Convention: unknown
// Signature: byte crt_unknown_c_FUN_005affd8(void)

#include "nocturne.h"

byte FUN_005affd8(void)

{
  BOOL BVar1;
  
  if (g_BYTE_00607ef0 == 0) {
    BVar1 = SetConsoleCtrlHandler(FUN_005aff40,1);
    if (BVar1 != 0) {
      g_BYTE_00607ef0 = 1;
    }
  }
  return g_BYTE_00607ef0;
}

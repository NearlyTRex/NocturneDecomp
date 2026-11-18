// Name: crt_unknown.c_FUN_005ceba8
// Address: 005ceba8
// Address Range: [[005ceba8, 005cebcf]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ceba8(void)

#include "nocturne.h"

void FUN_005ceba8(void)

{
  (*(code *)PTR_crt_unknown_c_FUN_005c50f8_00626640)();
  FUN_005cb5f4();
  if (g_EmergencyExitFlag == 0) {
    FUN_005cad34(1);
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(0);
}

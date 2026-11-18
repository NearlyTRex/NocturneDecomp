// Name: crt_unknown.c_FUN_005c53a0
// Address: 005c53a0
// Address Range: [[005c53a0, 005c53e5]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c53a0(void)

#include "nocturne.h"

void FUN_005c53a0(void)

{
  UINT unaff_retaddr;
  
  if (g_EmergencyExitFlag == 0) {
    FUN_005cb5f4();
    FUN_005cb688();
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626638)();
  }
  else if (g_SpecialExitHandler != (byte *)0x0) {
    (*(code *)g_SpecialExitHandler)(0,0xff);
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(unaff_retaddr);
}

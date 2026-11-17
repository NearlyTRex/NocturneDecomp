// Name: crt_unknown.c_FUN_005a8210
// Address: 005a8210
// Address Range: [[005a8210, 005a8255]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a8210(void)

#include "nocturne.h"

void FUN_005a8210(void)

{
  UINT unaff_retaddr;
  
  if (g_EmergencyExitFlag == 0) {
    FUN_005ae464();
    FUN_005ae4f8();
    (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079dc)();
  }
  else if (g_SpecialExitHandler != (byte *)0x0) {
    (*(code *)g_SpecialExitHandler)(0,0xff);
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(unaff_retaddr);
}

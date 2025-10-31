// Name: crt_startup.c_notifyAbnormalTermination_FUN_00601620
// Address: 00601620
// Address Range: [[00601620, 00601627]]
// Convention: __watcallRegister
// Signature: void crt_startup.c_notifyAbnormalTermination_FUN_00601620(void)
// Cross-references:
//   core_main.c_displayErrorAndQuit_FUN_00506f10 (00506f10) at 00506fe1 [UNCONDITIONAL_CALL]
// Globals:
//   VOID_FUNC* PTR_crt_startup.c_reportAbnormalTermination_FUN_00684c84 = 00601628
// Function calls:
//   crt_startup.c_reportAbnormalTermination_FUN_00601628

#include "nocturne.h"

void crt_startup_c_notifyAbnormalTermination_FUN_00601620(void)

{
  (*PTR_crt_startup_c_reportAbnormalTermination_FUN_00684c84)();
  crt_startup_c_HandleRuntimeError_FUN_00606660("ABNORMAL TERMINATION\r\n",0xff);
  return;
}


// Assembly code:
// 00601620: CALL dword ptr [PTR_crt_startup.c_reportAbnormalTermination_FUN_00684c84]
//   Label: crt_startup.c_notifyAbnormalTermination_FUN_00601620
//   XREF to: 00601628 (COMPUTED_CALL)
//   XREF to: 00684c84 (READ)
// 00601626: MOV EAX,EAX

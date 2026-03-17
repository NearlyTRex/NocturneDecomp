// Name: crt_watcom.c_notifyAbnormalTermination_FUN_00601620
// Address: 00601620
// Address Range: [[00601620, 00601627]]
// Convention: __cdecl
// Signature: void __cdecl crt_watcom_c_notifyAbnormalTermination_FUN_00601620(void)

#include "nocturne.h"

void __cdecl notifyAbnormalTermination(void)

{
  (*PTR_crt_startup_c_reportAbnormalTermination_FUN_00684c84)();
  HandleRuntimeError("ABNORMAL TERMINATION\r\n",0xff);
  return;
}

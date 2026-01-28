// Name: crt_startup.c_notifyAbnormalTermination_FUN_00601620
// Address: 00601620
// Address Range: [[00601620, 00601627]]
// Convention: __watcallRegister
// Signature: void crt_startup_c_notifyAbnormalTermination_FUN_00601620(void)

#include "nocturne.h"

void crt_startup_c_notifyAbnormalTermination_FUN_00601620(void)

{
  (*PTR_crt_startup_c_reportAbnormalTermination_FUN_00684c84)();
  crt_startup_c_HandleRuntimeError_FUN_00606660("ABNORMAL TERMINATION\r\n",0xff);
  return;
}

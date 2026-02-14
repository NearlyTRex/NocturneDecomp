// Name: crt_startup.c_reportAbnormalTermination_FUN_00601628
// Address: 00601628
// Address Range: [[00601628, 0060163a]]
// Convention: __watcallRegister
// Signature: void __watcallRegister crt_startup_c_reportAbnormalTermination_FUN_00601628(void)

#include "nocturne.h"

void __watcallRegister reportAbnormalTermination(void)

{
  HandleRuntimeError("ABNORMAL TERMINATION\r\n",0xff);
  return;
}

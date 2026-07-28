// Name: crt_unknown.c_reportAbnormalTermination_FUN_00566f98
// Address: 00566f98
// Address Range: [[00566f98, 00566faa]]
// Convention: __watcallRegister
// Signature: void __watcallRegister crt_unknown_c_reportAbnormalTermination_FUN_00566f98(void)

#include "nocturne.h"

void __watcallRegister reportAbnormalTermination(void)

{
  HandleRuntimeError("ABNORMAL TERMINATION\r\n",0xff);
  return;
}

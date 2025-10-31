// Name: crt_startup.c_reportAbnormalTermination_FUN_00601628
// Address: 00601628
// Address Range: [[00601628, 0060163a]]
// Convention: __watcallRegister
// Signature: void crt_startup.c_reportAbnormalTermination_FUN_00601628(void)
// Cross-references:
//   crt_signal.c_processSignal_FUN_0060d128 (0060d128) at 0060d160 [UNCONDITIONAL_CALL]
//   crt_startup.c_notifyAbnormalTermination_FUN_00601620 (00601620) at 00601620 [COMPUTED_CALL]
// Globals:
//   TerminatedCString s_ABNORMAL_TERMINATION_00658f98
// Function calls:
//   crt_startup.c_HandleRuntimeError_FUN_00606660

#include "nocturne.h"

void crt_startup_c_reportAbnormalTermination_FUN_00601628(void)

{
  crt_startup_c_HandleRuntimeError_FUN_00606660("ABNORMAL TERMINATION\r\n",0xff);
  return;
}


// Assembly code:
// 00601628: PUSH 0xff
//   Label: crt_startup.c_reportAbnormalTermination_FUN_00601628
// 0060162d: PUSH 0x658f98
//   XREF to: 00658f98 (DATA)
// 00601632: CALL crt_startup.c_HandleRuntimeError_FUN_00606660
//   XREF to: 00606660 (UNCONDITIONAL_CALL)
// 00601637: ADD ESP,0x8
// 0060163a: RET

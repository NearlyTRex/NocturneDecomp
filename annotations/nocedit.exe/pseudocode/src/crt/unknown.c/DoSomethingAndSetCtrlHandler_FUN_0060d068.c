// Name: crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068
// Address: 0060d068
// Address Range: [[0060d068, 0060d0f4]]
// Convention: unknown
// Signature: SIGNAL_HANDLER_TYPE crt_unknown_c_DoSomethingAndSetCtrlHandler_FUN_0060d068(void)

#include "nocturne.h"

/* Signature: byte unk_DoSomethingAndSetCtrlHandler(uint param_1, uint param_2) */

SIGNAL_HANDLER_TYPE crt_unknown_c_DoSomethingAndSetCtrlHandler_FUN_0060d068(void)

{
  int iVar1;
  SIGNAL_HANDLER_TYPE SVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((0 < in_stack_00000004) && (in_stack_00000004 < 0xd)) {
    PTR_crt_startup_c_reportAbnormalTermination_FUN_00684c84 = (VOID_FUNC *)&LAB_0060d01c;
    if ((in_stack_00000008 != 2) && (in_stack_00000008 != 3)) {
      iVar1 = crt_unknown_c_FUN_0060ced8();
      if ((iVar1 != 0) && (in_stack_00000004 == 2)) {
        crt_unknown_c_SomethingFPUControlWord_FUN_0060e8e0();
      }
    }
    SVar2 = crt_signal_c_getSignalHandler_FUN_0060ceb4(in_stack_00000004);
    crt_signal_c_setSignalHandler_FUN_0060ce60(in_stack_00000004,in_stack_00000008);
    iVar1 = crt_unknown_c_FUN_0060cf80();
    if (iVar1 == 0) {
      crt_signal_c_unregisterConsoleHandler_FUN_0060cfe4();
    }
    else {
      crt_signal_c_registerConsoleHandler_FUN_0060cfb8();
    }
    return SVar2;
  }
  crt_errno_c_setErrno_FUN_00602790(9);
  return 3;
}

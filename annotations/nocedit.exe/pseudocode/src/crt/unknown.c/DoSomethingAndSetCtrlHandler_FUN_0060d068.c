// Name: crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068
// Address: 0060d068
// Address Range: [[0060d068, 0060d0f4]]
// Convention: unknown
// Signature: SIGNAL_HANDLER_TYPE crt_unknown_c_DoSomethingAndSetCtrlHandler_FUN_0060d068(int param_1,int param_2)

#include "nocturne.h"

SIGNAL_HANDLER_TYPE DoSomethingAndSetCtrlHandler(int param_1,int param_2)

{
  int iVar1;
  SIGNAL_HANDLER_TYPE SVar2;
  
  if ((0 < param_1) && (param_1 < 0xd)) {
    PTR_crt_startup_c_reportAbnormalTermination_FUN_00684c84 = (VOID_FUNC *)&LAB_0060d01c;
    if ((param_2 != 2) && (param_2 != 3)) {
      iVar1 = FUN_0060ced8(param_1);
      if ((iVar1 != 0) && (param_1 == 2)) {
        SomethingFPUControlWord(0,0x9f);
      }
    }
    SVar2 = getSignalHandler(param_1);
    setSignalHandler(param_1,param_2);
    iVar1 = FUN_0060cf80();
    if (iVar1 == 0) {
      unregisterConsoleHandler();
    }
    else {
      registerConsoleHandler();
    }
    return SVar2;
  }
  setErrno(9);
  return 3;
}

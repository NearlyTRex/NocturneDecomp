// Name: crt_watcom.c_notifyAbnormalTermination_FUN_005c3140
// Address: 005c3140
// Address Range: [[005c3140, 005c3147]]
// Convention: __cdecl
// Signature: void __cdecl crt_watcom_c_notifyAbnormalTermination_FUN_005c3140(void)

#include "nocturne.h"

void __cdecl notifyAbnormalTermination(void)

{
  (*(code *)PTR_crt_unknown_c_FUN_005c3148_006262d0)();
  FUN_005c9f70("ABNORMAL TERMINATION\r\n",0xff);
  return;
}

// Name: crt_watcom.c_notifyAbnormalTermination_FUN_005a5fb0
// Address: 005a5fb0
// Address Range: [[005a5fb0, 005a5fb7]]
// Convention: __cdecl
// Signature: void __cdecl crt_watcom_c_notifyAbnormalTermination_FUN_005a5fb0(void)

#include "nocturne.h"

void __cdecl notifyAbnormalTermination(void)

{
  (*(code *)PTR_crt_unknown_c_FUN_005a5fb8_00607674)();
  FUN_005acde0("ABNORMAL TERMINATION\r\n",0xff);
  return;
}

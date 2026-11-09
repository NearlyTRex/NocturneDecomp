// Name: crt_watcom.c_notifyAbnormalTermination_FUN_005bad80
// Address: 005bad80
// Address Range: [[005bad80, 005bad87]]
// Convention: __cdecl
// Signature: void __cdecl crt_watcom_c_notifyAbnormalTermination_FUN_005bad80(void)

#include "nocturne.h"

void __cdecl notifyAbnormalTermination(void)

{
  (*(code *)PTR_crt_unknown_c_FUN_005bad88_0061ef50)();
  FUN_005c1c20("ABNORMAL TERMINATION\r\n",0xff);
  return;
}

// Name: crt_watcom.c_notifyAbnormalTermination_FUN_00566f90
// Address: 00566f90
// Address Range: [[00566f90, 00566f97]]
// Convention: __cdecl
// Signature: void __cdecl crt_watcom_c_notifyAbnormalTermination_FUN_00566f90(void)

#include "nocturne.h"

void __cdecl notifyAbnormalTermination(void)

{
  (*(code *)PTR_FUN_005c1890)();
  FUN_0056ddc0("ABNORMAL TERMINATION\r\n",0xff);
  return;
}

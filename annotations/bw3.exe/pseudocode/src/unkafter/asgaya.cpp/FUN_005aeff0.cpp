// Name: unkafter_asgaya.cpp_FUN_005aeff0
// Address: 005aeff0
// Address Range: [[005aeff0, 005af041]]
// Convention: unknown
// Signature: undefined4 unkafter_asgaya_cpp_FUN_005aeff0(uint param_1)

#include "nocturne.h"

uint unkafter_asgaya_cpp_FUN_005aeff0(uint param_1)

{
  uint uVar1;
  
  if ((-1 < (int)param_1) && (param_1 <= 0x00000014)) {
    (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a4)(param_1);
    uVar1 = FUN_005a9d80(param_1);
    (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(param_1);
    (*(code *)PTR_crt_unknown_c_FUN_005a7f58_006079b0)(param_1);
    return uVar1;
  }
  setErrno(4);
  return 0xffffffff;
}

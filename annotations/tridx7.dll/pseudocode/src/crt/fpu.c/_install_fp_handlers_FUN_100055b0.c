// Name: crt_fpu.c__install_fp_handlers_FUN_100055b0
// Address: 100055b0
// Address Range: [[100055b0, 100055e7]]
// Convention: __cdecl
// Signature: void __cdecl crt_fpu_c__install_fp_handlers_FUN_100055b0(void)

#include "nocturne.h"

void __cdecl _install_fp_handlers(void)

{
  PTR_crt_fpu_c__fptrap_FUN_10009ab0_10016d4c = _cropzeros;
  PTR_crt_fpu_c__fptrap_FUN_10009ab0_10016d50 = _fassign;
  PTR_crt_fpu_c__fptrap_FUN_10009ab0_10016d54 = _forcdecpt;
  PTR_crt_fpu_c__fptrap_FUN_10009ab0_10016d58 = _positive;
  PTR_crt_fpu_c__fptrap_FUN_10009ab0_10016d48 = _cfltcvt;
  PTR_crt_fpu_c__fptrap_FUN_10009ab0_10016d5c = _cfltcvt;
  return;
}

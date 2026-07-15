// Name: crt_fpu.c__fpmath_FUN_10005580
// Address: 10005580
// Address Range: [[10005580, 10005596]]
// Convention: __cdecl
// Signature: void __cdecl crt_fpu_c__fpmath_FUN_10005580(int flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _fpmath(int flag)

{
  _install_fp_handlers();
  _DAT_10016c4c = _ms_p5_mp_test_fdiv();
  _setdefaultprecision();
  return;
}

// Name: crt_startup.c__cinit_FUN_10007570
// Address: 10007570
// Address Range: [[10007570, 1000759f]]
// Convention: __cdecl
// Signature: int __cdecl crt_startup_c__cinit_FUN_10007570(int init_fp)

#include "nocturne.h"

int __cdecl _cinit(int init_fp)

{
  int extraout_EAX;
  
  if (PTR_crt_fpu_c__fpmath_FUN_10005580_10016c50 != (byte *)0x0) {
    (*(code *)PTR_crt_fpu_c__fpmath_FUN_10005580_10016c50)();
  }
  _initterm(&DAT_10014018,&DAT_10014020);
  _initterm(&DAT_10014000,&DAT_10014014);
  return extraout_EAX;
}

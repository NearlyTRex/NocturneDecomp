// Name: crt_unknown.c_FUN_0060eb57
// Address: 0060eb57
// Address Range: [[0060eb57, 0060eb76]]
// Convention: __cdecl
// Signature: ulonglong __cdecl crt_unknown_c_FUN_0060eb57(void)

#include "nocturne.h"

ulonglong __cdecl FUN_0060eb57(void)

{
  uint in_EAX;
  
  set_range_error_errno();
  FUN_0060fa80();
  return (ulonglong)(in_EAX & 0x80000000) << 0x20 | 0x7ff0000000000000;
}

// Name: crt_unknown.c_FUN_0060eb4b
// Address: 0060eb4b
// Address Range: [[0060eb4b, 0060eb56]]
// Convention: __cdecl
// Signature: ulonglong __cdecl crt_unknown_c_FUN_0060eb4b(void)

#include "nocturne.h"

ulonglong __cdecl FUN_0060eb4b(void)

{
  uint extraout_EAX;
  
  FUN_0060fa80();
  return (ulonglong)(extraout_EAX & 0x80000000) << 0x20 | 0x7ff0000000000000;
}

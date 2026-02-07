// Name: crt_unknown.c_FUN_0060eb4b
// Address: 0060eb4b
// Address Range: [[0060eb4b, 0060eb56]]
// Convention: unknown
// Signature: ulonglong crt_unknown_c_FUN_0060eb4b(void)

#include "nocturne.h"

ulonglong FUN_0060eb4b(void)

{
  uint uVar1;
  
  uVar1 = FUN_0060fa80(0x83);
  return (ulonglong)(uVar1 & 0x80000000) << 0x20 | 0x7ff0000000000000;
}

// Name: crt_math.c_multiply64_FUN_0056f14c
// Address: 0056f14c
// Address Range: [[0056f14c, 0056f167]]
// Convention: __watcallRegister
// Signature: ulonglong __watcallRegister crt_math_c_multiply64_FUN_0056f14c(ulonglong a,ulonglong b)

#include "nocturne.h"

ulonglong __watcallRegister multiply64(ulonglong a,ulonglong b)

{
  if (((int)(a >> 0x20) == 0) && ((int)(b >> 0x20) == 0)) {
    return (a & 0xffffffff) * (b & 0xffffffff);
  }
  return a * b;
}

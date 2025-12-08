// Name: crt_math.c_multiply64_FUN_0060b2b8
// Address: 0060b2b8
// Address Range: [[0060b2b8, 0060b2d3]]
// Convention: __watcallRegister
// Signature: ulonglong crt_math.c_multiply64_FUN_0060b2b8(ulonglong a, ulonglong b)

#include "nocturne.h"

ulonglong crt_math_c_multiply64_FUN_0060b2b8(ulonglong a,ulonglong b)

{
  if (((int)(a >> 0x20) == 0) && ((int)(b >> 0x20) == 0)) {
    return (a & 0xffffffff) * (b & 0xffffffff);
  }
  return a * b;
}

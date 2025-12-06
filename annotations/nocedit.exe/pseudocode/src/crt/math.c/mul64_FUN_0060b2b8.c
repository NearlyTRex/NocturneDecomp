// Name: crt_math.c_mul64_FUN_0060b2b8
// Address: 0060b2b8
// Address Range: [[0060b2b8, 0060b2d3]]
// Convention: __watcallRegister
// Signature: ulonglong crt_math.c_mul64_FUN_0060b2b8(uint low1, uint high1, uint low2, uint high2)

#include "nocturne.h"

ulonglong crt_math_c_mul64_FUN_0060b2b8(uint low1,uint high1,uint low2,uint high2)

{
  if ((high1 == 0) && (high2 == 0)) {
    return (ulonglong)low1 * (ulonglong)low2;
  }
  return CONCAT44 /* combine 2-byte values */((int)((ulonglong)low1 * (ulonglong)low2 >> 0x20) + low1 * high2 + high1 * low2,
                  (int)((ulonglong)low1 * (ulonglong)low2));
}

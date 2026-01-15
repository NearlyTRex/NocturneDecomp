// Name: crt_unknown.c_FUN_0060eb57
// Address: 0060eb57
// Address Range: [[0060eb57, 0060eb76]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060eb57()

#include "nocturne.h"

ulonglong crt_unknown_c_FUN_0060eb57(uint param_1)

{
  crt_math_c_set_range_error_errno_FUN_006027ac();
  crt_unknown_c_FUN_0060fa80(0x84);
  return (ulonglong)(param_1 & 0x80000000) << 0x20 | 0x7ff0000000000000;
}

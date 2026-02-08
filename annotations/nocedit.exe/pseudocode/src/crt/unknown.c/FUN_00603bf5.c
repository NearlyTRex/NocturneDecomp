// Name: crt_unknown.c_FUN_00603bf5
// Address: 00603bf5
// Address Range: [[00603bf5, 00603c73]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_FUN_00603bf5(void)

#include "nocturne.h"

int __cdecl FUN_00603bf5(void)

{
  double *in_stack_00000004;
  float *in_stack_00000008;
  
  if ((((((ulonglong)*in_stack_00000004 & 0x7fffffff00000000) != 0) ||
       (*(int *)in_stack_00000004 != 0)) &&
      ((*in_stack_00000004 <= 0.0 ||
       (((double)g_EmptyStringBuffer._4_8_ < *in_stack_00000004 ||
        (*in_stack_00000004 < (double)g_EmptyStringBuffer._12_8_)))))) &&
     ((*in_stack_00000004 < (double)g_EmptyStringBuffer._20_8_ ||
      ((double)g_EmptyStringBuffer._28_8_ < *in_stack_00000004)))) {
    return 1;
  }
  *in_stack_00000008 = (float)*in_stack_00000004;
  return 0;
}

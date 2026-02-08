// Name: crt_unknown.c_FUN_0060b670
// Address: 0060b670
// Address Range: [[0060b670, 0060b6d6]]
// Convention: unknown
// Signature: char * crt_unknown_c_FUN_0060b670(void)

#include "nocturne.h"

char * FUN_0060b670(void)

{
  char *dest;
  char *in_stack_00000004;
  char *in_stack_00000008;
  ulong in_stack_0000000c;
  
  dest = in_stack_00000004;
  for (; (in_stack_0000000c != 0 && (*in_stack_00000008 != '\0'));
      in_stack_00000008 = in_stack_00000008 + 1) {
    in_stack_0000000c = in_stack_0000000c - 1;
    *dest = *in_stack_00000008;
    dest = dest + 1;
  }
  if ((((*in_stack_00000008 != '\0') && (in_stack_00000004 < dest)) &&
      (g_MultibyteLocaleActive != 0)) && ((g_LeadByteTable[(byte)in_stack_00000008[-1]] & 1U) != 0))
  {
    dest[-1] = '\0';
  }
  if (in_stack_0000000c != 0) {
    memset(dest,0,in_stack_0000000c);
  }
  return in_stack_00000004;
}

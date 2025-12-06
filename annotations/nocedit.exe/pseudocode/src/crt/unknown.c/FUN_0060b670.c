// Name: crt_unknown.c_FUN_0060b670
// Address: 0060b670
// Address Range: [[0060b670, 0060b6d6]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060b670()

#include "nocturne.h"

/* Signature: byte FUN_0060b670(uint param_1, uint param_2, uint param_3) */

char * crt_unknown_c_FUN_0060b670(void)

{
  char cVar1;
  char *pcVar2;
  char *dest;
  char *in_stack_00000004;
  char *in_stack_00000008;
  ulong in_stack_0000000c;
  
  pcVar2 = in_stack_00000004;
  dest = in_stack_00000004;
  if (in_stack_0000000c != 0) {
    do {
      dest = pcVar2;
      if (*in_stack_00000008 == '\0') break;
      dest = pcVar2 + 1;
      cVar1 = *in_stack_00000008;
      in_stack_00000008 = in_stack_00000008 + 1;
      in_stack_0000000c = in_stack_0000000c - 1;
      *pcVar2 = cVar1;
      pcVar2 = dest;
    } while (in_stack_0000000c != 0);
  }
  if ((((*in_stack_00000008 != '\0') && (in_stack_00000004 < dest)) &&
      (g_MultibyteLocaleActive != 0)) && ((g_LeadByteTable[(byte)in_stack_00000008[-1]] & 1U) != 0))
  {
    dest[-1] = '\0';
  }
  if (in_stack_0000000c != 0) {
    crt_memory_c_memset_FUN_005fde40(dest,0,in_stack_0000000c);
  }
  return in_stack_00000004;
}

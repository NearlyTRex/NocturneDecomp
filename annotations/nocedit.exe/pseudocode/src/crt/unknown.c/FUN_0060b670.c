// Name: crt_unknown.c_FUN_0060b670
// Address: 0060b670
// Address Range: [[0060b670, 0060b6d6]]
// Convention: unknown
// Signature: char * crt_unknown_c_FUN_0060b670(char *param_1,char *param_2,ulong param_3)

#include "nocturne.h"

char * FUN_0060b670(char *param_1,char *param_2,ulong param_3)

{
  char *dest;
  
  dest = param_1;
  for (; (param_3 != 0 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    param_3 = param_3 - 1;
    *dest = *param_2;
    dest = dest + 1;
  }
  if ((((*param_2 != '\0') && (param_1 < dest)) && (g_MultibyteLocaleActive != 0)) &&
     ((g_LeadByteTable[(byte)param_2[-1]] & 1U) != 0)) {
    dest[-1] = '\0';
  }
  if (param_3 != 0) {
    memset(dest,0,param_3);
  }
  return param_1;
}

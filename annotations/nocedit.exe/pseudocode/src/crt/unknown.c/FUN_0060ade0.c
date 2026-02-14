// Name: crt_unknown.c_FUN_0060ade0
// Address: 0060ade0
// Address Range: [[0060ade0, 0060ae4d]]
// Convention: unknown
// Signature: char * crt_unknown_c_FUN_0060ade0(uint *param_1,char *param_2,int param_3)

#include "nocturne.h"

char * FUN_0060ade0(uint *param_1,char *param_2,int param_3)

{
  char *buffer;
  uint local_18;
  uint local_14;
  
  local_18 = *param_1;
  local_14 = param_1[1];
  buffer = param_2;
  if ((param_3 == 10) && ((local_14 & 0x80000000) != 0)) {
    *param_2 = '-';
    local_14 = ~local_14;
    buffer = param_2 + 1;
    local_18 = ~local_18 + 1;
    if (local_18 == 0) {
      local_14 = local_14 + 1;
    }
  }
  i64toa((longlong *)&local_18,buffer,param_3);
  return param_2;
}

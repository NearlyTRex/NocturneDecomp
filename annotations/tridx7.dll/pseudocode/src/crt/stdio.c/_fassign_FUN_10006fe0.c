// Name: crt_stdio.c__fassign_FUN_10006fe0
// Address: 10006fe0
// Address Range: [[10006fe0, 1000702b]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c__fassign_FUN_10006fe0(int flag,void *value,char *str)

#include "nocturne.h"

void __cdecl _fassign(int flag,void *value,char *str)

{
  _CRT_FLOAT local_c;
  _CRT_DOUBLE local_8;
  
  if (flag != 0) {
    _atodbl(&local_8,str);
    *(uint *)value = local_8.x._0_4_;
    *(uint *)((int)value + 4) = local_8.x._4_4_;
    return;
  }
  _atoflt(&local_c,str);
  *(float *)value = local_c.f;
  return;
}

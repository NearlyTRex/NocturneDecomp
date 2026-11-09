// Name: core_setutil.cpp_C3DSCamera_reset_FUN_0055c140
// Address: 0055c140
// Address Range: [[0055c140, 0055c1af]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_reset_FUN_0055c140(void *param_1)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_reset_FUN_0055c140(void *param_1)

{
  core_setutil_cpp_C3DSCamera_free_FUN_0055c100(param_1);
  memset(param_1,0,0x1a4);
  *(uint *)((int)param_1 + 0x144) = 0x41e00000;
  *(uint *)((int)param_1 + 0x180) = 0xc3960000;
  *(uint *)((int)param_1 + 0x184) = 0;
  *(uint *)((int)param_1 + 400) = 0x43960000;
  *(uint *)((int)param_1 + 0x140) = 0;
  *(uint *)((int)param_1 + 0x17c) = *(uint *)((int)param_1 + 0x180);
  *(uint *)((int)param_1 + 0x18c) = *(uint *)((int)param_1 + 400);
  *(uint *)((int)param_1 + 0x188) = *(uint *)((int)param_1 + 400);
  return;
}

// Name: core_setutil.cpp_FUN_00514470
// Address: 00514470
// Address Range: [[00514470, 005144d5]]
// Convention: unknown
// Signature: void core_setutil_cpp_FUN_00514470(void *param_1)

#include "nocturne.h"

void core_setutil_cpp_FUN_00514470(void *param_1)

{
  core_setutil_cpp_FUN_00514430(param_1);
  memset(param_1,0,0x1a0);
  *(uint *)((int)param_1 + 0x140) = 0x41e00000;
  *(uint *)((int)param_1 + 0x17c) = 0xc3960000;
  *(uint *)((int)param_1 + 0x180) = 0;
  *(uint *)((int)param_1 + 0x18c) = 0x43960000;
  *(uint *)((int)param_1 + 0x178) = *(uint *)((int)param_1 + 0x17c);
  *(uint *)((int)param_1 + 0x188) = *(uint *)((int)param_1 + 0x18c);
  *(uint *)((int)param_1 + 0x184) = *(uint *)((int)param_1 + 0x18c);
  return;
}

// Name: core_dlight.cpp_FUN_00449e70
// Address: 00449e70
// Address Range: [[00449e70, 00449eef]]
// Convention: unknown
// Signature: void core_dlight_cpp_FUN_00449e70(CDemonLight *param_1)

#include "nocturne.h"

void core_dlight_cpp_FUN_00449e70(CDemonLight *param_1)

{
  if (*(int *)&param_1->field_0x2f94 != 0) {
    FUN_005b86a0(*(uint *)&param_1->field_0x2f98);
    *(uint *)&param_1->field_0x2f94 = 0;
    *(uint *)&param_1->field_0x2f98 = 0;
  }
  core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_00449ff0(param_1);
  if (*(int *)&param_1->field_0x2fa0 != 0) {
    FUN_005b86a0(*(int *)&param_1->field_0x2fa0);
    *(uint *)&param_1->field_0x2fa0 = 0;
  }
  if (*(int *)&param_1->field_0x1c6c == 0) {
    return;
  }
  FUN_005b86a0(*(int *)&param_1->field_0x1c6c);
  *(uint *)&param_1->field_0x1c6c = 0;
  return;
}

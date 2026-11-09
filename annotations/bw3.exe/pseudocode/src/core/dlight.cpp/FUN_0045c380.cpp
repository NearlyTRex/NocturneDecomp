// Name: core_dlight.cpp_FUN_0045c380
// Address: 0045c380
// Address Range: [[0045c380, 0045c3ff]]
// Convention: unknown
// Signature: void core_dlight_cpp_FUN_0045c380(CDemonLight *param_1)

#include "nocturne.h"

void core_dlight_cpp_FUN_0045c380(CDemonLight *param_1)

{
  if (*(int *)&param_1->field_0x2f94 != 0) {
    FUN_005a3770(*(uint *)&param_1->field_0x2f98);
    *(uint *)&param_1->field_0x2f94 = 0;
    *(uint *)&param_1->field_0x2f98 = 0;
  }
  core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_0045c500(param_1);
  if (*(int *)&param_1->field_0x2fa0 != 0) {
    FUN_005a3770(*(int *)&param_1->field_0x2fa0);
    *(uint *)&param_1->field_0x2fa0 = 0;
  }
  if (*(int *)&param_1->field_0x1c6c == 0) {
    return;
  }
  FUN_005a3770(*(int *)&param_1->field_0x1c6c);
  *(uint *)&param_1->field_0x1c6c = 0;
  return;
}

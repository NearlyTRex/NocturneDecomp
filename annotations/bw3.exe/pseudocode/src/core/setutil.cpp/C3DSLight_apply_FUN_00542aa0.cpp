// Name: core_setutil.cpp_C3DSLight_apply_FUN_00542aa0
// Address: 00542aa0
// Address Range: [[00542aa0, 00542b4f] [00542b51, 00542b5e]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_setutil_cpp_C3DSLight_apply_FUN_00542aa0(int param_1,CDemonLight *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_setutil_cpp_C3DSLight_apply_FUN_00542aa0(int param_1,CDemonLight *param_2)

{
  char cVar1;
  uint extraout_EAX;
  char *pcVar2;
  char *pcVar3;
  float10 fVar4;
  
  if ((uint *)&param_2->field_0x4 != (uint *)(param_1 + 0x104)) {
    *(uint *)&param_2->field_0x4 = *(uint *)(param_1 + 0x104);
    *(uint *)&param_2->field_0x8 = *(uint *)(param_1 + 0x108);
    *(uint *)&param_2->field_0xc = *(uint *)(param_1 + 0x10c);
  }
  core_dirmat_cpp_FUN_0045b550((CMatrix3x3f *)&param_2->field_0x10,(CVector3f *)(param_1 + 0x110));
  *(uint *)&param_2->field_0x38 = *(uint *)(param_1 + 0x11c);
  fVar4 = (float10)*(float *)(param_1 + 0x120) * (float10)_DAT_005d0fb2;
  round();
  *(int *)&param_2->field_0x2fa4 = (int)ROUND(fVar4);
  pcVar2 = (char *)(param_1 + 4);
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0
            (param_2,*(float *)(param_1 + 0x124));
  *(uint *)(param_1 + 0x11e8) = 0;
  pcVar3 = &param_2->field_0x40;
  *(uint *)(param_1 + 0x1894) = 0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  if (*(int *)(param_1 + 0x17f4) == 0) {
    return 0;
  }
  core_dlight_cpp_CDemonLight_allocateFilter_FUN_0045daf0(param_2);
  return extraout_EAX;
}

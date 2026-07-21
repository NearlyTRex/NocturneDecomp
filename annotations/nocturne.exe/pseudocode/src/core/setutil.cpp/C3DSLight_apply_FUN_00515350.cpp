// Name: core_setutil.cpp_C3DSLight_apply_FUN_00515350
// Address: 00515350
// Address Range: [[00515350, 0051540f] [00515411, 0051541e]]
// Convention: unknown
// Signature: undefined1 core_setutil_cpp_C3DSLight_apply_FUN_00515350(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte core_setutil_cpp_C3DSLight_apply_FUN_00515350(int param_1,char *param_2)

{
  char cVar1;
  byte uVar2;
  char *pcVar3;
  char *pcVar4;
  float10 fVar5;
  uint uVar6;
  
  if (param_2 + 0x104 != (char *)(param_1 + 0x104)) {
    *(uint *)(param_2 + 0x104) = *(uint *)(param_1 + 0x104);
    *(uint *)(param_2 + 0x108) = *(uint *)(param_1 + 0x108);
    *(uint *)(param_2 + 0x10c) = *(uint *)(param_1 + 0x10c);
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(param_2 + 0x110,param_1 + 0x110);
  *(uint *)(param_2 + 0x138) = *(uint *)(param_1 + 0x11c);
  uVar6 = 0x5153af;
  fVar5 = (float10)round
                             ((float10)*(float *)(param_1 + 0x120) * (float10)_DAT_00590e61);
  *(int *)(param_2 + 0x2fa4) = (int)ROUND(fVar5);
  pcVar3 = (char *)(param_1 + 4);
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080
            (param_2,*(uint *)(param_1 + 0x124),uVar6);
  *(uint *)(param_1 + 0x11e8) = 0;
  *(uint *)(param_1 + 0x1894) = 0;
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  if (*(int *)(param_1 + 0x17f4) == 0) {
    return 0;
  }
  uVar2 = core_dlight_cpp_CDemonLight_allocateFilter_FUN_00450170(param_2);
  return uVar2;
}

// Name: core_setutil.cpp_C3DSLight_apply_FUN_00515350
// Address: 00515350
// Address Range: [[00515350, 0051540f] [00515411, 0051541e]]
// Convention: unknown
// Signature: undefined4 core_setutil_cpp_C3DSLight_apply_FUN_00515350(int param_1,CDemonLight *param_2)

#include "nocturne.h"

uint core_setutil_cpp_C3DSLight_apply_FUN_00515350(int param_1,CDemonLight *param_2)

{
  char cVar1;
  uint extraout_EAX;
  char *pcVar2;
  CDemonLight *pCVar3;
  double dVar4;
  
  pcVar2 = (param_2->base).camera_name + 0xc4;
  if (pcVar2 != (char *)(param_1 + 0x104)) {
    *(uint *)pcVar2 = *(uint *)(param_1 + 0x104);
    *(uint *)((param_2->base).camera_name + 200) = *(uint *)(param_1 + 0x108);
    *(uint *)((param_2->base).camera_name + 0xcc) = *(uint *)(param_1 + 0x10c);
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
            ((CMatrix3x3f *)((param_2->base).camera_name + 0xd0),(CVector3f *)(param_1 + 0x110));
  *(uint *)((param_2->base).camera_name + 0xf8) = *(uint *)(param_1 + 0x11c);
  dVar4 = round
                    ((double)(*(float *)(param_1 + 0x120) * (float)65536));
  param_2->transform_scale_factor = (int)ROUND(dVar4);
  pcVar2 = (char *)(param_1 + 4);
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080
            (param_2,*(float *)(param_1 + 0x124));
  *(uint *)(param_1 + 0x11e8) = 0;
  *(uint *)(param_1 + 0x1894) = 0;
  pCVar3 = param_2;
  do {
    cVar1 = *pcVar2;
    *(char *)&(pCVar3->base).base.fixed_point_scale = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    *(char *)((int)&(pCVar3->base).base.fixed_point_scale + 1) = cVar1;
    pCVar3 = (CDemonLight *)((int)&(pCVar3->base).base.fixed_point_scale + 2);
  } while (cVar1 != '\0');
  if (*(int *)(param_1 + 0x17f4) == 0) {
    return 0;
  }
  core_dlight_cpp_CDemonLight_allocateFilter_FUN_00450170(param_2);
  return extraout_EAX;
}

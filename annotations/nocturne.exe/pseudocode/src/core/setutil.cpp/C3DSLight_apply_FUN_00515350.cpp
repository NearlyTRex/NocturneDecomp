// Name: core_setutil.cpp_C3DSLight_apply_FUN_00515350
// Address: 00515350
// Address Range: [[00515350, 0051540f] [00515411, 0051541e]]
// Convention: unknown
// Signature: undefined4 core_setutil_cpp_C3DSLight_apply_FUN_00515350(int param_1,CDemonLight *param_2)

#include "nocturne.h"

uint core_setutil_cpp_C3DSLight_apply_FUN_00515350(int param_1,CDemonLight *param_2)

{
  CVector3f *pCVar1;
  char cVar2;
  uint extraout_EAX;
  char *pcVar3;
  CDemonLight *pCVar4;
  double dVar5;
  
  pCVar1 = &(param_2->base).position;
  if (pCVar1 != (CVector3f *)(param_1 + 0x104)) {
    pCVar1->x = *(float *)(param_1 + 0x104);
    (param_2->base).position.y = *(float *)(param_1 + 0x108);
    (param_2->base).position.z = *(float *)(param_1 + 0x10c);
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
            (&(param_2->base).rotation_matrix,(CVector3f *)(param_1 + 0x110));
  (param_2->base).focal_length = *(float *)(param_1 + 0x11c);
  dVar5 = round
                    ((double)(*(float *)(param_1 + 0x120) * (float)65536));
  param_2->transform_scale_factor = (int)ROUND(dVar5);
  pcVar3 = (char *)(param_1 + 4);
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080
            (param_2,*(float *)(param_1 + 0x124));
  *(uint *)(param_1 + 0x11e8) = 0;
  *(uint *)(param_1 + 0x1894) = 0;
  pCVar4 = param_2;
  do {
    cVar2 = *pcVar3;
    (pCVar4->base).camera_name[0] = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    (pCVar4->base).camera_name[1] = cVar2;
    pCVar4 = (CDemonLight *)((pCVar4->base).camera_name + 2);
  } while (cVar2 != '\0');
  if (*(int *)(param_1 + 0x17f4) == 0) {
    return 0;
  }
  core_dlight_cpp_CDemonLight_allocateFilter_FUN_00450170(param_2);
  return extraout_EAX;
}

// Name: core_setutil.cpp_C3DSLight_apply_FUN_0055d0e0
// Address: 0055d0e0
// Address Range: [[0055d0e0, 0055d18f] [0055d191, 0055d19e]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_setutil_cpp_C3DSLight_apply_FUN_0055d0e0(int param_1,CDemonLight *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_setutil_cpp_C3DSLight_apply_FUN_0055d0e0(int param_1,CDemonLight *param_2)

{
  UVector3 *pUVar1;
  char cVar2;
  uint extraout_EAX;
  char *pcVar3;
  char *pcVar4;
  float10 fVar5;
  
  pUVar1 = &(param_2->base).base.position;
  if (pUVar1 != (UVector3 *)(param_1 + 0x104)) {
    (pUVar1->f).x = *(float *)(param_1 + 0x104);
    (param_2->base).base.position.f.y = *(float *)(param_1 + 0x108);
    (param_2->base).base.position.f.z = *(float *)(param_1 + 0x10c);
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
            (&(param_2->base).base.rotation_matrix,(CVector3f *)(param_1 + 0x110));
  (param_2->base).base.focal_length = *(float *)(param_1 + 0x11c);
  fVar5 = (float10)*(float *)(param_1 + 0x120) * (float10)_DAT_005f1309;
  round();
  param_2->transform_scale_factor = (int)ROUND(fVar5);
  pcVar3 = (char *)(param_1 + 4);
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0
            (param_2,*(float *)(param_1 + 0x124));
  *(uint *)(param_1 + 0x11e8) = 0;
  pcVar4 = (param_2->base).camera_name;
  *(uint *)(param_1 + 0x1894) = 0;
  do {
    cVar2 = *pcVar3;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  if (*(int *)(param_1 + 0x17f4) == 0) {
    return 0;
  }
  core_dlight_cpp_CDemonLight_allocateFilter_FUN_00463de0(param_2);
  return extraout_EAX;
}

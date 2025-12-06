// Name: core_setutil.cpp_C3DSLight_apply_FUN_00586bf0
// Address: 00586bf0
// Address Range: [[00586bf0, 00586c9f] [00586ca1, 00586cae]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_apply_FUN_00586bf0(C3DSLight * this_ptr, CDemonLight * light)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_apply_FUN_00586bf0(C3DSLight *this_ptr,CDemonLight *light)

{
  CVector3i *pCVar1;
  char cVar2;
  float fVar3;
  uint extraout_EDX;
  char *pcVar4;
  char *pcVar5;
  float10 fVar6;
  
  pCVar1 = &(light->base).base.position;
  if ((CVector3f *)pCVar1 != &this_ptr->pos) {
    pCVar1->x = (int)(this_ptr->pos).x;
    (light->base).base.position.y = (int)(this_ptr->pos).y;
    (light->base).base.position.z = (int)(this_ptr->pos).z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&(light->base).base.rotation_matrix,&this_ptr->orient);
  fVar3 = this_ptr->fov;
  (light->base).base.projection_scale = fVar3;
  fVar6 = (float10)this_ptr->aspect * (float10)65536;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,fVar3));
  light->transform_scale_factor = (int)ROUND(fVar6);
  pcVar4 = this_ptr->name;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(light,this_ptr->intensity);
  this_ptr->cycle_elapsed = 0.0;
  pcVar5 = (light->base).camera_name;
  this_ptr->filter_frame_elapsed = 0.0;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  if (this_ptr->move_filter == 0) {
    return;
  }
  core_dlight_cpp_CDemonLight_allocateFilter_FUN_00474720(light);
  return;
}

// Name: core_setutil.cpp_C3DSLight_apply_FUN_00586bf0
// Address: 00586bf0
// Address Range: [[00586bf0, 00586c9f] [00586ca1, 00586cae]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_apply_FUN_00586bf0(C3DSLight *this_ptr,CDemonLight *light)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_apply_FUN_00586bf0(C3DSLight *this_ptr,CDemonLight *light)

{
  CVector3i *pCVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  double dVar5;
  
  pCVar1 = &(light->base).base.position;
  if ((CVector3f *)pCVar1 != &this_ptr->pos) {
    pCVar1->x = (int)(this_ptr->pos).x;
    (light->base).base.position.y = (int)(this_ptr->pos).y;
    (light->base).base.position.z = (int)(this_ptr->pos).z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&(light->base).base.rotation_matrix,&this_ptr->orient);
  (light->base).base.projection_scale = this_ptr->fov;
  dVar5 = round((double)(this_ptr->aspect * (float)65536));
  light->transform_scale_factor = (int)ROUND(dVar5);
  pcVar3 = this_ptr->name;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(light,this_ptr->intensity);
  this_ptr->cycle_elapsed = 0.0;
  pcVar4 = (light->base).camera_name;
  this_ptr->filter_frame_elapsed = 0.0;
  do {
    cVar2 = *pcVar3;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  if (this_ptr->move_filter == 0) {
    return;
  }
  core_dlight_cpp_CDemonLight_allocateFilter_FUN_00474720(light);
  return;
}

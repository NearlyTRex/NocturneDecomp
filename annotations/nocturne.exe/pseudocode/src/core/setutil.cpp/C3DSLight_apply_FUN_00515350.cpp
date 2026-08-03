// Name: core_setutil.cpp_C3DSLight_apply_FUN_00515350
// Address: 00515350
// Address Range: [[00515350, 0051540f] [00515411, 0051541e]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_apply_FUN_00515350(C3DSLight *this_ptr,CDemonLight *light)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_apply_FUN_00515350(C3DSLight *this_ptr,CDemonLight *light)

{
  CVector3f *pCVar1;
  char cVar2;
  char *pcVar3;
  CDemonLight *pCVar4;
  double dVar5;
  
  pCVar1 = &(light->base).position;
  if (pCVar1 != &this_ptr->pos) {
    pCVar1->x = (this_ptr->pos).x;
    (light->base).position.y = (this_ptr->pos).y;
    (light->base).position.z = (this_ptr->pos).z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
            (&(light->base).rotation_matrix,&this_ptr->orient);
  (light->base).focal_length = this_ptr->fov;
  dVar5 = round((double)(this_ptr->aspect * (float)65536));
  light->transform_scale_factor = (int)ROUND(dVar5);
  pcVar3 = this_ptr->name;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080(light,this_ptr->intensity);
  this_ptr->cycle_elapsed = 0.0;
  this_ptr->filter_frame_elapsed = 0.0;
  pCVar4 = light;
  do {
    cVar2 = *pcVar3;
    (pCVar4->base).camera_name[0] = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    (pCVar4->base).camera_name[1] = cVar2;
    pCVar4 = (CDemonLight *)((pCVar4->base).camera_name + 2);
  } while (cVar2 != '\0');
  if (this_ptr->move_filter == 0) {
    return;
  }
  core_dlight_cpp_CDemonLight_allocateFilter_FUN_00450170(light);
  return;
}

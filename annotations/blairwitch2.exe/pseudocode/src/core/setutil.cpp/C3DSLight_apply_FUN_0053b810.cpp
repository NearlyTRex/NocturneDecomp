// Name: core_setutil.cpp_C3DSLight_apply_FUN_0053b810
// Address: 0053b810
// Address Range: [[0053b810, 0053b8bf] [0053b8c1, 0053b8ce]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_apply_FUN_0053b810(C3DSLight *this_ptr,CDemonLight *light)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSLight_apply_FUN_0053b810(C3DSLight *this_ptr,CDemonLight *light)

{
  UVector3 *pUVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  float10 fVar5;
  
  pUVar1 = &(light->base).base.position;
  if ((CVector3f *)pUVar1 != &this_ptr->pos) {
    (pUVar1->f).x = (this_ptr->pos).x;
    (light->base).base.position.f.y = (this_ptr->pos).y;
    (light->base).base.position.f.z = (this_ptr->pos).z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
            (&(light->base).base.rotation_matrix,&this_ptr->orient);
  (light->base).base.focal_length = this_ptr->fov;
  fVar5 = (float10)this_ptr->aspect * (float10)_DAT_005e6339;
  round();
  light->transform_scale_factor = (int)ROUND(fVar5);
  pcVar3 = this_ptr->name;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570(light,this_ptr->intensity);
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
  core_dlight_cpp_CDemonLight_allocateFilter_FUN_0044b5b0(light);
  return;
}

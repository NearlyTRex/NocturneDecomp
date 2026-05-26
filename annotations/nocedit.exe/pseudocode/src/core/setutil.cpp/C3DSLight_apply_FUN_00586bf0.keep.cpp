// Name: core_setutil.cpp_C3DSLight_apply_FUN_00586bf0
// Address: 00586bf0
// MANUAL RECONSTRUCTION
// Address Range: [[00586bf0, 00586c9f] [00586ca1, 00586cae]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_apply_FUN_00586bf0(C3DSLight *this_ptr,CDemonLight *light)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_apply_FUN_00586bf0(C3DSLight *this_ptr,CDemonLight *light)

{
  UVector3 *pUVar1;

  pUVar1 = &(light->base).base.position;
  if ((CVector3f *)pUVar1 != &this_ptr->pos) {
    pUVar1->f = this_ptr->pos;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&(light->base).base.rotation_matrix,&this_ptr->orient);
  (light->base).base.focal_length = this_ptr->fov;
  light->transform_scale_factor = (int)ROUND(ROUND(this_ptr->aspect * (float)65536))
  ;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(light,this_ptr->intensity);
  this_ptr->cycle_elapsed = 0.0;
  this_ptr->filter_frame_elapsed = 0.0;
  strcpy((light->base).camera_name,this_ptr->name);
  if (this_ptr->move_filter == 0) {
    return;
  }
  core_dlight_cpp_CDemonLight_allocateFilter_FUN_00474720(light);
  return;
}

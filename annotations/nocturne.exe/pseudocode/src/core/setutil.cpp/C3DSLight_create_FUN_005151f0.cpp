// Name: core_setutil.cpp_C3DSLight_create_FUN_005151f0
// Address: 005151f0
// Address Range: [[005151f0, 00515344]]
// Convention: __cdecl
// Signature: CDemonLight * __cdecl core_setutil_cpp_C3DSLight_create_FUN_005151f0(C3DSLight *this_ptr)

#include "nocturne.h"

CDemonLight * __cdecl core_setutil_cpp_C3DSLight_create_FUN_005151f0(C3DSLight *this_ptr)

{
  char cVar1;
  CDemonLight *pCVar2;
  CDemonFilter *pCVar3;
  CDemonLight *this_ptr_00;
  CVector3f *pCVar4;
  char (*pacVar5) [40];
  int iVar6;
  char *pcVar7;
  C3DSLight *pCVar8;
  
  pCVar2 = (CDemonLight *)FUN_0056497c(0x2fac);
  this_ptr_00 = (CDemonLight *)0x0;
  if (pCVar2 != (CDemonLight *)0x0) {
    this_ptr_00 = core_dlight_cpp_CDemonLight_ctor_FUN_0044e110
                            (pCVar2,(this_ptr->size).x,(this_ptr->size).y);
  }
  if (this_ptr_00 == (CDemonLight *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\setutil.cpp";
    g_INT_01cc4804 = 0x2c6;
    core_main_c_FUN_004c8440("C3DSLight::create - Out of memory!");
  }
  core_dlight_cpp_CDemonLight_init_FUN_0044e1e0(this_ptr_00);
  if (this_ptr->filter_count < 1) {
    this_ptr_00->shadow_bounds_mode = 1;
  }
  else {
    this_ptr_00->shadow_bounds_mode = this_ptr->blend_filter;
  }
  pCVar4 = &(this_ptr_00->base).position;
  if (pCVar4 != &this_ptr->pos) {
    pCVar4->x = (this_ptr->pos).x;
    (this_ptr_00->base).position.y = (this_ptr->pos).y;
    (this_ptr_00->base).position.z = (this_ptr->pos).z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
            (&(this_ptr_00->base).rotation_matrix,&this_ptr->orient);
  (this_ptr_00->base).focal_length = this_ptr->fov;
  iVar6 = 0;
  if (0 < this_ptr->filter_count) {
    pacVar5 = this_ptr->filter_names;
    pCVar8 = this_ptr;
    do {
      iVar6 = iVar6 + 1;
      pCVar3 = (CDemonFilter *)
               core_dfilter_cpp_CFilterCache_getFilter_FUN_0044bd20
                         (0x014B8DE8,pacVar5,this_ptr->blend_filter);
      pCVar8->filters[0] = pCVar3;
      pacVar5 = pacVar5 + 1;
      pCVar8 = (C3DSLight *)pCVar8->name;
    } while (iVar6 < this_ptr->filter_count);
  }
  pcVar7 = this_ptr->name;
  pCVar2 = this_ptr_00;
  do {
    cVar1 = *pcVar7;
    (pCVar2->base).camera_name[0] = cVar1;
    if (cVar1 == '\0') {
      return this_ptr_00;
    }
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    (pCVar2->base).camera_name[1] = cVar1;
    pCVar2 = (CDemonLight *)((pCVar2->base).camera_name + 2);
  } while (cVar1 != '\0');
  return this_ptr_00;
}

// Name: core_setutil.cpp_C3DSLight_create_FUN_00586a90
// Address: 00586a90
// Address Range: [[00586a90, 00586be8]]
// Convention: __cdecl
// Signature: CDemonLight * __cdecl core_setutil_cpp_C3DSLight_create_FUN_00586a90(C3DSLight *this_ptr)

#include "nocturne.h"

CDemonLight * __cdecl core_setutil_cpp_C3DSLight_create_FUN_00586a90(C3DSLight *this_ptr)

{
  char cVar2;
  CDemonLight *this_ptr_00;
  CDemonFilter *pCVar2;
  CDemonLight *this_ptr_01;
  UVector3 *pUVar3;
  C3DSLight *pCVar4;
  int iVar5;
  char *pcVar6;
  char (*filter_name) [40];
  char *pcVar7;
  char cVar1;
  
  this_ptr_00 = (CDemonLight *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                          (0x2fac,"..\\core\\setutil.cpp",760);
  this_ptr_01 = (CDemonLight *)0x0;
  if (this_ptr_00 != (CDemonLight *)0x0) {
    this_ptr_01 = core_dlight_cpp_CDemonLight_ctor_FUN_004726a0
                            (this_ptr_00,(this_ptr->size).x,(this_ptr->size).y);
  }
  if (this_ptr_01 == (CDemonLight *)0x0) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 761;
    core_main_c_displayErrorAndQuit_FUN_00506f10("C3DSLight::create - Out of memory!");
  }
  core_dlight_cpp_CDemonLight_init_FUN_004727c0(this_ptr_01);
  if (this_ptr->filter_count < 1) {
    this_ptr_01->shadow_bounds_mode = 1;
  }
  else {
    this_ptr_01->shadow_bounds_mode = this_ptr->blend_filter;
  }
  pUVar3 = &(this_ptr_01->base).base.position;
  if (pUVar3 != (UVector3 *)&this_ptr->pos) {
    (pUVar3->f).x = (this_ptr->pos).x;
    (this_ptr_01->base).base.position.f.y = (this_ptr->pos).y;
    (this_ptr_01->base).base.position.f.z = (this_ptr->pos).z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&(this_ptr_01->base).base.rotation_matrix,&this_ptr->orient);
  (this_ptr_01->base).base.focal_length = this_ptr->fov;
  iVar5 = 0;
  if (0 < this_ptr->filter_count) {
    filter_name = this_ptr->filter_names;
    pCVar4 = this_ptr;
    do {
      iVar5 = iVar5 + 1;
      pCVar2 = core_dfilter_cpp_CFilterCache_getFilter_FUN_00470060
                         (g_CFilterCachePtr,*filter_name,this_ptr->blend_filter);
      pCVar4->filters[0] = pCVar2;
      filter_name = filter_name + 1;
      pCVar4 = (C3DSLight *)pCVar4->name;
    } while (iVar5 < this_ptr->filter_count);
  }
  pcVar6 = this_ptr->name;
  pcVar7 = (this_ptr_01->base).camera_name;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') {
      return this_ptr_01;
    }
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  return this_ptr_01;
}

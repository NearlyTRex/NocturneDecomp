// Name: core_setutil.cpp_C3DSLight_create_FUN_00586a90
// Address: 00586a90
// Address Range: [[00586a90, 00586be8]]
// Convention: __cdecl
// Signature: CDemonLight * core_setutil.cpp_C3DSLight_create_FUN_00586a90(C3DSLight * this_ptr)

#include "nocturne.h"

CDemonLight * __cdecl core_setutil_cpp_C3DSLight_create_FUN_00586a90(C3DSLight *this_ptr)

{
  char cVar1;
  CDemonLight *this_ptr_00;
  CDemonFilter *pCVar2;
  CDemonLight *unaff_EBX;
  C3DSLight *pCVar3;
  int unaff_ESI;
  int iVar4;
  char *pcVar5;
  char (*filter_name) [40];
  char *pcVar6;
  
  this_ptr_00 = (CDemonLight *)
                shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2fac,"..\\core\\setutil.cpp",0x2f8);
  if (this_ptr_00 != (CDemonLight *)0x0) {
    this_ptr_00 = core_dlight_cpp_CDemonLight_ctor_FUN_004726a0(this_ptr_00);
  }
  if (this_ptr_00 == (CDemonLight *)0x0) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 0x2f9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("C3DSLight::create - Out of memory!");
  }
  core_dlight_cpp_CDemonLight_init_FUN_004727c0(this_ptr_00);
  if (this_ptr->filter_count < 1) {
    this_ptr_00->shadow_bounds_mode = 1;
  }
  else {
    this_ptr_00->shadow_bounds_mode = this_ptr->blend_filter;
  }
  if ((CVector3f *)(unaff_ESI + 4) != &this_ptr->pos) {
    *(float *)(unaff_ESI + 4) = (this_ptr->pos).x;
    *(float *)(unaff_ESI + 8) = (this_ptr->pos).y;
    *(float *)(unaff_ESI + 0xc) = (this_ptr->pos).z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(unaff_ESI + 0x10),&this_ptr->orient);
  (unaff_EBX->base).base.projection_scale = this_ptr->fov;
  iVar4 = 0;
  if (0 < this_ptr->filter_count) {
    filter_name = this_ptr->filter_names;
    pCVar3 = this_ptr;
    do {
      iVar4 = iVar4 + 1;
      pCVar2 = core_dfilter_cpp_CFilterCache_getFilter_FUN_00470060
                         (g_CFilterCachePtr,*filter_name,(char *)this_ptr->blend_filter,
                          (int)unaff_EBX);
      pCVar3->filters[0] = pCVar2;
      filter_name = filter_name + 1;
      pCVar3 = (C3DSLight *)pCVar3->name;
    } while (iVar4 < this_ptr->filter_count);
  }
  pcVar5 = this_ptr->name;
  pcVar6 = (unaff_EBX->base).camera_name;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      return unaff_EBX;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  return unaff_EBX;
}

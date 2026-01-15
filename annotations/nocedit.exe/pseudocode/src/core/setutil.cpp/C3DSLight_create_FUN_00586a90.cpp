// Name: core_setutil.cpp_C3DSLight_create_FUN_00586a90
// Address: 00586a90
// Address Range: [[00586a90, 00586be8]]
// Convention: __cdecl
// Signature: CDemonLight * core_setutil.cpp_C3DSLight_create_FUN_00586a90(C3DSLight * this_ptr)

#include "nocturne.h"

CDemonLight * __cdecl core_setutil_cpp_C3DSLight_create_FUN_00586a90(C3DSLight *this_ptr)

{
  char cVar1;
  CDemonLight *pCVar2;
  CDemonFilter *pCVar3;
  CDemonLight *this_ptr_00;
  CVector3i *pCVar4;
  C3DSLight *pCVar5;
  int iVar6;
  char *pcVar7;
  char (*filter_name) [40];
  char *pcVar8;
  
  pCVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2fac,"..\\core\\setutil.cpp",0x2f8);
  this_ptr_00 = (CDemonLight *)0x0;
  if (pCVar2 != (CDemonLight *)0x0) {
    this_ptr_00 = core_dlight_cpp_CDemonLight_ctor_FUN_004726a0(pCVar2);
  }
  if (this_ptr_00 == (CDemonLight *)0x0) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 0x2f9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("C3DSLight::create - Out of memory!");
  }
  pCVar2 = this_ptr_00;
  core_dlight_cpp_CDemonLight_init_FUN_004727c0(this_ptr_00);
  if (this_ptr->filter_count < 1) {
    this_ptr_00->shadow_bounds_mode = 1;
  }
  else {
    this_ptr_00->shadow_bounds_mode = this_ptr->blend_filter;
  }
  pCVar4 = &(pCVar2->base).base.position;
  if ((CVector3f *)pCVar4 != &this_ptr->pos) {
    pCVar4->x = (int)(this_ptr->pos).x;
    (pCVar2->base).base.position.y = (int)(this_ptr->pos).y;
    (pCVar2->base).base.position.z = (int)(this_ptr->pos).z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&(pCVar2->base).base.rotation_matrix,&this_ptr->orient);
  (pCVar2->base).base.projection_scale = this_ptr->fov;
  iVar6 = 0;
  if (0 < this_ptr->filter_count) {
    filter_name = this_ptr->filter_names;
    pCVar5 = this_ptr;
    do {
      iVar6 = iVar6 + 1;
      pCVar3 = core_dfilter_cpp_CFilterCache_getFilter_FUN_00470060
                         (g_CFilterCachePtr,*filter_name,(char *)this_ptr->blend_filter,(int)pCVar2)
      ;
      pCVar5->filters[0] = pCVar3;
      filter_name = filter_name + 1;
      pCVar5 = (C3DSLight *)pCVar5->name;
    } while (iVar6 < this_ptr->filter_count);
  }
  pcVar7 = this_ptr->name;
  pcVar8 = (pCVar2->base).camera_name;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') {
      return pCVar2;
    }
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  return pCVar2;
}

// Name: core_setutil.cpp_FUN_005148b0
// Address: 005148b0
// Address Range: [[005148b0, 0051497d]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_FUN_005148b0(C3DSCamera *this_ptr,CDemonCamera *camera)

#include "nocturne.h"

void __cdecl core_setutil_cpp_FUN_005148b0(C3DSCamera *this_ptr,CDemonCamera *camera)

{
  char cVar1;
  int iVar2;
  CMatrix3x3f *pCVar3;
  C3DSCamera *pCVar4;
  char *pcVar5;
  CDemonCamera *pCVar6;
  
  if ((CVector3f *)(camera->camera_name + 0xc4) != &this_ptr->position) {
    *(float *)(camera->camera_name + 0xc4) = (this_ptr->position).x;
    *(float *)(camera->camera_name + 200) = (this_ptr->position).y;
    *(float *)(camera->camera_name + 0xcc) = (this_ptr->position).z;
  }
  pCVar3 = &this_ptr->rotation_matrix;
  pcVar5 = camera->camera_name + 0xd0;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(float *)pcVar5 = pCVar3->m[0].x;
    pCVar3 = (CMatrix3x3f *)&pCVar3->m[0].y;
    pcVar5 = pcVar5 + 4;
  }
  *(int *)(camera->camera_name + 0xf8) = this_ptr->is_panning;
  pCVar4 = this_ptr;
  pCVar6 = camera;
  do {
    cVar1 = pCVar4->name[0];
    *(char *)&(pCVar6->base).fixed_point_scale = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pCVar4->name[1];
    pCVar4 = (C3DSCamera *)(pCVar4->name + 2);
    *(char *)((int)&(pCVar6->base).fixed_point_scale + 1) = cVar1;
    pCVar6 = (CDemonCamera *)((int)&(pCVar6->base).fixed_point_scale + 2);
  } while (cVar1 != '\0');
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740(camera,this_ptr->projection_scale);
  if (this_ptr->projection_scale < *(float *)(0x01E57284 + 0x14cd68)) {
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"Ambient set low by script\n");
  }
  if (this_ptr->projection_scale <= (float)0.25) {
    return;
  }
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (PTR_DAT_005ad350,"Ambient set ridiculously high\n");
  return;
}

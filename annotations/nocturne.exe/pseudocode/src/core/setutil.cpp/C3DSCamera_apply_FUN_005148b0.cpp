// Name: core_setutil.cpp_C3DSCamera_apply_FUN_005148b0
// Address: 005148b0
// Address Range: [[005148b0, 0051497d]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_apply_FUN_005148b0(C3DSCamera *this_ptr,CDemonCamera *camera)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_apply_FUN_005148b0(C3DSCamera *this_ptr,CDemonCamera *camera)

{
  char cVar1;
  int iVar2;
  CMatrix3x3f *pCVar3;
  C3DSCamera *pCVar4;
  CMatrix3x3f *pCVar5;
  CDemonCamera *pCVar6;
  
  if (&camera->position != &this_ptr->position) {
    (camera->position).x = (this_ptr->position).x;
    (camera->position).y = (this_ptr->position).y;
    (camera->position).z = (this_ptr->position).z;
  }
  pCVar3 = &this_ptr->rotation_matrix;
  pCVar5 = &camera->rotation_matrix;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar5->m[0].x = pCVar3->m[0].x;
    pCVar3 = (CMatrix3x3f *)&pCVar3->m[0].y;
    pCVar5 = (CMatrix3x3f *)&pCVar5->m[0].y;
  }
  camera->focal_length = this_ptr->projection_scale;
  pCVar4 = this_ptr;
  pCVar6 = camera;
  do {
    cVar1 = pCVar4->name[0];
    pCVar6->camera_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pCVar4->name[1];
    pCVar4 = (C3DSCamera *)(pCVar4->name + 2);
    pCVar6->camera_name[1] = cVar1;
    pCVar6 = (CDemonCamera *)(pCVar6->camera_name + 2);
  } while (cVar1 != '\0');
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740(camera,this_ptr->ambient_value);
  if (this_ptr->ambient_value < g_CDemonSet_PTR_005be368->min_ambient_value) {
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"Ambient set low by script\n");
  }
  if (this_ptr->ambient_value <= (float)0.25) {
    return;
  }
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (g_CConsole_PTR_005ad350,"Ambient set ridiculously high\n");
  return;
}

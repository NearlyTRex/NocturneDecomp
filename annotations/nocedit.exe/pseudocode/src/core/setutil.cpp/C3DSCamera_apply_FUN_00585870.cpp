// Name: core_setutil.cpp_C3DSCamera_apply_FUN_00585870
// Address: 00585870
// Address Range: [[00585870, 0058596e]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_apply_FUN_00585870(C3DSCamera * this_ptr, CDemonCamera * camera)

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSCamera_apply_FUN_00585870(C3DSCamera *this_ptr,CDemonCamera *camera)

{
  CVector3i *pCVar1;
  char cVar2;
  int iVar3;
  CMatrix3x3f *pCVar4;
  C3DSCamera *pCVar5;
  CMatrix3x3i *pCVar6;
  char *pcVar7;
  byte bVar8;
  
  bVar8 = 0;
  if (this_ptr->is_panning != 0) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 0xf7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("C3DSCamera::apply - shouldn't ever do this on panning camera '%s'!",this_ptr);
  }
  pCVar1 = &(camera->base).position;
  if ((CVector3f *)pCVar1 != &this_ptr->position) {
    pCVar1->x = (int)(this_ptr->position).x;
    (camera->base).position.y = (int)(this_ptr->position).y;
    (camera->base).position.z = (int)(this_ptr->position).z;
  }
  pCVar4 = &this_ptr->rotation_matrix;
  pCVar6 = &(camera->base).rotation_matrix;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar6->m[0].x = (int)pCVar4->m[0].x;
    pCVar4 = (CMatrix3x3f *)((int)pCVar4 + (uint)bVar8 * -8 + 4);
    pCVar6 = (CMatrix3x3i *)((int)pCVar6 + (uint)bVar8 * -8 + 4);
  }
  pcVar7 = camera->camera_name;
  (camera->base).projection_scale = this_ptr->projection_scale;
  pCVar5 = this_ptr;
  do {
    cVar2 = pCVar5->name[0];
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pCVar5->name[1];
    pCVar5 = (C3DSCamera *)(pCVar5->name + 2);
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(camera,this_ptr->ambient_value);
  if (this_ptr->ambient_value < g_CDemonSetPtr->min_ambient_value) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"Ambient set low by script\n");
  }
  if (this_ptr->ambient_value <= (float)0.25) {
    return;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Ambient set ridiculously high\n")
  ;
  return;
}

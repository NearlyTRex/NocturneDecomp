// Name: core_setutil.cpp_C3DSCamera_apply_FUN_0053ad20
// Address: 0053ad20
// Address Range: [[0053ad20, 0053ae1e]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_apply_FUN_0053ad20(C3DSCamera *this_ptr,CDemonCamera *camera)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSCamera_apply_FUN_0053ad20(C3DSCamera *this_ptr,CDemonCamera *camera)

{
  UVector3 *pUVar1;
  char cVar2;
  int iVar3;
  CMatrix3x3f *pCVar4;
  C3DSCamera *pCVar5;
  CMatrix3x3f *pCVar6;
  char *pcVar7;
  byte bVar8;
  
  bVar8 = 0;
  if (this_ptr->is_panning != 0) {
    _DAT_01d046a0 = "..\\core\\setutil.cpp";
    _DAT_01d046a4 = 0xf7;
    core_main_c_FUN_004e4500("C3DSCamera::apply - shouldn't ever do this on panning camera '%s'!",this_ptr);
  }
  pUVar1 = &(camera->base).position;
  if ((CVector3f *)pUVar1 != &this_ptr->position) {
    (pUVar1->f).x = (this_ptr->position).x;
    (camera->base).position.f.y = (this_ptr->position).y;
    (camera->base).position.f.z = (this_ptr->position).z;
  }
  pCVar4 = &this_ptr->rotation_matrix;
  pCVar6 = &(camera->base).rotation_matrix;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar6->m[0].x = pCVar4->m[0].x;
    pCVar4 = (CMatrix3x3f *)((int)pCVar4 + (uint)bVar8 * -8 + 4);
    pCVar6 = (CMatrix3x3f *)((int)pCVar6 + (uint)bVar8 * -8 + 4);
  }
  pcVar7 = camera->camera_name;
  (camera->base).focal_length = this_ptr->projection_scale;
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
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00441e80(camera,this_ptr->ambient_value);
  if (this_ptr->ambient_value < g_CDemonSetPtr->min_ambient_value) {
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"Ambient set low by script\n");
  }
  if (this_ptr->ambient_value <= (float)_DAT_005e6219) {
    return;
  }
  engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"Ambient set ridiculously high\n")
  ;
  return;
}

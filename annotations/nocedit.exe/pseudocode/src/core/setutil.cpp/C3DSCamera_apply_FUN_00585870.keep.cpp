// Name: core_setutil.cpp_C3DSCamera_apply_FUN_00585870
// Address: 00585870
// MANUAL RECONSTRUCTION
// Address Range: [[00585870, 0058596e] [03fc401f, 03fc4073]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_apply_FUN_00585870(C3DSCamera *this_ptr,CDemonCamera *camera)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_apply_FUN_00585870(C3DSCamera *this_ptr,CDemonCamera *camera)

{
  UVector3 *pUVar1;

  if (this_ptr->is_panning != 0) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 0xf7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("C3DSCamera::apply - shouldn't ever do this on panning camera '%s'!",this_ptr->name);
  }
  pUVar1 = &(camera->base).position;
  if ((CVector3f *)pUVar1 != &this_ptr->position) {
    (pUVar1->f).x = (this_ptr->position).x;
    (camera->base).position.f.y = (this_ptr->position).y;
    (camera->base).position.f.z = (this_ptr->position).z;
  }
  (camera->base).rotation_matrix.m[0].x = (this_ptr->rotation_matrix).m[0].x;
  (camera->base).rotation_matrix.m[0].y = (this_ptr->rotation_matrix).m[0].y;
  (camera->base).rotation_matrix.m[0].z = (this_ptr->rotation_matrix).m[0].z;
  (camera->base).rotation_matrix.m[1].x = (this_ptr->rotation_matrix).m[1].x;
  (camera->base).rotation_matrix.m[1].y = (this_ptr->rotation_matrix).m[1].y;
  (camera->base).rotation_matrix.m[1].z = (this_ptr->rotation_matrix).m[1].z;
  (camera->base).rotation_matrix.m[2].x = (this_ptr->rotation_matrix).m[2].x;
  (camera->base).rotation_matrix.m[2].y = (this_ptr->rotation_matrix).m[2].y;
  (camera->base).rotation_matrix.m[2].z = (this_ptr->rotation_matrix).m[2].z;
  (camera->base).dead = this_ptr->dead;
  (camera->base).focal_length = this_ptr->projection_scale;
  strcpy(camera->camera_name,this_ptr->name);
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

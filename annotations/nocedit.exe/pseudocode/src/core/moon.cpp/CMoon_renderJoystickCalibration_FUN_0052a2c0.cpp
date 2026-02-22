// Name: core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0
// Address: 0052a2c0
// Address Range: [[0052a2c0, 0052a3e0]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0(CMoon *this_ptr)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0(CMoon *this_ptr)

{
  CDemonSet *pCVar1;
  byte bVar2;
  int aiStackY_101c [1014];
  CVector3i local_34;
  CVector3i local_28;
  CVector3f local_1c;
  
  bVar2 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr2,(CVector3i *)&g_ZeroVector);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr2,56.0);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr2);
  local_1c.x = 0.0;
  local_1c.y = 0.0;
  local_1c.z = 36.0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&local_1c);
  g_CDemonSetPtr->rendering_mode = 1;
  local_28.x = g_JoyXPos - 0x8000;
  local_28.y = g_JoyYPos - 0x8000;
  local_28.z = 0x8000;
  engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_28,&local_34);
  pCVar1 = g_CDemonSetPtr;
  local_28.x = local_34.x;
  *(uint *)((int)&local_28 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_34 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&local_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  (g_CDemonSetPtr->light_direction).x = local_28.x;
  (pCVar1->light_direction).y = local_28.y;
  (pCVar1->light_direction).z = local_28.z;
  pCVar1->ambient_base_quick = 0x280;
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
            (&this_ptr->moon,0,(CKeyFramedModelInstance *)0x0,0x205);
  g_CDemonSetPtr->rendering_mode = 0;
  return;
}

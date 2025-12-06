// Name: core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0
// Address: 0052a2c0
// Address Range: [[0052a2c0, 0052a3e0]]
// Convention: __cdecl
// Signature: void core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0(CMoon * this_ptr)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0(CMoon *this_ptr)

{
  CDemonSet *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  byte bVar3;
  int in_stack_00000020;
  uint auStackY_1000 [1011];
  
  bVar3 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr,(CVector3i *)&g_ZeroVector);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr,56.0);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)&stack0xfffffff8);
  g_CDemonSetPtr->rendering_mode = 1;
  iVar2 = g_JoyYPos - 0x8000;
  engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0((CVector3i *)&stack0xfffffff0);
  pCVar1 = g_CDemonSetPtr;
  *(uint *)(&stack0xfffffff4 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar3 * -8);
  *(uint *)(&stack0xfffffff8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  (g_CDemonSetPtr->light_direction).x = iVar2;
  (pCVar1->light_direction).y = 0x8000;
  (pCVar1->light_direction).z = 0;
  pCVar1->ambient_base_quick = 0x280;
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
            ((CKeyFramedModel *)(in_stack_00000020 + 8),(CKeyFramedModelInstance *)0x0,0,0x205);
  g_CDemonSetPtr->rendering_mode = 0;
  return;
}

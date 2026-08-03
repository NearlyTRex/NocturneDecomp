// Name: core_moon.cpp_CMoon_renderJoystickCalibration_FUN_004df040
// Address: 004df040
// Address Range: [[004df040, 004df160]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_renderJoystickCalibration_FUN_004df040(CMoon *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moon_cpp_CMoon_renderJoystickCalibration_FUN_004df040(CMoon *this_ptr)

{
  CDemonSet *pCVar1;
  byte bVar2;
  int aiStackY_101c [1014];
  CVector3i local_34;
  CVector3i local_28;
  CVector3f local_1c;
  
  bVar2 = 0;
  engine_special_cpp_clearScreen_FUN_0052ee70();
  engine_special_cpp_clearZBufferNative_FUN_0052eed4();
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
            (DAT_005ae704,(CVector3f *)&DAT_02dd1184);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(DAT_005ae704,56.0);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
            (DAT_005ae704,(CVector3f *)&DAT_02dd1184);
  local_1c.x = 0.0;
  local_1c.y = 0.0;
  local_1c.z = 36.0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,&local_1c)
  ;
  g_CDemonSet_PTR_005be368->rendering_mode = 1;
  local_28.x = _DAT_01c038f8 + -0x8000;
  local_28.y = _DAT_01c038fc + -0x8000;
  local_28.z = 0x8000;
  engine_matrix_c_normalizeVector3DFloat_FUN_004cde90(&local_28,&local_34);
  pCVar1 = g_CDemonSet_PTR_005be368;
  local_28.x = local_34.x;
  *(uint *)((int)&local_28 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_34 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&local_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  (g_CDemonSet_PTR_005be368->light_direction).x = local_28.x;
  (pCVar1->light_direction).y = local_28.y;
  (pCVar1->light_direction).z = local_28.z;
  pCVar1->ambient_base_quick = 0x280;
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
            (&this_ptr->moon,0,(CKeyFramedModelInstance *)0x0,0x205);
  g_CDemonSet_PTR_005be368->rendering_mode = 0;
  return;
}

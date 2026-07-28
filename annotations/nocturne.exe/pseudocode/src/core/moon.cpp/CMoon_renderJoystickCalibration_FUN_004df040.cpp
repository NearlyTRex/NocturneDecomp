// Name: core_moon.cpp_CMoon_renderJoystickCalibration_FUN_004df040
// Address: 004df040
// Address Range: [[004df040, 004df160]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_renderJoystickCalibration_FUN_004df040(CMoon *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moon_cpp_CMoon_renderJoystickCalibration_FUN_004df040(CMoon *this_ptr)

{
  int iVar1;
  byte bVar2;
  int aiStackY_101c [1014];
  int local_34;
  int local_28;
  int local_24;
  uint local_20;
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
  *(uint *)(0x01E57284 + 0x15aa88) = 1;
  local_28 = _DAT_01c038f8 + -0x8000;
  local_24 = _DAT_01c038fc + -0x8000;
  local_20 = 0x8000;
  engine_matrix_c_normalizeVector3DFloat_FUN_004cde90(&stack0xffffffd8);
  iVar1 = 0x01E57284;
  local_28 = local_34;
  (&stack0xffffffdc)[(uint)bVar2 * 0xfffffffe] =
       *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  *(int *)(0x01E57284 + 0x15aa8c) = local_28;
  *(int *)(iVar1 + 0x15aa90) = local_24;
  *(uint *)(iVar1 + 0x15aa94) = local_20;
  *(uint *)(iVar1 + 0x15aa98) = 0x280;
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
            (&this_ptr->moon,0,(CKeyFramedModelInstance *)0x0,0x205);
  *(uint *)(0x01E57284 + 0x15aa88) = 0;
  return;
}

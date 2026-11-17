// Name: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004542a0
// Address: 004542a0
// Address Range: [[004542a0, 0045435e]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004542a0(CDemonCamera *this_ptr,SFog *fog_config)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004542a0(CDemonCamera *this_ptr,SFog *fog_config)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  g_INT_00611230 = (fog_config->color_index).r;
  g_INT_00611234 = (fog_config->color_index).g;
  g_INT_00611238 = (fog_config->color_index).b;
  engine_special_cpp_setFogColor_FUN_005828e0
            (g_UINT_ARRAY_00b8189c[(fog_config->color_index).r] & 0xff,
             g_UINT_ARRAY_00b8189c[(fog_config->color_index).g] & 0xff,
             g_UINT_ARRAY_00b8189c[g_INT_00611238] & 0xff);
  dVar4 = (double)(fog_config->scroll).y * 65536;
  dVar5 = (double)(fog_config->scroll).z * 65536;
  fVar1 = fog_config->height_threshold;
  fVar2 = (float)256;
  dVar7 = (double)fog_config->density_multiplier * 65536;
  dVar3 = round((double)(fog_config->scroll).x * 65536);
  dVar4 = round(dVar4);
  dVar5 = round(dVar5);
  dVar6 = round((double)(fVar1 * fVar2));
  dVar7 = round(dVar7);
  g_SFogGrid_01480e2c.scroll_vector.x = (int)ROUND(dVar3);
  g_SFogGrid_01480e2c.scroll_vector.y = (int)ROUND(dVar4);
  g_SFogGrid_01480e2c.scroll_vector.z = (int)ROUND(dVar5);
  g_SFogGrid_01480e2c.height_threshold = (int)ROUND(dVar6);
  g_SFogGrid_01480e2c.density_multiplier = (int)ROUND(dVar7);
  return;
}

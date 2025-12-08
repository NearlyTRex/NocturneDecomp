// Name: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640
// Address: 00453640
// Address Range: [[00453640, 004536fe]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640(CDemonCamera * this_ptr, SFog * fog_config)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00453640(CDemonCamera *this_ptr,SFog *fog_config)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  
  g_FogColorIndexR = (fog_config->color_index).r;
  g_FogColorIndexG = (fog_config->color_index).g;
  g_FogColorIndexB = (fog_config->color_index).b;
  wincore_windll_cpp_setFogColor_FUN_005b7b80
            (g_LightmapTexturePalette[(fog_config->color_index).r] & 0xff,
             g_LightmapTexturePalette[(fog_config->color_index).g] & 0xff,
             g_LightmapTexturePalette[g_FogColorIndexB] & 0xff);
  fVar1 = (float10)65536;
  fVar2 = (float10)(fog_config->scroll).y * fVar1;
  fVar3 = (float10)(fog_config->scroll).z * fVar1;
  fVar4 = (float10)fog_config->height_threshold * (float10)256;
  fVar5 = (float10)fog_config->density_multiplier * fVar1;
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)((float10)(fog_config->scroll).x * fVar1));
  fVar1 = (float10)dVar6;
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)fVar2);
  fVar2 = (float10)dVar6;
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)fVar3);
  fVar3 = (float10)dVar6;
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)fVar4);
  fVar4 = (float10)dVar6;
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)fVar5);
  g_CameraFogGrid.scroll_vector.x = (int)ROUND(fVar1);
  g_CameraFogGrid.scroll_vector.y = (int)ROUND(fVar2);
  g_CameraFogGrid.scroll_vector.z = (int)ROUND(fVar3);
  g_CameraFogGrid.height_threshold = (int)ROUND(fVar4);
  g_CameraFogGrid.density_multiplier = (int)ROUND(dVar6);
  return;
}

// Name: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640
// Address: 00453640
// Address Range: [[00453640, 004536fe]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640(CDemonCamera * this_ptr, SFog * fog_config)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00453640(CDemonCamera *this_ptr,SFog *fog_config)

{
  int iVar1;
  uint extraout_EDX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  
  g_FogColorIndexR = (fog_config->color_index).r;
  g_FogColorIndexG = (fog_config->color_index).g;
  g_FogColorIndexB = (fog_config->color_index).b;
  iVar1 = wincore_windll_cpp_setFogColor_FUN_005b7b80
                    (g_LightmapTexturePalette[(fog_config->color_index).r] & 0xff,
                     g_LightmapTexturePalette[(fog_config->color_index).g] & 0xff,
                     g_LightmapTexturePalette[g_FogColorIndexB] & 0xff);
  fVar2 = (float10)65536;
  fVar3 = (float10)(fog_config->scroll).x * fVar2;
  fVar4 = (float10)(fog_config->scroll).y * fVar2;
  fVar5 = (float10)(fog_config->scroll).z * fVar2;
  fVar6 = (float10)fog_config->height_threshold * (float10)256;
  fVar2 = (float10)fog_config->density_multiplier * fVar2;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,iVar1));
  dVar7 = crt_math_c_round_FUN_005fe6b0(dVar7);
  dVar7 = crt_math_c_round_FUN_005fe6b0(dVar7);
  dVar7 = crt_math_c_round_FUN_005fe6b0(dVar7);
  crt_math_c_round_FUN_005fe6b0(dVar7);
  g_CameraFogGrid.scroll_vector.x = (int)ROUND(fVar3);
  g_CameraFogGrid.scroll_vector.y = (int)ROUND(fVar4);
  g_CameraFogGrid.scroll_vector.z = (int)ROUND(fVar5);
  g_CameraFogGrid.height_threshold = (int)ROUND(fVar6);
  g_CameraFogGrid.density_multiplier = (int)ROUND(fVar2);
  return;
}

// Name: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640
// Address: 00453640
// Address Range: [[00453640, 004536fe]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00453640(CDemonCamera *this_ptr,SFog *fog_config)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00453640(CDemonCamera *this_ptr,SFog *fog_config)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  double dVar8;
  
  g_FogColorIndexR = (fog_config->color_index).r;
  g_FogColorIndexG = (fog_config->color_index).g;
  g_FogColorIndexB = (fog_config->color_index).b;
  wincore_windll_cpp_setFogColor_FUN_005b7b80
            (g_LightmapTexturePalette[(fog_config->color_index).r] & 0xff,
             g_LightmapTexturePalette[(fog_config->color_index).g] & 0xff,
             g_LightmapTexturePalette[g_FogColorIndexB] & 0xff);
  fVar2 = (float10)65536;
  fVar3 = (float10)(fog_config->scroll).y * fVar2;
  fVar1 = (fog_config->scroll).z;
  fVar4 = (float10)fog_config->height_threshold * (float10)256;
  fVar6 = (float10)fog_config->density_multiplier * fVar2;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)((float10)(fog_config->scroll).x * fVar2));
  fVar5 = (float10)dVar7;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar3);
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)((float10)fVar1 * fVar2));
  fVar2 = (float10)dVar8;
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)fVar4);
  fVar3 = (float10)dVar8;
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
  g_CameraFogGrid.scroll_vector.x = (int)ROUND(fVar5);
  g_CameraFogGrid.scroll_vector.y = (int)ROUND(dVar7);
  g_CameraFogGrid.scroll_vector.z = (int)ROUND(fVar2);
  g_CameraFogGrid.height_threshold = (int)ROUND(fVar3);
  g_CameraFogGrid.density_multiplier = (int)ROUND(dVar8);
  return;
}

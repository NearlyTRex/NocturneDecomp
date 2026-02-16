// Name: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640
// Address: 00453640
// Address Range: [[00453640, 004536fe]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00453640(CDemonCamera *this_ptr,SFog *fog_config)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00453640(CDemonCamera *this_ptr,SFog *fog_config)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  g_FogColorIndexR = (fog_config->color_index).r;
  g_FogColorIndexG = (fog_config->color_index).g;
  g_FogColorIndexB = (fog_config->color_index).b;
  wincore_windll_cpp_setFogColor_FUN_005b7b80
            (g_LightmapTexturePalette[(fog_config->color_index).r] & 0xff,
             g_LightmapTexturePalette[(fog_config->color_index).g] & 0xff,
             g_LightmapTexturePalette[g_FogColorIndexB] & 0xff);
  dVar4 = (double)(fog_config->scroll).y * 65536;
  dVar5 = (double)(fog_config->scroll).z * 65536;
  fVar1 = fog_config->height_threshold;
  fVar2 = (float)256;
  dVar7 = (double)fog_config->density_multiplier * 65536;
  dVar3 = round
                    ((double)(fog_config->scroll).x * 65536);
  dVar4 = round(dVar4);
  dVar5 = round(dVar5);
  dVar6 = round((double)(fVar1 * fVar2));
  dVar7 = round(dVar7);
  g_CameraFogGrid.scroll_vector.x = (int)ROUND(dVar3);
  g_CameraFogGrid.scroll_vector.y = (int)ROUND(dVar4);
  g_CameraFogGrid.scroll_vector.z = (int)ROUND(dVar5);
  g_CameraFogGrid.height_threshold = (int)ROUND(dVar6);
  g_CameraFogGrid.density_multiplier = (int)ROUND(dVar7);
  return;
}

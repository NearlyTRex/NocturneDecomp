// Name: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640
// Address: 00453640
// MANUAL RECONSTRUCTION
// Address Range: [[00453640, 004536fe]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00453640(CDemonCamera *this_ptr,SFog *fog_config)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00453640(CDemonCamera *this_ptr,SFog *fog_config)

{
  g_FogColorIndexR = (fog_config->color_index).r;
  g_FogColorIndexG = (fog_config->color_index).g;
  g_FogColorIndexB = (fog_config->color_index).b;
  wincore_windll_cpp_setFogColor_FUN_005b7b80
            (g_LightmapTexturePalette[(fog_config->color_index).r] & 0xff,
             g_LightmapTexturePalette[(fog_config->color_index).g] & 0xff,
             g_LightmapTexturePalette[g_FogColorIndexB] & 0xff);
  g_CameraFogGrid.scroll_vector.x =
       (int)ROUND(ROUND((double)(fog_config->scroll).x * 65536));
  g_CameraFogGrid.scroll_vector.y =
       (int)ROUND(ROUND((double)(fog_config->scroll).y * 65536));
  g_CameraFogGrid.scroll_vector.z =
       (int)ROUND(ROUND((double)(fog_config->scroll).z * 65536));
  g_CameraFogGrid.height_threshold =
       (int)ROUND(ROUND(fog_config->height_threshold * (float)256));
  g_CameraFogGrid.density_multiplier =
       (int)ROUND(ROUND((double)fog_config->density_multiplier * 65536));
  return;
}

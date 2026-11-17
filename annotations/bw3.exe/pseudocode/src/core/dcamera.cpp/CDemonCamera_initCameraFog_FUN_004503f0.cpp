// Name: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004503f0
// Address: 004503f0
// Address Range: [[004503f0, 004504ae]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004503f0(CDemonCamera *this_ptr,SFog *fog_config)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004503f0(CDemonCamera *this_ptr,SFog *fog_config)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  g_INT_005f17e4 = (fog_config->color_index).r;
  g_INT_005f17e8 = (fog_config->color_index).g;
  g_INT_005f17ec = (fog_config->color_index).b;
  engine_special_cpp_setFogColor_FUN_005661b0
            (g_UINT_ARRAY_00b9e14c[(fog_config->color_index).r] & 0xff,
             g_UINT_ARRAY_00b9e14c[(fog_config->color_index).g] & 0xff,
             g_UINT_ARRAY_00b9e14c[g_INT_005f17ec] & 0xff);
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
  g_SFogGrid_0149d6dc.scroll_vector.x = (int)ROUND(dVar3);
  g_SFogGrid_0149d6dc.scroll_vector.y = (int)ROUND(dVar4);
  g_SFogGrid_0149d6dc.scroll_vector.z = (int)ROUND(dVar5);
  g_SFogGrid_0149d6dc.height_threshold = (int)ROUND(dVar6);
  g_SFogGrid_0149d6dc.density_multiplier = (int)ROUND(dVar7);
  return;
}

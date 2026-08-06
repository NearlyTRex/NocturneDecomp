// Name: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004474e0
// Address: 004474e0
// Address Range: [[004474e0, 0044759e]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004474e0(CDemonCamera *this_ptr,SFog *fog_config)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004474e0(CDemonCamera *this_ptr,SFog *fog_config)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  DAT_005ad450 = (fog_config->color_index).r;
  DAT_005ad454 = (fog_config->color_index).g;
  DAT_005ad458 = (fog_config->color_index).b;
  engine_special_cpp_setFogColor_FUN_00532af0
            (*(uint *)(&DAT_00b0e1fc + (fog_config->color_index).r * 4) & 0xff,
             *(uint *)(&DAT_00b0e1fc + (fog_config->color_index).g * 4) & 0xff,
             *(uint *)(&DAT_00b0e1fc + DAT_005ad458 * 4) & 0xff);
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
  g_SFogGrid_0140d784.scroll_vector.x = (int)ROUND(dVar3);
  g_SFogGrid_0140d784.scroll_vector.y = (int)ROUND(dVar4);
  g_SFogGrid_0140d784.scroll_vector.z = (int)ROUND(dVar5);
  g_SFogGrid_0140d784.height_threshold = (int)ROUND(dVar6);
  g_SFogGrid_0140d784.density_multiplier = (int)ROUND(dVar7);
  return;
}

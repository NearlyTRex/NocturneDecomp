// Name: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004542a0
// Address: 004542a0
// Address Range: [[004542a0, 0045435e]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004542a0(CDemonCamera *this_ptr,SFog *fog_config)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004542a0(CDemonCamera *this_ptr,SFog *fog_config)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  DAT_00611230 = (fog_config->color_index).r;
  DAT_00611234 = (fog_config->color_index).g;
  DAT_00611238 = (fog_config->color_index).b;
  engine_special_cpp_setFogColor_FUN_005828e0
            (*(uint *)(&DAT_00b8189c + (fog_config->color_index).r * 4) & 0xff,
             *(uint *)(&DAT_00b8189c + (fog_config->color_index).g * 4) & 0xff,
             *(uint *)(&DAT_00b8189c + DAT_00611238 * 4) & 0xff);
  fVar1 = (float10)_DAT_005d79f7;
  fVar2 = (float10)(fog_config->scroll).x * fVar1;
  fVar3 = (float10)(fog_config->scroll).y * fVar1;
  fVar4 = (float10)(fog_config->scroll).z * fVar1;
  fVar5 = (float10)fog_config->height_threshold * (float10)_DAT_005d79ff;
  fVar1 = (float10)fog_config->density_multiplier * fVar1;
  round();
  round();
  round();
  round();
  round();
  _DAT_01481e38 = (int)ROUND(fVar2);
  _DAT_01481e3c = (int)ROUND(fVar3);
  _DAT_01481e40 = (int)ROUND(fVar4);
  _DAT_01481e44 = (int)ROUND(fVar5);
  _DAT_01481e48 = (int)ROUND(fVar1);
  return;
}

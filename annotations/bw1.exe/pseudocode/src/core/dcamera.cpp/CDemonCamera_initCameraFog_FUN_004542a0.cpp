// Name: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004542a0
// Address: 004542a0
// Address Range: [[004542a0, 0045435e]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004542a0(CDemonCamera *this_ptr,SFog *fog_config)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004542a0(CDemonCamera *this_ptr,SFog *fog_config)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  DAT_00611230 = (fog_config->color_index).r;
  DAT_00611234 = (fog_config->color_index).g;
  DAT_00611238 = (fog_config->color_index).b;
  engine_special_cpp_setFogColor_FUN_005828e0
            (*(uint *)(&DAT_00b8189c + (fog_config->color_index).r * 4) & 0xff,
             *(uint *)(&DAT_00b8189c + (fog_config->color_index).g * 4) & 0xff,
             *(uint *)(&DAT_00b8189c + DAT_00611238 * 4) & 0xff);
  dVar4 = (double)(fog_config->scroll).y * _DAT_005d79f7;
  dVar5 = (double)(fog_config->scroll).z * _DAT_005d79f7;
  fVar1 = fog_config->height_threshold;
  fVar2 = (float)_DAT_005d79ff;
  dVar7 = (double)fog_config->density_multiplier * _DAT_005d79f7;
  dVar3 = round((double)(fog_config->scroll).x * _DAT_005d79f7);
  dVar4 = round(dVar4);
  dVar5 = round(dVar5);
  dVar6 = round((double)(fVar1 * fVar2));
  dVar7 = round(dVar7);
  _DAT_01481e38 = (int)ROUND(dVar3);
  _DAT_01481e3c = (int)ROUND(dVar4);
  _DAT_01481e40 = (int)ROUND(dVar5);
  _DAT_01481e44 = (int)ROUND(dVar6);
  _DAT_01481e48 = (int)ROUND(dVar7);
  return;
}

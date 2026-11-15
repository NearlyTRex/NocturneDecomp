// Name: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00442bf0
// Address: 00442bf0
// Address Range: [[00442bf0, 00442cae]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00442bf0(CDemonCamera *this_ptr,SFog *fog_config)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00442bf0(CDemonCamera *this_ptr,SFog *fog_config)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  DAT_00609fa4 = (fog_config->color_index).r;
  DAT_00609fa8 = (fog_config->color_index).g;
  DAT_00609fac = (fog_config->color_index).b;
  engine_special_cpp_setFogColor_FUN_0055fe90
            (*(uint *)(&DAT_00b6639c + (fog_config->color_index).r * 4) & 0xff,
             *(uint *)(&DAT_00b6639c + (fog_config->color_index).g * 4) & 0xff,
             *(uint *)(&DAT_00b6639c + DAT_00609fac * 4) & 0xff);
  dVar4 = (double)(fog_config->scroll).y * _DAT_005ce72e;
  dVar5 = (double)(fog_config->scroll).z * _DAT_005ce72e;
  fVar1 = fog_config->height_threshold;
  fVar2 = (float)_DAT_005ce736;
  dVar7 = (double)fog_config->density_multiplier * _DAT_005ce72e;
  dVar3 = round((double)(fog_config->scroll).x * _DAT_005ce72e);
  dVar4 = round(dVar4);
  dVar5 = round(dVar5);
  dVar6 = round((double)(fVar1 * fVar2));
  dVar7 = round(dVar7);
  _DAT_01466938 = (int)ROUND(dVar3);
  _DAT_0146693c = (int)ROUND(dVar4);
  _DAT_01466940 = (int)ROUND(dVar5);
  _DAT_01466944 = (int)ROUND(dVar6);
  _DAT_01466948 = (int)ROUND(dVar7);
  return;
}

// Name: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004503f0
// Address: 004503f0
// Address Range: [[004503f0, 004504ae]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004503f0(CDemonCamera *this_ptr,SFog *fog_config)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004503f0(CDemonCamera *this_ptr,SFog *fog_config)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  DAT_005f17e4 = (fog_config->color_index).r;
  DAT_005f17e8 = (fog_config->color_index).g;
  DAT_005f17ec = (fog_config->color_index).b;
  engine_special_cpp_setFogColor_FUN_005661b0
            (*(uint *)(&DAT_00b9e14c + (fog_config->color_index).r * 4) & 0xff,
             *(uint *)(&DAT_00b9e14c + (fog_config->color_index).g * 4) & 0xff,
             *(uint *)(&DAT_00b9e14c + DAT_005f17ec * 4) & 0xff);
  dVar4 = (double)(fog_config->scroll).y * _DAT_005ba05e;
  dVar5 = (double)(fog_config->scroll).z * _DAT_005ba05e;
  fVar1 = fog_config->height_threshold;
  fVar2 = (float)_DAT_005ba066;
  dVar7 = (double)fog_config->density_multiplier * _DAT_005ba05e;
  dVar3 = round((double)(fog_config->scroll).x * _DAT_005ba05e);
  dVar4 = round(dVar4);
  dVar5 = round(dVar5);
  dVar6 = round((double)(fVar1 * fVar2));
  dVar7 = round(dVar7);
  _DAT_0149e6e8 = (int)ROUND(dVar3);
  _DAT_0149e6ec = (int)ROUND(dVar4);
  _DAT_0149e6f0 = (int)ROUND(dVar5);
  _DAT_0149e6f4 = (int)ROUND(dVar6);
  _DAT_0149e6f8 = (int)ROUND(dVar7);
  return;
}

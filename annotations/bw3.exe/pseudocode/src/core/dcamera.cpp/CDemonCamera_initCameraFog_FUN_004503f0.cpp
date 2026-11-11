// Name: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004503f0
// Address: 004503f0
// Address Range: [[004503f0, 004504ae]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004503f0(CDemonCamera *this_ptr,SFog *fog_config)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004503f0(CDemonCamera *this_ptr,SFog *fog_config)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  DAT_005f17e4 = (fog_config->color_index).r;
  DAT_005f17e8 = (fog_config->color_index).g;
  DAT_005f17ec = (fog_config->color_index).b;
  engine_special_cpp_setFogColor_FUN_005661b0
            (*(uint *)(&DAT_00b9e14c + (fog_config->color_index).r * 4) & 0xff,
             *(uint *)(&DAT_00b9e14c + (fog_config->color_index).g * 4) & 0xff,
             *(uint *)(&DAT_00b9e14c + DAT_005f17ec * 4) & 0xff);
  fVar1 = (float10)_DAT_005ba05e;
  fVar2 = (float10)(fog_config->scroll).x * fVar1;
  fVar3 = (float10)(fog_config->scroll).y * fVar1;
  fVar4 = (float10)(fog_config->scroll).z * fVar1;
  fVar5 = (float10)fog_config->height_threshold * (float10)_DAT_005ba066;
  fVar1 = (float10)fog_config->density_multiplier * fVar1;
  round();
  round();
  round();
  round();
  round();
  _DAT_0149e6e8 = (int)ROUND(fVar2);
  _DAT_0149e6ec = (int)ROUND(fVar3);
  _DAT_0149e6f0 = (int)ROUND(fVar4);
  _DAT_0149e6f4 = (int)ROUND(fVar5);
  _DAT_0149e6f8 = (int)ROUND(fVar1);
  return;
}

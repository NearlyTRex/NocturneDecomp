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
  
  DAT_005f17e4 = *(uint *)fog_config;
  DAT_005f17e8 = *(uint *)(fog_config + 4);
  DAT_005f17ec = *(int *)(fog_config + 8);
  engine_special_cpp_setFogColor_FUN_005661b0
            (*(uint *)(&DAT_00b9e14c + *(int *)fog_config * 4) & 0xff,
             *(uint *)(&DAT_00b9e14c + *(int *)(fog_config + 4) * 4) & 0xff,
             *(uint *)(&DAT_00b9e14c + DAT_005f17ec * 4) & 0xff);
  fVar1 = (float10)_DAT_005ba05e;
  fVar2 = (float10)*(float *)(fog_config + 0xc) * fVar1;
  fVar3 = (float10)*(float *)(fog_config + 0x10) * fVar1;
  fVar4 = (float10)*(float *)(fog_config + 0x14) * fVar1;
  fVar5 = (float10)*(float *)(fog_config + 0x18) * (float10)_DAT_005ba066;
  fVar1 = (float10)*(float *)(fog_config + 0x1c) * fVar1;
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

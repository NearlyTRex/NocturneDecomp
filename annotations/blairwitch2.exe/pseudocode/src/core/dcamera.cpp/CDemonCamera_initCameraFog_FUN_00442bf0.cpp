// Name: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00442bf0
// Address: 00442bf0
// Address Range: [[00442bf0, 00442cae]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00442bf0(CDemonCamera *this_ptr,SFog *fog_config)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00442bf0(CDemonCamera *this_ptr,SFog *fog_config)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  DAT_00609fa4 = *(uint *)fog_config;
  DAT_00609fa8 = *(uint *)(fog_config + 4);
  DAT_00609fac = *(int *)(fog_config + 8);
  engine_special_cpp_setFogColor_FUN_0055fe90
            (*(uint *)(&DAT_00b6639c + *(int *)fog_config * 4) & 0xff,
             *(uint *)(&DAT_00b6639c + *(int *)(fog_config + 4) * 4) & 0xff,
             *(uint *)(&DAT_00b6639c + DAT_00609fac * 4) & 0xff);
  fVar1 = (float10)_DAT_005ce72e;
  fVar2 = (float10)*(float *)(fog_config + 0xc) * fVar1;
  fVar3 = (float10)*(float *)(fog_config + 0x10) * fVar1;
  fVar4 = (float10)*(float *)(fog_config + 0x14) * fVar1;
  fVar5 = (float10)*(float *)(fog_config + 0x18) * (float10)_DAT_005ce736;
  fVar1 = (float10)*(float *)(fog_config + 0x1c) * fVar1;
  round();
  round();
  round();
  round();
  round();
  _DAT_01466938 = (int)ROUND(fVar2);
  _DAT_0146693c = (int)ROUND(fVar3);
  _DAT_01466940 = (int)ROUND(fVar4);
  _DAT_01466944 = (int)ROUND(fVar5);
  _DAT_01466948 = (int)ROUND(fVar1);
  return;
}

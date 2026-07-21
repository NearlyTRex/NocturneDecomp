// Name: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00447e80
// Address: 00447e80
// Address Range: [[00447e80, 00447f1a]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00447e80(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00447e80(uint param_1,uint param_2,float param_3,float param_4,float param_5)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar2 = (float10)_DAT_0057bb6b;
  uVar1 = 0;
  _DAT_012ceb60 = 0;
  fVar3 = (float10)round();
  fVar4 = (float10)round((float10)param_4 * fVar2);
  fVar5 = (float10)round((float10)param_3 * fVar2);
  fVar2 = (float10)round((float10)param_5 * fVar2);
  DAT_005ad448 = (int)ROUND(fVar4);
  _DAT_012ceb5c = (int)ROUND(fVar5);
  _DAT_012ceb64 = (int)ROUND(fVar2);
  DAT_005ad444 = (int)ROUND(fVar3);
  if (_DAT_012ceb5c == 0) {
    uVar1 = 1;
    _DAT_012ceb58 = DAT_005ad448;
    if (DAT_005ad448 == 0) {
      _DAT_012ceb68 = _DAT_012ceb64;
      DAT_005ad44c = 2;
      return;
    }
  }
  DAT_005ad44c = uVar1;
  return;
}

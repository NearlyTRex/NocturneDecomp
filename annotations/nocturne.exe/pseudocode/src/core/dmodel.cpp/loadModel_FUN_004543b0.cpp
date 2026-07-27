// Name: core_dmodel.cpp_loadModel_FUN_004543b0
// Address: 004543b0
// Address Range: [[004543b0, 00454451]]
// Convention: __cdecl
// Signature: int __cdecl core_dmodel_cpp_loadModel_FUN_004543b0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dmodel_cpp_loadModel_FUN_004543b0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01abb658) {
    iVar2 = 0x1abb65c;
    do {
      iVar1 = _stricmp(iVar2,param_1);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x398;
    } while (iVar3 < _DAT_01abb658);
  }
  if (0xff < _DAT_01abb658) {
    PTR_01cc4800 = "..\\core\\dmodel.cpp";
    INT_01cc4804 = 0x4cd;
    core_main_c_FUN_004c8440("Can't load %s because keyFrame model manager is full.  (Size is %d)",param_1,0x100);
  }
  iVar3 = _DAT_01abb658 * 0x398 + 0x1abb65c;
  _DAT_01abb658 = _DAT_01abb658 + 1;
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650(iVar3,param_1);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00453950(iVar3);
  return iVar3;
}

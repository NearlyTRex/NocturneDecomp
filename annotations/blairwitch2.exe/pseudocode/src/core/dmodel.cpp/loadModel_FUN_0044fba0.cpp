// Name: core_dmodel.cpp_loadModel_FUN_0044fba0
// Address: 0044fba0
// Address Range: [[0044fba0, 0044fc41]]
// Convention: __cdecl
// Signature: CKeyFramedModel * __cdecl core_dmodel_cpp_loadModel_FUN_0044fba0(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CKeyFramedModel * __cdecl core_dmodel_cpp_loadModel_FUN_0044fba0(char *param_1)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01b13a1c) {
    pCVar2 = g_CKeyFramedModelPool;
    do {
      iVar1 = _stricmp((char *)pCVar2,param_1);
      if (iVar1 == 0) {
        return pCVar2;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar3 < _DAT_01b13a1c);
  }
  if (0xff < _DAT_01b13a1c) {
    _DAT_01d046a0 = "..\\core\\dmodel.cpp";
    _DAT_01d046a4 = 0x4cd;
    core_main_c_FUN_004e4500("Can't load %s because keyFrame model manager is full.  (Size is %d)",param_1,0x100);
  }
  pCVar2 = g_CKeyFramedModelPool + _DAT_01b13a1c;
  _DAT_01b13a1c = _DAT_01b13a1c + 1;
  core_dmodel_cpp_CKeyFramedModel_load_FUN_0044dcd0(pCVar2,param_1);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_0044efe0(pCVar2);
  return pCVar2;
}

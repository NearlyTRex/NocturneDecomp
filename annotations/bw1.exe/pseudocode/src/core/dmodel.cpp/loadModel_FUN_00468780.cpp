// Name: core_dmodel.cpp_loadModel_FUN_00468780
// Address: 00468780
// Address Range: [[00468780, 00468821]]
// Convention: __cdecl
// Signature: CKeyFramedModel * __cdecl core_dmodel_cpp_loadModel_FUN_00468780(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CKeyFramedModel * __cdecl core_dmodel_cpp_loadModel_FUN_00468780(char *param_1)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01b2efdc) {
    pCVar2 = g_CKeyFramedModelPool;
    do {
      iVar1 = _stricmp((char *)pCVar2,param_1);
      if (iVar1 == 0) {
        return pCVar2;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar3 < _DAT_01b2efdc);
  }
  if (0xff < _DAT_01b2efdc) {
    _DAT_01d1d400 = "..\\core\\dmodel.cpp";
    _DAT_01d1d404 = 0x4cd;
    core_main_c_FUN_005030e0("Can't load %s because keyFrame model manager is full.  (Size is %d)",param_1,0x100);
  }
  pCVar2 = g_CKeyFramedModelPool + _DAT_01b2efdc;
  _DAT_01b2efdc = _DAT_01b2efdc + 1;
  core_dmodel_cpp_CKeyFramedModel_load_FUN_004668a0(pCVar2,param_1);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00467bc0(pCVar2);
  return pCVar2;
}

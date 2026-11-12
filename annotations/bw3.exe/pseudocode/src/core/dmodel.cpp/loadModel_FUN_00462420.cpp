// Name: core_dmodel.cpp_loadModel_FUN_00462420
// Address: 00462420
// Address Range: [[00462420, 004624c1]]
// Convention: __cdecl
// Signature: CKeyFramedModel * __cdecl core_dmodel_cpp_loadModel_FUN_00462420(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CKeyFramedModel * __cdecl core_dmodel_cpp_loadModel_FUN_00462420(char *filename)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01b4b848) {
    pCVar2 = g_CKeyFramedModelPool;
    do {
      iVar1 = _stricmp(pCVar2->model_filename,filename);
      if (iVar1 == 0) {
        return pCVar2;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar3 < _DAT_01b4b848);
  }
  if (0xff < _DAT_01b4b848) {
    _DAT_01d71de0 = "..\\core\\dmodel.cpp";
    _DAT_01d71de4 = 0x4cd;
    core_main_c_FUN_004e4330("Can't load %s because keyFrame model manager is full.  (Size is %d)",filename,0x100);
  }
  pCVar2 = g_CKeyFramedModelPool + _DAT_01b4b848;
  _DAT_01b4b848 = _DAT_01b4b848 + 1;
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00460550(pCVar2,filename);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00461860(pCVar2);
  return pCVar2;
}

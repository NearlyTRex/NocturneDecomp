// Name: core_dmodel.cpp_loadModel_FUN_004543b0
// Address: 004543b0
// Address Range: [[004543b0, 00454451]]
// Convention: __cdecl
// Signature: CKeyFramedModel * __cdecl core_dmodel_cpp_loadModel_FUN_004543b0(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CKeyFramedModel * __cdecl core_dmodel_cpp_loadModel_FUN_004543b0(char *filename)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01abb658) {
    pCVar2 = g_CKeyFramedModel_ARRAY_01abb65c;
    do {
      iVar1 = _stricmp(pCVar2->model_filename,filename);
      if (iVar1 == 0) {
        return pCVar2;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar3 < _DAT_01abb658);
  }
  if (0xff < _DAT_01abb658) {
    g_CHAR_PTR_01cc4800 = "..\\core\\dmodel.cpp";
    g_INT_01cc4804 = 0x4cd;
    core_main_c_FUN_004c8440("Can't load %s because keyFrame model manager is full.  (Size is %d)",filename,0x100);
  }
  pCVar2 = g_CKeyFramedModel_ARRAY_01abb65c + _DAT_01abb658;
  _DAT_01abb658 = _DAT_01abb658 + 1;
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650(pCVar2,filename);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00453950(pCVar2);
  return pCVar2;
}

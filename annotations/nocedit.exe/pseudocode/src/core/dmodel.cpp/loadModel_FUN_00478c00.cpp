// Name: core_dmodel.cpp_loadModel_FUN_00478c00
// Address: 00478c00
// Address Range: [[00478c00, 00478ca1]]
// Convention: __cdecl
// Signature: CKeyFramedModel * __cdecl core_dmodel_cpp_loadModel_FUN_00478c00(char *filename)

#include "nocturne.h"

CKeyFramedModel * __cdecl core_dmodel_cpp_loadModel_FUN_00478c00(char *filename)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_KeyframeModelCount) {
    pCVar2 = g_CKeyFramedModelPool;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(pCVar2->model_filename,filename);
      if (iVar1 == 0) {
        return pCVar2;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar3 < g_KeyframeModelCount);
  }
  if (0xff < g_KeyframeModelCount) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x4cd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't load %s because keyFrame model manager is full.  (Size is %d)",filename,0x100)
    ;
  }
  pCVar2 = g_CKeyFramedModelPool + g_KeyframeModelCount;
  g_KeyframeModelCount = g_KeyframeModelCount + 1;
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(pCVar2,filename);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00478190(pCVar2);
  return pCVar2;
}

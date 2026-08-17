// Name: core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650
// Address: 00452650
// Address Range: [[00452650, 00452793]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650(CKeyFramedModel *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650(CKeyFramedModel *this_ptr,char *filename)

{
  char cVar1;
  _FILE *file;
  int iVar2;
  CKeyFramedModel *pCVar3;
  char *pcVar4;
  
  core_dmodel_cpp_CKeyFramedModel_FUN_00452f10(this_ptr);
  file = engine_dosio_cpp_getFile_FUN_00456a60("models",filename,"rb");
  pcVar4 = filename;
  pCVar3 = this_ptr;
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 184;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Can't open keyframed model %s",filename);
  }
  do {
    cVar1 = *pcVar4;
    pCVar3->model_filename[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pCVar3->model_filename[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pCVar3 = (CKeyFramedModel *)(pCVar3->model_filename + 2);
  } while (cVar1 != '\0');
  iVar2 = _fgetc(file);
  _ungetc(iVar2,file);
  if (iVar2 == 0x2f) {
    _fclose(file);
    file = engine_dosio_cpp_getFile_FUN_00456a60("models",filename,"rt");
    if (file == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 197;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Can't open keyframed model %s",filename);
    }
    core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00452990(this_ptr,file);
  }
  else {
    core_dmodel_cpp_CKeyFramedModel_readBinaryModel_FUN_004527a0(this_ptr,file);
  }
  _fclose(file);
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_004537d0(this_ptr);
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->texture_count) {
    do {
      pCVar3->texture_list[0].textures[0].base.count = 0;
      iVar2 = iVar2 + 1;
      pCVar3 = (CKeyFramedModel *)(pCVar3->model_filename + 0x48);
    } while (iVar2 < this_ptr->texture_count);
  }
  core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00453620(this_ptr);
  return;
}

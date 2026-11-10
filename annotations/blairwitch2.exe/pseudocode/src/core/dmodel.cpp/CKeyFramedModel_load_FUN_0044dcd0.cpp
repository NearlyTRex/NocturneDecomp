// Name: core_dmodel.cpp_CKeyFramedModel_load_FUN_0044dcd0
// Address: 0044dcd0
// Address Range: [[0044dcd0, 0044de13]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_load_FUN_0044dcd0(CKeyFramedModel *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_load_FUN_0044dcd0(CKeyFramedModel *this_ptr,char *filename)

{
  char cVar1;
  _FILE *file;
  int iVar2;
  CKeyFramedModel *pCVar3;
  char *pcVar4;
  
  core_dmodel_cpp_FUN_0044e590(this_ptr);
  file = engine_dosio_cpp_FUN_00460c70("models",filename,&DAT_005cf58f);
  pcVar4 = filename;
  pCVar3 = this_ptr;
  if (file == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\core\\dmodel.cpp";
    _DAT_01d046a4 = 0xb8;
    core_main_c_FUN_004e4500("Can't open keyframed model %s",filename);
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
    file = engine_dosio_cpp_FUN_00460c70("models",filename,&DAT_005cf5ca);
    if (file == (_FILE *)0x0) {
      _DAT_01d046a0 = "..\\core\\dmodel.cpp";
      _DAT_01d046a4 = 0xc5;
      core_main_c_FUN_004e4500("Can't open keyframed model %s",filename);
    }
    core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_0044e010(this_ptr,file);
  }
  else {
    core_dmodel_cpp_CKeyFramedModel_readBinaryModel_FUN_0044de20(this_ptr,file);
  }
  _fclose(file);
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_0044ee60(this_ptr);
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->texture_count) {
    do {
      *(uint *)&pCVar3->field_0x128 = 0;
      iVar2 = iVar2 + 1;
      pCVar3 = (CKeyFramedModel *)(pCVar3->model_filename + 0x48);
    } while (iVar2 < this_ptr->texture_count);
  }
  core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_0044ecb0(this_ptr);
  return;
}

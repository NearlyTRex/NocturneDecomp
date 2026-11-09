// Name: core_dmodel.cpp_CKeyFramedModel_load_FUN_00460550
// Address: 00460550
// Address Range: [[00460550, 00460693]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_load_FUN_00460550(CKeyFramedModel *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_load_FUN_00460550(CKeyFramedModel *this_ptr,char *filename)

{
  char cVar1;
  _FILE *file;
  int iVar2;
  CKeyFramedModel *pCVar3;
  char *pcVar4;
  
  core_dmodel_cpp_FUN_00460e10(this_ptr);
  file = engine_dosio_cpp_FUN_004659c0("models",filename,&DAT_005bb5c4);
  pcVar4 = filename;
  pCVar3 = this_ptr;
  if (file == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\dmodel.cpp";
    _DAT_01d71de4 = 0xb8;
    core_main_c_FUN_004e4330("Can't open keyframed model %s",filename);
  }
  do {
    cVar1 = *pcVar4;
    *(char *)pCVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pCVar3->field_0x1 = cVar1;
    pcVar4 = pcVar4 + 2;
    pCVar3 = (CKeyFramedModel *)&pCVar3->field_0x2;
  } while (cVar1 != '\0');
  iVar2 = _fgetc(file);
  _ungetc(iVar2,file);
  if (iVar2 == 0x2f) {
    _fclose(file);
    file = engine_dosio_cpp_FUN_004659c0("models",filename,&DAT_005bb5ff);
    if (file == (_FILE *)0x0) {
      _DAT_01d71de0 = "..\\core\\dmodel.cpp";
      _DAT_01d71de4 = 0xc5;
      core_main_c_FUN_004e4330("Can't open keyframed model %s",filename);
    }
    core_dmodel_cpp_FUN_00460890(this_ptr,file);
  }
  else {
    core_dmodel_cpp_FUN_004606a0(this_ptr,file);
  }
  _fclose(file);
  core_dmodel_cpp_FUN_004616e0(this_ptr);
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0x120) {
    do {
      *(uint *)&pCVar3->field_0x128 = 0;
      iVar2 = iVar2 + 1;
      pCVar3 = (CKeyFramedModel *)&pCVar3->field_0x48;
    } while (iVar2 < *(int *)&this_ptr->field_0x120);
  }
  core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00461530(this_ptr);
  return;
}

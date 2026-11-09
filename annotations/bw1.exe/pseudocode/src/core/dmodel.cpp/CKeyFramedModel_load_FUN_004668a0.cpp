// Name: core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0
// Address: 004668a0
// Address Range: [[004668a0, 004669e3]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_load_FUN_004668a0(CKeyFramedModel *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_load_FUN_004668a0(CKeyFramedModel *this_ptr,char *filename)

{
  char cVar1;
  _FILE *file;
  int iVar2;
  CKeyFramedModel *pCVar3;
  char *pcVar4;
  
  core_dmodel_cpp_FUN_00467160(this_ptr);
  file = engine_dosio_cpp_FUN_00479180("models",filename,&DAT_005d92ac);
  pcVar4 = filename;
  pCVar3 = this_ptr;
  if (file == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\core\\dmodel.cpp";
    _DAT_01d1d404 = 0xb8;
    core_main_c_FUN_005030e0("Can't open keyframed model %s",filename);
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
    file = engine_dosio_cpp_FUN_00479180("models",filename,&DAT_005d92e7);
    if (file == (_FILE *)0x0) {
      _DAT_01d1d400 = "..\\core\\dmodel.cpp";
      _DAT_01d1d404 = 0xc5;
      core_main_c_FUN_005030e0("Can't open keyframed model %s",filename);
    }
    core_dmodel_cpp_FUN_00466be0(this_ptr,file);
  }
  else {
    core_dmodel_cpp_FUN_004669f0(this_ptr,file);
  }
  _fclose(file);
  core_dmodel_cpp_FUN_00467a30(this_ptr);
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0x120) {
    do {
      *(uint *)&pCVar3->field_0x128 = 0;
      iVar2 = iVar2 + 1;
      pCVar3 = (CKeyFramedModel *)&pCVar3->field_0x48;
    } while (iVar2 < *(int *)&this_ptr->field_0x120);
  }
  core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00467880(this_ptr);
  return;
}

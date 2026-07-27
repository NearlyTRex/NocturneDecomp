// Name: core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650
// Address: 00452650
// Address Range: [[00452650, 00452793]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650(char *param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  core_dmodel_cpp_FUN_00452f10(param_1);
  iVar2 = engine_dosio_cpp_getFile_FUN_00456a60("models",param_2,"rb");
  pcVar4 = param_2;
  pcVar5 = param_1;
  if (iVar2 == 0) {
    PTR_01cc4800 = "..\\core\\dmodel.cpp";
    INT_01cc4804 = 0xb8;
    core_main_c_FUN_004c8440("Can't open keyframed model %s",param_2);
  }
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar5[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar3 = _fgetc(iVar2);
  _ungetc(iVar3,iVar2);
  if (iVar3 == 0x2f) {
    _fclose(iVar2);
    iVar2 = engine_dosio_cpp_getFile_FUN_00456a60("models",param_2,"rt");
    if (iVar2 == 0) {
      PTR_01cc4800 = "..\\core\\dmodel.cpp";
      INT_01cc4804 = 0xc5;
      core_main_c_FUN_004c8440("Can't open keyframed model %s",param_2);
    }
    core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00452990(param_1,iVar2);
  }
  else {
    core_dmodel_cpp_CKeyFramedModel_readBinaryModel_FUN_004527a0(param_1,iVar2);
  }
  _fclose(iVar2);
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_004537d0(param_1);
  iVar2 = 0;
  pcVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x120)) {
    do {
      pcVar4[0x128] = '\0';
      pcVar4[0x129] = '\0';
      pcVar4[0x12a] = '\0';
      pcVar4[299] = '\0';
      iVar2 = iVar2 + 1;
      pcVar4 = pcVar4 + 0x48;
    } while (iVar2 < *(int *)(param_1 + 0x120));
  }
  core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00453620(param_1);
  return;
}

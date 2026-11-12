// Name: engine_model.c_loadModelFile_FUN_00500720
// Address: 00500720
// Address Range: [[00500720, 005008eb]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_model_c_loadModelFile_FUN_00500720(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_model_c_loadModelFile_FUN_00500720(char *param_1)

{
  ulong size;
  _FILE *file;
  SMRGLHeaderExtended *pSVar1;
  SIZE_T SVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char local_5c [80];
  
  pcVar5 = param_1;
  do {
    pcVar4 = pcVar5;
    if (*pcVar5 == '.') goto LAB_00500746;
    if (*pcVar5 == '\0') break;
    pcVar4 = pcVar5 + 1;
    if (*pcVar4 == '.') goto LAB_00500746;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_00500746:
  if (pcVar4 != (char *)0x0) {
    iVar3 = toupper((uint)(byte)pcVar4[1]);
    if (iVar3 == 0x54) {
      pSVar1 = engine_boss_c_modelStructNotSupported2_FUN_0041a4b0(param_1);
      return pSVar1;
    }
  }
  size = engine_dosio_cpp_getFileSize_FUN_00460aa0("models",param_1);
  if (size == 0) {
    _sprintf(local_5c,"Unable to get file size: %s");
    _DAT_01d046a0 = "..\\engine\\model.c";
    _DAT_01d046a4 = 0xf0;
    core_main_c_FUN_004e4500(local_5c);
  }
  file = engine_dosio_cpp_FUN_00460c70("models",param_1,&DAT_005def95);
  if (file == (_FILE *)0x0) {
    _sprintf(local_5c,"Unable to open model: %s");
    _DAT_01d046a4 = 0xf5;
    _DAT_01d046a0 = "..\\engine\\model.c";
    core_main_c_FUN_004e4500(local_5c);
  }
  pSVar1 = (SMRGLHeaderExtended *)malloc(size);
  if (pSVar1 == (SMRGLHeaderExtended *)0x0) {
    _sprintf(local_5c,"Out of model memory: %s");
    _DAT_01d046a0 = "..\\engine\\model.c";
    _DAT_01d046a4 = 0x100;
    core_main_c_FUN_004e4500(local_5c);
  }
  SVar2 = _fread(pSVar1,1,size,file);
  if (SVar2 != size) {
    _sprintf(local_5c,"Model file read error: %s");
    _DAT_01d046a4 = 0x107;
    _DAT_01d046a0 = "..\\engine\\model.c";
    core_main_c_FUN_004e4500(local_5c);
  }
  _fclose(file);
  iVar3 = (pSVar1->base).type;
  if ((iVar3 != 0x14) && (iVar3 != 0x20)) {
    _sprintf(local_5c,"Invalid model: %s");
    _DAT_01d046a0 = "..\\engine\\model.c";
    _DAT_01d046a4 = 0x10e;
    core_main_c_FUN_004e4500(local_5c);
  }
  return pSVar1;
}

// Name: engine_model.c_loadModelFile_FUN_0051f6d0
// Address: 0051f6d0
// Address Range: [[0051f6d0, 0051f89b]]
// Convention: __cdecl
// Signature: int * __cdecl engine_model_c_loadModelFile_FUN_0051f6d0(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl engine_model_c_loadModelFile_FUN_0051f6d0(char *param_1)

{
  ulong size;
  _FILE *p_Var1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte local_5c [80];
  
  pcVar6 = param_1;
  do {
    pcVar5 = pcVar6;
    if (*pcVar6 == '.') goto LAB_0051f6f6;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == '.') goto LAB_0051f6f6;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_0051f6f6:
  if (pcVar5 != (char *)0x0) {
    iVar4 = toupper((uint)(byte)pcVar5[1]);
    if (iVar4 == 0x54) {
      piVar2 = (int *)engine_boss_c_modelStructNotSupported2_FUN_0041d920(param_1);
      return piVar2;
    }
  }
  size = engine_dosio_cpp_getFileSize_FUN_00478fb0("models",param_1);
  if (size == 0) {
    FUN_005bfb40(local_5c,"Unable to get file size: %s",param_1);
    _DAT_01d1d400 = "..\\engine\\model.c";
    _DAT_01d1d404 = 0xf0;
    core_main_c_FUN_005030e0(local_5c);
  }
  p_Var1 = engine_dosio_cpp_FUN_00479180("models",param_1,&DAT_005e9fe2);
  if (p_Var1 == (_FILE *)0x0) {
    FUN_005bfb40(local_5c,"Unable to open model: %s",param_1);
    _DAT_01d1d404 = 0xf5;
    _DAT_01d1d400 = "..\\engine\\model.c";
    core_main_c_FUN_005030e0(local_5c);
  }
  piVar2 = FUN_005c08d0(size);
  if (piVar2 == (int *)0x0) {
    FUN_005bfb40(local_5c,"Out of model memory: %s",param_1);
    _DAT_01d1d400 = "..\\engine\\model.c";
    _DAT_01d1d404 = 0x100;
    core_main_c_FUN_005030e0(local_5c);
  }
  uVar3 = _fread(piVar2,1,size,p_Var1);
  if (uVar3 != size) {
    FUN_005bfb40(local_5c,"Model file read error: %s",param_1);
    _DAT_01d1d404 = 0x107;
    _DAT_01d1d400 = "..\\engine\\model.c";
    core_main_c_FUN_005030e0(local_5c);
  }
  _fclose(p_Var1);
  if ((*piVar2 != 0x14) && (*piVar2 != 0x20)) {
    FUN_005bfb40(local_5c,"Invalid model: %s",param_1);
    _DAT_01d1d400 = "..\\engine\\model.c";
    _DAT_01d1d404 = 0x10e;
    core_main_c_FUN_005030e0(local_5c);
  }
  return piVar2;
}

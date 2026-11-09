// Name: engine_model.c_FUN_005011a0
// Address: 005011a0
// Address Range: [[005011a0, 005012d9]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_model_c_FUN_005011a0(char *filename,int model_size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_model_c_FUN_005011a0(char *filename,int model_size)

{
  _FILE *p_Var1;
  SMRGLHeaderExtended *pSVar2;
  int iVar3;
  byte local_60 [80];
  
  p_Var1 = engine_dosio_cpp_FUN_00460c70("models",filename,&DAT_005df0cd);
  if (p_Var1 == (_FILE *)0x0) {
    FUN_005b7790(local_60,"Unable to open model: %s",filename);
    _DAT_01d046a0 = "..\\engine\\model.c";
    _DAT_01d046a4 = 0x2e4;
    core_main_c_FUN_004e4500(local_60);
  }
  pSVar2 = FUN_005b8580(model_size + 4);
  if (pSVar2 == (SMRGLHeaderExtended *)0x0) {
    FUN_005b7790(local_60,"Out of partial model mem : %s",filename);
    _DAT_01d046a4 = 0x2ef;
    _DAT_01d046a0 = "..\\engine\\model.c";
    core_main_c_FUN_004e4500(local_60);
  }
  iVar3 = _fread(pSVar2,1,model_size,p_Var1);
  if (iVar3 != model_size) {
    _DAT_01d046a0 = "..\\engine\\model.c";
    _DAT_01d046a4 = 0x2f4;
    core_main_c_FUN_004e4500("Model read hose");
  }
  _fclose(p_Var1);
  if ((*pSVar2 != (SMRGLHeaderExtended)0x14) && (*pSVar2 != (SMRGLHeaderExtended)0x20)) {
    _DAT_01d046a0 = "..\\engine\\model.c";
    _DAT_01d046a4 = 0x2f8;
    core_main_c_FUN_004e4500("Bad model!");
    *(uint *)(pSVar2 + model_size) = 0;
    return pSVar2;
  }
  *(uint *)(pSVar2 + model_size) = 0;
  return pSVar2;
}

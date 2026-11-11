// Name: engine_model.c_FUN_005011a0
// Address: 005011a0
// Address Range: [[005011a0, 005012d9]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_model_c_FUN_005011a0(char *filename,int model_size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_model_c_FUN_005011a0(char *filename,int model_size)

{
  char cVar1;
  _FILE *p_Var2;
  SMRGLHeaderExtended *pSVar3;
  int iVar4;
  char local_60 [80];
  
  p_Var2 = engine_dosio_cpp_FUN_00460c70("models",filename,&DAT_005df0cd);
  if (p_Var2 == (_FILE *)0x0) {
    _sprintf(local_60,"Unable to open model: %s");
    _DAT_01d046a0 = "..\\engine\\model.c";
    _DAT_01d046a4 = 0x2e4;
    core_main_c_FUN_004e4500(local_60);
  }
  pSVar3 = (SMRGLHeaderExtended *)malloc(model_size + 4);
  if (pSVar3 == (SMRGLHeaderExtended *)0x0) {
    _sprintf(local_60,"Out of partial model mem : %s");
    _DAT_01d046a4 = 0x2ef;
    _DAT_01d046a0 = "..\\engine\\model.c";
    core_main_c_FUN_004e4500(local_60);
  }
  iVar4 = _fread(pSVar3,1,model_size,p_Var2);
  if (iVar4 != model_size) {
    _DAT_01d046a0 = "..\\engine\\model.c";
    _DAT_01d046a4 = 0x2f4;
    core_main_c_FUN_004e4500("Model read hose");
  }
  _fclose(p_Var2);
  cVar1 = (char)(pSVar3->base).type;
  if ((cVar1 != '\x14') && (cVar1 != ' ')) {
    _DAT_01d046a0 = "..\\engine\\model.c";
    _DAT_01d046a4 = 0x2f8;
    core_main_c_FUN_004e4500("Bad model!");
    *(uint *)((int)&(pSVar3->base).type + model_size) = 0;
    return pSVar3;
  }
  *(uint *)((int)&(pSVar3->base).type + model_size) = 0;
  return pSVar3;
}

// Name: engine_model.c_FUN_004f89a0
// Address: 004f89a0
// Address Range: [[004f89a0, 004f8ad9]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_model_c_FUN_004f89a0(char *filename,int model_size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_model_c_FUN_004f89a0(char *filename,int model_size)

{
  _FILE *p_Var1;
  SMRGLHeaderExtended *pSVar2;
  int iVar3;
  char local_60 [80];
  
  p_Var1 = engine_dosio_cpp_FUN_004659c0("models",filename,&DAT_005c90c0);
  if (p_Var1 == (_FILE *)0x0) {
    _sprintf(local_60,"Unable to open model: %s");
    _DAT_01d71de0 = "..\\engine\\model.c";
    _DAT_01d71de4 = 0x2e4;
    core_main_c_FUN_004e4330(local_60);
  }
  pSVar2 = FUN_005a3650(model_size + 4);
  if (pSVar2 == (SMRGLHeaderExtended *)0x0) {
    _sprintf(local_60,"Out of partial model mem : %s");
    _DAT_01d71de4 = 0x2ef;
    _DAT_01d71de0 = "..\\engine\\model.c";
    core_main_c_FUN_004e4330(local_60);
  }
  iVar3 = _fread(pSVar2,1,model_size,p_Var1);
  if (iVar3 != model_size) {
    _DAT_01d71de0 = "..\\engine\\model.c";
    _DAT_01d71de4 = 0x2f4;
    core_main_c_FUN_004e4330("Model read hose");
  }
  _fclose(p_Var1);
  if ((*pSVar2 != (SMRGLHeaderExtended)0x14) && (*pSVar2 != (SMRGLHeaderExtended)0x20)) {
    _DAT_01d71de0 = "..\\engine\\model.c";
    _DAT_01d71de4 = 0x2f8;
    core_main_c_FUN_004e4330("Bad model!");
    *(uint *)(pSVar2 + model_size) = 0;
    return pSVar2;
  }
  *(uint *)(pSVar2 + model_size) = 0;
  return pSVar2;
}

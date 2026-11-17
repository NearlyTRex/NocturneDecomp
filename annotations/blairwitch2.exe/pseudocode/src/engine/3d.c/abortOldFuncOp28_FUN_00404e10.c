// Name: engine_3d.c_abortOldFuncOp28_FUN_00404e10
// Address: 00404e10
// Address Range: [[00404e10, 00404e57]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_abortOldFuncOp28_FUN_00404e10(SMRGLHeaderExtended *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_abortOldFuncOp28_FUN_00404e10(SMRGLHeaderExtended *primitive)

{
  char acStack_54 [80];
  
  _sprintf(acStack_54,"Old func : %d");
  g_INT_01d046a4 = 0xe2;
  g_CHAR_PTR_01d046a0 = "..\\engine\\3d.c";
  core_main_c_displayErrorAndQuit_FUN_004e4500(acStack_54);
  return (SMRGLHeaderExtended *)&g_INT_0070ca84;
}

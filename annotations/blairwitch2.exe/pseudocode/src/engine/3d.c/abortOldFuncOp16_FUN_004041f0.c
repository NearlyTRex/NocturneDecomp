// Name: engine_3d.c_abortOldFuncOp16_FUN_004041f0
// Address: 004041f0
// Address Range: [[004041f0, 00404237]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_abortOldFuncOp16_FUN_004041f0(SMRGLHeaderExtended *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_abortOldFuncOp16_FUN_004041f0(SMRGLHeaderExtended *primitive)

{
  char acStack_54 [80];
  
  _sprintf(acStack_54,"Old func : %d");
  g_INT_01d046a4 = 0xe2;
  g_CHAR_PTR_01d046a0 = "..\\engine\\3d.c";
  core_main_c_displayErrorAndQuit_FUN_004e4500(acStack_54);
  return (SMRGLHeaderExtended *)&g_INT_0070ca84;
}

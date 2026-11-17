// Name: engine_3d.c_abortOldFuncOp9_FUN_00403e20
// Address: 00403e20
// Address Range: [[00403e20, 00403e45]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_abortOldFuncOp9_FUN_00403e20(SMRGLHeaderExtended *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_abortOldFuncOp9_FUN_00403e20(SMRGLHeaderExtended *primitive)

{
  g_CHAR_PTR_01d046a0 = "..\\engine\\3d.c";
  g_INT_01d046a4 = 0x343;
  core_main_c_displayErrorAndQuit_FUN_004e4500("Old func");
  return (SMRGLHeaderExtended *)0x0;
}

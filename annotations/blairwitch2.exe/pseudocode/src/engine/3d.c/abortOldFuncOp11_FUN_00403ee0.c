// Name: engine_3d.c_abortOldFuncOp11_FUN_00403ee0
// Address: 00403ee0
// Address Range: [[00403ee0, 00403f05]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_abortOldFuncOp11_FUN_00403ee0(SMRGLHeaderExtended *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_abortOldFuncOp11_FUN_00403ee0(SMRGLHeaderExtended *primitive)

{
  g_CHAR_PTR_01d046a0 = "..\\engine\\3d.c";
  g_INT_01d046a4 = 0x36f;
  core_main_c_displayErrorAndQuit_FUN_004e4500("Old func");
  return (SMRGLHeaderExtended *)0x0;
}

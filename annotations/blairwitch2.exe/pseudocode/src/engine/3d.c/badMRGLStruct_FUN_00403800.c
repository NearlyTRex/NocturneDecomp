// Name: engine_3d.c_badMRGLStruct_FUN_00403800
// Address: 00403800
// Address Range: [[00403800, 00403827]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_badMRGLStruct_FUN_00403800(SMRGLHeaderExtended *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_badMRGLStruct_FUN_00403800(SMRGLHeaderExtended *prim)

{
  g_CHAR_PTR_01d046a0 = "..\\engine\\3d.c";
  g_INT_01d046a4 = 0x122;
  core_main_c_displayErrorAndQuit_FUN_004e4500("Bad MRGL struct");
  return prim;
}

// Name: engine_3d.c_badMRGLStruct_FUN_004037b0
// Address: 004037b0
// Address Range: [[004037b0, 004037d7]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_badMRGLStruct_FUN_004037b0(SMRGLHeaderExtended *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_badMRGLStruct_FUN_004037b0(SMRGLHeaderExtended *prim)

{
  g_CHAR_PTR_01d71de0 = "..\\engine\\3d.c";
  g_INT_01d71de4 = 0x11b;
  core_main_c_displayErrorAndQuit_FUN_004e4330("Bad MRGL struct");
  return prim;
}

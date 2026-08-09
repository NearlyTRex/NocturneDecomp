// Name: engine_3d.c_abortRemovedMRGLHandler_FUN_00404430
// Address: 00404430
// Address Range: [[00404430, 00404477]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_abortRemovedMRGLHandler_FUN_00404430(SMRGLHeaderExtended *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_abortRemovedMRGLHandler_FUN_00404430(SMRGLHeaderExtended *primitive)

{
  char local_54 [80];
  
  _sprintf(local_54,"Old func : %d",(primitive->base).type);
  g_CurrentLineNumber = 217;
  g_CurrentFilename = "..\\engine\\3d.c";
  core_main_c_displayErrorAndQuit_FUN_004c8440(local_54);
  return (SMRGLHeaderExtended *)&DAT_006b0288;
}

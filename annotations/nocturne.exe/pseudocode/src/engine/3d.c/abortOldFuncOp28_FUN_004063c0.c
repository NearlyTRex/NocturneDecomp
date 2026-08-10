// Name: engine_3d.c_abortOldFuncOp28_FUN_004063c0
// Address: 004063c0
// Address Range: [[004063c0, 00406407]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_abortOldFuncOp28_FUN_004063c0(SMRGLHeaderExtended *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_abortOldFuncOp28_FUN_004063c0(SMRGLHeaderExtended *primitive)

{
  char local_54 [80];
  
  _sprintf(local_54,"Old func : %d",(primitive->base).type);
  g_CurrentLineNumber = 217;
  g_CurrentFilename = "..\\engine\\3d.c";
  core_main_c_displayErrorAndQuit_FUN_004c8440(local_54);
  return (SMRGLHeaderExtended *)&DAT_006b0288;
}

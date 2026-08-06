// Name: engine_3d.c_oldFunction5_FUN_004054f0
// Address: 004054f0
// Address Range: [[004054f0, 00405537]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction5_FUN_004054f0(SMRGLHeaderExtended *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction5_FUN_004054f0(SMRGLHeaderExtended *primitive)

{
  char local_54 [80];
  
  _sprintf(local_54,"Old func : %d",(primitive->base).type);
  g_CurrentLineNumber = 217;
  g_CurrentFilename = "..\\engine\\3d.c";
  core_main_c_displayErrorAndQuit_FUN_004c8440(local_54);
  return (SMRGLHeaderExtended *)&DAT_006b0288;
}

// Name: engine_3d.c_oldFunction8_FUN_004063c0
// Address: 004063c0
// Address Range: [[004063c0, 00406407]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction8_FUN_004063c0(SMRGLHeaderExtended *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction8_FUN_004063c0(SMRGLHeaderExtended *primitive)

{
  char local_54 [80];
  
  _sprintf(local_54,"Old func : %d");
  g_INT_01cc4804 = 0xd9;
  g_CHAR_PTR_01cc4800 = "..\\engine\\3d.c";
  core_main_c_FUN_004c8440(local_54);
  return (SMRGLHeaderExtended *)&DAT_006b0288;
}

// Name: engine_3d.c_FUN_00404430
// Address: 00404430
// Address Range: [[00404430, 00404477]]
// Convention: __cdecl
// Signature: char * __cdecl engine_3d_c_FUN_00404430(void)

#include "nocturne.h"

char * __cdecl engine_3d_c_FUN_00404430(void)

{
  uint *in_stack_00000004;
  char local_54 [80];
  
  _sprintf(local_54,"Old func : %d",*in_stack_00000004);
  g_CurrentLineNumber = 217;
  g_CurrentFilename = "..\\engine\\3d.c";
  core_main_c_displayErrorAndQuit_FUN_004c8440(local_54);
  return (char *)&DAT_006b0288;
}

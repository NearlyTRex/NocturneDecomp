// Name: engine_3d.c_FUN_00404430
// Address: 00404430
// Address Range: [[00404430, 00404477]]
// Convention: unknown
// Signature: undefined4 * engine_3d_c_FUN_00404430(void)

#include "nocturne.h"

uint * engine_3d_c_FUN_00404430(void)

{
  char local_54 [80];
  
  _sprintf(local_54,"Old func : %d");
  g_INT_01cc4804 = 0xd9;
  g_CHAR_PTR_01cc4800 = "..\\engine\\3d.c";
  core_main_c_FUN_004c8440(local_54);
  return &DAT_006b0288;
}

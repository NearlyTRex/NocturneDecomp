// Name: shape_edittool.cpp_FUN_004943a0
// Address: 004943a0
// Address Range: [[004943a0, 004943fb]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_004943a0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_004943a0(uint param_1,uint param_2)

{
  char local_408 [1024];
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  _vsprintf(local_408,param_2,&local_8);
  local_8 = (byte *)0x0;
  shape_edittool_cpp_drawSingleButtonPrompt_FUN_00493d40("Error",local_408,_DAT_01c3f564);
  return;
}

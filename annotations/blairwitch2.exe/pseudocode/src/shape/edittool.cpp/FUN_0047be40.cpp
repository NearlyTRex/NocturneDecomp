// Name: shape_edittool.cpp_FUN_0047be40
// Address: 0047be40
// Address Range: [[0047be40, 0047be83]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047be40(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047be40(uint param_1,uint param_2)

{
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  _vsprintf(0x1c22df0,param_2,&local_8);
  local_8 = (byte *)0x0;
  shape_edittool_cpp_drawSingleButtonPrompt_FUN_0047b800
            ("Error",(char *)0x1c22df0,_DAT_01c263a4);
  return;
}

// Name: engine_2d.c_drawTextCenteredAtColor_FUN_00402c20
// Address: 00402c20
// Address Range: [[00402c20, 00402c54]]
// Convention: unknown
// Signature: void engine_2d_c_drawTextCenteredAtColor_FUN_00402c20(char *param_1,int param_2,int param_3)

#include "nocturne.h"

void engine_2d_c_drawTextCenteredAtColor_FUN_00402c20(char *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_00401ed0(param_1);
  engine_2d_c_drawTextColor_FUN_00402a60(param_1,param_2 - (iVar1 + -1) / 2,param_3);
  return;
}

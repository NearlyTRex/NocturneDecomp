// Name: core_msnedit.cpp_FUN_00536cd0
// Address: 00536cd0
// Address Range: [[00536cd0, 00536e11]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00536cd0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_msnedit.cpp_FUN_00536cd0(uint sSomeString, uint param_2,
   uint param_3, uint param_4, uint param_5) */

uint
core_msnedit_cpp_FUN_00536cd0
          (uint param_1,uint param_2,int unaff_EBX,uint param_4,char *param_5,
          int param_6,int param_7,int param_8)

{
  int y1;
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int unaff_ESI;
  int x1;
  int unaff_EDI;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(param_5);
  y1 = param_7 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0(param_5,param_6,param_7);
  if (-1 < param_6 + iVar1) {
    param_7 = param_7 + -2;
    x1 = param_6 + -2;
    g_ActiveRenderColor = param_6 + iVar1;
    engine_2d_c_drawLine_FUN_004011b0(x1,param_7,unaff_EBP,param_7);
    engine_2d_c_drawLine_FUN_004011b0(x1,y1,unaff_EDI,y1);
    engine_2d_c_drawLine_FUN_004011b0(x1,param_7,x1,y1);
    engine_2d_c_drawLine_FUN_004011b0(unaff_EBX,param_7,unaff_EBX,y1);
  }
  uVar2 = g_MouseButtonFlags & 1;
  if (((param_8 == 0) && (0.0 < _DAT_02f7c630)) && (_DAT_02f7c630 < (float)0.29999999999999999)) {
    uVar2 = 0;
  }
  if ((unaff_ESI != 0) && (uVar2 != 0)) {
    if (param_8 != 0) {
      g_MouseButtonFlags = 0;
    }
    return 1;
  }
  return 0;
}

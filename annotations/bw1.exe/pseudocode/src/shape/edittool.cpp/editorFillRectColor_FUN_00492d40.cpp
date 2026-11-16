// Name: shape_edittool.cpp_editorFillRectColor_FUN_00492d40
// Address: 00492d40
// Address Range: [[00492d40, 00492dd4]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorFillRectColor_FUN_00492d40(int x1,int y1,int x2,int y2,int color)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00492d51) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_editorFillRectColor_FUN_00492d40(int x1,int y1,int x2,int y2,int color)

{
  int iVar1;
  
  if (_DAT_01c3f544 == 0) {
    engine_2d_c_fillRectColor_FUN_004031c0(x1,y1,x2,y2,color);
    return;
  }
  iVar1 = (color & 0xffU) * 3;
  engine_mini3d_cpp_setColor_FUN_00517d50
            ((uint)(byte)(&DAT_01c4e9fa)[iVar1] |
             (uint)(byte)(&DAT_01c4e9f8)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c4e9f9)[iVar1] << 8);
  engine_mini3d_cpp_fillRect_FUN_00518010(x1,y1,x2,y2);
  return;
}

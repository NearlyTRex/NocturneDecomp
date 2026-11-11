// Name: unkaddr_0059aa80.cpp_CExamplePuzzle_render_FUN_0059ada0
// Address: 0059ada0
// Address Range: [[0059ada0, 0059ade4]]
// Convention: __cdecl
// Signature: void __cdecl unkaddr_0059aa80_cpp_CExamplePuzzle_render_FUN_0059ada0(CExamplePuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl unkaddr_0059aa80_cpp_CExamplePuzzle_render_FUN_0059ada0(CExamplePuzzle *this_ptr)

{
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  _DAT_01c35e60 = 0xff;
  engine_2d_c_drawRect_FUN_00403170
            (this_ptr->rect_left,this_ptr->rect_top,this_ptr->rect_right,this_ptr->rect_bottom);
  shape_edittool_cpp_FUN_0047f210(g_CEditorToolsPtr,0);
  return;
}

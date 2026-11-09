// Name: unkaddr_0059aa80.cpp_FUN_0059ada0
// Address: 0059ada0
// Address Range: [[0059ada0, 0059ade4]]
// Convention: unknown
// Signature: void unkaddr_0059aa80_cpp_FUN_0059ada0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkaddr_0059aa80_cpp_FUN_0059ada0(int param_1)

{
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  _DAT_01c35e60 = 0xff;
  engine_2d_c_drawRect_FUN_00403170
            (*(int *)(param_1 + 4),*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),
             *(int *)(param_1 + 0x10));
  shape_edittool_cpp_FUN_0047f210(g_CEditorToolsPtr,0);
  return;
}

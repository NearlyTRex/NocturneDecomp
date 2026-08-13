// Name: engine_matrix.c_popViewport_FUN_004ce920
// Address: 004ce920
// Address Range: [[004ce920, 004cea4f]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_popViewport_FUN_004ce920(CDemonRenderer *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_popViewport_FUN_004ce920(CDemonRenderer *this_ptr)

{
  _DAT_01cc53d0 = _DAT_01cc53d0 + -1;
  if (_DAT_01cc53d0 < 0) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 1385;
    core_main_c_displayErrorAndQuit_FUN_004c8440("3D Window unbalance");
  }
  g_CameraOriginX = *(int *)(_DAT_01cc53d0 * 4 + 0x1cc549c);
  g_CameraOriginY = *(int *)(_DAT_01cc53d0 * 4 + 0x1cc54c4);
  g_CameraOriginZ = *(int *)(_DAT_01cc53d0 * 4 + 0x1cc54ec);
  _DAT_01c039d0 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc5514);
  _DAT_01c039d4 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc553c);
  _DAT_01c039d8 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc5564);
  _DAT_01c039dc = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc558c);
  _DAT_01c039e0 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc55b4);
  _DAT_01c039e4 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc55dc);
  g_Projection.half_width_fixed = *(int *)(_DAT_01cc53d0 * 4 + 0x1cc53d4);
  g_Projection.neg_half_height_fixed = *(int *)(_DAT_01cc53d0 * 4 + 0x1cc53fc);
  g_Projection.center_x_fixed = *(int *)(_DAT_01cc53d0 * 4 + 0x1cc5424);
  g_Projection.center_y_fixed = *(int *)(_DAT_01cc53d0 * 4 + 0x1cc544c);
  DAT_005b7648 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc5474);
  g_ClipLeft = *(int *)(_DAT_01cc53d0 * 4 + 0x1cc5604);
  g_ClipRight = *(int *)(_DAT_01cc53d0 * 4 + 0x1cc562c);
  g_ClipTop = *(int *)(_DAT_01cc53d0 * 4 + 0x1cc5654);
  g_ClipBottom = *(int *)(_DAT_01cc53d0 * 4 + 0x1cc567c);
  return;
}

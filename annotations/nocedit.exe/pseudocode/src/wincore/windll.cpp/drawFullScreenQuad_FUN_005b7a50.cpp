// Name: wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50
// Address: 005b7a50
// Address Range: [[005b7a50, 005b7b00]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50(int color)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_drawFullScreenQuad_FUN_005b7a50(int color)

{
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  SRenderVertex SStack_bc;
  int iStack_84;
  int local_7c;
  int iStack_78;
  int iStack_54;
  int local_4c;
  int iStack_48;
  int iStack_24;
  int local_1c;
  int iStack_18;
  
  crt_memory_c_memset_FUN_005fde40(&stack0xffffff40,0,0xc0);
  SStack_bc.projected_vertex.screen_x = g_ClipLeft << 0x10;
  SStack_bc.projected_vertex.screen_y = g_ClipTop << 0x10;
  local_7c = g_ClipRight << 0x10;
  iStack_48 = g_ClipBottom << 0x10;
  SStack_bc.projected_vertex.transformed_z = g_SystemMemorySize;
  iStack_84 = g_SystemMemorySize;
  iStack_54 = g_SystemMemorySize;
  iStack_24 = g_SystemMemorySize;
  g_ActiveRenderColor = in_stack_00000008;
  iStack_78 = SStack_bc.projected_vertex.screen_y;
  local_4c = local_7c;
  local_1c = SStack_bc.projected_vertex.screen_x;
  iStack_18 = iStack_48;
  wincore_windll_cpp_drawPolygon_FUN_005b75e0(&SStack_bc,4,0x10);
  return 1;
}

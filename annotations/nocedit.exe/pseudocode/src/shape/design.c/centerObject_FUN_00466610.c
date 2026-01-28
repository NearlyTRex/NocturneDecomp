// Name: shape_design.c_centerObject_FUN_00466610
// Address: 00466610
// Address Range: [[00466610, 00466a27]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_centerObject_FUN_00466610(void)

#include "nocturne.h"

void __cdecl shape_design_c_centerObject_FUN_00466610(void)

{
  int iVar1;
  uint uVar2;
  char local_b8 [80];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  int local_20;
  int local_1c;
  int local_14;
  
  local_68 = 999999.9;
  local_60 = 999999.9;
  local_58 = 999999.9;
  local_38 = -999999.9;
  local_30 = -999999.9;
  local_28 = -999999.9;
  for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
    local_48 = (double)g_LoadedVertices[local_1c].vertex.x;
    local_40 = (double)g_LoadedVertices[local_1c].vertex.y;
    local_50 = (double)g_LoadedVertices[local_1c].vertex.z;
    if (local_38 < local_48) {
      local_38 = local_48;
    }
    if (local_48 < local_68) {
      local_68 = local_48;
    }
    if (local_30 < local_40) {
      local_30 = local_40;
    }
    if (local_40 < local_60) {
      local_60 = local_40;
    }
    if (local_28 < local_50) {
      local_28 = local_50;
    }
    if (local_50 < local_58) {
      local_58 = local_50;
    }
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  iVar1 = engine_2d_c_getInputWithPrompt_FUN_004032c0
                    (local_b8,0x14,0,0,"Press <Enter> or enter min,max points : ");
  if (iVar1 == 0x1b) {
    return;
  }
  local_1c = crt_stdio_c_sscanf_FUN_0060013c(local_b8,"%d,%d",&local_14,&local_20);
  if (0 < local_1c) {
    if (local_1c != 2) {
      engine_2d_c_drawText_FUN_00401fd0("Need two points.",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      return;
    }
    if ((((local_14 < 0) || (local_20 < 0)) || (g_VertexCount + -1 < local_14)) ||
       (g_VertexCount + -1 < local_20)) {
      engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      return;
    }
    engine_2d_c_drawText_FUN_00401fd0("Which axis to center - X, Y, or Z? : ",0,0x16);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    uVar2 = crt_ctype_c_toupper_FUN_005ff9e0(uVar2 & 0xff);
    if (uVar2 < 0x59) {
      if (uVar2 == 0x58) {
        local_38 = (double)g_LoadedVertices[local_20].vertex.x;
        local_68 = (double)g_LoadedVertices[local_14].vertex.x;
      }
    }
    else if (uVar2 < 0x5a) {
      local_30 = (double)g_LoadedVertices[local_20].vertex.y;
      local_60 = (double)g_LoadedVertices[local_14].vertex.y;
    }
    else if (uVar2 == 0x5a) {
      local_28 = (double)g_LoadedVertices[local_20].vertex.z;
      local_58 = (double)g_LoadedVertices[local_14].vertex.z;
    }
  }
  for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
  }
  for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
    g_LoadedVertices[local_1c].vertex.x =
         (float)((double)g_LoadedVertices[local_1c].vertex.x -
                ((local_38 - local_68) * 0.5 + local_68));
    g_LoadedVertices[local_1c].vertex.y =
         (float)((double)g_LoadedVertices[local_1c].vertex.y -
                ((local_30 - local_60) * 0.5 + local_60));
    g_LoadedVertices[local_1c].vertex.z =
         (float)((double)g_LoadedVertices[local_1c].vertex.z -
                ((local_28 - local_58) * 0.5 + local_58));
  }
  return;
}

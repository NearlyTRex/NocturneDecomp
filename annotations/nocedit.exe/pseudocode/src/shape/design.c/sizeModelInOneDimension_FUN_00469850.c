// Name: shape_design.c_sizeModelInOneDimension_FUN_00469850
// Address: 00469850
// Address Range: [[00469850, 00469bc1]]
// Convention: __cdecl
// Signature: void shape_design.c_sizeModelInOneDimension_FUN_00469850(void)

#include "nocturne.h"

void __cdecl shape_design_c_sizeModelInOneDimension_FUN_00469850(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_f4 [80];
  char local_a4 [80];
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20 [4];
  
  bVar5 = 0;
  local_38 = 999999.9;
  local_34 = 999999.9;
  local_30 = 999999.9;
  local_2c = -999999.9;
  local_28 = -999999.9;
  local_24 = -999999.9;
  for (local_54 = 0; local_54 < g_VertexCount; local_54 = local_54 + 1) {
    local_44 = g_LoadedVertices[local_54].vertex.x;
    if (local_2c < local_44) {
      local_2c = local_44;
    }
    if (local_44 < local_38) {
      local_38 = local_44;
    }
    local_40 = g_LoadedVertices[local_54].vertex.y;
    if (local_28 < local_40) {
      local_28 = local_40;
    }
    if (local_40 < local_34) {
      local_34 = local_40;
    }
    local_3c = g_LoadedVertices[local_54].vertex.z;
    if (local_24 < local_3c) {
      local_24 = local_3c;
    }
    if (local_3c < local_30) {
      local_30 = local_3c;
    }
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Enter axis to size - X, Y, or Z : ",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  local_48 = crt_ctype_c_toupper_FUN_005ff9e0(uVar2 & 0xff);
  if ((0x57 < (int)local_48) && ((int)local_48 < 0x5b)) {
    crt_stdio_c_sprintf_FUN_005fdbd0(local_f4,"Enter %c distance in feet (,min,max for user-defined min/max points) : ",local_48);
    engine_2d_c_getInputWithPrompt_FUN_004032c0(local_a4,0x14,0,0x16,local_f4);
    iVar3 = -1;
    pcVar4 = local_a4;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {
      local_54 = crt_stdio_c_sscanf_FUN_0060013c
                           (local_a4,"%f,%d,%d",local_20,&local_4c,&local_50);
      if (1 < local_54) {
        if (local_54 != 3) {
          engine_2d_c_drawText_FUN_00401fd0("Need distance and two points.",0,0x2c);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          return;
        }
        if ((((local_4c < 0) || (local_50 < 0)) || (g_VertexCount + -1 < local_4c)) ||
           (g_VertexCount + -1 < local_50)) {
          engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x2c);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          return;
        }
        if (local_48 < 0x59) {
          if (local_48 == 0x58) {
            local_2c = g_LoadedVertices[local_50].vertex.x;
            local_38 = g_LoadedVertices[local_4c].vertex.x;
          }
        }
        else if (local_48 < 0x5a) {
          local_28 = g_LoadedVertices[local_50].vertex.y;
          local_34 = g_LoadedVertices[local_4c].vertex.y;
        }
        else if (local_48 == 0x5a) {
          local_24 = g_LoadedVertices[local_50].vertex.z;
          local_30 = g_LoadedVertices[local_4c].vertex.z;
        }
      }
      for (local_54 = 0; local_54 < g_VertexCount; local_54 = local_54 + 1) {
        if (local_48 < 0x59) {
          if (local_48 == 0x58) {
            g_LoadedVertices[local_54].vertex.x =
                 g_LoadedVertices[local_54].vertex.x * (local_20[0] / (local_2c - local_38));
          }
        }
        else if (local_48 < 0x5a) {
          g_LoadedVertices[local_54].vertex.y =
               g_LoadedVertices[local_54].vertex.y * (local_20[0] / (local_28 - local_34));
        }
        else if (local_48 == 0x5a) {
          g_LoadedVertices[local_54].vertex.z =
               g_LoadedVertices[local_54].vertex.z * (local_20[0] / (local_24 - local_30));
        }
      }
    }
  }
  return;
}

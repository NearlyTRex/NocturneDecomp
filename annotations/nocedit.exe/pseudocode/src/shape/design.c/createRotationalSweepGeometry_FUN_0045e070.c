// Name: shape_design.c_createRotationalSweepGeometry_FUN_0045e070
// Address: 0045e070
// Address Range: [[0045e070, 0045e512]]
// Convention: unknown
// Signature: undefined shape_design.c_createRotationalSweepGeometry_FUN_0045e070()

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void shape_design_c_createRotationalSweepGeometry_FUN_0045e070(void)

{
  uint uVar1;
  float10 fVar2;
  char local_c4 [80];
  int local_74 [2];
  byte local_6c [4];
  byte local_68 [4];
  byte local_64 [4];
  byte local_60 [4];
  byte local_5c [4];
  byte local_58 [4];
  int local_54;
  int local_50;
  int local_4c;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_2d_c_drawText_FUN_00401fd0("Sweep around X) Y) Z) axis : ",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  local_54 = crt_ctype_c_toupper_FUN_005ff9e0(uVar1 & 0xff);
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_c4,0x4f,0,0xb,"Enter in point list : ");
  local_50 = crt_stdio_c_sscanf_FUN_0060013c
                       (local_c4,"%d,%d,%d,%d,%d,%d,%d,%d",local_74,local_74 + 1,local_6c,local_68,
                        local_64,local_60,local_5c,local_58);
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_c4,10,0,0x16,"Enter in # of sections : ");
  local_4c = crt_stdlib_c_atoi_FUN_005ffef0(local_c4);
  engine_2d_c_drawText_FUN_00401fd0("I)nside, O)utside, B)oth ?",0,0x21);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  local_14 = crt_ctype_c_toupper_FUN_005ff9e0(uVar1 & 0xff);
  if (((0 < local_50) && (local_50 < 7)) && (0 < local_4c)) {
    local_48 = (float)360 / (float)local_4c;
    local_44 = local_48;
    local_38 = g_VertexCount;
    for (local_40 = 0; local_40 <= local_4c; local_40 = local_40 + 1) {
      fVar2 = (float10)fsin((float10)local_44 * (float10)0.0055555555555555497 *
                            (float10)3.1415926535000001);
      local_34 = (float)fVar2;
      fVar2 = (float10)fcos((float10)local_44 * (float10)0.0055555555555555497 *
                            (float10)3.1415926535000001);
      local_30 = (float)fVar2;
      for (local_3c = 1; local_3c < local_50; local_3c = local_3c + 1) {
        if (local_54 == 0x58) {
          local_20 = g_LoadedVertices[local_74[local_3c]].vertex.y -
                     g_LoadedVertices[local_74[0]].vertex.y;
          local_1c = g_LoadedVertices[local_74[local_3c]].vertex.z -
                     g_LoadedVertices[local_74[0]].vertex.z;
          local_18 = SQRT(local_1c * local_1c + local_20 * local_20);
          local_2c = g_LoadedVertices[local_74[local_3c]].vertex.x;
          local_28 = local_34 * local_18 + g_LoadedVertices[local_74[0]].vertex.y;
          local_24 = local_30 * local_18 + g_LoadedVertices[local_74[0]].vertex.z;
        }
        else if (local_54 == 0x59) {
          local_20 = g_LoadedVertices[local_74[local_3c]].vertex.x -
                     g_LoadedVertices[local_74[0]].vertex.x;
          local_1c = g_LoadedVertices[local_74[local_3c]].vertex.z -
                     g_LoadedVertices[local_74[0]].vertex.z;
          local_18 = SQRT(local_1c * local_1c + local_20 * local_20);
          local_2c = local_30 * local_18 + g_LoadedVertices[local_74[0]].vertex.x;
          local_28 = g_LoadedVertices[local_74[local_3c]].vertex.y;
          local_24 = local_34 * local_18 + g_LoadedVertices[local_74[0]].vertex.z;
        }
        else {
          local_20 = g_LoadedVertices[local_74[local_3c]].vertex.x -
                     g_LoadedVertices[local_74[0]].vertex.x;
          local_1c = g_LoadedVertices[local_74[local_3c]].vertex.y -
                     g_LoadedVertices[local_74[0]].vertex.y;
          local_18 = SQRT(local_1c * local_1c + local_20 * local_20);
          local_2c = local_30 * local_18 + g_LoadedVertices[local_74[0]].vertex.x;
          local_28 = local_34 * local_18 + g_LoadedVertices[local_74[0]].vertex.y;
          local_24 = g_LoadedVertices[local_74[local_3c]].vertex.z;
        }
        g_LoadedVertices[g_VertexCount].vertex.x = local_2c;
        g_LoadedVertices[g_VertexCount].vertex.y = local_28;
        g_LoadedVertices[g_VertexCount].vertex.z = local_24;
        g_VertexCount = g_VertexCount + 1;
      }
      local_44 = local_44 + local_48;
    }
    if ((local_14 == 0x42) || (local_14 == 0x49)) {
      for (local_40 = 0; local_40 < local_4c; local_40 = local_40 + 1) {
        for (local_3c = 1; local_3c < local_50 + -1; local_3c = local_3c + 1) {
          shape_design_c_createReversedQuadPolygon_FUN_0045e040();
        }
      }
    }
    if ((local_14 == 0x42) || (local_14 == 0x4f)) {
      for (local_40 = 0; local_40 < local_4c; local_40 = local_40 + 1) {
        for (local_3c = 1; local_3c < local_50 + -1; local_3c = local_3c + 1) {
          shape_design_c_createQuadPolygon_FUN_0045df60();
        }
      }
    }
  }
  return;
}

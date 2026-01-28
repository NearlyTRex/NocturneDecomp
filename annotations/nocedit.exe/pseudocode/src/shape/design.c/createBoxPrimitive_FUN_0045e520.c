// Name: shape_design.c_createBoxPrimitive_FUN_0045e520
// Address: 0045e520
// Address Range: [[0045e520, 0045ea88]]
// Convention: unknown
// Signature: void shape_design_c_createBoxPrimitive_FUN_0045e520(void)

#include "nocturne.h"

void shape_design_c_createBoxPrimitive_FUN_0045e520(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_88 [84];
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  local_30 = -1.0;
  local_2c = -1.0;
  local_28 = -1.0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_88,0x4f,0,0,"Enter in X,Y,Z box dimentions : ")
  ;
  iVar3 = -1;
  pcVar4 = local_88;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if ((((iVar3 != -2) &&
       (crt_stdio_c_sscanf_FUN_0060013c(local_88,"%f,%f,%f",&local_30,&local_2c,&local_28),
       0.0 < local_30)) && (0.0 < local_2c)) && (0.0 < local_28)) {
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (local_88,0x4f,0,0xb,"Enter in X,Y,Z box center : ");
    iVar3 = -1;
    pcVar4 = local_88;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
    } while (cVar1 != '\0');
    if ((iVar3 != -2) &&
       (local_34 = crt_stdio_c_sscanf_FUN_0060013c
                             (local_88,"%f,%f,%f",&local_24,&local_20,&local_1c),
       local_34 == 3)) {
      engine_2d_c_drawText_FUN_00401fd0("I)nside, O)utside, B)oth ?",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      local_18 = crt_ctype_c_toupper_FUN_005ff9e0(uVar2 & 0xff);
      iVar3 = g_VertexCount;
      local_14 = g_VertexCount;
      g_VertexCount = g_VertexCount + 8;
      g_LoadedVertices[iVar3].vertex.x = local_30 * 0.5f + local_24;
      g_LoadedVertices[iVar3].vertex.y = local_20 - local_2c * 0.5f;
      g_LoadedVertices[iVar3].vertex.z = local_28 * 0.5f + local_1c;
      g_LoadedVertices[iVar3 + 1].vertex.x = local_24 - local_30 * 0.5f;
      g_LoadedVertices[iVar3 + 1].vertex.y = local_20 - local_2c * 0.5f;
      g_LoadedVertices[iVar3 + 1].vertex.z = local_28 * 0.5f + local_1c;
      g_LoadedVertices[iVar3 + 2].vertex.x = local_24 - local_30 * 0.5f;
      g_LoadedVertices[iVar3 + 2].vertex.y = local_20 - local_2c * 0.5f;
      g_LoadedVertices[iVar3 + 2].vertex.z = local_1c - local_28 * 0.5f;
      g_LoadedVertices[iVar3 + 3].vertex.x = local_30 * 0.5f + local_24;
      g_LoadedVertices[iVar3 + 3].vertex.y = local_20 - local_2c * 0.5f;
      g_LoadedVertices[iVar3 + 3].vertex.z = local_1c - local_28 * 0.5f;
      g_LoadedVertices[iVar3 + 4].vertex.x = local_30 * 0.5f + local_24;
      g_LoadedVertices[iVar3 + 4].vertex.y = local_2c * 0.5f + local_20;
      g_LoadedVertices[iVar3 + 4].vertex.z = local_28 * 0.5f + local_1c;
      g_LoadedVertices[iVar3 + 5].vertex.x = local_24 - local_30 * 0.5f;
      g_LoadedVertices[iVar3 + 5].vertex.y = local_2c * 0.5f + local_20;
      g_LoadedVertices[iVar3 + 5].vertex.z = local_28 * 0.5f + local_1c;
      g_LoadedVertices[iVar3 + 6].vertex.x = local_24 - local_30 * 0.5f;
      g_LoadedVertices[iVar3 + 6].vertex.y = local_2c * 0.5f + local_20;
      g_LoadedVertices[iVar3 + 6].vertex.z = local_1c - local_28 * 0.5f;
      g_LoadedVertices[iVar3 + 7].vertex.x = local_30 * 0.5f + local_24;
      g_LoadedVertices[iVar3 + 7].vertex.y = local_2c * 0.5f + local_20;
      g_LoadedVertices[iVar3 + 7].vertex.z = local_1c - local_28 * 0.5f;
      if ((local_18 == 0x42) || (local_18 == 0x49)) {
        shape_design_c_createQuadPolygon_FUN_0045df60();
        shape_design_c_createQuadPolygon_FUN_0045df60();
        shape_design_c_createQuadPolygon_FUN_0045df60();
        shape_design_c_createQuadPolygon_FUN_0045df60();
        shape_design_c_createQuadPolygon_FUN_0045df60();
        shape_design_c_createQuadPolygon_FUN_0045df60();
      }
      if ((local_18 == 0x42) || (local_18 == 0x4f)) {
        shape_design_c_createQuadPolygon_FUN_0045df60();
        shape_design_c_createQuadPolygon_FUN_0045df60();
        shape_design_c_createQuadPolygon_FUN_0045df60();
        shape_design_c_createQuadPolygon_FUN_0045df60();
        shape_design_c_createQuadPolygon_FUN_0045df60();
        shape_design_c_createQuadPolygon_FUN_0045df60();
      }
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
  }
  return;
}

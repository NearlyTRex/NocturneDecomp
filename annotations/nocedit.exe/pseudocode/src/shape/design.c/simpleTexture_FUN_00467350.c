// Name: shape_design.c_simpleTexture_FUN_00467350
// Address: 00467350
// Address Range: [[00467350, 004676a8]]
// Convention: __cdecl
// Signature: void shape_design.c_simpleTexture_FUN_00467350(void)

#include "nocturne.h"

void __cdecl shape_design_c_simpleTexture_FUN_00467350(void)

{
  char cVar1;
  FILE *file_ptr;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char local_70 [8];
  int local_20;
  int local_1c;
  
  bVar5 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_70,0x28,0,0,"Enter texture name : ");
  iVar3 = -1;
  pcVar4 = local_70;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    file_ptr = engine_dosio_c_getFile_FUN_00481a50("art",local_70,"rb");
    if (file_ptr == (FILE *)0x0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("ERROR! Bad texture name!",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      local_70[0] = -0x2f;
      local_70[1] = 's';
      local_70[2] = 'F';
      local_70[3] = '\0';
      engine_2d_c_clearInputAndWait_FUN_00403260();
      local_70[4] = -0x2a;
      local_70[5] = 's';
      local_70[6] = 'F';
      local_70[7] = '\0';
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\shape\\design.c",0x1ffd);
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Face map on Z axis (Y/N) ?",0,0);
      builtin_strncpy(local_70,"\x0etF",4);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      builtin_strncpy(local_70 + 4,"\x13tF",4);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      iVar3 = crt_ctype_c_toupper_FUN_005ff9e0(uVar2 & 0xff);
      if (iVar3 == 0x59) {
        fVar9 = 99999.9;
        fVar8 = 99999.9;
        fVar7 = -99999.9;
        fVar6 = -99999.9;
        for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
          if (g_LoadedVertices[local_1c].vertex.x < fVar9) {
            fVar9 = g_LoadedVertices[local_1c].vertex.x;
          }
          if (g_LoadedVertices[local_1c].vertex.y < fVar8) {
            fVar8 = g_LoadedVertices[local_1c].vertex.y;
          }
          if (fVar7 < g_LoadedVertices[local_1c].vertex.x) {
            fVar7 = g_LoadedVertices[local_1c].vertex.x;
          }
          if (fVar6 < g_LoadedVertices[local_1c].vertex.y) {
            fVar6 = g_LoadedVertices[local_1c].vertex.y;
          }
        }
        for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
          for (local_20 = 0; local_20 < (int)g_ModelPolygonData[local_1c].vertex_indices_count;
              local_20 = local_20 + 1) {
            uVar2 = g_ModelPolygonData[local_1c].vertex_indices[local_20];
            g_ModelPolygonData[local_1c].uv_u[local_20] =
                 ((g_LoadedVertices[uVar2].vertex.x - fVar9) * (float)5.9604644775390599e-08) /
                 (fVar7 - fVar9) + 1.0;
            g_ModelPolygonData[local_1c].uv_v[local_20] =
                 ((g_LoadedVertices[uVar2].vertex.y - fVar8) * (float)5.9604644775390599e-08) /
                 (fVar6 - fVar8) + 1.0;
          }
        }
      }
      else {
        for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
          g_ModelPolygonData[local_1c].uv_u[0] = 1.0;
          g_ModelPolygonData[local_1c].uv_u[1] = 255.0;
          g_ModelPolygonData[local_1c].uv_u[2] = 255.0;
          g_ModelPolygonData[local_1c].uv_u[3] = 1.0;
          g_ModelPolygonData[local_1c].uv_v[0] = 1.0;
          g_ModelPolygonData[local_1c].uv_v[1] = 1.0;
          g_ModelPolygonData[local_1c].uv_v[2] = 255.0;
          g_ModelPolygonData[local_1c].uv_v[3] = 255.0;
          g_ModelPolygonData[local_1c].polygon_type = 2;
          local_70[4] = -0x66;
          local_70[5] = 'v';
          local_70[6] = 'F';
          local_70[7] = '\0';
          crt_stdio_c_sprintf_FUN_005fdbd0(g_ModelPolygonData[local_1c].texture_name,"%s");
        }
      }
    }
  }
  return;
}

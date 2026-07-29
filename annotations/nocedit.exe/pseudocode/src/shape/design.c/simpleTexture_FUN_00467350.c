// Name: shape_design.c_simpleTexture_FUN_00467350
// Address: 00467350
// Address Range: [[00467350, 004676a8]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_simpleTexture_FUN_00467350(void)

#include "nocturne.h"

void __cdecl shape_design_c_simpleTexture_FUN_00467350(void)

{
  _FILE *file_ptr;
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  char local_70 [80];
  int local_20;
  int local_1c;
  _FILE *local_18;
  uint local_14;
  char cVar1;
  uint uVar2;
  
  bVar5 = 0;
  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_70,0x28,0,0,"Enter texture name : ");
  iVar3 = -1;
  pcVar4 = local_70;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    file_ptr = engine_dosio_cpp_getFile_FUN_00481a50("art",local_70,"rb");
    if (file_ptr == (_FILE *)0x0) {
      engine_special_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("ERROR! Bad texture name!",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\shape\\design.c",8189);
      engine_special_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Face map on Z axis (Y/N) ?",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      iVar2 = toupper(uVar1 & 0xff);
      if (iVar2 == 0x59) {
        local_74 = 99999.9;
        local_78 = 99999.9;
        local_7c = -99999.9;
        local_80 = -99999.9;
        for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
          if (g_LoadedVertices[local_1c].vertex.x < local_74) {
            local_74 = g_LoadedVertices[local_1c].vertex.x;
          }
          if (g_LoadedVertices[local_1c].vertex.y < local_78) {
            local_78 = g_LoadedVertices[local_1c].vertex.y;
          }
          if (local_7c < g_LoadedVertices[local_1c].vertex.x) {
            local_7c = g_LoadedVertices[local_1c].vertex.x;
          }
          if (local_80 < g_LoadedVertices[local_1c].vertex.y) {
            local_80 = g_LoadedVertices[local_1c].vertex.y;
          }
        }
        for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
          for (local_20 = 0; local_20 < (int)g_ModelPolygonData[local_1c].vertex_indices_count;
              local_20 = local_20 + 1) {
            uVar2 = g_ModelPolygonData[local_1c].vertex_indices[local_20];
            g_ModelPolygonData[local_1c].uv_u[local_20] =
                 ((g_LoadedVertices[uVar2].vertex.x - local_74) *
                 (float)254) / (local_7c - local_74) + 1.0;
            g_ModelPolygonData[local_1c].uv_v[local_20] =
                 ((g_LoadedVertices[uVar2].vertex.y - local_78) *
                 (float)254) / (local_80 - local_78) + 1.0;
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
          _sprintf(g_ModelPolygonData[local_1c].texture_name,"%s",local_70);
        }
      }
    }
  }
  return;
}

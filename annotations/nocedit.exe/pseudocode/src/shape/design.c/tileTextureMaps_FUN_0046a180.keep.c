// Name: shape_design.c_tileTextureMaps_FUN_0046a180
// Address: 0046a180
// MANUAL RECONSTRUCTION
// Address Range: [[0046a180, 0046a850]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_tileTextureMaps_FUN_0046a180(SCram *cram,int prompt_for_model)

#include "nocturne.h"

void __cdecl shape_design_c_tileTextureMaps_FUN_0046a180(SCram *cram,int prompt_for_model)

{
  int iVar2;
  int iVar3;
  char *pcVar7;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  char local_1ac [200];
  char local_e4 [200];
  int local_1c;
  int local_14;

  if (cram == (SCram *)0x0) {
    if (prompt_for_model == 0) {
      strcpy(g_LoadedModelName,"?");
    }
    else {
      iVar3 = shape_design_c_promptForModelNameAndLoad_FUN_00458a10();
      if (iVar3 == 0) {
        return;
      }
    }
    iVar3 = shape_design_c_validateModelTextures_FUN_00459a20("art",1);
    if (iVar3 != 0) {
      engine_special_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("WARNING: Only valid textures will appear in the crammed .RAW file.",0,0);
      engine_2d_c_drawText_FUN_00401fd0("Hit a key...",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
  }
  else {
    shape_design_c_validateModelTextures_FUN_00459a20("art",1);
  }
  shape_design_c_initializeTextureManager_FUN_0046a880(1);
  shape_design_c_normalizeUVCoordinates_FUN_0046e340();
  for (local_14 = 0; local_14 < g_PolygonCount; local_14 = local_14 + 1) {
    if (g_ModelPolygonData[local_14].texture_name[0] != '\0') {
      local_1b4 = g_ModelPolygonData[local_14].uv_u[0];
      local_1b8 = g_ModelPolygonData[local_14].uv_v[0];
      local_1bc = g_ModelPolygonData[local_14].uv_u[0];
      local_1c0 = g_ModelPolygonData[local_14].uv_v[0];
      for (local_1c = 1; local_1c < (int)g_ModelPolygonData[local_14].vertex_indices_count;
          local_1c = local_1c + 1) {
        if (g_ModelPolygonData[local_14].uv_u[local_1c] < local_1b4) {
          local_1b4 = g_ModelPolygonData[local_14].uv_u[local_1c];
        }
        if (g_ModelPolygonData[local_14].uv_v[local_1c] < local_1b8) {
          local_1b8 = g_ModelPolygonData[local_14].uv_v[local_1c];
        }
        if (local_1bc < g_ModelPolygonData[local_14].uv_u[local_1c]) {
          local_1bc = g_ModelPolygonData[local_14].uv_u[local_1c];
        }
        if (local_1c0 < g_ModelPolygonData[local_14].uv_v[local_1c]) {
          local_1c0 = g_ModelPolygonData[local_14].uv_v[local_1c];
        }
      }
      shape_design_c_cramTextures_FUN_0046a970
                (g_ModelPolygonData[local_14].texture_name,
                 (int)ROUND(ROUND(local_1b4 * 65536.0f)),
                 (int)ROUND(ROUND(local_1b8 * 65536.0f)),
                 (int)ROUND(ROUND(local_1bc * 65536.0f)),
                 (int)ROUND(ROUND(local_1c0 * 65536.0f)));
    }
  }
  if (g_TextureProcessedCount == 0) {
    engine_special_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("ERROR: No valid textures found.  Hit a key...",0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  else {
    iVar2 = shape_design_c_cramTextureList_FUN_0046bb80(cram);
    if (iVar2 != 0) {
      if (cram == (SCram *)0x0) {
        engine_2d_c_drawText_FUN_00401fd0("Hit a key...",0,0x6e);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      }
      for (local_14 = 0; local_14 < g_PolygonCount; local_14 = local_14 + 1) {
        iVar3 = shape_design_c_findTextureByFilename_FUN_0046dfc0
                          (g_ModelPolygonData[local_14].texture_name);
        if (-1 < iVar3) {
          for (local_1c = 0; local_1c < (int)g_ModelPolygonData[local_14].vertex_indices_count;
              local_1c = local_1c + 1) {
            shape_design_c_fixupCramUV_FUN_0046e090
                      (iVar3,&g_ModelPolygonData[local_14].uv_u[local_1c],
                       &g_ModelPolygonData[local_14].uv_v[local_1c]);
          }
          strcpy(g_ModelPolygonData[local_14].lightmap_name,
                 g_ModelPolygonData[local_14].texture_name);
          iVar3 = shape_design_c_getAtlasMapIndex_FUN_0046e030(iVar3);
          pcVar7 = shape_design_c_getTextureName_FUN_0046e060(iVar3);
          strcpy(g_ModelPolygonData[local_14].texture_name,pcVar7);
        }
      }
      if (cram == (SCram *)0x0) {
        engine_special_cpp_clearScreen_FUN_005b3e70();
        strcpy(local_e4,g_CurrentModelFilename);
        pcVar7 = strchr(local_e4,'.');
        if (pcVar7 != (char *)0x0) {
          *pcVar7 = '\0';
        }
        _sprintf(local_1ac,"Model name to save [%s] : ",local_e4);
        iVar3 = engine_2d_c_getInputWithPrompt_FUN_004032c0(g_LoadedModelName,0x27,0,0,local_1ac);
        if (iVar3 == 0x1b) {
          strcpy(g_LoadedModelName,local_e4);
          pcVar7 = strchr(g_LoadedModelName,'.');
          if (pcVar7 == (char *)0x0) {
            if (strlen(g_LoadedModelName) < 9) {
              strcat(g_LoadedModelName,".MDL");
            }
          }
        }
        else {
          if (strlen(g_LoadedModelName) == 0) {
            strcpy(g_LoadedModelName,local_e4);
          }
          pcVar7 = strchr(g_LoadedModelName,'.');
          if (pcVar7 == (char *)0x0) {
            if (strlen(g_LoadedModelName) < 9) {
              strcat(g_LoadedModelName,".MDL");
            }
          }
          shape_design_c_exportModelToMDL_FUN_00459e80(g_LoadedModelName);
        }
      }
      else {
        strcpy(g_LoadedModelName,cram->filename);
        strcat(g_LoadedModelName,".MDL");
      }
      engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
    }
  }
  return;
}

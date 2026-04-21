// Name: shape_design.c_tileTextureMaps_FUN_0046a180
// Address: 0046a180
// MANUAL RECONSTRUCTION
// Address Range: [[0046a180, 0046a850]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_tileTextureMaps_FUN_0046a180(SCram *cram,int prompt_for_model)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_design_c_tileTextureMaps_FUN_0046a180(SCram *cram,int prompt_for_model)

{
  char cVar2;
  int iVar2;
  int iVar3;
  char *pcVar7;
  uint uVar3;
  uint uVar8;
  char *pcVar4;
  char *pcVar5;
  char *pcVar9;
  char *pcVar6;
  char *pcVar10;
  byte bVar7;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  char local_1ac [200];
  char local_e4 [200];
  int local_1c;
  int local_14;
  char cVar1;
  
  bVar7 = 0;
  if (cram == (SCram *)0x0) {
    if (prompt_for_model == 0) {
      pcVar9 = "?";
      pcVar7 = g_LoadedModelName;
      do {
        cVar2 = *pcVar9;
        *pcVar7 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar7[1] = cVar2;
        pcVar7 = pcVar7 + 2;
      } while (cVar2 != '\0');
    }
    else {
      iVar3 = shape_design_c_promptForModelNameAndLoad_FUN_00458a10();
      if (iVar3 == 0) {
        return;
      }
    }
    iVar3 = shape_design_c_validateModelTextures_FUN_00459a20("art",1);
    if (iVar3 != 0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
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
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
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
                      (iVar3,(float *)(local_14 * 0x184 + 0x16e9a08 + local_1c * 4),
                       (float *)(local_14 * 0x184 + 0x16e9a48 + local_1c * 4));
          }
          pcVar4 = g_ModelPolygonData[local_14].texture_name;
          pcVar5 = g_ModelPolygonData[local_14].lightmap_name;
          do {
            cVar1 = *pcVar4;
            *pcVar5 = cVar1;
            if (cVar1 == '\0') break;
            cVar2 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar5[1] = cVar2;
            pcVar5 = pcVar5 + 2;
          } while (cVar2 != '\0');
          iVar3 = shape_design_c_getAtlasMapIndex_FUN_0046e030(iVar3);
          pcVar7 = shape_design_c_getTextureName_FUN_0046e060(iVar3);
          pcVar9 = g_ModelPolygonData[local_14].texture_name;
          do {
            cVar2 = *pcVar7;
            *pcVar9 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar9[1] = cVar2;
            pcVar9 = pcVar9 + 2;
          } while (cVar2 != '\0');
        }
      }
      if (cram == (SCram *)0x0) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        pcVar7 = g_CurrentModelFilename;
        pcVar9 = local_e4;
        do {
          cVar2 = *pcVar7;
          *pcVar9 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar9[1] = cVar2;
          pcVar9 = pcVar9 + 2;
        } while (cVar2 != '\0');
        pcVar9 = local_e4;
        do {
          pcVar7 = pcVar9;
          if (*pcVar9 == '.') goto LAB_0046a6ad;
          if (*pcVar9 == '\0') break;
          pcVar7 = pcVar9 + 1;
          if (*pcVar7 == '.') goto LAB_0046a6ad;
          pcVar9 = pcVar9 + 2;
        } while (*pcVar7 != '\0');
        pcVar7 = (char *)0x0;
LAB_0046a6ad:
        if (pcVar7 != (char *)0x0) {
          *pcVar7 = '\0';
        }
        _sprintf(local_1ac,"Model name to save [%s] : ",local_e4);
        iVar3 = engine_2d_c_getInputWithPrompt_FUN_004032c0(g_LoadedModelName,0x27,0,0,local_1ac);
        if (iVar3 == 0x1b) {
          pcVar9 = local_e4;
          pcVar7 = g_LoadedModelName;
          do {
            cVar2 = *pcVar9;
            *pcVar7 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar9[1];
            pcVar9 = pcVar9 + 2;
            pcVar7[1] = cVar2;
            pcVar7 = pcVar7 + 2;
          } while (cVar2 != '\0');
          pcVar9 = g_LoadedModelName;
          do {
            pcVar7 = pcVar9;
            if (*pcVar9 == '.') goto LAB_0046a7ff;
            if (*pcVar9 == '\0') break;
            pcVar7 = pcVar9 + 1;
            if (*pcVar7 == '.') goto LAB_0046a7ff;
            pcVar9 = pcVar9 + 2;
          } while (*pcVar7 != '\0');
          pcVar7 = (char *)0x0;
LAB_0046a7ff:
          if (pcVar7 == (char *)0x0) {
            uVar8 = 0xffffffff;
            pcVar9 = g_LoadedModelName;
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar2 = *pcVar9;
              pcVar9 = pcVar9 + (uint)bVar7 * -2 + 1;
            } while (cVar2 != '\0');
            if (~uVar8 - 1 < 9) {
              strcat(g_LoadedModelName,".MDL");
            }
          }
        }
        else {
          iVar3 = -1;
          pcVar9 = g_LoadedModelName;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + (uint)bVar7 * -2 + 1;
          } while (cVar2 != '\0');
          if (iVar3 == -2) {
            pcVar9 = local_e4;
            pcVar7 = g_LoadedModelName;
            do {
              cVar2 = *pcVar9;
              *pcVar7 = cVar2;
              if (cVar2 == '\0') break;
              cVar2 = pcVar9[1];
              pcVar9 = pcVar9 + 2;
              pcVar7[1] = cVar2;
              pcVar7 = pcVar7 + 2;
            } while (cVar2 != '\0');
          }
          pcVar9 = g_LoadedModelName;
          do {
            pcVar7 = pcVar9;
            if (*pcVar9 == '.') goto LAB_0046a75f;
            if (*pcVar9 == '\0') break;
            pcVar7 = pcVar9 + 1;
            if (*pcVar7 == '.') goto LAB_0046a75f;
            pcVar9 = pcVar9 + 2;
          } while (*pcVar7 != '\0');
          pcVar7 = (char *)0x0;
LAB_0046a75f:
          if (pcVar7 == (char *)0x0) {
            uVar3 = 0xffffffff;
            pcVar9 = g_LoadedModelName;
            do {
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              cVar2 = *pcVar9;
              pcVar9 = pcVar9 + (uint)bVar7 * -2 + 1;
            } while (cVar2 != '\0');
            if (~uVar3 - 1 < 9) {
              strcat(g_LoadedModelName,".MDL");
            }
          }
          shape_design_c_exportModelToMDL_FUN_00459e80(g_LoadedModelName);
        }
      }
      else {
        pcVar9 = g_LoadedModelName;
        do {
          cVar2 = cram->filename[0];
          *pcVar9 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = cram->filename[1];
          cram = (SCram *)(cram->filename + 2);
          pcVar9[1] = cVar2;
          pcVar9 = pcVar9 + 2;
        } while (cVar2 != '\0');
        strcat(g_LoadedModelName,".MDL");
      }
      engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
    }
  }
  return;
}

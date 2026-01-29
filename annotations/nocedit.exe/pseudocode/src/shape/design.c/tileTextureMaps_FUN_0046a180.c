// Name: shape_design.c_tileTextureMaps_FUN_0046a180
// Address: 0046a180
// Address Range: [[0046a180, 0046a850]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_tileTextureMaps_FUN_0046a180(char *model_name,int prompt_for_model)

#include "nocturne.h"

void __cdecl shape_design_c_tileTextureMaps_FUN_0046a180(char *model_name,int prompt_for_model)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  double dVar8;
  int min_v;
  int max_v;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  char local_1ac [200];
  char local_e4 [200];
  int local_1c;
  int local_14;
  
  bVar7 = 0;
  if (model_name == (char *)0x0) {
    if (prompt_for_model == 0) {
      pcVar4 = "?";
      pcVar5 = g_LoadedModelName;
      do {
        cVar1 = *pcVar4;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
    }
    else {
      iVar2 = shape_design_c_promptForModelNameAndLoad_FUN_00458a10();
      if (iVar2 == 0) {
        return;
      }
    }
    iVar2 = shape_design_c_validateModelTextures_FUN_00459a20("art",1);
    if (iVar2 != 0) {
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
      round((double)(local_1c0 * 65536.0f));
      round((double)(local_1bc * 65536.0f));
      max_v = 0x46a41d;
      dVar8 = round((double)(local_1b8 * 65536.0f));
      iVar2 = (int)ROUND(dVar8);
      min_v = 0x46a43a;
      dVar8 = round((double)(local_1b4 * 65536.0f));
      shape_design_c_cramTextures_FUN_0046a970
                (g_ModelPolygonData[local_14].texture_name,(int)ROUND(dVar8),min_v,iVar2,max_v);
    }
  }
  if (g_TextureProcessedCount == 0) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("ERROR: No valid textures found.  Hit a key...",0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  else {
    iVar2 = shape_design_c_cramTextureList_FUN_0046bb80((SCramConfig *)model_name);
    if (iVar2 != 0) {
      if (model_name == (char *)0x0) {
        engine_2d_c_drawText_FUN_00401fd0("Hit a key...",0,0x6e);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      }
      for (local_14 = 0; local_14 < g_PolygonCount; local_14 = local_14 + 1) {
        iVar2 = shape_design_c_findTextureByFilename_FUN_0046dfc0
                          (g_ModelPolygonData[local_14].texture_name);
        if (-1 < iVar2) {
          for (local_1c = 0; local_1c < (int)g_ModelPolygonData[local_14].vertex_indices_count;
              local_1c = local_1c + 1) {
            shape_design_c_fixupCramUV_FUN_0046e090
                      (iVar2,(float *)(local_14 * 0x184 + 0x16e9a08 + local_1c * 4),
                       (float *)(local_14 * 0x184 + 0x16e9a48 + local_1c * 4));
          }
          pcVar4 = g_ModelPolygonData[local_14].texture_name;
          pcVar5 = g_ModelPolygonData[local_14].lightmap_name;
          do {
            cVar1 = *pcVar4;
            *pcVar5 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar5[1] = cVar1;
            pcVar5 = pcVar5 + 2;
          } while (cVar1 != '\0');
          iVar2 = shape_design_c_getAtlasMapIndex_FUN_0046e030(iVar2);
          pcVar5 = shape_design_c_getTextureName_FUN_0046e060(iVar2);
          pcVar4 = g_ModelPolygonData[local_14].texture_name;
          do {
            cVar1 = *pcVar5;
            *pcVar4 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar4[1] = cVar1;
            pcVar4 = pcVar4 + 2;
          } while (cVar1 != '\0');
        }
      }
      if (model_name == (char *)0x0) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        pcVar5 = g_CurrentModelFilename;
        pcVar4 = local_e4;
        do {
          cVar1 = *pcVar5;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
        pcVar4 = local_e4;
        do {
          pcVar5 = pcVar4;
          if (*pcVar4 == '.') goto LAB_0046a6ad;
          if (*pcVar4 == '\0') break;
          pcVar5 = pcVar4 + 1;
          if (*pcVar5 == '.') goto LAB_0046a6ad;
          pcVar4 = pcVar4 + 2;
        } while (*pcVar5 != '\0');
        pcVar5 = (char *)0x0;
LAB_0046a6ad:
        if (pcVar5 != (char *)0x0) {
          *pcVar5 = '\0';
        }
        sprintf(local_1ac,"Model name to save [%s] : ",local_e4);
        iVar2 = engine_2d_c_getInputWithPrompt_FUN_004032c0(g_LoadedModelName,0x27,0,0,local_1ac);
        if (iVar2 == 0x1b) {
          pcVar4 = local_e4;
          pcVar5 = g_LoadedModelName;
          do {
            cVar1 = *pcVar4;
            *pcVar5 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar5[1] = cVar1;
            pcVar5 = pcVar5 + 2;
          } while (cVar1 != '\0');
          pcVar4 = g_LoadedModelName;
          do {
            pcVar5 = pcVar4;
            if (*pcVar4 == '.') goto LAB_0046a7ff;
            if (*pcVar4 == '\0') break;
            pcVar5 = pcVar4 + 1;
            if (*pcVar5 == '.') goto LAB_0046a7ff;
            pcVar4 = pcVar4 + 2;
          } while (*pcVar5 != '\0');
          pcVar5 = (char *)0x0;
LAB_0046a7ff:
          if (pcVar5 == (char *)0x0) {
            uVar3 = 0xffffffff;
            pcVar4 = g_LoadedModelName;
            do {
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + (uint)bVar7 * -2 + 1;
            } while (cVar1 != '\0');
            if (~uVar3 - 1 < 9) {
              pcVar5 = ".MDL";
              iVar2 = -1;
              pcVar4 = g_LoadedModelName;
              do {
                pcVar6 = pcVar4;
                if (iVar2 == 0) break;
                iVar2 = iVar2 + -1;
                pcVar6 = pcVar4 + (uint)bVar7 * -2 + 1;
                cVar1 = *pcVar4;
                pcVar4 = pcVar6;
              } while (cVar1 != '\0');
              pcVar6 = pcVar6 + -1;
              do {
                cVar1 = *pcVar5;
                *pcVar6 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar5[1];
                pcVar5 = pcVar5 + 2;
                pcVar6[1] = cVar1;
                pcVar6 = pcVar6 + 2;
              } while (cVar1 != '\0');
            }
          }
        }
        else {
          iVar2 = -1;
          pcVar4 = g_LoadedModelName;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + (uint)bVar7 * -2 + 1;
          } while (cVar1 != '\0');
          if (iVar2 == -2) {
            pcVar4 = local_e4;
            pcVar5 = g_LoadedModelName;
            do {
              cVar1 = *pcVar4;
              *pcVar5 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar4[1];
              pcVar4 = pcVar4 + 2;
              pcVar5[1] = cVar1;
              pcVar5 = pcVar5 + 2;
            } while (cVar1 != '\0');
          }
          pcVar4 = g_LoadedModelName;
          do {
            pcVar5 = pcVar4;
            if (*pcVar4 == '.') goto LAB_0046a75f;
            if (*pcVar4 == '\0') break;
            pcVar5 = pcVar4 + 1;
            if (*pcVar5 == '.') goto LAB_0046a75f;
            pcVar4 = pcVar4 + 2;
          } while (*pcVar5 != '\0');
          pcVar5 = (char *)0x0;
LAB_0046a75f:
          if (pcVar5 == (char *)0x0) {
            uVar3 = 0xffffffff;
            pcVar4 = g_LoadedModelName;
            do {
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + (uint)bVar7 * -2 + 1;
            } while (cVar1 != '\0');
            if (~uVar3 - 1 < 9) {
              pcVar5 = ".MDL";
              iVar2 = -1;
              pcVar4 = g_LoadedModelName;
              do {
                pcVar6 = pcVar4;
                if (iVar2 == 0) break;
                iVar2 = iVar2 + -1;
                pcVar6 = pcVar4 + (uint)bVar7 * -2 + 1;
                cVar1 = *pcVar4;
                pcVar4 = pcVar6;
              } while (cVar1 != '\0');
              pcVar6 = pcVar6 + -1;
              do {
                cVar1 = *pcVar5;
                *pcVar6 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar5[1];
                pcVar5 = pcVar5 + 2;
                pcVar6[1] = cVar1;
                pcVar6 = pcVar6 + 2;
              } while (cVar1 != '\0');
            }
          }
          shape_design_c_exportModelToMDL_FUN_00459e80(g_LoadedModelName);
        }
      }
      else {
        pcVar4 = g_LoadedModelName;
        do {
          cVar1 = *model_name;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = model_name[1];
          model_name = model_name + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
        pcVar5 = ".MDL";
        iVar2 = -1;
        pcVar4 = g_LoadedModelName;
        do {
          pcVar6 = pcVar4;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar6 = pcVar4 + (uint)bVar7 * -2 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar6;
        } while (cVar1 != '\0');
        pcVar6 = pcVar6 + -1;
        do {
          cVar1 = *pcVar5;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
      }
      engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
    }
  }
  return;
}

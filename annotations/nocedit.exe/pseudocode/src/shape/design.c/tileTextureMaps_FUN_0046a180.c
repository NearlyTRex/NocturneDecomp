// Name: shape_design.c_tileTextureMaps_FUN_0046a180
// Address: 0046a180
// Address Range: [[0046a180, 0046a850]]
// Convention: __cdecl
// Signature: void shape_design.c_tileTextureMaps_FUN_0046a180(char * model_name, int prompt_for_model)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f780 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_art_0061d190
//   TerminatedCString s_anon_0061d194
//   undefined4 DAT_0061d195
//   TerminatedCString s_art_0061d196
//   undefined4 s_rt_0061d197
//   TerminatedCString s_WARNING_Only_valid_textu_0061d19a
//   TerminatedCString s_Hit_a_key_0061d1dd
//   float g_TextureResolutionMultiplier = 65536
//   TerminatedCString s_ERROR_No_valid_textures__0061d1ee
//   TerminatedCString s_Hit_a_key_0061d21c
//   TerminatedCString s_MDL_0061d229
//   undefined4 DAT_0061d22a
//   undefined4 DAT_0061d22b
//   undefined4 DAT_0061d22c
//   TerminatedCString s_Model_name_to_save_s_0061d22e
//   TerminatedCString s_MDL_0061d249
//   undefined4 DAT_0061d24a
//   undefined4 DAT_0061d24b
//   undefined4 DAT_0061d24c
//   TerminatedCString s_MDL_0061d24e
//   undefined4 DAT_0061d24f
//   undefined4 DAT_0061d250
//   undefined4 DAT_0061d251
//   char[80] g_LoadedModelName
//   undefined4 s__0066eda9
//   undefined4 s__0066edaa
//   undefined4 DAT_0066edab
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e9915
//   undefined4 DAT_016e9916
//   undefined4 DAT_016e9917
//   undefined4 DAT_016e9964
//   undefined4 DAT_016e9965
//   undefined4 DAT_016e9966
//   undefined4 DAT_016e9967
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a0c
//   undefined4 DAT_016e9a10
//   undefined4 DAT_016e9a48
//   undefined4 DAT_016e9a4c
//   undefined4 DAT_016e9a50
//   int g_TextureProcessedCount
//   char[80] g_CurrentModelFilename
//   undefined4 DAT_01eb1769
//   undefined4 DAT_01eb176a
//   undefined4 DAT_01eb176b
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   engine_texture.cpp_clearTextureCache_FUN_005dd8e0
//   shape_design.c_cramTextureList_FUN_0046bb80
//   shape_design.c_cramTextures_FUN_0046a970
//   shape_design.c_exportModelToMDL_FUN_00459e80
//   shape_design.c_findTextureByFilename_FUN_0046dfc0
//   shape_design.c_fixupCramUV_FUN_0046e090
//   shape_design.c_getAtlasMapIndex_FUN_0046e030
//   shape_design.c_getTextureName_FUN_0046e060
//   shape_design.c_initializeTextureManager_FUN_0046a880
//   shape_design.c_normalizeUVCoordinates_FUN_0046e340
//   shape_design.c_promptForModelNameAndLoad_FUN_00458a10
//   shape_design.c_validateModelTextures_FUN_00459a20
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_tileTextureMaps_FUN_0046a180(char *model_name,int prompt_for_model)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  float10 fVar8;
  double dVar9;
  float fVar10;
  float local_1bc;
  float local_1b8;
  float fVar11;
  int in_stack_fffffe5c;
  int in_stack_fffffe60;
  int in_stack_fffffe64;
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
      fVar11 = g_ModelPolygonData[local_14].uv_u[0];
      local_1b8 = g_ModelPolygonData[local_14].uv_v[0];
      local_1bc = g_ModelPolygonData[local_14].uv_u[0];
      fVar10 = g_ModelPolygonData[local_14].uv_v[0];
      for (local_1c = 1; local_1c < (int)g_ModelPolygonData[local_14].vertex_indices_count;
          local_1c = local_1c + 1) {
        if (g_ModelPolygonData[local_14].uv_u[local_1c] < fVar11) {
          fVar11 = g_ModelPolygonData[local_14].uv_u[local_1c];
        }
        if (g_ModelPolygonData[local_14].uv_v[local_1c] < local_1b8) {
          local_1b8 = g_ModelPolygonData[local_14].uv_v[local_1c];
        }
        if (local_1bc < g_ModelPolygonData[local_14].uv_u[local_1c]) {
          local_1bc = g_ModelPolygonData[local_14].uv_u[local_1c];
        }
        if (fVar10 < g_ModelPolygonData[local_14].uv_v[local_1c]) {
          fVar10 = g_ModelPolygonData[local_14].uv_v[local_1c];
        }
      }
      dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(local_14 * 0x184,local_1c));
      dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
      dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
      fVar8 = (float10)fVar11 * (float10)g_TextureResolutionMultiplier;
      crt_math_c_round_FUN_005fe6b0(dVar9);
      shape_design_c_cramTextures_FUN_0046a970
                (g_ModelPolygonData[local_14].texture_name,(int)ROUND(fVar8),in_stack_fffffe5c,
                 in_stack_fffffe60,in_stack_fffffe64);
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
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe54,"Model name to save [%s] : ");
        iVar2 = engine_2d_c_getInputWithPrompt_FUN_004032c0
                          (g_LoadedModelName,0x27,0,0,&stack0xfffffe54);
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


// Assembly code:
// 0046a180: PUSH EBX
//   Label: shape_design.c_tileTextureMaps_FUN_0046a180
// 0046a181: PUSH ESI
// 0046a182: PUSH EDI
// 0046a183: PUSH EBP
// 0046a184: MOV EBP,ESP
// 0046a186: SUB ESP,0x1bc
// 0046a18c: CMP dword ptr [EBP + 0x14],0x0
//   XREF to: Stack[0x4] (READ)
// 0046a190: JZ 0x0046a1a7
//   XREF to: 0046a1a7 (CONDITIONAL_JUMP)
// 0046a192: PUSH 0x1
// 0046a194: MOV EAX,0x61d190
//   XREF to: 0061d190 (PARAM)
// 0046a199: PUSH EAX
//   XREF to: 0061d190 (DATA)
// 0046a19a: CALL shape_design.c_validateModelTextures_FUN_00459a20
//   XREF to: 00459a20 (UNCONDITIONAL_CALL)
// 0046a19f: ADD ESP,0x8
// 0046a1a2: JMP 0x0046a228
//   XREF to: 0046a228 (UNCONDITIONAL_JUMP)
// 0046a1a7: CMP dword ptr [EBP + 0x18],0x0
//   Label: LAB_0046a1a7
//   XREF to: Stack[0x8] (READ)
// 0046a1ab: JZ 0x0046a1bd
//   XREF to: 0046a1bd (CONDITIONAL_JUMP)
// 0046a1ad: CALL shape_design.c_promptForModelNameAndLoad_FUN_00458a10
//   XREF to: 00458a10 (UNCONDITIONAL_CALL)
// 0046a1b2: TEST EAX,EAX
// 0046a1b4: JNZ 0x0046a1bb
//   XREF to: 0046a1bb (CONDITIONAL_JUMP)
// 0046a1b6: JMP 0x0046a84a
//   XREF to: 0046a84a (UNCONDITIONAL_JUMP)
// 0046a1bb: JMP 0x0046a1e1
//   Label: LAB_0046a1bb
//   XREF to: 0046a1e1 (UNCONDITIONAL_JUMP)
// 0046a1bd: MOV ESI,0x61d194
//   Label: LAB_0046a1bd
//   XREF to: 0061d194 (DATA)
// 0046a1c2: MOV EDI,0x66eda8
//   XREF to: 0066eda8 (DATA)
// 0046a1c7: PUSH EDI
//   XREF to: 0066eda8 (DATA)
// 0046a1c8: MOV AL,byte ptr [ESI]
//   Label: LAB_0046a1c8
//   XREF to: 0061d194 (READ)
//   XREF to: 0061d196 (READ)
// 0046a1ca: MOV byte ptr [EDI],AL
//   XREF to: 0066eda8 (WRITE)
//   XREF to: 0066edaa (WRITE)
// 0046a1cc: CMP AL,0x0
// 0046a1ce: JZ 0x0046a1e0
//   XREF to: 0046a1e0 (CONDITIONAL_JUMP)
// 0046a1d0: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061d195 (READ)
//   XREF to: 0061d197 (READ)
// 0046a1d3: ADD ESI,0x2
// 0046a1d6: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 0066eda9 (WRITE)
//   XREF to: 0066edab (WRITE)
// 0046a1d9: ADD EDI,0x2
// 0046a1dc: CMP AL,0x0
// 0046a1de: JNZ 0x0046a1c8
//   XREF to: 0046a1c8 (CONDITIONAL_JUMP)
// 0046a1e0: POP EDI
//   Label: LAB_0046a1e0
// 0046a1e1: PUSH 0x1
//   Label: LAB_0046a1e1
// 0046a1e3: MOV EAX,0x61d196
//   XREF to: 0061d196 (PARAM)
// 0046a1e8: PUSH EAX
//   XREF to: 0061d196 (DATA)
// 0046a1e9: CALL shape_design.c_validateModelTextures_FUN_00459a20
//   XREF to: 00459a20 (UNCONDITIONAL_CALL)
// 0046a1ee: ADD ESP,0x8
// 0046a1f1: TEST EAX,EAX
// 0046a1f3: JZ 0x0046a228
//   XREF to: 0046a228 (CONDITIONAL_JUMP)
// 0046a1f5: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0046a1fa: PUSH 0x0
// 0046a1fc: PUSH 0x0
// 0046a1fe: MOV EAX,0x61d19a
//   XREF to: 0061d19a (PARAM)
// 0046a203: PUSH EAX
//   XREF to: 0061d19a (DATA)
// 0046a204: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046a209: ADD ESP,0xc
// 0046a20c: PUSH 0x16
// 0046a20e: PUSH 0x0
// 0046a210: MOV EAX,0x61d1dd
//   XREF to: 0061d1dd (PARAM)
// 0046a215: PUSH EAX
//   XREF to: 0061d1dd (DATA)
// 0046a216: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046a21b: ADD ESP,0xc
// 0046a21e: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046a223: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0046a228: PUSH 0x1
//   Label: LAB_0046a228
// 0046a22a: CALL shape_design.c_initializeTextureManager_FUN_0046a880
//   XREF to: 0046a880 (UNCONDITIONAL_CALL)
// 0046a22f: ADD ESP,0x4
// 0046a232: CALL shape_design.c_normalizeUVCoordinates_FUN_0046e340
//   XREF to: 0046e340 (UNCONDITIONAL_CALL)
// 0046a237: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0046a23e: JMP 0x0046a246
//   XREF to: 0046a246 (UNCONDITIONAL_JUMP)
// 0046a240: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046a240
//   XREF to: Stack[-0x14] (READ)
// 0046a243: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0046a246: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046a246
//   XREF to: Stack[-0x14] (READ)
// 0046a249: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0046a24f: JGE 0x0046a465
//   XREF to: 0046a465 (CONDITIONAL_JUMP)
// 0046a255: MOV dword ptr [EBP + 0xfffffe60],0x0
//   XREF to: Stack[-0x1b0] (WRITE)
// 0046a25f: IMUL EAX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0046a266: CMP byte ptr [EAX + 0x16e9914],0x0
//   XREF to: 016e9914 (DATA)
// 0046a26d: JZ 0x0046a460
//   XREF to: 0046a460 (CONDITIONAL_JUMP)
// 0046a273: IMUL EAX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0046a27a: MOV EAX,dword ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0046a280: MOV dword ptr [EBP + 0xfffffe5c],EAX
//   XREF to: Stack[-0x1b4] (WRITE)
// 0046a286: IMUL EAX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0046a28d: MOV EAX,dword ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0046a293: MOV dword ptr [EBP + 0xfffffe58],EAX
//   XREF to: Stack[-0x1b8] (WRITE)
// 0046a299: IMUL EAX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0046a2a0: MOV EAX,dword ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0046a2a6: MOV dword ptr [EBP + 0xfffffe54],EAX
//   XREF to: Stack[-0x1bc] (WRITE)
// 0046a2ac: IMUL EAX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0046a2b3: MOV EAX,dword ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0046a2b9: MOV dword ptr [EBP + 0xfffffe50],EAX
//   XREF to: Stack[-0x1c0] (WRITE)
// 0046a2bf: MOV dword ptr [EBP + -0xc],0x1
//   XREF to: Stack[-0x1c] (WRITE)
// 0046a2c6: JMP 0x0046a2cb
//   XREF to: 0046a2cb (UNCONDITIONAL_JUMP)
// 0046a2c8: INC dword ptr [EBP + -0xc]
//   Label: LAB_0046a2c8
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0046a2cb: IMUL EDX,dword ptr [EBP + -0x4],0x184
//   Label: LAB_0046a2cb
//   XREF to: Stack[-0x14] (READ)
// 0046a2d2: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046a2d5: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0046a2db: JGE 0x0046a3d2
//   XREF to: 0046a3d2 (CONDITIONAL_JUMP)
// 0046a2e1: IMUL EDX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0046a2e8: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046a2eb: SHL EAX,0x2
// 0046a2ee: ADD EAX,EDX
// 0046a2f0: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a0c (DATA)
//   XREF to: 016e9a10 (DATA)
// 0046a2f6: FCOMP float ptr [EBP + 0xfffffe5c]
//   XREF to: Stack[-0x1b4] (READ)
// 0046a2fc: FNSTSW AX
// 0046a2fe: SAHF
// 0046a2ff: JNC 0x0046a31c
//   XREF to: 0046a31c (CONDITIONAL_JUMP)
// 0046a301: IMUL EDX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0046a308: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046a30b: SHL EAX,0x2
// 0046a30e: ADD EAX,EDX
// 0046a310: MOV EAX,dword ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a0c (DATA)
// 0046a316: MOV dword ptr [EBP + 0xfffffe5c],EAX
//   XREF to: Stack[-0x1b4] (WRITE)
// 0046a31c: IMUL EDX,dword ptr [EBP + -0x4],0x184
//   Label: LAB_0046a31c
//   XREF to: Stack[-0x14] (READ)
// 0046a323: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046a326: SHL EAX,0x2
// 0046a329: ADD EAX,EDX
// 0046a32b: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a4c (DATA)
//   XREF to: 016e9a50 (DATA)
// 0046a331: FCOMP float ptr [EBP + 0xfffffe58]
//   XREF to: Stack[-0x1b8] (READ)
// 0046a337: FNSTSW AX
// 0046a339: SAHF
// 0046a33a: JNC 0x0046a357
//   XREF to: 0046a357 (CONDITIONAL_JUMP)
// 0046a33c: IMUL EDX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0046a343: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046a346: SHL EAX,0x2
// 0046a349: ADD EAX,EDX
// 0046a34b: MOV EAX,dword ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a4c (DATA)
// 0046a351: MOV dword ptr [EBP + 0xfffffe58],EAX
//   XREF to: Stack[-0x1b8] (WRITE)
// 0046a357: IMUL EDX,dword ptr [EBP + -0x4],0x184
//   Label: LAB_0046a357
//   XREF to: Stack[-0x14] (READ)
// 0046a35e: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046a361: SHL EAX,0x2
// 0046a364: ADD EAX,EDX
// 0046a366: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a0c (DATA)
// 0046a36c: FCOMP float ptr [EBP + 0xfffffe54]
//   XREF to: Stack[-0x1bc] (READ)
// 0046a372: FNSTSW AX
// 0046a374: SAHF
// 0046a375: JBE 0x0046a392
//   XREF to: 0046a392 (CONDITIONAL_JUMP)
// 0046a377: IMUL EDX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0046a37e: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046a381: SHL EAX,0x2
// 0046a384: ADD EAX,EDX
// 0046a386: MOV EAX,dword ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a0c (DATA)
// 0046a38c: MOV dword ptr [EBP + 0xfffffe54],EAX
//   XREF to: Stack[-0x1bc] (WRITE)
// 0046a392: IMUL EDX,dword ptr [EBP + -0x4],0x184
//   Label: LAB_0046a392
//   XREF to: Stack[-0x14] (READ)
// 0046a399: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046a39c: SHL EAX,0x2
// 0046a39f: ADD EAX,EDX
// 0046a3a1: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a4c (DATA)
// 0046a3a7: FCOMP float ptr [EBP + 0xfffffe50]
//   XREF to: Stack[-0x1c0] (READ)
// 0046a3ad: FNSTSW AX
// 0046a3af: SAHF
// 0046a3b0: JBE 0x0046a3cd
//   XREF to: 0046a3cd (CONDITIONAL_JUMP)
// 0046a3b2: IMUL EDX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0046a3b9: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046a3bc: SHL EAX,0x2
// 0046a3bf: ADD EAX,EDX
// 0046a3c1: MOV EAX,dword ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a4c (DATA)
// 0046a3c7: MOV dword ptr [EBP + 0xfffffe50],EAX
//   XREF to: Stack[-0x1c0] (WRITE)
// 0046a3cd: JMP 0x0046a2c8
//   Label: LAB_0046a3cd
//   XREF to: 0046a2c8 (UNCONDITIONAL_JUMP)
// 0046a3d2: FLD float ptr [EBP + 0xfffffe50]
//   Label: LAB_0046a3d2
//   XREF to: Stack[-0x1c0] (READ)
// 0046a3d8: FMUL float ptr [0x0061d1ea]
//   XREF to: 0061d1ea (READ)
// 0046a3de: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0046a3e3: FISTP dword ptr [EBP + 0xfffffe4c]
//   XREF to: Stack[-0x1c4] (WRITE)
// 0046a3e9: PUSH dword ptr [EBP + 0xfffffe4c]
//   XREF to: Stack[-0x1c4] (READ)
// 0046a3ef: FLD float ptr [EBP + 0xfffffe54]
//   XREF to: Stack[-0x1bc] (READ)
// 0046a3f5: FMUL float ptr [0x0061d1ea]
//   XREF to: 0061d1ea (READ)
// 0046a3fb: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0046a400: FISTP dword ptr [EBP + 0xfffffe4c]
//   XREF to: Stack[-0x1c4] (WRITE)
// 0046a406: PUSH dword ptr [EBP + 0xfffffe4c]
//   XREF to: Stack[-0x1c4] (READ)
// 0046a40c: FLD float ptr [EBP + 0xfffffe58]
//   XREF to: Stack[-0x1b8] (READ)
// 0046a412: FMUL float ptr [0x0061d1ea]
//   XREF to: 0061d1ea (READ)
// 0046a418: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0046a41d: FISTP dword ptr [EBP + 0xfffffe4c]
//   XREF to: Stack[-0x1c4] (WRITE)
// 0046a423: PUSH dword ptr [EBP + 0xfffffe4c]
//   XREF to: Stack[-0x1c4] (READ)
// 0046a429: FLD float ptr [EBP + 0xfffffe5c]
//   XREF to: Stack[-0x1b4] (READ)
// 0046a42f: FMUL float ptr [0x0061d1ea]
//   XREF to: 0061d1ea (READ)
// 0046a435: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0046a43a: FISTP dword ptr [EBP + 0xfffffe4c]
//   XREF to: Stack[-0x1c4] (WRITE)
// 0046a440: PUSH dword ptr [EBP + 0xfffffe4c]
//   XREF to: Stack[-0x1c4] (READ)
// 0046a446: IMUL EAX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0046a44d: MOV EDX,0x16e9910
//   XREF to: 016e9910 (PARAM)
// 0046a452: ADD EAX,EDX
// 0046a454: ADD EAX,0x4
// 0046a457: PUSH EAX
// 0046a458: CALL shape_design.c_cramTextures_FUN_0046a970
//   XREF to: 0046a970 (UNCONDITIONAL_CALL)
// 0046a45d: ADD ESP,0x14
// 0046a460: JMP 0x0046a240
//   Label: LAB_0046a460
//   XREF to: 0046a240 (UNCONDITIONAL_JUMP)
// 0046a465: CMP dword ptr [0x01e8d260],0x0
//   Label: LAB_0046a465
//   XREF to: 01e8d260 (READ)
// 0046a46c: JNZ 0x0046a494
//   XREF to: 0046a494 (CONDITIONAL_JUMP)
// 0046a46e: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0046a473: PUSH 0x0
// 0046a475: PUSH 0x0
// 0046a477: MOV EAX,0x61d1ee
//   XREF to: 0061d1ee (PARAM)
// 0046a47c: PUSH EAX
//   XREF to: 0061d1ee (DATA)
// 0046a47d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046a482: ADD ESP,0xc
// 0046a485: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046a48a: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0046a48f: JMP 0x0046a84a
//   XREF to: 0046a84a (UNCONDITIONAL_JUMP)
// 0046a494: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046a494
//   XREF to: Stack[0x4] (READ)
// 0046a497: PUSH EAX
// 0046a498: CALL shape_design.c_cramTextureList_FUN_0046bb80
//   XREF to: 0046bb80 (UNCONDITIONAL_CALL)
// 0046a49d: ADD ESP,0x4
// 0046a4a0: TEST EAX,EAX
// 0046a4a2: JNZ 0x0046a4a9
//   XREF to: 0046a4a9 (CONDITIONAL_JUMP)
// 0046a4a4: JMP 0x0046a84a
//   XREF to: 0046a84a (UNCONDITIONAL_JUMP)
// 0046a4a9: CMP dword ptr [EBP + 0x14],0x0
//   Label: LAB_0046a4a9
//   XREF to: Stack[0x4] (READ)
// 0046a4ad: JNZ 0x0046a4cb
//   XREF to: 0046a4cb (CONDITIONAL_JUMP)
// 0046a4af: PUSH 0x6e
// 0046a4b1: PUSH 0x0
// 0046a4b3: MOV EAX,0x61d21c
//   XREF to: 0061d21c (PARAM)
// 0046a4b8: PUSH EAX
//   XREF to: 0061d21c (DATA)
// 0046a4b9: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046a4be: ADD ESP,0xc
// 0046a4c1: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046a4c6: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0046a4cb: MOV dword ptr [EBP + -0x4],0x0
//   Label: LAB_0046a4cb
//   XREF to: Stack[-0x14] (WRITE)
// 0046a4d2: JMP 0x0046a4da
//   XREF to: 0046a4da (UNCONDITIONAL_JUMP)
// 0046a4d4: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046a4d4
//   XREF to: Stack[-0x14] (READ)
// 0046a4d7: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0046a4da: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046a4da
//   XREF to: Stack[-0x14] (READ)
// 0046a4dd: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0046a4e3: JGE 0x0046a607
//   XREF to: 0046a607 (CONDITIONAL_JUMP)
// 0046a4e9: IMUL EDX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0046a4f0: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0046a4f5: ADD EAX,EDX
// 0046a4f7: ADD EAX,0x4
// 0046a4fa: PUSH EAX
// 0046a4fb: CALL shape_design.c_findTextureByFilename_FUN_0046dfc0
//   XREF to: 0046dfc0 (UNCONDITIONAL_CALL)
// 0046a500: ADD ESP,0x4
// 0046a503: MOV dword ptr [EBP + 0xfffffe48],EAX
//   XREF to: Stack[-0x1c8] (WRITE)
// 0046a509: CMP dword ptr [EBP + 0xfffffe48],0x0
//   XREF to: Stack[-0x1c8] (READ)
// 0046a510: JGE 0x0046a517
//   XREF to: 0046a517 (CONDITIONAL_JUMP)
// 0046a512: JMP 0x0046a602
//   XREF to: 0046a602 (UNCONDITIONAL_JUMP)
// 0046a517: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_0046a517
//   XREF to: Stack[-0x1c] (WRITE)
// 0046a51e: JMP 0x0046a526
//   XREF to: 0046a526 (UNCONDITIONAL_JUMP)
// 0046a520: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0046a520
//   XREF to: Stack[-0x1c] (READ)
// 0046a523: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0046a526: IMUL EDX,dword ptr [EBP + -0x4],0x184
//   Label: LAB_0046a526
//   XREF to: Stack[-0x14] (READ)
// 0046a52d: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046a530: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0046a536: JGE 0x0046a581
//   XREF to: 0046a581 (CONDITIONAL_JUMP)
// 0046a538: IMUL EAX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0046a53f: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0046a544: ADD EAX,EDX
// 0046a546: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046a549: SHL EDX,0x2
// 0046a54c: ADD EAX,0x138
// 0046a551: ADD EAX,EDX
// 0046a553: PUSH EAX
// 0046a554: IMUL EAX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0046a55b: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0046a560: ADD EAX,EDX
// 0046a562: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046a565: SHL EDX,0x2
// 0046a568: ADD EAX,0xf8
// 0046a56d: ADD EAX,EDX
// 0046a56f: PUSH EAX
// 0046a570: MOV EAX,dword ptr [EBP + 0xfffffe48]
//   XREF to: Stack[-0x1c8] (READ)
// 0046a576: PUSH EAX
// 0046a577: CALL shape_design.c_fixupCramUV_FUN_0046e090
//   XREF to: 0046e090 (UNCONDITIONAL_CALL)
// 0046a57c: ADD ESP,0xc
// 0046a57f: JMP 0x0046a520
//   XREF to: 0046a520 (UNCONDITIONAL_JUMP)
// 0046a581: IMUL ESI,dword ptr [EBP + -0x4],0x184
//   Label: LAB_0046a581
//   XREF to: Stack[-0x14] (READ)
// 0046a588: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0046a58d: ADD EAX,ESI
// 0046a58f: LEA ESI,[EAX + 0x4]
// 0046a592: IMUL EDI,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0046a599: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0046a59e: ADD EAX,EDI
// 0046a5a0: LEA EDI,[EAX + 0x54]
// 0046a5a3: PUSH EDI
// 0046a5a4: MOV AL,byte ptr [ESI]
//   Label: LAB_0046a5a4
//   XREF to: 016e9914 (DATA)
//   XREF to: 016e9916 (DATA)
// 0046a5a6: MOV byte ptr [EDI],AL
//   XREF to: 016e9964 (DATA)
//   XREF to: 016e9966 (DATA)
// 0046a5a8: CMP AL,0x0
// 0046a5aa: JZ 0x0046a5bc
//   XREF to: 0046a5bc (CONDITIONAL_JUMP)
// 0046a5ac: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 016e9915 (DATA)
//   XREF to: 016e9917 (DATA)
// 0046a5af: ADD ESI,0x2
// 0046a5b2: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 016e9965 (DATA)
//   XREF to: 016e9967 (DATA)
// 0046a5b5: ADD EDI,0x2
// 0046a5b8: CMP AL,0x0
// 0046a5ba: JNZ 0x0046a5a4
//   XREF to: 0046a5a4 (CONDITIONAL_JUMP)
// 0046a5bc: POP EDI
//   Label: LAB_0046a5bc
// 0046a5bd: MOV EAX,dword ptr [EBP + 0xfffffe48]
//   XREF to: Stack[-0x1c8] (READ)
// 0046a5c3: PUSH EAX
// 0046a5c4: CALL shape_design.c_getAtlasMapIndex_FUN_0046e030
//   XREF to: 0046e030 (UNCONDITIONAL_CALL)
// 0046a5c9: ADD ESP,0x4
// 0046a5cc: PUSH EAX
// 0046a5cd: CALL shape_design.c_getTextureName_FUN_0046e060
//   XREF to: 0046e060 (UNCONDITIONAL_CALL)
// 0046a5d2: ADD ESP,0x4
// 0046a5d5: IMUL ESI,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0046a5dc: MOV EDI,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0046a5e1: ADD ESI,EDI
// 0046a5e3: LEA EDI,[ESI + 0x4]
// 0046a5e6: MOV ESI,EAX
// 0046a5e8: PUSH EDI
// 0046a5e9: MOV AL,byte ptr [ESI]
//   Label: LAB_0046a5e9
// 0046a5eb: MOV byte ptr [EDI],AL
//   XREF to: 016e9914 (DATA)
//   XREF to: 016e9916 (DATA)
// 0046a5ed: CMP AL,0x0
// 0046a5ef: JZ 0x0046a601
//   XREF to: 0046a601 (CONDITIONAL_JUMP)
// 0046a5f1: MOV AL,byte ptr [ESI + 0x1]
// 0046a5f4: ADD ESI,0x2
// 0046a5f7: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 016e9915 (DATA)
//   XREF to: 016e9917 (DATA)
// 0046a5fa: ADD EDI,0x2
// 0046a5fd: CMP AL,0x0
// 0046a5ff: JNZ 0x0046a5e9
//   XREF to: 0046a5e9 (CONDITIONAL_JUMP)
// 0046a601: POP EDI
//   Label: LAB_0046a601
// 0046a602: JMP 0x0046a4d4
//   Label: LAB_0046a602
//   XREF to: 0046a4d4 (UNCONDITIONAL_JUMP)
// 0046a607: CMP dword ptr [EBP + 0x14],0x0
//   Label: LAB_0046a607
//   XREF to: Stack[0x4] (READ)
// 0046a60b: JZ 0x0046a660
//   XREF to: 0046a660 (CONDITIONAL_JUMP)
// 0046a60d: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046a610: MOV EDI,0x66eda8
//   XREF to: 0066eda8 (DATA)
// 0046a615: PUSH EDI
//   XREF to: 0066eda8 (DATA)
// 0046a616: MOV AL,byte ptr [ESI]
//   Label: LAB_0046a616
// 0046a618: MOV byte ptr [EDI],AL
//   XREF to: 0066eda8 (WRITE)
//   XREF to: 0066edaa (WRITE)
// 0046a61a: CMP AL,0x0
// 0046a61c: JZ 0x0046a62e
//   XREF to: 0046a62e (CONDITIONAL_JUMP)
// 0046a61e: MOV AL,byte ptr [ESI + 0x1]
// 0046a621: ADD ESI,0x2
// 0046a624: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 0066eda9 (WRITE)
//   XREF to: 0066edab (WRITE)
// 0046a627: ADD EDI,0x2
// 0046a62a: CMP AL,0x0
// 0046a62c: JNZ 0x0046a616
//   XREF to: 0046a616 (CONDITIONAL_JUMP)
// 0046a62e: POP EDI
//   Label: LAB_0046a62e
// 0046a62f: MOV ESI,0x61d229
//   XREF to: 0061d229 (DATA)
// 0046a634: MOV EDI,0x66eda8
//   XREF to: 0066eda8 (DATA)
// 0046a639: PUSH EDI
//   XREF to: 0066eda8 (DATA)
// 0046a63a: SUB ECX,ECX
// 0046a63c: DEC ECX
// 0046a63d: MOV AL,0x0
// 0046a63f: SCASB.REPNE ES:EDI
//   XREF to: 0066eda8 (READ)
//   XREF to: 0066eda9 (READ)
// 0046a641: DEC EDI
// 0046a642: MOV AL,byte ptr [ESI]
//   Label: LAB_0046a642
//   XREF to: 0061d229 (READ)
//   XREF to: 0061d22b (READ)
// 0046a644: MOV byte ptr [EDI],AL
//   XREF to: 0066eda8 (WRITE)
//   XREF to: 0066eda9 (WRITE)
//   XREF to: 0066edaa (WRITE)
// 0046a646: CMP AL,0x0
// 0046a648: JZ 0x0046a65a
//   XREF to: 0046a65a (CONDITIONAL_JUMP)
// 0046a64a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061d22a (READ)
//   XREF to: 0061d22c (READ)
// 0046a64d: ADD ESI,0x2
// 0046a650: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 0066eda9 (WRITE)
//   XREF to: 0066edaa (WRITE)
//   XREF to: 0066edab (WRITE)
// 0046a653: ADD EDI,0x2
// 0046a656: CMP AL,0x0
// 0046a658: JNZ 0x0046a642
//   XREF to: 0046a642 (CONDITIONAL_JUMP)
// 0046a65a: POP EDI
//   Label: LAB_0046a65a
// 0046a65b: JMP 0x0046a845
//   XREF to: 0046a845 (UNCONDITIONAL_JUMP)
// 0046a660: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_0046a660
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0046a665: MOV ESI,0x1eb1768
//   XREF to: 01eb1768 (DATA)
// 0046a66a: LEA EDI,[EBP + 0xffffff2c]
//   XREF to: Stack[-0xe4] (DATA)
// 0046a670: PUSH EDI
// 0046a671: MOV AL,byte ptr [ESI]
//   Label: LAB_0046a671
//   XREF to: 01eb1768 (READ)
//   XREF to: 01eb176a (READ)
// 0046a673: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xe4] (DATA)
// 0046a675: CMP AL,0x0
// 0046a677: JZ 0x0046a689
//   XREF to: 0046a689 (CONDITIONAL_JUMP)
// 0046a679: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 01eb1769 (READ)
//   XREF to: 01eb176b (READ)
// 0046a67c: ADD ESI,0x2
// 0046a67f: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xe3] (WRITE)
// 0046a682: ADD EDI,0x2
// 0046a685: CMP AL,0x0
// 0046a687: JNZ 0x0046a671
//   XREF to: 0046a671 (CONDITIONAL_JUMP)
// 0046a689: POP EDI
//   Label: LAB_0046a689
// 0046a68a: MOV EDX,0x2e
// 0046a68f: LEA ESI,[EBP + 0xffffff2c]
//   XREF to: Stack[-0xe4] (DATA)
// 0046a695: MOV AL,byte ptr [ESI]
//   Label: LAB_0046a695
//   XREF to: Stack[-0xe4] (DATA)
// 0046a697: CMP AL,DL
// 0046a699: JZ 0x0046a6ad
//   XREF to: 0046a6ad (CONDITIONAL_JUMP)
// 0046a69b: CMP AL,0x0
// 0046a69d: JZ 0x0046a6ab
//   XREF to: 0046a6ab (CONDITIONAL_JUMP)
// 0046a69f: INC ESI
// 0046a6a0: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0xe3] (DATA)
// 0046a6a2: CMP AL,DL
// 0046a6a4: JZ 0x0046a6ad
//   XREF to: 0046a6ad (CONDITIONAL_JUMP)
// 0046a6a6: INC ESI
// 0046a6a7: CMP AL,0x0
// 0046a6a9: JNZ 0x0046a695
//   XREF to: 0046a695 (CONDITIONAL_JUMP)
// 0046a6ab: SUB ESI,ESI
//   Label: LAB_0046a6ab
// 0046a6ad: MOV dword ptr [EBP + 0xfffffe44],ESI
//   Label: LAB_0046a6ad
//   XREF to: Stack[-0x1cc] (WRITE)
// 0046a6b3: CMP dword ptr [EBP + 0xfffffe44],0x0
//   XREF to: Stack[-0x1cc] (READ)
// 0046a6ba: JZ 0x0046a6c5
//   XREF to: 0046a6c5 (CONDITIONAL_JUMP)
// 0046a6bc: MOV EAX,dword ptr [EBP + 0xfffffe44]
//   XREF to: Stack[-0x1cc] (READ)
// 0046a6c2: MOV byte ptr [EAX],0x0
//   XREF to: Stack[-0xe1] (DATA)
// 0046a6c5: LEA EAX,[EBP + 0xffffff2c]
//   Label: LAB_0046a6c5
//   XREF to: Stack[-0xe4] (DATA)
// 0046a6cb: PUSH EAX
// 0046a6cc: MOV EAX,0x61d22e
//   XREF to: 0061d22e (DATA)
// 0046a6d1: PUSH EAX
//   XREF to: 0061d22e (DATA)
// 0046a6d2: LEA EAX,[EBP + 0xfffffe64]
//   XREF to: Stack[-0x1ac] (DATA)
// 0046a6d8: PUSH EAX
// 0046a6d9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0046a6de: ADD ESP,0xc
// 0046a6e1: LEA EAX,[EBP + 0xfffffe64]
//   XREF to: Stack[-0x1ac] (DATA)
// 0046a6e7: PUSH EAX
// 0046a6e8: PUSH 0x0
// 0046a6ea: PUSH 0x0
// 0046a6ec: PUSH 0x27
// 0046a6ee: MOV EAX,0x66eda8
//   XREF to: 0066eda8 (PARAM)
// 0046a6f3: PUSH EAX
//   XREF to: 0066eda8 (DATA)
// 0046a6f4: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0046a6f9: ADD ESP,0x14
// 0046a6fc: CMP EAX,0x1b
// 0046a6ff: JZ 0x0046a7b8
//   XREF to: 0046a7b8 (CONDITIONAL_JUMP)
// 0046a705: MOV EDI,0x66eda8
//   XREF to: 0066eda8 (DATA)
// 0046a70a: SUB ECX,ECX
// 0046a70c: DEC ECX
// 0046a70d: XOR EAX,EAX
// 0046a70f: SCASB.REPNE ES:EDI
//   XREF to: 0066eda8 (READ)
//   XREF to: 0066eda9 (READ)
// 0046a711: NOT ECX
// 0046a713: DEC ECX
// 0046a714: TEST ECX,ECX
// 0046a716: JNZ 0x0046a73d
//   XREF to: 0046a73d (CONDITIONAL_JUMP)
// 0046a718: LEA ESI,[EBP + 0xffffff2c]
//   XREF to: Stack[-0xe4] (DATA)
// 0046a71e: MOV EDI,0x66eda8
//   XREF to: 0066eda8 (DATA)
// 0046a723: PUSH EDI
//   XREF to: 0066eda8 (DATA)
// 0046a724: MOV AL,byte ptr [ESI]
//   Label: LAB_0046a724
//   XREF to: Stack[-0xe4] (DATA)
// 0046a726: MOV byte ptr [EDI],AL
//   XREF to: 0066eda8 (WRITE)
//   XREF to: 0066edaa (WRITE)
// 0046a728: CMP AL,0x0
// 0046a72a: JZ 0x0046a73c
//   XREF to: 0046a73c (CONDITIONAL_JUMP)
// 0046a72c: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0xe3] (READ)
// 0046a72f: ADD ESI,0x2
// 0046a732: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 0066eda9 (WRITE)
//   XREF to: 0066edab (WRITE)
// 0046a735: ADD EDI,0x2
// 0046a738: CMP AL,0x0
// 0046a73a: JNZ 0x0046a724
//   XREF to: 0046a724 (CONDITIONAL_JUMP)
// 0046a73c: POP EDI
//   Label: LAB_0046a73c
// 0046a73d: MOV EDX,0x2e
//   Label: LAB_0046a73d
// 0046a742: MOV ESI,0x66eda8
//   XREF to: 0066eda8 (DATA)
// 0046a747: MOV AL,byte ptr [ESI]
//   Label: LAB_0046a747
//   XREF to: 0066eda8 (READ)
//   XREF to: 0066edaa (READ)
// 0046a749: CMP AL,DL
// 0046a74b: JZ 0x0046a75f
//   XREF to: 0046a75f (CONDITIONAL_JUMP)
// 0046a74d: CMP AL,0x0
// 0046a74f: JZ 0x0046a75d
//   XREF to: 0046a75d (CONDITIONAL_JUMP)
// 0046a751: INC ESI
// 0046a752: MOV AL,byte ptr [ESI]
//   XREF to: 0066eda9 (READ)
//   XREF to: 0066edab (READ)
// 0046a754: CMP AL,DL
// 0046a756: JZ 0x0046a75f
//   XREF to: 0046a75f (CONDITIONAL_JUMP)
// 0046a758: INC ESI
// 0046a759: CMP AL,0x0
// 0046a75b: JNZ 0x0046a747
//   XREF to: 0046a747 (CONDITIONAL_JUMP)
// 0046a75d: SUB ESI,ESI
//   Label: LAB_0046a75d
// 0046a75f: TEST ESI,ESI
//   Label: LAB_0046a75f
// 0046a761: JNZ 0x0046a777
//   XREF to: 0046a777 (CONDITIONAL_JUMP)
// 0046a763: MOV EDI,0x66eda8
//   XREF to: 0066eda8 (DATA)
// 0046a768: SUB ECX,ECX
// 0046a76a: DEC ECX
// 0046a76b: XOR EAX,EAX
// 0046a76d: SCASB.REPNE ES:EDI
//   XREF to: 0066eda8 (READ)
//   XREF to: 0066eda9 (READ)
// 0046a76f: NOT ECX
// 0046a771: DEC ECX
// 0046a772: CMP ECX,0x8
// 0046a775: JBE 0x0046a779
//   XREF to: 0046a779 (CONDITIONAL_JUMP)
// 0046a777: JMP 0x0046a7a5
//   Label: LAB_0046a777
//   XREF to: 0046a7a5 (UNCONDITIONAL_JUMP)
// 0046a779: MOV ESI,0x61d249
//   Label: LAB_0046a779
//   XREF to: 0061d249 (DATA)
// 0046a77e: MOV EDI,0x66eda8
//   XREF to: 0066eda8 (DATA)
// 0046a783: PUSH EDI
//   XREF to: 0066eda8 (DATA)
// 0046a784: SUB ECX,ECX
// 0046a786: DEC ECX
// 0046a787: MOV AL,0x0
// 0046a789: SCASB.REPNE ES:EDI
//   XREF to: 0066eda8 (READ)
//   XREF to: 0066eda9 (READ)
// 0046a78b: DEC EDI
// 0046a78c: MOV AL,byte ptr [ESI]
//   Label: LAB_0046a78c
//   XREF to: 0061d249 (READ)
//   XREF to: 0061d24b (READ)
// 0046a78e: MOV byte ptr [EDI],AL
//   XREF to: 0066eda8 (WRITE)
//   XREF to: 0066eda9 (WRITE)
//   XREF to: 0066edaa (WRITE)
// 0046a790: CMP AL,0x0
// 0046a792: JZ 0x0046a7a4
//   XREF to: 0046a7a4 (CONDITIONAL_JUMP)
// 0046a794: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061d24a (READ)
//   XREF to: 0061d24c (READ)
// 0046a797: ADD ESI,0x2
// 0046a79a: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 0066eda9 (WRITE)
//   XREF to: 0066edaa (WRITE)
//   XREF to: 0066edab (WRITE)
// 0046a79d: ADD EDI,0x2
// 0046a7a0: CMP AL,0x0
// 0046a7a2: JNZ 0x0046a78c
//   XREF to: 0046a78c (CONDITIONAL_JUMP)
// 0046a7a4: POP EDI
//   Label: LAB_0046a7a4
// 0046a7a5: MOV EAX,0x66eda8
//   Label: LAB_0046a7a5
//   XREF to: 0066eda8 (PARAM)
// 0046a7aa: PUSH EAX
//   XREF to: 0066eda8 (DATA)
// 0046a7ab: CALL shape_design.c_exportModelToMDL_FUN_00459e80
//   XREF to: 00459e80 (UNCONDITIONAL_CALL)
// 0046a7b0: ADD ESP,0x4
// 0046a7b3: JMP 0x0046a845
//   XREF to: 0046a845 (UNCONDITIONAL_JUMP)
// 0046a7b8: LEA ESI,[EBP + 0xffffff2c]
//   Label: LAB_0046a7b8
//   XREF to: Stack[-0xe4] (DATA)
// 0046a7be: MOV EDI,0x66eda8
//   XREF to: 0066eda8 (DATA)
// 0046a7c3: PUSH EDI
//   XREF to: 0066eda8 (DATA)
// 0046a7c4: MOV AL,byte ptr [ESI]
//   Label: LAB_0046a7c4
//   XREF to: Stack[-0xe4] (DATA)
// 0046a7c6: MOV byte ptr [EDI],AL
//   XREF to: 0066eda8 (WRITE)
//   XREF to: 0066edaa (WRITE)
// 0046a7c8: CMP AL,0x0
// 0046a7ca: JZ 0x0046a7dc
//   XREF to: 0046a7dc (CONDITIONAL_JUMP)
// 0046a7cc: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0xe3] (READ)
// 0046a7cf: ADD ESI,0x2
// 0046a7d2: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 0066eda9 (WRITE)
//   XREF to: 0066edab (WRITE)
// 0046a7d5: ADD EDI,0x2
// 0046a7d8: CMP AL,0x0
// 0046a7da: JNZ 0x0046a7c4
//   XREF to: 0046a7c4 (CONDITIONAL_JUMP)
// 0046a7dc: POP EDI
//   Label: LAB_0046a7dc
// 0046a7dd: MOV EDX,0x2e
// 0046a7e2: MOV ESI,0x66eda8
//   XREF to: 0066eda8 (DATA)
// 0046a7e7: MOV AL,byte ptr [ESI]
//   Label: LAB_0046a7e7
//   XREF to: 0066eda8 (READ)
//   XREF to: 0066edaa (READ)
// 0046a7e9: CMP AL,DL
// 0046a7eb: JZ 0x0046a7ff
//   XREF to: 0046a7ff (CONDITIONAL_JUMP)
// 0046a7ed: CMP AL,0x0
// 0046a7ef: JZ 0x0046a7fd
//   XREF to: 0046a7fd (CONDITIONAL_JUMP)
// 0046a7f1: INC ESI
// 0046a7f2: MOV AL,byte ptr [ESI]
//   XREF to: 0066eda9 (READ)
//   XREF to: 0066edab (READ)
// 0046a7f4: CMP AL,DL
// 0046a7f6: JZ 0x0046a7ff
//   XREF to: 0046a7ff (CONDITIONAL_JUMP)
// 0046a7f8: INC ESI
// 0046a7f9: CMP AL,0x0
// 0046a7fb: JNZ 0x0046a7e7
//   XREF to: 0046a7e7 (CONDITIONAL_JUMP)
// 0046a7fd: SUB ESI,ESI
//   Label: LAB_0046a7fd
// 0046a7ff: TEST ESI,ESI
//   Label: LAB_0046a7ff
// 0046a801: JNZ 0x0046a817
//   XREF to: 0046a817 (CONDITIONAL_JUMP)
// 0046a803: MOV EDI,0x66eda8
//   XREF to: 0066eda8 (DATA)
// 0046a808: SUB ECX,ECX
// 0046a80a: DEC ECX
// 0046a80b: XOR EAX,EAX
// 0046a80d: SCASB.REPNE ES:EDI
//   XREF to: 0066eda8 (READ)
//   XREF to: 0066eda9 (READ)
// 0046a80f: NOT ECX
// 0046a811: DEC ECX
// 0046a812: CMP ECX,0x8
// 0046a815: JBE 0x0046a819
//   XREF to: 0046a819 (CONDITIONAL_JUMP)
// 0046a817: JMP 0x0046a845
//   Label: LAB_0046a817
//   XREF to: 0046a845 (UNCONDITIONAL_JUMP)
// 0046a819: MOV ESI,0x61d24e
//   Label: LAB_0046a819
//   XREF to: 0061d24e (DATA)
// 0046a81e: MOV EDI,0x66eda8
//   XREF to: 0066eda8 (DATA)
// 0046a823: PUSH EDI
//   XREF to: 0066eda8 (DATA)
// 0046a824: SUB ECX,ECX
// 0046a826: DEC ECX
// 0046a827: MOV AL,0x0
// 0046a829: SCASB.REPNE ES:EDI
//   XREF to: 0066eda8 (READ)
//   XREF to: 0066eda9 (READ)
// 0046a82b: DEC EDI
// 0046a82c: MOV AL,byte ptr [ESI]
//   Label: LAB_0046a82c
//   XREF to: 0061d24e (READ)
//   XREF to: 0061d250 (READ)
// 0046a82e: MOV byte ptr [EDI],AL
//   XREF to: 0066eda8 (WRITE)
//   XREF to: 0066eda9 (WRITE)
//   XREF to: 0066edaa (WRITE)
// 0046a830: CMP AL,0x0
// 0046a832: JZ 0x0046a844
//   XREF to: 0046a844 (CONDITIONAL_JUMP)
// 0046a834: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061d24f (READ)
//   XREF to: 0061d251 (READ)
// 0046a837: ADD ESI,0x2
// 0046a83a: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 0066eda9 (WRITE)
//   XREF to: 0066edaa (WRITE)
//   XREF to: 0066edab (WRITE)
// 0046a83d: ADD EDI,0x2
// 0046a840: CMP AL,0x0
// 0046a842: JNZ 0x0046a82c
//   XREF to: 0046a82c (CONDITIONAL_JUMP)
// 0046a844: POP EDI
//   Label: LAB_0046a844
// 0046a845: CALL engine_texture.cpp_clearTextureCache_FUN_005dd8e0
//   Label: LAB_0046a845
//   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)
// 0046a84a: MOV ESP,EBP
//   Label: LAB_0046a84a
// 0046a84c: POP EBP
// 0046a84d: POP EDI
// 0046a84e: POP ESI
// 0046a84f: POP EBX
// 0046a850: RET

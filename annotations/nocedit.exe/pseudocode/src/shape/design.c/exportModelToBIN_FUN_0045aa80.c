// Name: shape_design.c_exportModelToBIN_FUN_0045aa80
// Address: 0045aa80
// Address Range: [[0045aa80, 0045b84c]]
// Convention: __cdecl
// Signature: void shape_design.c_exportModelToBIN_FUN_0045aa80(char * filename, int depth_mode, int scale_mode, int export_format, int include_textures)
// Cross-references:
//   shape_design.c_modelExportWizard_FUN_0045a7b0 (0045a7b0) at 0045aa6c [UNCONDITIONAL_CALL]
//   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 (0053ee70) at 0053f28b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wb_0061b09e
//   TerminatedCString s_models_0061b0a1
//   TerminatedCString s_wt_0061b0a8
//   TerminatedCString s_models_0061b0ab
//   TerminatedCString s_Model_Display_List_0061b0b2
//   TerminatedCString s_Copyright_C_1994_Termina_0061b0c8
//   TerminatedCString s_All_rights_reserved_0061b0f5
//   TerminatedCString s_include_3d_inc_0061b10d
//   TerminatedCString s_code_segment_0061b11f
//   TerminatedCString s_ASSUME_cs_code_0061b12d
//   TerminatedCString s_Unable_to_write_binary_f_0061b13f
//   double g_ScaleToFitConstant = 64
//   double g_NormalizationConstant = 2
//   double g_AnimationScaleConstant = 64
//   double g_MagnifyMultiplier = 65536
//   TerminatedCString s_MAGNIFY_d_0061b17e
//   TerminatedCString s_VLIST_0_d_0061b18c
//   double g_CoordinateMultiplier = 256
//   TerminatedCString s_VERTEX_d_d_d_0061b1a6
//   float g_VertexNormalMultiplier = 65535
//   TerminatedCString s_ZBUFFERPOLY_0_d_0061b1be
//   double g_NormalVectorMultiplier = 65535
//   double g_PlaneDistanceMultiplier = 256
//   TerminatedCString s_COLOR_d_0061b1e6
//   TerminatedCString s_ZFACET_0061b1f1
//   TerminatedCString s_FACET_0061b1f9
//   TerminatedCString s_d_d_d_d_d_0061b200
//   TerminatedCString s_d_0061b20f
//   TerminatedCString s_anon_0061b213
//   TerminatedCString s_TEXTURE_s_0061b215
//   double g_GiantObjectNormalMultiplier = 2048
//   double g_GiantObjectPlaneDistanceMultiplier = 256
//   double g_HugeFlatTrackNormalMultiplier = 2048
//   double g_HugeFlatTrackPlaneDistanceMultiplier = 256
//   double g_TextureCoordinateMultiplier = 65536
//   TerminatedCString s_FACET_0061b24e
//   TerminatedCString s_ZFACET_0061b255
//   TerminatedCString s_FACET_0061b25d
//   TerminatedCString s_ZFACET_0061b264
//   TerminatedCString s_ZPFACET_0061b26c
//   TerminatedCString s_dTMAP_d_d_d_d_0061b275
//   TerminatedCString s_d_d_d_0061b288
//   TerminatedCString s_anon_0061b292
//   TerminatedCString s_RETURN_0061b294
//   TerminatedCString s_code_ends_0061b29e
//   TerminatedCString s_end_0061b2aa
//   TerminatedCString s_shape_design_c_0061b2b0
//   int g_EditorColorIndex
//   char[80] g_TempTextureName
//   undefined4 DAT_01626371
//   undefined4 DAT_01626372
//   undefined4 DAT_01626373
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   SVertexData[20000] g_VertexNormals
//   undefined4 DAT_01687e90
//   undefined4 DAT_01687e94
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9915
//   undefined4 DAT_016e9917
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99b8
//   undefined4 DAT_016e99bc
//   undefined4 DAT_016e99c0
//   undefined4 DAT_016e99c4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a48
//   undefined4 DAT_016e9a8c
//   int g_GouraudShadingEnabled
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_fwrite_FUN_005fdc00
//   crt_string.c_strcmp_FUN_005fef20
//   crt_unknown.c_FUN_00600002
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   shape_design.c_sortPolygonsByTexture_FUN_0045b8b0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl
shape_design_c_exportModelToBIN_FUN_0045aa80
          (char *filename,int depth_mode,int scale_mode,int export_format,int include_textures)

{
  char cVar1;
  uint uVar2;
  FILE *pFVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  int iVar6;
  int extraout_EDX_05;
  undefined4 unaff_EBX;
  BADSPACEBASE *in_ESP;
  char *pcVar7;
  char *pcVar8;
  float10 fVar9;
  double dVar10;
  bool bVar11;
  undefined4 local_98;
  undefined4 local_94;
  char local_90 [16];
  int local_80;
  uint local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  uint local_2c;
  FILE *local_28;
  int local_24;
  int local_20;
  FILE *local_1c;
  int local_18;
  float local_14;
  
  shape_design_c_sortPolygonsByTexture_FUN_0045b8b0();
  if (export_format == 0) {
    local_1c = engine_dosio_c_getFile_FUN_00481a50("models",filename,"wt");
    crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"; Model Display List\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"; Copyright (C) 1994 Terminal Reality, Inc.\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"; All rights reserved\n\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tinclude\t3d.inc\n\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"code\tsegment\n");
    pFVar3 = (FILE *)crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tASSUME\tcs:code\n\n");
    uVar5 = extraout_EDX_00;
  }
  else {
    pFVar3 = engine_dosio_c_getFile_FUN_00481a50("models",filename,"wb");
    uVar5 = extraout_EDX;
    local_1c = pFVar3;
  }
  if (local_1c == (FILE *)0x0) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    engine_2d_c_drawText_FUN_00401fd0("Unable to write binary file!",0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  else {
    if (scale_mode == 0x31) {
      local_14 = 0.0;
      for (local_28 = (FILE *)0x0; (int)local_28 < g_VertexCount;
          local_28 = (FILE *)((int)&local_28->_ptr + 1)) {
        if (local_14 < ABS(g_LoadedVertices[(int)local_28].vertex.x)) {
          local_14 = ABS(g_LoadedVertices[(int)local_28].vertex.x);
        }
        if (local_14 < ABS(g_LoadedVertices[(int)local_28].vertex.y)) {
          local_14 = ABS(g_LoadedVertices[(int)local_28].vertex.y);
        }
        if (local_14 < ABS(g_LoadedVertices[(int)local_28].vertex.z)) {
          local_14 = ABS(g_LoadedVertices[(int)local_28].vertex.z);
        }
      }
      local_14 = (float)g_ScaleToFitConstant / local_14;
      pFVar3 = local_28;
    }
    if ((0x31 < scale_mode) && (scale_mode < 0x35)) {
      local_14 = 0.0;
      for (local_28 = (FILE *)0x0; (int)local_28 < g_VertexCount;
          local_28 = (FILE *)((int)&local_28->_ptr + 1)) {
        if ((scale_mode == 0x32) && (local_14 < ABS(g_LoadedVertices[(int)local_28].vertex.x))) {
          local_14 = ABS(g_LoadedVertices[(int)local_28].vertex.x);
        }
        if ((scale_mode == 0x33) && (local_14 < ABS(g_LoadedVertices[(int)local_28].vertex.y))) {
          local_14 = ABS(g_LoadedVertices[(int)local_28].vertex.y);
        }
        if ((scale_mode == 0x34) && (local_14 < ABS(g_LoadedVertices[(int)local_28].vertex.z))) {
          local_14 = ABS(g_LoadedVertices[(int)local_28].vertex.z);
        }
      }
      local_14 = 1.0 / local_14;
      pFVar3 = local_28;
    }
    dVar10 = (double)CONCAT44(uVar5,pFVar3);
    if (scale_mode == 0x35) {
      local_14 = 1.0;
    }
    if (scale_mode == 0x36) {
      local_14 = 0.0;
      for (local_28 = (FILE *)0x0; (int)local_28 < g_VertexCount;
          local_28 = (FILE *)((int)&local_28->_ptr + 1)) {
        if (local_14 < ABS(g_LoadedVertices[(int)local_28].vertex.x)) {
          local_14 = ABS(g_LoadedVertices[(int)local_28].vertex.x);
        }
        if (local_14 < ABS(g_LoadedVertices[(int)local_28].vertex.y)) {
          local_14 = ABS(g_LoadedVertices[(int)local_28].vertex.y);
        }
        if (local_14 < ABS(g_LoadedVertices[(int)local_28].vertex.z)) {
          local_14 = ABS(g_LoadedVertices[(int)local_28].vertex.z);
        }
      }
      fVar9 = ((float10)0.6931471805599453 * (float10)local_14) /
              ((float10)0.6931471805599453 * (float10)g_NormalizationConstant);
      dVar10 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar5,local_28));
      local_18 = (int)ROUND(fVar9) + 1;
      dVar10 = (double)crt_unknown_c_FUN_00600002
                                 (local_18,(int)((ulonglong)dVar10 >> 0x20),unaff_EBX,extraout_ECX,0
                                  ,0x3ff00000,local_18);
      local_14 = (float)g_AnimationScaleConstant / (float)dVar10;
    }
    local_38 = 0x14;
    fVar9 = (float10)local_14 * (float10)g_MagnifyMultiplier;
    dVar10 = crt_math_c_round_FUN_005fe6b0(dVar10);
    uVar5 = (undefined4)((ulonglong)dVar10 >> 0x20);
    local_34 = (int)ROUND(fVar9);
    if (export_format == 0) {
      crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tMAGNIFY\t%d\n\n",local_34);
      uVar5 = extraout_EDX_01;
    }
    else {
      crt_stdio_c_fwrite_FUN_005fdc00(&local_38,1,8,local_1c);
    }
    local_5c = 2;
    local_58 = 0;
    local_54 = g_VertexCount;
    if (export_format == 0) {
      crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tVLIST\t0,%d\n",g_VertexCount);
      uVar5 = extraout_EDX_02;
    }
    else {
      crt_stdio_c_fwrite_FUN_005fdc00(&local_5c,1,0xc,local_1c);
    }
    for (local_28 = (FILE *)0x0; (int)local_28 < g_VertexCount;
        local_28 = (FILE *)((int)&local_28->_ptr + 1)) {
      fVar9 = (float10)local_14 *
              (float10)g_LoadedVertices[(int)local_28].vertex.x * (float10)g_CoordinateMultiplier;
      dVar10 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar5,(int)local_28 * 0x14));
      local_68 = (int)ROUND(fVar9);
      fVar9 = (float10)local_14 *
              (float10)g_LoadedVertices[(int)local_28].vertex.y * (float10)g_CoordinateMultiplier;
      dVar10 = crt_math_c_round_FUN_005fe6b0
                         ((double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),(int)local_28 * 0x14));
      local_64 = (int)ROUND(fVar9);
      fVar9 = (float10)local_14 *
              (float10)g_LoadedVertices[(int)local_28].vertex.z * (float10)g_CoordinateMultiplier;
      dVar10 = crt_math_c_round_FUN_005fe6b0
                         ((double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),(int)local_28 * 0x14));
      uVar5 = (undefined4)((ulonglong)dVar10 >> 0x20);
      local_60 = (int)ROUND(fVar9);
      if (export_format == 0) {
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (local_1c,"\tVERTEX\t%d,%d,%d\n",local_68,local_64,local_60);
        uVar5 = extraout_EDX_03;
      }
      else {
        crt_stdio_c_fwrite_FUN_005fdc00(&local_68,1,0xc,local_1c);
      }
    }
    if (g_GouraudShadingEnabled != 0) {
      local_5c = 3;
      local_58 = 0;
      local_54 = g_VertexCount;
      crt_stdio_c_fwrite_FUN_005fdc00(&local_5c,1,0xc,local_1c);
      for (local_28 = (FILE *)0x0; (int)local_28 < g_VertexCount;
          local_28 = (FILE *)((int)&local_28->_ptr + 1)) {
        fVar9 = (float10)g_VertexNormals[(int)local_28].vertex.x * (float10)g_VertexNormalMultiplier
        ;
        dVar10 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar5,(int)local_28 * 0x14));
        local_68 = (int)ROUND(fVar9);
        fVar9 = (float10)g_VertexNormals[(int)local_28].vertex.y * (float10)g_VertexNormalMultiplier
        ;
        dVar10 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),(int)local_28 * 0x14))
        ;
        local_64 = (int)ROUND(fVar9);
        fVar9 = (float10)g_VertexNormals[(int)local_28].vertex.z * (float10)g_VertexNormalMultiplier
        ;
        dVar10 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),(int)local_28 * 0x14))
        ;
        uVar5 = (undefined4)((ulonglong)dVar10 >> 0x20);
        local_60 = (int)ROUND(fVar9);
        crt_stdio_c_fwrite_FUN_005fdc00(&local_68,1,0xc,local_1c);
      }
    }
    if ((depth_mode == 0x59) || (depth_mode == 0x5a)) {
      local_44 = 0x17;
      local_40 = 0;
      local_3c = g_VertexCount;
      if (export_format == 0) {
        crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tZBUFFERPOLY\t0,%d\n\n",g_VertexCount);
      }
      else {
        crt_stdio_c_fwrite_FUN_005fdc00(&local_44,1,0xc,local_1c);
      }
    }
    g_EditorColorIndex = -1;
    g_TempTextureName[0] = '\0';
    for (local_28 = (FILE *)0x0; (int)local_28 < g_PolygonCount;
        local_28 = (FILE *)((int)&local_28->_ptr + 1)) {
      shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + (int)local_28);
      local_7c = g_ModelPolygonData[(int)local_28].vertex_indices_count;
      fVar9 = (float10)g_ModelPolygonData[(int)local_28].normal.x *
              (float10)g_NormalVectorMultiplier;
      dVar10 = crt_math_c_round_FUN_005fe6b0
                         ((double)CONCAT44(extraout_EDX_04,(int)local_28 * 0x184));
      local_78 = (int)ROUND(fVar9);
      fVar9 = (float10)g_ModelPolygonData[(int)local_28].normal.y *
              (float10)g_NormalVectorMultiplier;
      dVar10 = crt_math_c_round_FUN_005fe6b0
                         ((double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),(int)local_28 * 0x184));
      local_74 = (int)ROUND(fVar9);
      fVar9 = (float10)g_ModelPolygonData[(int)local_28].normal.z *
              (float10)g_NormalVectorMultiplier;
      dVar10 = crt_math_c_round_FUN_005fe6b0
                         ((double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),(int)local_28 * 0x184));
      local_70 = (int)ROUND(fVar9);
      fVar9 = (float10)local_14 *
              (float10)g_ModelPolygonData[(int)local_28].plane_distance *
              (float10)g_NormalVectorMultiplier * (float10)g_PlaneDistanceMultiplier;
      crt_math_c_round_FUN_005fe6b0
                ((double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),(int)local_28 * 0x184));
      local_6c = (int)ROUND(fVar9);
      if (g_ModelPolygonData[(int)local_28].polygon_type == 1) {
        if (g_EditorColorIndex != g_ModelPolygonData[(int)local_28].material_id) {
          local_30 = 10;
          local_2c = g_ModelPolygonData[(int)local_28].material_id;
          if (export_format == 0) {
            crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tCOLOR\t%d\n",local_2c);
          }
          else {
            crt_stdio_c_fwrite_FUN_005fdc00(&local_30,1,8,local_1c);
          }
          g_EditorColorIndex = g_ModelPolygonData[(int)local_28].material_id;
        }
        if (depth_mode == 0x58) {
          if (g_GouraudShadingEnabled == 0) {
            local_80 = 5;
          }
          else {
            local_80 = 6;
          }
        }
        else if (g_GouraudShadingEnabled == 0) {
          local_80 = 0x19;
        }
        else {
          local_80 = 0x1b;
        }
        if (export_format == 0) {
          if (local_80 == 0x19) {
            crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tZFACET");
          }
          if (local_80 == 5) {
            crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tFACET");
          }
          crt_stdio_c_fprintf_FUN_005fe6d0
                    (local_1c,"%d\t%d,%d,%d,%d",local_7c,local_78,local_74,local_70,local_6c);
          for (local_24 = 0; local_24 < (int)local_7c; local_24 = local_24 + 1) {
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (local_1c,",%d",
                       g_ModelPolygonData[(int)local_28].vertex_indices[local_24]);
          }
          crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\n");
        }
        else {
          crt_stdio_c_fwrite_FUN_005fdc00(&local_80,1,0x18,local_1c);
          crt_stdio_c_fwrite_FUN_005fdc00
                    (g_ModelPolygonData[(int)local_28].vertex_indices,local_7c,4,local_1c);
        }
      }
      else {
        iVar6 = (int)local_28 * 0x184;
        iVar4 = crt_string_c_strcmp_FUN_005fef20
                          (g_TempTextureName,g_ModelPolygonData[(int)local_28].texture_name);
        if (iVar4 != 0) {
          pcVar7 = g_ModelPolygonData[(int)local_28].texture_name;
          pcVar8 = g_TempTextureName;
          do {
            cVar1 = *pcVar7;
            *pcVar8 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar8[1] = cVar1;
            pcVar8 = pcVar8 + 2;
          } while (cVar1 != '\0');
          pcVar8 = g_TempTextureName;
          pcVar7 = local_90;
          do {
            cVar1 = *pcVar8;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          local_94 = 0;
          local_98 = 0xd;
          if (include_textures == 0x59) {
            if (export_format == 0) {
              crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tTEXTURE\t\"%s\"\n",local_90);
              iVar6 = extraout_EDX_05;
            }
            else {
              crt_stdio_c_fwrite_FUN_005fdc00(&local_98,1,0x18,local_1c);
            }
          }
        }
        if (depth_mode == 0x58) {
          local_80 = 0xe;
        }
        else if (depth_mode == 0x54) {
          local_80 = 0x11;
        }
        else if (depth_mode == 0x52) {
          local_80 = 0x33;
        }
        else if (depth_mode == 0x47) {
          local_80 = 0x34;
          fVar9 = (float10)g_ModelPolygonData[(int)local_28].normal.x *
                  (float10)g_GiantObjectNormalMultiplier;
          dVar10 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar6,(int)local_28 * 0x184));
          local_78 = (int)ROUND(fVar9);
          fVar9 = (float10)g_ModelPolygonData[(int)local_28].normal.y *
                  (float10)g_GiantObjectNormalMultiplier;
          dVar10 = crt_math_c_round_FUN_005fe6b0
                             ((double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),
                                               (int)local_28 * 0x184));
          local_74 = (int)ROUND(fVar9);
          fVar9 = (float10)g_ModelPolygonData[(int)local_28].normal.z *
                  (float10)g_GiantObjectNormalMultiplier;
          dVar10 = crt_math_c_round_FUN_005fe6b0
                             ((double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),
                                               (int)local_28 * 0x184));
          local_70 = (int)ROUND(fVar9);
          fVar9 = (float10)local_14 *
                  (float10)g_ModelPolygonData[(int)local_28].plane_distance *
                  (float10)g_GiantObjectNormalMultiplier *
                  (float10)g_GiantObjectPlaneDistanceMultiplier;
          crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),(int)local_28 * 0x184));
          local_6c = (int)ROUND(fVar9);
        }
        else if (depth_mode == 0x48) {
          local_80 = 0xe;
          fVar9 = (float10)g_ModelPolygonData[(int)local_28].normal.x *
                  (float10)g_HugeFlatTrackNormalMultiplier;
          dVar10 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar6,(int)local_28 * 0x184));
          local_78 = (int)ROUND(fVar9);
          fVar9 = (float10)g_ModelPolygonData[(int)local_28].normal.y *
                  (float10)g_HugeFlatTrackNormalMultiplier;
          dVar10 = crt_math_c_round_FUN_005fe6b0
                             ((double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),
                                               (int)local_28 * 0x184));
          local_74 = (int)ROUND(fVar9);
          fVar9 = (float10)g_ModelPolygonData[(int)local_28].normal.z *
                  (float10)g_HugeFlatTrackNormalMultiplier;
          dVar10 = crt_math_c_round_FUN_005fe6b0
                             ((double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),
                                               (int)local_28 * 0x184));
          local_70 = (int)ROUND(fVar9);
          fVar9 = (float10)local_14 *
                  (float10)g_ModelPolygonData[(int)local_28].plane_distance *
                  (float10)g_HugeFlatTrackNormalMultiplier *
                  (float10)g_HugeFlatTrackPlaneDistanceMultiplier;
          crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),(int)local_28 * 0x184));
          local_6c = (int)ROUND(fVar9);
        }
        else if (depth_mode == 0x5a) {
          local_80 = 0x22;
        }
        else if (g_GouraudShadingEnabled == 0) {
          local_80 = 0x18;
        }
        else {
          local_80 = 0x29;
        }
        if (local_80 == 0x29) {
          bVar11 = false;
          for (iVar6 = 0; iVar6 < (int)local_7c; iVar6 = iVar6 + 1) {
            uVar2 = g_ModelPolygonData[(int)local_28].vertex_indices[iVar6];
            if (ABS(g_VertexNormals[uVar2].vertex.x) != 0.0) {
              bVar11 = true;
            }
            if (ABS(g_VertexNormals[uVar2].vertex.y) != 0.0) {
              bVar11 = true;
            }
            if (ABS(g_VertexNormals[uVar2].vertex.z) != 0.0) {
              bVar11 = true;
            }
          }
          if (!bVar11) {
            local_80 = 0x18;
          }
        }
        if (export_format == 0) {
          if (local_80 == 5) {
            crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tFACET");
          }
          if (local_80 == 0x19) {
            crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tZFACET");
          }
          if (local_80 == 0xe) {
            crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tFACET");
          }
          if (local_80 == 0x18) {
            crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tZFACET");
          }
          if (local_80 == 0x22) {
            crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tZPFACET");
          }
          crt_stdio_c_fprintf_FUN_005fe6d0
                    (local_1c,"%dTMAP\t%d,%d,%d,%d",local_7c,local_78,local_74,local_70,local_6c)
          ;
          for (local_24 = 0; local_24 < (int)local_7c; local_24 = local_24 + 1) {
            crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44((int)local_28 * 0x184,local_24 * 4 + (int)local_28 * 0x184))
            ;
            fVar9 = (float10)g_ModelPolygonData[(int)local_28].uv_u[local_24];
            crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44((int)local_28 * 0x184,local_24 * 4 + (int)local_28 * 0x184))
            ;
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (local_1c,",%d,%d,%d",
                       g_ModelPolygonData[(int)local_28].vertex_indices[local_24],(int)ROUND(fVar9))
            ;
          }
          crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\n");
        }
        else {
          crt_stdio_c_fwrite_FUN_005fdc00(&local_80,1,0x18,local_1c);
          for (local_24 = 0; local_24 < (int)local_7c; local_24 = local_24 + 1) {
            crt_stdio_c_fwrite_FUN_005fdc00
                      ((void *)((int)local_28 * 0x184 + 0x16e99c8 + local_24 * 4),1,4,local_1c);
            fVar9 = (float10)g_ModelPolygonData[(int)local_28].uv_u[local_24] *
                    (float10)g_TextureCoordinateMultiplier;
            crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44((int)local_28 * 0x184,local_24 * 4 + (int)local_28 * 0x184))
            ;
            local_20 = (int)ROUND(fVar9);
            crt_stdio_c_fwrite_FUN_005fdc00(&local_20,1,4,local_1c);
            fVar9 = (float10)g_ModelPolygonData[(int)local_28].uv_v[local_24] *
                    (float10)g_TextureCoordinateMultiplier;
            crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44((int)local_28 * 0x184,local_24 * 4 + (int)local_28 * 0x184))
            ;
            local_20 = (int)ROUND(fVar9);
            crt_stdio_c_fwrite_FUN_005fdc00(&local_20,1,4,local_1c);
          }
        }
      }
    }
    local_28 = (FILE *)0x0;
    if (export_format == 0) {
      crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tRETURN\n\n");
      crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\ncode\tends\n");
      crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tend\n");
    }
    else {
      crt_stdio_c_fwrite_FUN_005fdc00(&local_28,1,4,local_1c);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\shape\\design.c",0x868);
  }
  return;
}


// Assembly code:
// 0045aa80: PUSH EBX
//   Label: shape_design.c_exportModelToBIN_FUN_0045aa80
// 0045aa81: PUSH ESI
// 0045aa82: PUSH EDI
// 0045aa83: PUSH EBP
// 0045aa84: MOV EBP,ESP
// 0045aa86: SUB ESP,0xec
// 0045aa8c: CALL shape_design.c_sortPolygonsByTexture_FUN_0045b8b0
//   XREF to: 0045b8b0 (UNCONDITIONAL_CALL)
// 0045aa91: CMP dword ptr [EBP + 0x20],0x0
//   XREF to: Stack[0x10] (READ)
// 0045aa95: JZ 0x0045aab7
//   XREF to: 0045aab7 (CONDITIONAL_JUMP)
// 0045aa97: MOV EAX,0x61b09e
//   XREF to: 0061b09e (DATA)
// 0045aa9c: PUSH EAX
//   XREF to: 0061b09e (DATA)
// 0045aa9d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045aaa0: PUSH EAX
// 0045aaa1: MOV EAX,0x61b0a1
//   XREF to: 0061b0a1 (PARAM)
// 0045aaa6: PUSH EAX
//   XREF to: 0061b0a1 (DATA)
// 0045aaa7: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0045aaac: ADD ESP,0xc
// 0045aaaf: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0045aab2: JMP 0x0045ab3e
//   XREF to: 0045ab3e (UNCONDITIONAL_JUMP)
// 0045aab7: MOV EAX,0x61b0a8
//   Label: LAB_0045aab7
//   XREF to: 0061b0a8 (DATA)
// 0045aabc: PUSH EAX
//   XREF to: 0061b0a8 (DATA)
// 0045aabd: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045aac0: PUSH EAX
// 0045aac1: MOV EAX,0x61b0ab
//   XREF to: 0061b0ab (PARAM)
// 0045aac6: PUSH EAX
//   XREF to: 0061b0ab (DATA)
// 0045aac7: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0045aacc: ADD ESP,0xc
// 0045aacf: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0045aad2: MOV EAX,0x61b0b2
//   XREF to: 0061b0b2 (DATA)
// 0045aad7: PUSH EAX
//   XREF to: 0061b0b2 (DATA)
// 0045aad8: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045aadb: PUSH EAX
// 0045aadc: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045aae1: ADD ESP,0x8
// 0045aae4: MOV EAX,0x61b0c8
//   XREF to: 0061b0c8 (DATA)
// 0045aae9: PUSH EAX
//   XREF to: 0061b0c8 (DATA)
// 0045aaea: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045aaed: PUSH EAX
// 0045aaee: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045aaf3: ADD ESP,0x8
// 0045aaf6: MOV EAX,0x61b0f5
//   XREF to: 0061b0f5 (DATA)
// 0045aafb: PUSH EAX
//   XREF to: 0061b0f5 (DATA)
// 0045aafc: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045aaff: PUSH EAX
// 0045ab00: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045ab05: ADD ESP,0x8
// 0045ab08: MOV EAX,0x61b10d
//   XREF to: 0061b10d (DATA)
// 0045ab0d: PUSH EAX
//   XREF to: 0061b10d (DATA)
// 0045ab0e: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045ab11: PUSH EAX
// 0045ab12: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045ab17: ADD ESP,0x8
// 0045ab1a: MOV EAX,0x61b11f
//   XREF to: 0061b11f (DATA)
// 0045ab1f: PUSH EAX
//   XREF to: 0061b11f (DATA)
// 0045ab20: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045ab23: PUSH EAX
// 0045ab24: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045ab29: ADD ESP,0x8
// 0045ab2c: MOV EAX,0x61b12d
//   XREF to: 0061b12d (DATA)
// 0045ab31: PUSH EAX
//   XREF to: 0061b12d (DATA)
// 0045ab32: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045ab35: PUSH EAX
// 0045ab36: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045ab3b: ADD ESP,0x8
// 0045ab3e: CMP dword ptr [EBP + -0xc],0x0
//   Label: LAB_0045ab3e
//   XREF to: Stack[-0x1c] (READ)
// 0045ab42: JNZ 0x0045ab6f
//   XREF to: 0045ab6f (CONDITIONAL_JUMP)
// 0045ab44: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0045ab49: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0045ab4e: PUSH 0x0
// 0045ab50: PUSH 0x0
// 0045ab52: MOV EAX,0x61b13f
//   XREF to: 0061b13f (PARAM)
// 0045ab57: PUSH EAX
//   XREF to: 0061b13f (DATA)
// 0045ab58: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045ab5d: ADD ESP,0xc
// 0045ab60: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0045ab65: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0045ab6a: JMP 0x0045b846
//   XREF to: 0045b846 (UNCONDITIONAL_JUMP)
// 0045ab6f: CMP dword ptr [EBP + 0x1c],0x31
//   Label: LAB_0045ab6f
//   XREF to: Stack[0xc] (READ)
// 0045ab73: JNZ 0x0045ac1e
//   XREF to: 0045ac1e (CONDITIONAL_JUMP)
// 0045ab79: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0045ab80: MOV dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (WRITE)
// 0045ab87: JMP 0x0045ab8f
//   XREF to: 0045ab8f (UNCONDITIONAL_JUMP)
// 0045ab89: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_0045ab89
//   XREF to: Stack[-0x28] (READ)
// 0045ab8c: INC dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ_WRITE)
// 0045ab8f: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_0045ab8f
//   XREF to: Stack[-0x28] (READ)
// 0045ab92: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045ab98: JGE 0x0045ac12
//   XREF to: 0045ac12 (CONDITIONAL_JUMP)
// 0045ab9e: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045aba2: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045aba8: FABS
// 0045abaa: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045abad: FCOMPP
// 0045abaf: FNSTSW AX
// 0045abb1: SAHF
// 0045abb2: JNC 0x0045abc3
//   XREF to: 0045abc3 (CONDITIONAL_JUMP)
// 0045abb4: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045abb8: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045abbe: FABS
// 0045abc0: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0045abc3: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   Label: LAB_0045abc3
//   XREF to: Stack[-0x28] (READ)
// 0045abc7: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045abcd: FABS
// 0045abcf: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045abd2: FCOMPP
// 0045abd4: FNSTSW AX
// 0045abd6: SAHF
// 0045abd7: JNC 0x0045abe8
//   XREF to: 0045abe8 (CONDITIONAL_JUMP)
// 0045abd9: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045abdd: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045abe3: FABS
// 0045abe5: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0045abe8: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   Label: LAB_0045abe8
//   XREF to: Stack[-0x28] (READ)
// 0045abec: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045abf2: FABS
// 0045abf4: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045abf7: FCOMPP
// 0045abf9: FNSTSW AX
// 0045abfb: SAHF
// 0045abfc: JNC 0x0045ac0d
//   XREF to: 0045ac0d (CONDITIONAL_JUMP)
// 0045abfe: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045ac02: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045ac08: FABS
// 0045ac0a: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0045ac0d: JMP 0x0045ab89
//   Label: LAB_0045ac0d
//   XREF to: 0045ab89 (UNCONDITIONAL_JUMP)
// 0045ac12: FLD float ptr [EBP + -0x4]
//   Label: LAB_0045ac12
//   XREF to: Stack[-0x14] (READ)
// 0045ac15: FDIVR double ptr [0x0061b15e]
//   XREF to: 0061b15e (READ)
// 0045ac1b: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0045ac1e: CMP dword ptr [EBP + 0x1c],0x32
//   Label: LAB_0045ac1e
//   XREF to: Stack[0xc] (READ)
// 0045ac22: JL 0x0045ac2a
//   XREF to: 0045ac2a (CONDITIONAL_JUMP)
// 0045ac24: CMP dword ptr [EBP + 0x1c],0x34
//   XREF to: Stack[0xc] (READ)
// 0045ac28: JLE 0x0045ac2f
//   XREF to: 0045ac2f (CONDITIONAL_JUMP)
// 0045ac2a: JMP 0x0045ace4
//   Label: LAB_0045ac2a
//   XREF to: 0045ace4 (UNCONDITIONAL_JUMP)
// 0045ac2f: MOV dword ptr [EBP + -0x4],0x0
//   Label: LAB_0045ac2f
//   XREF to: Stack[-0x14] (WRITE)
// 0045ac36: MOV dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (WRITE)
// 0045ac3d: JMP 0x0045ac45
//   XREF to: 0045ac45 (UNCONDITIONAL_JUMP)
// 0045ac3f: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_0045ac3f
//   XREF to: Stack[-0x28] (READ)
// 0045ac42: INC dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ_WRITE)
// 0045ac45: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_0045ac45
//   XREF to: Stack[-0x28] (READ)
// 0045ac48: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045ac4e: JGE 0x0045acda
//   XREF to: 0045acda (CONDITIONAL_JUMP)
// 0045ac54: CMP dword ptr [EBP + 0x1c],0x32
//   XREF to: Stack[0xc] (READ)
// 0045ac58: JNZ 0x0045ac7f
//   XREF to: 0045ac7f (CONDITIONAL_JUMP)
// 0045ac5a: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045ac5e: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045ac64: FABS
// 0045ac66: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ac69: FCOMPP
// 0045ac6b: FNSTSW AX
// 0045ac6d: SAHF
// 0045ac6e: JNC 0x0045ac7f
//   XREF to: 0045ac7f (CONDITIONAL_JUMP)
// 0045ac70: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045ac74: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045ac7a: FABS
// 0045ac7c: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0045ac7f: CMP dword ptr [EBP + 0x1c],0x33
//   Label: LAB_0045ac7f
//   XREF to: Stack[0xc] (READ)
// 0045ac83: JNZ 0x0045acaa
//   XREF to: 0045acaa (CONDITIONAL_JUMP)
// 0045ac85: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045ac89: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045ac8f: FABS
// 0045ac91: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ac94: FCOMPP
// 0045ac96: FNSTSW AX
// 0045ac98: SAHF
// 0045ac99: JNC 0x0045acaa
//   XREF to: 0045acaa (CONDITIONAL_JUMP)
// 0045ac9b: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045ac9f: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045aca5: FABS
// 0045aca7: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0045acaa: CMP dword ptr [EBP + 0x1c],0x34
//   Label: LAB_0045acaa
//   XREF to: Stack[0xc] (READ)
// 0045acae: JNZ 0x0045acd5
//   XREF to: 0045acd5 (CONDITIONAL_JUMP)
// 0045acb0: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045acb4: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045acba: FABS
// 0045acbc: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045acbf: FCOMPP
// 0045acc1: FNSTSW AX
// 0045acc3: SAHF
// 0045acc4: JNC 0x0045acd5
//   XREF to: 0045acd5 (CONDITIONAL_JUMP)
// 0045acc6: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045acca: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045acd0: FABS
// 0045acd2: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0045acd5: JMP 0x0045ac3f
//   Label: LAB_0045acd5
//   XREF to: 0045ac3f (UNCONDITIONAL_JUMP)
// 0045acda: FLD float ptr [EBP + -0x4]
//   Label: LAB_0045acda
//   XREF to: Stack[-0x14] (READ)
// 0045acdd: FLD1
// 0045acdf: FDIVRP
// 0045ace1: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0045ace4: CMP dword ptr [EBP + 0x1c],0x35
//   Label: LAB_0045ace4
//   XREF to: Stack[0xc] (READ)
// 0045ace8: JNZ 0x0045acf1
//   XREF to: 0045acf1 (CONDITIONAL_JUMP)
// 0045acea: MOV dword ptr [EBP + -0x4],0x3f800000
//   XREF to: Stack[-0x14] (WRITE)
// 0045acf1: CMP dword ptr [EBP + 0x1c],0x36
//   Label: LAB_0045acf1
//   XREF to: Stack[0xc] (READ)
// 0045acf5: JNZ 0x0045aded
//   XREF to: 0045aded (CONDITIONAL_JUMP)
// 0045acfb: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0045ad02: MOV dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (WRITE)
// 0045ad09: JMP 0x0045ad11
//   XREF to: 0045ad11 (UNCONDITIONAL_JUMP)
// 0045ad0b: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_0045ad0b
//   XREF to: Stack[-0x28] (READ)
// 0045ad0e: INC dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ_WRITE)
// 0045ad11: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_0045ad11
//   XREF to: Stack[-0x28] (READ)
// 0045ad14: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045ad1a: JGE 0x0045ad94
//   XREF to: 0045ad94 (CONDITIONAL_JUMP)
// 0045ad20: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045ad24: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045ad2a: FABS
// 0045ad2c: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ad2f: FCOMPP
// 0045ad31: FNSTSW AX
// 0045ad33: SAHF
// 0045ad34: JNC 0x0045ad45
//   XREF to: 0045ad45 (CONDITIONAL_JUMP)
// 0045ad36: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045ad3a: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045ad40: FABS
// 0045ad42: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0045ad45: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   Label: LAB_0045ad45
//   XREF to: Stack[-0x28] (READ)
// 0045ad49: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045ad4f: FABS
// 0045ad51: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ad54: FCOMPP
// 0045ad56: FNSTSW AX
// 0045ad58: SAHF
// 0045ad59: JNC 0x0045ad6a
//   XREF to: 0045ad6a (CONDITIONAL_JUMP)
// 0045ad5b: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045ad5f: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045ad65: FABS
// 0045ad67: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0045ad6a: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   Label: LAB_0045ad6a
//   XREF to: Stack[-0x28] (READ)
// 0045ad6e: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045ad74: FABS
// 0045ad76: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ad79: FCOMPP
// 0045ad7b: FNSTSW AX
// 0045ad7d: SAHF
// 0045ad7e: JNC 0x0045ad8f
//   XREF to: 0045ad8f (CONDITIONAL_JUMP)
// 0045ad80: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045ad84: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045ad8a: FABS
// 0045ad8c: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0045ad8f: JMP 0x0045ad0b
//   Label: LAB_0045ad8f
//   XREF to: 0045ad0b (UNCONDITIONAL_JUMP)
// 0045ad94: FLD float ptr [EBP + -0x4]
//   Label: LAB_0045ad94
//   XREF to: Stack[-0x14] (READ)
// 0045ad97: FLDLN2
// 0045ad99: FXCH
// 0045ad9b: FYL2X
// 0045ad9d: FLD double ptr [0x0061b166]
//   XREF to: 0061b166 (READ)
// 0045ada3: FLDLN2
// 0045ada5: FXCH
// 0045ada7: FYL2X
// 0045ada9: FDIVP
// 0045adab: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045adb0: FISTP dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0045adb3: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045adb6: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0045adb9: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045adbc: PUSH EAX
// 0045adbd: PUSH 0x3ff00000
// 0045adc2: PUSH 0x0
// 0045adc4: CALL crt_unknown.c_FUN_00600002
//   XREF to: 00600002 (UNCONDITIONAL_CALL)
// 0045adc9: MOV dword ptr [EBP + 0xffffff20],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 0045adcf: MOV dword ptr [EBP + 0xffffff24],EDX
//   XREF to: Stack[-0xec] (WRITE)
// 0045add5: FLD double ptr [EBP + 0xffffff20]
//   XREF to: Stack[-0xf0] (READ)
// 0045addb: ADD ESP,0xc
// 0045adde: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0045ade1: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ade4: FDIVR double ptr [0x0061b16e]
//   XREF to: 0061b16e (READ)
// 0045adea: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0045aded: MOV dword ptr [EBP + -0x28],0x14
//   Label: LAB_0045aded
//   XREF to: Stack[-0x38] (WRITE)
// 0045adf4: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045adf7: FMUL double ptr [0x0061b176]
//   XREF to: 0061b176 (READ)
// 0045adfd: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045ae02: FISTP dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 0045ae05: CMP dword ptr [EBP + 0x20],0x0
//   XREF to: Stack[0x10] (READ)
// 0045ae09: JZ 0x0045ae21
//   XREF to: 0045ae21 (CONDITIONAL_JUMP)
// 0045ae0b: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045ae0e: PUSH EAX
// 0045ae0f: PUSH 0x8
// 0045ae11: PUSH 0x1
// 0045ae13: LEA EAX,[EBP + -0x28]
//   XREF to: Stack[-0x38] (DATA)
// 0045ae16: PUSH EAX
// 0045ae17: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045ae1c: ADD ESP,0x10
// 0045ae1f: JMP 0x0045ae37
//   XREF to: 0045ae37 (UNCONDITIONAL_JUMP)
// 0045ae21: MOV EAX,dword ptr [EBP + -0x24]
//   Label: LAB_0045ae21
//   XREF to: Stack[-0x34] (READ)
// 0045ae24: PUSH EAX
// 0045ae25: MOV EAX,0x61b17e
//   XREF to: 0061b17e (DATA)
// 0045ae2a: PUSH EAX
//   XREF to: 0061b17e (DATA)
// 0045ae2b: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045ae2e: PUSH EAX
// 0045ae2f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045ae34: ADD ESP,0xc
// 0045ae37: MOV dword ptr [EBP + -0x4c],0x2
//   Label: LAB_0045ae37
//   XREF to: Stack[-0x5c] (WRITE)
// 0045ae3e: MOV dword ptr [EBP + -0x48],0x0
//   XREF to: Stack[-0x58] (WRITE)
// 0045ae45: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 0045ae4a: MOV dword ptr [EBP + -0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0045ae4d: CMP dword ptr [EBP + 0x20],0x0
//   XREF to: Stack[0x10] (READ)
// 0045ae51: JZ 0x0045ae69
//   XREF to: 0045ae69 (CONDITIONAL_JUMP)
// 0045ae53: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045ae56: PUSH EAX
// 0045ae57: PUSH 0xc
// 0045ae59: PUSH 0x1
// 0045ae5b: LEA EAX,[EBP + -0x4c]
//   XREF to: Stack[-0x5c] (DATA)
// 0045ae5e: PUSH EAX
// 0045ae5f: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045ae64: ADD ESP,0x10
// 0045ae67: JMP 0x0045ae7f
//   XREF to: 0045ae7f (UNCONDITIONAL_JUMP)
// 0045ae69: MOV EAX,dword ptr [EBP + -0x44]
//   Label: LAB_0045ae69
//   XREF to: Stack[-0x54] (READ)
// 0045ae6c: PUSH EAX
// 0045ae6d: MOV EAX,0x61b18c
//   XREF to: 0061b18c (DATA)
// 0045ae72: PUSH EAX
//   XREF to: 0061b18c (DATA)
// 0045ae73: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045ae76: PUSH EAX
// 0045ae77: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045ae7c: ADD ESP,0xc
// 0045ae7f: MOV dword ptr [EBP + -0x18],0x0
//   Label: LAB_0045ae7f
//   XREF to: Stack[-0x28] (WRITE)
// 0045ae86: JMP 0x0045ae8e
//   XREF to: 0045ae8e (UNCONDITIONAL_JUMP)
// 0045ae88: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_0045ae88
//   XREF to: Stack[-0x28] (READ)
// 0045ae8b: INC dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ_WRITE)
// 0045ae8e: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_0045ae8e
//   XREF to: Stack[-0x28] (READ)
// 0045ae91: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045ae97: JGE 0x0045af33
//   XREF to: 0045af33 (CONDITIONAL_JUMP)
// 0045ae9d: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045aea1: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045aea7: FMUL double ptr [0x0061b19e]
//   XREF to: 0061b19e (READ)
// 0045aead: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045aeb0: FMULP
// 0045aeb2: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045aeb7: FISTP dword ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (WRITE)
// 0045aeba: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045aebe: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045aec4: FMUL double ptr [0x0061b19e]
//   XREF to: 0061b19e (READ)
// 0045aeca: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045aecd: FMULP
// 0045aecf: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045aed4: FISTP dword ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (WRITE)
// 0045aed7: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045aedb: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045aee1: FMUL double ptr [0x0061b19e]
//   XREF to: 0061b19e (READ)
// 0045aee7: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045aeea: FMULP
// 0045aeec: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045aef1: FISTP dword ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (WRITE)
// 0045aef4: CMP dword ptr [EBP + 0x20],0x0
//   XREF to: Stack[0x10] (READ)
// 0045aef8: JZ 0x0045af10
//   XREF to: 0045af10 (CONDITIONAL_JUMP)
// 0045aefa: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045aefd: PUSH EAX
// 0045aefe: PUSH 0xc
// 0045af00: PUSH 0x1
// 0045af02: LEA EAX,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 0045af05: PUSH EAX
// 0045af06: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045af0b: ADD ESP,0x10
// 0045af0e: JMP 0x0045af2e
//   XREF to: 0045af2e (UNCONDITIONAL_JUMP)
// 0045af10: MOV EAX,dword ptr [EBP + -0x50]
//   Label: LAB_0045af10
//   XREF to: Stack[-0x60] (READ)
// 0045af13: PUSH EAX
// 0045af14: MOV EAX,dword ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (READ)
// 0045af17: PUSH EAX
// 0045af18: MOV EAX,dword ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (READ)
// 0045af1b: PUSH EAX
// 0045af1c: MOV EAX,0x61b1a6
//   XREF to: 0061b1a6 (DATA)
// 0045af21: PUSH EAX
//   XREF to: 0061b1a6 (DATA)
// 0045af22: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045af25: PUSH EAX
// 0045af26: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045af2b: ADD ESP,0x14
// 0045af2e: JMP 0x0045ae88
//   Label: LAB_0045af2e
//   XREF to: 0045ae88 (UNCONDITIONAL_JUMP)
// 0045af33: CMP dword ptr [0x01e528c0],0x0
//   Label: LAB_0045af33
//   XREF to: 01e528c0 (READ)
// 0045af3a: JZ 0x0045afe2
//   XREF to: 0045afe2 (CONDITIONAL_JUMP)
// 0045af40: MOV dword ptr [EBP + -0x4c],0x3
//   XREF to: Stack[-0x5c] (WRITE)
// 0045af47: MOV dword ptr [EBP + -0x48],0x0
//   XREF to: Stack[-0x58] (WRITE)
// 0045af4e: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 0045af53: MOV dword ptr [EBP + -0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0045af56: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045af59: PUSH EAX
// 0045af5a: PUSH 0xc
// 0045af5c: PUSH 0x1
// 0045af5e: LEA EAX,[EBP + -0x4c]
//   XREF to: Stack[-0x5c] (DATA)
// 0045af61: PUSH EAX
// 0045af62: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045af67: ADD ESP,0x10
// 0045af6a: MOV dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (WRITE)
// 0045af71: JMP 0x0045af79
//   XREF to: 0045af79 (UNCONDITIONAL_JUMP)
// 0045af73: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_0045af73
//   XREF to: Stack[-0x28] (READ)
// 0045af76: INC dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ_WRITE)
// 0045af79: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_0045af79
//   XREF to: Stack[-0x28] (READ)
// 0045af7c: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045af82: JGE 0x0045afe2
//   XREF to: 0045afe2 (CONDITIONAL_JUMP)
// 0045af84: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045af88: FLD float ptr [EAX + 0x1687e8c]
//   XREF to: 01687e8c (DATA)
// 0045af8e: FMUL float ptr [0x0061b1ba]
//   XREF to: 0061b1ba (READ)
// 0045af94: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045af99: FISTP dword ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (WRITE)
// 0045af9c: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045afa0: FLD float ptr [EAX + 0x1687e90]
//   XREF to: 01687e90 (DATA)
// 0045afa6: FMUL float ptr [0x0061b1ba]
//   XREF to: 0061b1ba (READ)
// 0045afac: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045afb1: FISTP dword ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (WRITE)
// 0045afb4: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 0045afb8: FLD float ptr [EAX + 0x1687e94]
//   XREF to: 01687e94 (DATA)
// 0045afbe: FMUL float ptr [0x0061b1ba]
//   XREF to: 0061b1ba (READ)
// 0045afc4: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045afc9: FISTP dword ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (WRITE)
// 0045afcc: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045afcf: PUSH EAX
// 0045afd0: PUSH 0xc
// 0045afd2: PUSH 0x1
// 0045afd4: LEA EAX,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 0045afd7: PUSH EAX
// 0045afd8: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045afdd: ADD ESP,0x10
// 0045afe0: JMP 0x0045af73
//   XREF to: 0045af73 (UNCONDITIONAL_JUMP)
// 0045afe2: CMP dword ptr [EBP + 0x18],0x59
//   Label: LAB_0045afe2
//   XREF to: Stack[0x8] (READ)
// 0045afe6: JZ 0x0045afee
//   XREF to: 0045afee (CONDITIONAL_JUMP)
// 0045afe8: CMP dword ptr [EBP + 0x18],0x5a
//   XREF to: Stack[0x8] (READ)
// 0045afec: JNZ 0x0045b036
//   XREF to: 0045b036 (CONDITIONAL_JUMP)
// 0045afee: MOV dword ptr [EBP + -0x34],0x17
//   Label: LAB_0045afee
//   XREF to: Stack[-0x44] (WRITE)
// 0045aff5: MOV dword ptr [EBP + -0x30],0x0
//   XREF to: Stack[-0x40] (WRITE)
// 0045affc: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 0045b001: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0045b004: CMP dword ptr [EBP + 0x20],0x0
//   XREF to: Stack[0x10] (READ)
// 0045b008: JZ 0x0045b020
//   XREF to: 0045b020 (CONDITIONAL_JUMP)
// 0045b00a: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b00d: PUSH EAX
// 0045b00e: PUSH 0xc
// 0045b010: PUSH 0x1
// 0045b012: LEA EAX,[EBP + -0x34]
//   XREF to: Stack[-0x44] (DATA)
// 0045b015: PUSH EAX
// 0045b016: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045b01b: ADD ESP,0x10
// 0045b01e: JMP 0x0045b036
//   XREF to: 0045b036 (UNCONDITIONAL_JUMP)
// 0045b020: MOV EAX,dword ptr [EBP + -0x2c]
//   Label: LAB_0045b020
//   XREF to: Stack[-0x3c] (READ)
// 0045b023: PUSH EAX
// 0045b024: MOV EAX,0x61b1be
//   XREF to: 0061b1be (DATA)
// 0045b029: PUSH EAX
//   XREF to: 0061b1be (DATA)
// 0045b02a: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b02d: PUSH EAX
// 0045b02e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b033: ADD ESP,0xc
// 0045b036: MOV dword ptr [0x01626368],0xffffffff
//   Label: LAB_0045b036
//   XREF to: 01626368 (WRITE)
// 0045b040: MOV byte ptr [0x01626370],0x0
//   XREF to: 01626370 (WRITE)
// 0045b047: MOV dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (WRITE)
// 0045b04e: JMP 0x0045b056
//   XREF to: 0045b056 (UNCONDITIONAL_JUMP)
// 0045b050: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_0045b050
//   XREF to: Stack[-0x28] (READ)
// 0045b053: INC dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ_WRITE)
// 0045b056: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_0045b056
//   XREF to: Stack[-0x28] (READ)
// 0045b059: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0045b05f: JGE 0x0045b7d6
//   XREF to: 0045b7d6 (CONDITIONAL_JUMP)
// 0045b065: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b06c: MOV EDX,0x16e9910
//   XREF to: 016e9910 (PARAM)
// 0045b071: ADD EAX,EDX
// 0045b073: PUSH EAX
// 0045b074: CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   XREF to: 0045caa0 (UNCONDITIONAL_CALL)
// 0045b079: ADD ESP,0x4
// 0045b07c: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b083: MOV EAX,dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045b089: MOV dword ptr [EBP + -0x6c],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0045b08c: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b093: FLD float ptr [EAX + 0x16e99b8]
//   XREF to: 016e99b8 (DATA)
// 0045b099: FMUL double ptr [0x0061b1d6]
//   XREF to: 0061b1d6 (READ)
// 0045b09f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045b0a4: FISTP dword ptr [EBP + -0x68]
//   XREF to: Stack[-0x78] (WRITE)
// 0045b0a7: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b0ae: FLD float ptr [EAX + 0x16e99bc]
//   XREF to: 016e99bc (DATA)
// 0045b0b4: FMUL double ptr [0x0061b1d6]
//   XREF to: 0061b1d6 (READ)
// 0045b0ba: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045b0bf: FISTP dword ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (WRITE)
// 0045b0c2: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b0c9: FLD float ptr [EAX + 0x16e99c0]
//   XREF to: 016e99c0 (DATA)
// 0045b0cf: FMUL double ptr [0x0061b1d6]
//   XREF to: 0061b1d6 (READ)
// 0045b0d5: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045b0da: FISTP dword ptr [EBP + -0x60]
//   XREF to: Stack[-0x70] (WRITE)
// 0045b0dd: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b0e4: FLD float ptr [EAX + 0x16e99c4]
//   XREF to: 016e99c4 (DATA)
// 0045b0ea: FMUL double ptr [0x0061b1d6]
//   XREF to: 0061b1d6 (READ)
// 0045b0f0: FMUL double ptr [0x0061b1de]
//   XREF to: 0061b1de (READ)
// 0045b0f6: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045b0f9: FMULP
// 0045b0fb: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045b100: FISTP dword ptr [EBP + -0x5c]
//   XREF to: Stack[-0x6c] (WRITE)
// 0045b103: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b10a: CMP dword ptr [EAX + 0x16e9910],0x1
//   XREF to: 016e9910 (DATA)
// 0045b111: JNZ 0x0045b2b2
//   XREF to: 0045b2b2 (CONDITIONAL_JUMP)
// 0045b117: IMUL EDX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b11e: MOV EAX,[0x01626368]
//   XREF to: 01626368 (READ)
// 0045b123: CMP EAX,dword ptr [EDX + 0x16e9a8c]
//   XREF to: 016e9a8c (DATA)
// 0045b129: JZ 0x0045b186
//   XREF to: 0045b186 (CONDITIONAL_JUMP)
// 0045b12b: MOV dword ptr [EBP + -0x20],0xa
//   XREF to: Stack[-0x30] (WRITE)
// 0045b132: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b139: MOV EAX,dword ptr [EAX + 0x16e9a8c]
//   XREF to: 016e9a8c (DATA)
// 0045b13f: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0045b142: CMP dword ptr [EBP + 0x20],0x0
//   XREF to: Stack[0x10] (READ)
// 0045b146: JZ 0x0045b15e
//   XREF to: 0045b15e (CONDITIONAL_JUMP)
// 0045b148: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b14b: PUSH EAX
// 0045b14c: PUSH 0x8
// 0045b14e: PUSH 0x1
// 0045b150: LEA EAX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 0045b153: PUSH EAX
// 0045b154: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045b159: ADD ESP,0x10
// 0045b15c: JMP 0x0045b174
//   XREF to: 0045b174 (UNCONDITIONAL_JUMP)
// 0045b15e: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_0045b15e
//   XREF to: Stack[-0x2c] (READ)
// 0045b161: PUSH EAX
// 0045b162: MOV EAX,0x61b1e6
//   XREF to: 0061b1e6 (DATA)
// 0045b167: PUSH EAX
//   XREF to: 0061b1e6 (DATA)
// 0045b168: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b16b: PUSH EAX
// 0045b16c: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b171: ADD ESP,0xc
// 0045b174: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   Label: LAB_0045b174
//   XREF to: Stack[-0x28] (READ)
// 0045b17b: MOV EAX,dword ptr [EAX + 0x16e9a8c]
//   XREF to: 016e9a8c (DATA)
// 0045b181: MOV [0x01626368],EAX
//   XREF to: 01626368 (WRITE)
// 0045b186: CMP dword ptr [EBP + 0x18],0x58
//   Label: LAB_0045b186
//   XREF to: Stack[0x8] (READ)
// 0045b18a: JZ 0x0045b1a7
//   XREF to: 0045b1a7 (CONDITIONAL_JUMP)
// 0045b18c: CMP dword ptr [0x01e528c0],0x0
//   XREF to: 01e528c0 (READ)
// 0045b193: JZ 0x0045b19e
//   XREF to: 0045b19e (CONDITIONAL_JUMP)
// 0045b195: MOV dword ptr [EBP + -0x70],0x1b
//   XREF to: Stack[-0x80] (WRITE)
// 0045b19c: JMP 0x0045b1a5
//   XREF to: 0045b1a5 (UNCONDITIONAL_JUMP)
// 0045b19e: MOV dword ptr [EBP + -0x70],0x19
//   Label: LAB_0045b19e
//   XREF to: Stack[-0x80] (WRITE)
// 0045b1a5: JMP 0x0045b1c0
//   Label: LAB_0045b1a5
//   XREF to: 0045b1c0 (UNCONDITIONAL_JUMP)
// 0045b1a7: CMP dword ptr [0x01e528c0],0x0
//   Label: LAB_0045b1a7
//   XREF to: 01e528c0 (READ)
// 0045b1ae: JZ 0x0045b1b9
//   XREF to: 0045b1b9 (CONDITIONAL_JUMP)
// 0045b1b0: MOV dword ptr [EBP + -0x70],0x6
//   XREF to: Stack[-0x80] (WRITE)
// 0045b1b7: JMP 0x0045b1c0
//   XREF to: 0045b1c0 (UNCONDITIONAL_JUMP)
// 0045b1b9: MOV dword ptr [EBP + -0x70],0x5
//   Label: LAB_0045b1b9
//   XREF to: Stack[-0x80] (WRITE)
// 0045b1c0: CMP dword ptr [EBP + 0x20],0x0
//   Label: LAB_0045b1c0
//   XREF to: Stack[0x10] (READ)
// 0045b1c4: JZ 0x0045b205
//   XREF to: 0045b205 (CONDITIONAL_JUMP)
// 0045b1c6: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b1c9: PUSH EAX
// 0045b1ca: PUSH 0x18
// 0045b1cc: PUSH 0x1
// 0045b1ce: LEA EAX,[EBP + -0x70]
//   XREF to: Stack[-0x80] (DATA)
// 0045b1d1: PUSH EAX
// 0045b1d2: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045b1d7: ADD ESP,0x10
// 0045b1da: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b1dd: PUSH EAX
// 0045b1de: PUSH 0x4
// 0045b1e0: MOV EAX,dword ptr [EBP + -0x6c]
//   XREF to: Stack[-0x7c] (READ)
// 0045b1e3: PUSH EAX
// 0045b1e4: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b1eb: MOV EDX,0x16e9910
//   XREF to: 016e9910 (PARAM)
// 0045b1f0: ADD EAX,EDX
// 0045b1f2: ADD EAX,0xb8
// 0045b1f7: PUSH EAX
// 0045b1f8: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045b1fd: ADD ESP,0x10
// 0045b200: JMP 0x0045b2ad
//   XREF to: 0045b2ad (UNCONDITIONAL_JUMP)
// 0045b205: CMP dword ptr [EBP + -0x70],0x19
//   Label: LAB_0045b205
//   XREF to: Stack[-0x80] (READ)
// 0045b209: JNZ 0x0045b21d
//   XREF to: 0045b21d (CONDITIONAL_JUMP)
// 0045b20b: MOV EAX,0x61b1f1
//   XREF to: 0061b1f1 (DATA)
// 0045b210: PUSH EAX
//   XREF to: 0061b1f1 (DATA)
// 0045b211: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b214: PUSH EAX
// 0045b215: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b21a: ADD ESP,0x8
// 0045b21d: CMP dword ptr [EBP + -0x70],0x5
//   Label: LAB_0045b21d
//   XREF to: Stack[-0x80] (READ)
// 0045b221: JNZ 0x0045b235
//   XREF to: 0045b235 (CONDITIONAL_JUMP)
// 0045b223: MOV EAX,0x61b1f9
//   XREF to: 0061b1f9 (DATA)
// 0045b228: PUSH EAX
//   XREF to: 0061b1f9 (DATA)
// 0045b229: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b22c: PUSH EAX
// 0045b22d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b232: ADD ESP,0x8
// 0045b235: MOV EAX,dword ptr [EBP + -0x5c]
//   Label: LAB_0045b235
//   XREF to: Stack[-0x6c] (READ)
// 0045b238: PUSH EAX
// 0045b239: MOV EAX,dword ptr [EBP + -0x60]
//   XREF to: Stack[-0x70] (READ)
// 0045b23c: PUSH EAX
// 0045b23d: MOV EAX,dword ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (READ)
// 0045b240: PUSH EAX
// 0045b241: MOV EAX,dword ptr [EBP + -0x68]
//   XREF to: Stack[-0x78] (READ)
// 0045b244: PUSH EAX
// 0045b245: MOV EAX,dword ptr [EBP + -0x6c]
//   XREF to: Stack[-0x7c] (READ)
// 0045b248: PUSH EAX
// 0045b249: MOV EAX,0x61b200
//   XREF to: 0061b200 (DATA)
// 0045b24e: PUSH EAX
//   XREF to: 0061b200 (DATA)
// 0045b24f: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b252: PUSH EAX
// 0045b253: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b258: ADD ESP,0x1c
// 0045b25b: MOV dword ptr [EBP + -0x14],0x0
//   XREF to: Stack[-0x24] (WRITE)
// 0045b262: JMP 0x0045b26a
//   XREF to: 0045b26a (UNCONDITIONAL_JUMP)
// 0045b264: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0045b264
//   XREF to: Stack[-0x24] (READ)
// 0045b267: INC dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ_WRITE)
// 0045b26a: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0045b26a
//   XREF to: Stack[-0x24] (READ)
// 0045b26d: CMP EAX,dword ptr [EBP + -0x6c]
//   XREF to: Stack[-0x7c] (READ)
// 0045b270: JGE 0x0045b29b
//   XREF to: 0045b29b (CONDITIONAL_JUMP)
// 0045b272: IMUL EDX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b279: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045b27c: SHL EAX,0x2
// 0045b27f: ADD EAX,EDX
// 0045b281: PUSH dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0045b287: MOV EAX,0x61b20f
//   XREF to: 0061b20f (DATA)
// 0045b28c: PUSH EAX
//   XREF to: 0061b20f (DATA)
// 0045b28d: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b290: PUSH EAX
// 0045b291: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b296: ADD ESP,0xc
// 0045b299: JMP 0x0045b264
//   XREF to: 0045b264 (UNCONDITIONAL_JUMP)
// 0045b29b: MOV EAX,0x61b213
//   Label: LAB_0045b29b
//   XREF to: 0061b213 (DATA)
// 0045b2a0: PUSH EAX
//   XREF to: 0061b213 (DATA)
// 0045b2a1: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b2a4: PUSH EAX
// 0045b2a5: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b2aa: ADD ESP,0x8
// 0045b2ad: JMP 0x0045b7d1
//   Label: LAB_0045b2ad
//   XREF to: 0045b7d1 (UNCONDITIONAL_JUMP)
// 0045b2b2: IMUL EDX,dword ptr [EBP + -0x18],0x184
//   Label: LAB_0045b2b2
//   XREF to: Stack[-0x28] (READ)
// 0045b2b9: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0045b2be: ADD EAX,EDX
// 0045b2c0: ADD EAX,0x4
// 0045b2c3: PUSH EAX
// 0045b2c4: MOV EAX,0x1626370
//   XREF to: 01626370 (PARAM)
// 0045b2c9: PUSH EAX
//   XREF to: 01626370 (DATA)
// 0045b2ca: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0045b2cf: ADD ESP,0x8
// 0045b2d2: TEST EAX,EAX
// 0045b2d4: JZ 0x0045b37b
//   XREF to: 0045b37b (CONDITIONAL_JUMP)
// 0045b2da: IMUL EDI,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b2e1: MOV ESI,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0045b2e6: ADD ESI,EDI
// 0045b2e8: ADD ESI,0x4
// 0045b2eb: MOV EDI,0x1626370
//   XREF to: 01626370 (DATA)
// 0045b2f0: PUSH EDI
//   XREF to: 01626370 (DATA)
// 0045b2f1: MOV AL,byte ptr [ESI]
//   Label: LAB_0045b2f1
//   XREF to: 016e9914 (DATA)
//   XREF to: 016e9916 (DATA)
// 0045b2f3: MOV byte ptr [EDI],AL
//   XREF to: 01626370 (WRITE)
//   XREF to: 01626372 (WRITE)
// 0045b2f5: CMP AL,0x0
// 0045b2f7: JZ 0x0045b309
//   XREF to: 0045b309 (CONDITIONAL_JUMP)
// 0045b2f9: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 016e9915 (DATA)
//   XREF to: 016e9917 (DATA)
// 0045b2fc: ADD ESI,0x2
// 0045b2ff: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 01626371 (WRITE)
//   XREF to: 01626373 (WRITE)
// 0045b302: ADD EDI,0x2
// 0045b305: CMP AL,0x0
// 0045b307: JNZ 0x0045b2f1
//   XREF to: 0045b2f1 (CONDITIONAL_JUMP)
// 0045b309: POP EDI
//   Label: LAB_0045b309
// 0045b30a: MOV ESI,0x1626370
//   XREF to: 01626370 (DATA)
// 0045b30f: LEA EDI,[EBP + -0x80]
//   XREF to: Stack[-0x90] (DATA)
// 0045b312: PUSH EDI
// 0045b313: MOV AL,byte ptr [ESI]
//   Label: LAB_0045b313
//   XREF to: 01626370 (READ)
//   XREF to: 01626372 (READ)
// 0045b315: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x90] (DATA)
// 0045b317: CMP AL,0x0
// 0045b319: JZ 0x0045b32b
//   XREF to: 0045b32b (CONDITIONAL_JUMP)
// 0045b31b: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 01626371 (READ)
//   XREF to: 01626373 (READ)
// 0045b31e: ADD ESI,0x2
// 0045b321: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x8f] (WRITE)
// 0045b324: ADD EDI,0x2
// 0045b327: CMP AL,0x0
// 0045b329: JNZ 0x0045b313
//   XREF to: 0045b313 (CONDITIONAL_JUMP)
// 0045b32b: POP EDI
//   Label: LAB_0045b32b
// 0045b32c: MOV dword ptr [EBP + 0xffffff7c],0x0
//   XREF to: Stack[-0x94] (WRITE)
// 0045b336: MOV dword ptr [EBP + 0xffffff78],0xd
//   XREF to: Stack[-0x98] (WRITE)
// 0045b340: CMP dword ptr [EBP + 0x24],0x59
//   XREF to: Stack[0x14] (READ)
// 0045b344: JNZ 0x0045b37b
//   XREF to: 0045b37b (CONDITIONAL_JUMP)
// 0045b346: CMP dword ptr [EBP + 0x20],0x0
//   XREF to: Stack[0x10] (READ)
// 0045b34a: JZ 0x0045b365
//   XREF to: 0045b365 (CONDITIONAL_JUMP)
// 0045b34c: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b34f: PUSH EAX
// 0045b350: PUSH 0x18
// 0045b352: PUSH 0x1
// 0045b354: LEA EAX,[EBP + 0xffffff78]
//   XREF to: Stack[-0x98] (DATA)
// 0045b35a: PUSH EAX
// 0045b35b: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045b360: ADD ESP,0x10
// 0045b363: JMP 0x0045b37b
//   XREF to: 0045b37b (UNCONDITIONAL_JUMP)
// 0045b365: LEA EAX,[EBP + -0x80]
//   Label: LAB_0045b365
//   XREF to: Stack[-0x90] (DATA)
// 0045b368: PUSH EAX
// 0045b369: MOV EAX,0x61b215
//   XREF to: 0061b215 (DATA)
// 0045b36e: PUSH EAX
//   XREF to: 0061b215 (DATA)
// 0045b36f: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b372: PUSH EAX
// 0045b373: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b378: ADD ESP,0xc
// 0045b37b: CMP dword ptr [EBP + 0x18],0x58
//   Label: LAB_0045b37b
//   XREF to: Stack[0x8] (READ)
// 0045b37f: JNZ 0x0045b38d
//   XREF to: 0045b38d (CONDITIONAL_JUMP)
// 0045b381: MOV dword ptr [EBP + -0x70],0xe
//   XREF to: Stack[-0x80] (WRITE)
// 0045b388: JMP 0x0045b4f0
//   XREF to: 0045b4f0 (UNCONDITIONAL_JUMP)
// 0045b38d: CMP dword ptr [EBP + 0x18],0x54
//   Label: LAB_0045b38d
//   XREF to: Stack[0x8] (READ)
// 0045b391: JNZ 0x0045b39f
//   XREF to: 0045b39f (CONDITIONAL_JUMP)
// 0045b393: MOV dword ptr [EBP + -0x70],0x11
//   XREF to: Stack[-0x80] (WRITE)
// 0045b39a: JMP 0x0045b4f0
//   XREF to: 0045b4f0 (UNCONDITIONAL_JUMP)
// 0045b39f: CMP dword ptr [EBP + 0x18],0x52
//   Label: LAB_0045b39f
//   XREF to: Stack[0x8] (READ)
// 0045b3a3: JNZ 0x0045b3b1
//   XREF to: 0045b3b1 (CONDITIONAL_JUMP)
// 0045b3a5: MOV dword ptr [EBP + -0x70],0x33
//   XREF to: Stack[-0x80] (WRITE)
// 0045b3ac: JMP 0x0045b4f0
//   XREF to: 0045b4f0 (UNCONDITIONAL_JUMP)
// 0045b3b1: CMP dword ptr [EBP + 0x18],0x47
//   Label: LAB_0045b3b1
//   XREF to: Stack[0x8] (READ)
// 0045b3b5: JNZ 0x0045b43e
//   XREF to: 0045b43e (CONDITIONAL_JUMP)
// 0045b3bb: MOV dword ptr [EBP + -0x70],0x34
//   XREF to: Stack[-0x80] (WRITE)
// 0045b3c2: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b3c9: FLD float ptr [EAX + 0x16e99b8]
//   XREF to: 016e99b8 (DATA)
// 0045b3cf: FMUL double ptr [0x0061b226]
//   XREF to: 0061b226 (READ)
// 0045b3d5: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045b3da: FISTP dword ptr [EBP + -0x68]
//   XREF to: Stack[-0x78] (WRITE)
// 0045b3dd: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b3e4: FLD float ptr [EAX + 0x16e99bc]
//   XREF to: 016e99bc (DATA)
// 0045b3ea: FMUL double ptr [0x0061b226]
//   XREF to: 0061b226 (READ)
// 0045b3f0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045b3f5: FISTP dword ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (WRITE)
// 0045b3f8: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b3ff: FLD float ptr [EAX + 0x16e99c0]
//   XREF to: 016e99c0 (DATA)
// 0045b405: FMUL double ptr [0x0061b226]
//   XREF to: 0061b226 (READ)
// 0045b40b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045b410: FISTP dword ptr [EBP + -0x60]
//   XREF to: Stack[-0x70] (WRITE)
// 0045b413: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b41a: FLD float ptr [EAX + 0x16e99c4]
//   XREF to: 016e99c4 (DATA)
// 0045b420: FMUL double ptr [0x0061b226]
//   XREF to: 0061b226 (READ)
// 0045b426: FMUL double ptr [0x0061b22e]
//   XREF to: 0061b22e (READ)
// 0045b42c: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045b42f: FMULP
// 0045b431: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045b436: FISTP dword ptr [EBP + -0x5c]
//   XREF to: Stack[-0x6c] (WRITE)
// 0045b439: JMP 0x0045b4f0
//   XREF to: 0045b4f0 (UNCONDITIONAL_JUMP)
// 0045b43e: CMP dword ptr [EBP + 0x18],0x48
//   Label: LAB_0045b43e
//   XREF to: Stack[0x8] (READ)
// 0045b442: JNZ 0x0045b4c8
//   XREF to: 0045b4c8 (CONDITIONAL_JUMP)
// 0045b448: MOV dword ptr [EBP + -0x70],0xe
//   XREF to: Stack[-0x80] (WRITE)
// 0045b44f: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b456: FLD float ptr [EAX + 0x16e99b8]
//   XREF to: 016e99b8 (DATA)
// 0045b45c: FMUL double ptr [0x0061b236]
//   XREF to: 0061b236 (READ)
// 0045b462: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045b467: FISTP dword ptr [EBP + -0x68]
//   XREF to: Stack[-0x78] (WRITE)
// 0045b46a: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b471: FLD float ptr [EAX + 0x16e99bc]
//   XREF to: 016e99bc (DATA)
// 0045b477: FMUL double ptr [0x0061b236]
//   XREF to: 0061b236 (READ)
// 0045b47d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045b482: FISTP dword ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (WRITE)
// 0045b485: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b48c: FLD float ptr [EAX + 0x16e99c0]
//   XREF to: 016e99c0 (DATA)
// 0045b492: FMUL double ptr [0x0061b236]
//   XREF to: 0061b236 (READ)
// 0045b498: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045b49d: FISTP dword ptr [EBP + -0x60]
//   XREF to: Stack[-0x70] (WRITE)
// 0045b4a0: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b4a7: FLD float ptr [EAX + 0x16e99c4]
//   XREF to: 016e99c4 (DATA)
// 0045b4ad: FMUL double ptr [0x0061b236]
//   XREF to: 0061b236 (READ)
// 0045b4b3: FMUL double ptr [0x0061b23e]
//   XREF to: 0061b23e (READ)
// 0045b4b9: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045b4bc: FMULP
// 0045b4be: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045b4c3: FISTP dword ptr [EBP + -0x5c]
//   XREF to: Stack[-0x6c] (WRITE)
// 0045b4c6: JMP 0x0045b4f0
//   XREF to: 0045b4f0 (UNCONDITIONAL_JUMP)
// 0045b4c8: CMP dword ptr [EBP + 0x18],0x5a
//   Label: LAB_0045b4c8
//   XREF to: Stack[0x8] (READ)
// 0045b4cc: JZ 0x0045b4e9
//   XREF to: 0045b4e9 (CONDITIONAL_JUMP)
// 0045b4ce: CMP dword ptr [0x01e528c0],0x0
//   XREF to: 01e528c0 (READ)
// 0045b4d5: JZ 0x0045b4e0
//   XREF to: 0045b4e0 (CONDITIONAL_JUMP)
// 0045b4d7: MOV dword ptr [EBP + -0x70],0x29
//   XREF to: Stack[-0x80] (WRITE)
// 0045b4de: JMP 0x0045b4e7
//   XREF to: 0045b4e7 (UNCONDITIONAL_JUMP)
// 0045b4e0: MOV dword ptr [EBP + -0x70],0x18
//   Label: LAB_0045b4e0
//   XREF to: Stack[-0x80] (WRITE)
// 0045b4e7: JMP 0x0045b4f0
//   Label: LAB_0045b4e7
//   XREF to: 0045b4f0 (UNCONDITIONAL_JUMP)
// 0045b4e9: MOV dword ptr [EBP + -0x70],0x22
//   Label: LAB_0045b4e9
//   XREF to: Stack[-0x80] (WRITE)
// 0045b4f0: CMP dword ptr [EBP + -0x70],0x29
//   Label: LAB_0045b4f0
//   XREF to: Stack[-0x80] (READ)
// 0045b4f4: JNZ 0x0045b5b5
//   XREF to: 0045b5b5 (CONDITIONAL_JUMP)
// 0045b4fa: MOV dword ptr [EBP + 0xffffff1c],0x0
//   XREF to: Stack[-0xf4] (WRITE)
// 0045b504: MOV dword ptr [EBP + 0xffffff18],0x0
//   XREF to: Stack[-0xf8] (WRITE)
// 0045b50e: JMP 0x0045b51c
//   XREF to: 0045b51c (UNCONDITIONAL_JUMP)
// 0045b510: MOV EAX,dword ptr [EBP + 0xffffff18]
//   Label: LAB_0045b510
//   XREF to: Stack[-0xf8] (READ)
// 0045b516: INC dword ptr [EBP + 0xffffff18]
//   XREF to: Stack[-0xf8] (READ_WRITE)
// 0045b51c: MOV EAX,dword ptr [EBP + 0xffffff18]
//   Label: LAB_0045b51c
//   XREF to: Stack[-0xf8] (READ)
// 0045b522: CMP EAX,dword ptr [EBP + -0x6c]
//   XREF to: Stack[-0x7c] (READ)
// 0045b525: JGE 0x0045b5a5
//   XREF to: 0045b5a5 (CONDITIONAL_JUMP)
// 0045b52b: IMUL EDX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b532: MOV EAX,dword ptr [EBP + 0xffffff18]
//   XREF to: Stack[-0xf8] (READ)
// 0045b538: SHL EAX,0x2
// 0045b53b: ADD EAX,EDX
// 0045b53d: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0045b543: MOV dword ptr [EBP + 0xffffff14],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 0045b549: IMUL EAX,dword ptr [EBP + 0xffffff14],0x14
//   XREF to: Stack[-0xfc] (READ)
// 0045b550: TEST dword ptr [EAX + 0x1687e8c],0x7fffffff
//   XREF to: 01687e8c (DATA)
// 0045b55a: JZ 0x0045b566
//   XREF to: 0045b566 (CONDITIONAL_JUMP)
// 0045b55c: MOV dword ptr [EBP + 0xffffff1c],0x1
//   XREF to: Stack[-0xf4] (WRITE)
// 0045b566: IMUL EAX,dword ptr [EBP + 0xffffff14],0x14
//   Label: LAB_0045b566
//   XREF to: Stack[-0xfc] (READ)
// 0045b56d: TEST dword ptr [EAX + 0x1687e90],0x7fffffff
//   XREF to: 01687e90 (DATA)
// 0045b577: JZ 0x0045b583
//   XREF to: 0045b583 (CONDITIONAL_JUMP)
// 0045b579: MOV dword ptr [EBP + 0xffffff1c],0x1
//   XREF to: Stack[-0xf4] (WRITE)
// 0045b583: IMUL EAX,dword ptr [EBP + 0xffffff14],0x14
//   Label: LAB_0045b583
//   XREF to: Stack[-0xfc] (READ)
// 0045b58a: TEST dword ptr [EAX + 0x1687e94],0x7fffffff
//   XREF to: 01687e94 (DATA)
// 0045b594: JZ 0x0045b5a0
//   XREF to: 0045b5a0 (CONDITIONAL_JUMP)
// 0045b596: MOV dword ptr [EBP + 0xffffff1c],0x1
//   XREF to: Stack[-0xf4] (WRITE)
// 0045b5a0: JMP 0x0045b510
//   Label: LAB_0045b5a0
//   XREF to: 0045b510 (UNCONDITIONAL_JUMP)
// 0045b5a5: CMP dword ptr [EBP + 0xffffff1c],0x0
//   Label: LAB_0045b5a5
//   XREF to: Stack[-0xf4] (READ)
// 0045b5ac: JNZ 0x0045b5b5
//   XREF to: 0045b5b5 (CONDITIONAL_JUMP)
// 0045b5ae: MOV dword ptr [EBP + -0x70],0x18
//   XREF to: Stack[-0x80] (WRITE)
// 0045b5b5: CMP dword ptr [EBP + 0x20],0x0
//   Label: LAB_0045b5b5
//   XREF to: Stack[0x10] (READ)
// 0045b5b9: JZ 0x0045b692
//   XREF to: 0045b692 (CONDITIONAL_JUMP)
// 0045b5bf: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b5c2: PUSH EAX
// 0045b5c3: PUSH 0x18
// 0045b5c5: PUSH 0x1
// 0045b5c7: LEA EAX,[EBP + -0x70]
//   XREF to: Stack[-0x80] (DATA)
// 0045b5ca: PUSH EAX
// 0045b5cb: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045b5d0: ADD ESP,0x10
// 0045b5d3: MOV dword ptr [EBP + -0x14],0x0
//   XREF to: Stack[-0x24] (WRITE)
// 0045b5da: JMP 0x0045b5e2
//   XREF to: 0045b5e2 (UNCONDITIONAL_JUMP)
// 0045b5dc: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0045b5dc
//   XREF to: Stack[-0x24] (READ)
// 0045b5df: INC dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ_WRITE)
// 0045b5e2: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0045b5e2
//   XREF to: Stack[-0x24] (READ)
// 0045b5e5: CMP EAX,dword ptr [EBP + -0x6c]
//   XREF to: Stack[-0x7c] (READ)
// 0045b5e8: JGE 0x0045b68d
//   XREF to: 0045b68d (CONDITIONAL_JUMP)
// 0045b5ee: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b5f1: PUSH EAX
// 0045b5f2: PUSH 0x4
// 0045b5f4: PUSH 0x1
// 0045b5f6: IMUL EAX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b5fd: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0045b602: ADD EAX,EDX
// 0045b604: MOV EDX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045b607: SHL EDX,0x2
// 0045b60a: ADD EAX,0xb8
// 0045b60f: ADD EAX,EDX
// 0045b611: PUSH EAX
// 0045b612: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045b617: ADD ESP,0x10
// 0045b61a: IMUL EDX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b621: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045b624: SHL EAX,0x2
// 0045b627: ADD EAX,EDX
// 0045b629: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0045b62f: FMUL double ptr [0x0061b246]
//   XREF to: 0061b246 (READ)
// 0045b635: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045b63a: FISTP dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0045b63d: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b640: PUSH EAX
// 0045b641: PUSH 0x4
// 0045b643: PUSH 0x1
// 0045b645: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 0045b648: PUSH EAX
// 0045b649: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045b64e: ADD ESP,0x10
// 0045b651: IMUL EDX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b658: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045b65b: SHL EAX,0x2
// 0045b65e: ADD EAX,EDX
// 0045b660: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0045b666: FMUL double ptr [0x0061b246]
//   XREF to: 0061b246 (READ)
// 0045b66c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045b671: FISTP dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0045b674: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b677: PUSH EAX
// 0045b678: PUSH 0x4
// 0045b67a: PUSH 0x1
// 0045b67c: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 0045b67f: PUSH EAX
// 0045b680: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045b685: ADD ESP,0x10
// 0045b688: JMP 0x0045b5dc
//   XREF to: 0045b5dc (UNCONDITIONAL_JUMP)
// 0045b68d: JMP 0x0045b7d1
//   Label: LAB_0045b68d
//   XREF to: 0045b7d1 (UNCONDITIONAL_JUMP)
// 0045b692: CMP dword ptr [EBP + -0x70],0x5
//   Label: LAB_0045b692
//   XREF to: Stack[-0x80] (READ)
// 0045b696: JNZ 0x0045b6aa
//   XREF to: 0045b6aa (CONDITIONAL_JUMP)
// 0045b698: MOV EAX,0x61b24e
//   XREF to: 0061b24e (DATA)
// 0045b69d: PUSH EAX
//   XREF to: 0061b24e (DATA)
// 0045b69e: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b6a1: PUSH EAX
// 0045b6a2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b6a7: ADD ESP,0x8
// 0045b6aa: CMP dword ptr [EBP + -0x70],0x19
//   Label: LAB_0045b6aa
//   XREF to: Stack[-0x80] (READ)
// 0045b6ae: JNZ 0x0045b6c2
//   XREF to: 0045b6c2 (CONDITIONAL_JUMP)
// 0045b6b0: MOV EAX,0x61b255
//   XREF to: 0061b255 (DATA)
// 0045b6b5: PUSH EAX
//   XREF to: 0061b255 (DATA)
// 0045b6b6: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b6b9: PUSH EAX
// 0045b6ba: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b6bf: ADD ESP,0x8
// 0045b6c2: CMP dword ptr [EBP + -0x70],0xe
//   Label: LAB_0045b6c2
//   XREF to: Stack[-0x80] (READ)
// 0045b6c6: JNZ 0x0045b6da
//   XREF to: 0045b6da (CONDITIONAL_JUMP)
// 0045b6c8: MOV EAX,0x61b25d
//   XREF to: 0061b25d (DATA)
// 0045b6cd: PUSH EAX
//   XREF to: 0061b25d (DATA)
// 0045b6ce: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b6d1: PUSH EAX
// 0045b6d2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b6d7: ADD ESP,0x8
// 0045b6da: CMP dword ptr [EBP + -0x70],0x18
//   Label: LAB_0045b6da
//   XREF to: Stack[-0x80] (READ)
// 0045b6de: JNZ 0x0045b6f2
//   XREF to: 0045b6f2 (CONDITIONAL_JUMP)
// 0045b6e0: MOV EAX,0x61b264
//   XREF to: 0061b264 (DATA)
// 0045b6e5: PUSH EAX
//   XREF to: 0061b264 (DATA)
// 0045b6e6: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b6e9: PUSH EAX
// 0045b6ea: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b6ef: ADD ESP,0x8
// 0045b6f2: CMP dword ptr [EBP + -0x70],0x22
//   Label: LAB_0045b6f2
//   XREF to: Stack[-0x80] (READ)
// 0045b6f6: JNZ 0x0045b70a
//   XREF to: 0045b70a (CONDITIONAL_JUMP)
// 0045b6f8: MOV EAX,0x61b26c
//   XREF to: 0061b26c (DATA)
// 0045b6fd: PUSH EAX
//   XREF to: 0061b26c (DATA)
// 0045b6fe: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b701: PUSH EAX
// 0045b702: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b707: ADD ESP,0x8
// 0045b70a: MOV EAX,dword ptr [EBP + -0x5c]
//   Label: LAB_0045b70a
//   XREF to: Stack[-0x6c] (READ)
// 0045b70d: PUSH EAX
// 0045b70e: MOV EAX,dword ptr [EBP + -0x60]
//   XREF to: Stack[-0x70] (READ)
// 0045b711: PUSH EAX
// 0045b712: MOV EAX,dword ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (READ)
// 0045b715: PUSH EAX
// 0045b716: MOV EAX,dword ptr [EBP + -0x68]
//   XREF to: Stack[-0x78] (READ)
// 0045b719: PUSH EAX
// 0045b71a: MOV EAX,dword ptr [EBP + -0x6c]
//   XREF to: Stack[-0x7c] (READ)
// 0045b71d: PUSH EAX
// 0045b71e: MOV EAX,0x61b275
//   XREF to: 0061b275 (DATA)
// 0045b723: PUSH EAX
//   XREF to: 0061b275 (DATA)
// 0045b724: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b727: PUSH EAX
// 0045b728: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b72d: ADD ESP,0x1c
// 0045b730: MOV dword ptr [EBP + -0x14],0x0
//   XREF to: Stack[-0x24] (WRITE)
// 0045b737: JMP 0x0045b73f
//   XREF to: 0045b73f (UNCONDITIONAL_JUMP)
// 0045b739: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0045b739
//   XREF to: Stack[-0x24] (READ)
// 0045b73c: INC dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ_WRITE)
// 0045b73f: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0045b73f
//   XREF to: Stack[-0x24] (READ)
// 0045b742: CMP EAX,dword ptr [EBP + -0x6c]
//   XREF to: Stack[-0x7c] (READ)
// 0045b745: JGE 0x0045b7bf
//   XREF to: 0045b7bf (CONDITIONAL_JUMP)
// 0045b747: IMUL EDX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b74e: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045b751: SHL EAX,0x2
// 0045b754: ADD EAX,EDX
// 0045b756: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0045b75c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045b761: FISTP dword ptr [EBP + 0xffffff20]
//   XREF to: Stack[-0xf0] (WRITE)
// 0045b767: PUSH dword ptr [EBP + 0xffffff20]
//   XREF to: Stack[-0xf0] (READ)
// 0045b76d: IMUL EDX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b774: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045b777: SHL EAX,0x2
// 0045b77a: ADD EAX,EDX
// 0045b77c: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0045b782: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045b787: FISTP dword ptr [EBP + 0xffffff20]
//   XREF to: Stack[-0xf0] (WRITE)
// 0045b78d: PUSH dword ptr [EBP + 0xffffff20]
//   XREF to: Stack[-0xf0] (READ)
// 0045b793: IMUL EDX,dword ptr [EBP + -0x18],0x184
//   XREF to: Stack[-0x28] (READ)
// 0045b79a: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045b79d: SHL EAX,0x2
// 0045b7a0: ADD EAX,EDX
// 0045b7a2: PUSH dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0045b7a8: MOV EAX,0x61b288
//   XREF to: 0061b288 (DATA)
// 0045b7ad: PUSH EAX
//   XREF to: 0061b288 (DATA)
// 0045b7ae: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b7b1: PUSH EAX
// 0045b7b2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b7b7: ADD ESP,0x14
// 0045b7ba: JMP 0x0045b739
//   XREF to: 0045b739 (UNCONDITIONAL_JUMP)
// 0045b7bf: MOV EAX,0x61b292
//   Label: LAB_0045b7bf
//   XREF to: 0061b292 (DATA)
// 0045b7c4: PUSH EAX
//   XREF to: 0061b292 (DATA)
// 0045b7c5: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b7c8: PUSH EAX
// 0045b7c9: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b7ce: ADD ESP,0x8
// 0045b7d1: JMP 0x0045b050
//   Label: LAB_0045b7d1
//   XREF to: 0045b050 (UNCONDITIONAL_JUMP)
// 0045b7d6: MOV dword ptr [EBP + -0x18],0x0
//   Label: LAB_0045b7d6
//   XREF to: Stack[-0x28] (WRITE)
// 0045b7dd: CMP dword ptr [EBP + 0x20],0x0
//   XREF to: Stack[0x10] (READ)
// 0045b7e1: JZ 0x0045b7f9
//   XREF to: 0045b7f9 (CONDITIONAL_JUMP)
// 0045b7e3: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b7e6: PUSH EAX
// 0045b7e7: PUSH 0x4
// 0045b7e9: PUSH 0x1
// 0045b7eb: LEA EAX,[EBP + -0x18]
//   XREF to: Stack[-0x28] (DATA)
// 0045b7ee: PUSH EAX
// 0045b7ef: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045b7f4: ADD ESP,0x10
// 0045b7f7: JMP 0x0045b82f
//   XREF to: 0045b82f (UNCONDITIONAL_JUMP)
// 0045b7f9: MOV EAX,0x61b294
//   Label: LAB_0045b7f9
//   XREF to: 0061b294 (DATA)
// 0045b7fe: PUSH EAX
//   XREF to: 0061b294 (DATA)
// 0045b7ff: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b802: PUSH EAX
// 0045b803: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b808: ADD ESP,0x8
// 0045b80b: MOV EAX,0x61b29e
//   XREF to: 0061b29e (DATA)
// 0045b810: PUSH EAX
//   XREF to: 0061b29e (DATA)
// 0045b811: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b814: PUSH EAX
// 0045b815: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b81a: ADD ESP,0x8
// 0045b81d: MOV EAX,0x61b2aa
//   XREF to: 0061b2aa (DATA)
// 0045b822: PUSH EAX
//   XREF to: 0061b2aa (DATA)
// 0045b823: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b826: PUSH EAX
// 0045b827: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045b82c: ADD ESP,0x8
// 0045b82f: PUSH 0x868
//   Label: LAB_0045b82f
// 0045b834: MOV EAX,0x61b2b0
//   XREF to: 0061b2b0 (DATA)
// 0045b839: PUSH EAX
//   XREF to: 0061b2b0 (DATA)
// 0045b83a: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045b83d: PUSH EAX
// 0045b83e: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0045b843: ADD ESP,0xc
// 0045b846: MOV ESP,EBP
//   Label: LAB_0045b846
// 0045b848: POP EBP
// 0045b849: POP EDI
// 0045b84a: POP ESI
// 0045b84b: POP EBX
// 0045b84c: RET

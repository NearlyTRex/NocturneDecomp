// Name: shape_design.c_exportModelToBIN_FUN_0045aa80
// Address: 0045aa80
// Address Range: [[0045aa80, 0045b84c]]
// Convention: __cdecl
// Signature: void shape_design.c_exportModelToBIN_FUN_0045aa80(char * filename, int depth_mode, int scale_mode, int export_format, int include_textures)

#include "nocturne.h"

void __cdecl
shape_design_c_exportModelToBIN_FUN_0045aa80
          (char *filename,int depth_mode,int scale_mode,int export_format,int include_textures)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint local_98;
  uint local_94;
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
  uint local_5c;
  uint local_58;
  int local_54;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28;
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
    crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tASSUME\tcs:code\n\n");
  }
  else {
    local_1c = engine_dosio_c_getFile_FUN_00481a50("models",filename,"wb");
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
      for (local_28 = 0; local_28 < g_VertexCount; local_28 = local_28 + 1) {
        if (local_14 < ABS(g_LoadedVertices[local_28].vertex.x)) {
          local_14 = ABS(g_LoadedVertices[local_28].vertex.x);
        }
        if (local_14 < ABS(g_LoadedVertices[local_28].vertex.y)) {
          local_14 = ABS(g_LoadedVertices[local_28].vertex.y);
        }
        if (local_14 < ABS(g_LoadedVertices[local_28].vertex.z)) {
          local_14 = ABS(g_LoadedVertices[local_28].vertex.z);
        }
      }
      local_14 = (float)64 / local_14;
    }
    if ((0x31 < scale_mode) && (scale_mode < 0x35)) {
      local_14 = 0.0;
      for (local_28 = 0; local_28 < g_VertexCount; local_28 = local_28 + 1) {
        if ((scale_mode == 0x32) && (local_14 < ABS(g_LoadedVertices[local_28].vertex.x))) {
          local_14 = ABS(g_LoadedVertices[local_28].vertex.x);
        }
        if ((scale_mode == 0x33) && (local_14 < ABS(g_LoadedVertices[local_28].vertex.y))) {
          local_14 = ABS(g_LoadedVertices[local_28].vertex.y);
        }
        if ((scale_mode == 0x34) && (local_14 < ABS(g_LoadedVertices[local_28].vertex.z))) {
          local_14 = ABS(g_LoadedVertices[local_28].vertex.z);
        }
      }
      local_14 = 1.0 / local_14;
    }
    if (scale_mode == 0x35) {
      local_14 = 1.0;
    }
    if (scale_mode == 0x36) {
      local_14 = 0.0;
      for (local_28 = 0; local_28 < g_VertexCount; local_28 = local_28 + 1) {
        if (local_14 < ABS(g_LoadedVertices[local_28].vertex.x)) {
          local_14 = ABS(g_LoadedVertices[local_28].vertex.x);
        }
        if (local_14 < ABS(g_LoadedVertices[local_28].vertex.y)) {
          local_14 = ABS(g_LoadedVertices[local_28].vertex.y);
        }
        if (local_14 < ABS(g_LoadedVertices[local_28].vertex.z)) {
          local_14 = ABS(g_LoadedVertices[local_28].vertex.z);
        }
      }
      iVar7 = 0x45adb0;
      dVar5 = crt_math_c_round_FUN_005fe6b0
                        (((double)local_14 * 0.6931471805599453) /
                         (2 * 0.6931471805599453));
      local_18 = (int)ROUND(dVar5) + 1;
      dVar5 = crt_math_c_ldexp_FUN_00600002((double)CONCAT44 /* combine 2-byte values */(local_18,0x3ff00000),iVar7);
      local_14 = (float)64 / (float)dVar5;
    }
    local_38 = 0x14;
    uVar8 = 0x45ae02;
    dVar5 = crt_math_c_round_FUN_005fe6b0((double)(local_14 * (float)65536));
    local_34 = (int)ROUND(dVar5);
    if (export_format == 0) {
      crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tMAGNIFY\t%d\n\n",local_34,uVar8);
    }
    else {
      crt_stdio_c_fwrite_FUN_005fdc00(&local_38,1,8,local_1c);
    }
    local_5c = 2;
    local_58 = 0;
    local_54 = g_VertexCount;
    if (export_format == 0) {
      crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tVLIST\t0,%d\n",g_VertexCount);
    }
    else {
      crt_stdio_c_fwrite_FUN_005fdc00(&local_5c,1,0xc,local_1c);
    }
    for (local_28 = 0; local_28 < g_VertexCount; local_28 = local_28 + 1) {
      uVar9 = 0x45aeb7;
      dVar5 = crt_math_c_round_FUN_005fe6b0
                        ((double)(local_14 *
                                 g_LoadedVertices[local_28].vertex.x * (float)256
                                 ));
      local_68 = (int)ROUND(dVar5);
      uVar6 = 0x45aed4;
      dVar5 = crt_math_c_round_FUN_005fe6b0
                        ((double)(local_14 *
                                 g_LoadedVertices[local_28].vertex.y * (float)256
                                 ));
      local_64 = (int)ROUND(dVar5);
      uVar8 = 0x45aef1;
      dVar5 = crt_math_c_round_FUN_005fe6b0
                        ((double)(local_14 *
                                 g_LoadedVertices[local_28].vertex.z * (float)256
                                 ));
      local_60 = (int)ROUND(dVar5);
      if (export_format == 0) {
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (local_1c,"\tVERTEX\t%d,%d,%d\n",local_68,local_64,local_60,uVar8,uVar6,uVar9);
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
      for (local_28 = 0; local_28 < g_VertexCount; local_28 = local_28 + 1) {
        dVar5 = crt_math_c_round_FUN_005fe6b0
                          ((double)(g_VertexNormals[local_28].vertex.x * 65535f));
        local_68 = (int)ROUND(dVar5);
        dVar5 = crt_math_c_round_FUN_005fe6b0
                          ((double)(g_VertexNormals[local_28].vertex.y * 65535f));
        local_64 = (int)ROUND(dVar5);
        dVar5 = crt_math_c_round_FUN_005fe6b0
                          ((double)(g_VertexNormals[local_28].vertex.z * 65535f));
        local_60 = (int)ROUND(dVar5);
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
    for (local_28 = 0; local_28 < g_PolygonCount; local_28 = local_28 + 1) {
      shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + local_28);
      local_7c = g_ModelPolygonData[local_28].vertex_indices_count;
      dVar5 = crt_math_c_round_FUN_005fe6b0
                        ((double)(g_ModelPolygonData[local_28].normal.x *
                                 (float)65535));
      local_78 = (int)ROUND(dVar5);
      uVar8 = 0x45b0bf;
      dVar5 = crt_math_c_round_FUN_005fe6b0
                        ((double)(g_ModelPolygonData[local_28].normal.y *
                                 (float)65535));
      local_74 = (int)ROUND(dVar5);
      iVar7 = 0x45b0da;
      dVar5 = crt_math_c_round_FUN_005fe6b0
                        ((double)(g_ModelPolygonData[local_28].normal.z *
                                 (float)65535));
      local_70 = (int)ROUND(dVar5);
      uVar10 = 0x45b100;
      dVar5 = crt_math_c_round_FUN_005fe6b0
                        ((double)(local_14 *
                                 g_ModelPolygonData[local_28].plane_distance *
                                 (float)65535 * (float)256)
                        );
      local_6c = (int)ROUND(dVar5);
      if (g_ModelPolygonData[local_28].polygon_type == 1) {
        if (g_EditorColorIndex != g_ModelPolygonData[local_28].material_id) {
          local_30 = 10;
          local_2c = g_ModelPolygonData[local_28].material_id;
          if (export_format == 0) {
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (local_1c,"\tCOLOR\t%d\n",local_2c,uVar10,iVar7,uVar8);
          }
          else {
            crt_stdio_c_fwrite_FUN_005fdc00(&local_30,1,8,local_1c);
          }
          g_EditorColorIndex = g_ModelPolygonData[local_28].material_id;
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
                      (local_1c,",%d",g_ModelPolygonData[local_28].vertex_indices[local_24]);
          }
          crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\n");
        }
        else {
          crt_stdio_c_fwrite_FUN_005fdc00(&local_80,1,0x18,local_1c);
          crt_stdio_c_fwrite_FUN_005fdc00
                    (g_ModelPolygonData[local_28].vertex_indices,local_7c,4,local_1c);
        }
      }
      else {
        iVar2 = crt_string_c_strcmp_FUN_005fef20
                          (g_TempTextureName,g_ModelPolygonData[local_28].texture_name);
        if (iVar2 != 0) {
          pcVar3 = g_ModelPolygonData[local_28].texture_name;
          pcVar4 = g_TempTextureName;
          do {
            cVar1 = *pcVar3;
            *pcVar4 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            pcVar4[1] = cVar1;
            pcVar4 = pcVar4 + 2;
          } while (cVar1 != '\0');
          pcVar4 = g_TempTextureName;
          pcVar3 = local_90;
          do {
            cVar1 = *pcVar4;
            *pcVar3 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar3[1] = cVar1;
            pcVar3 = pcVar3 + 2;
          } while (cVar1 != '\0');
          local_94 = 0;
          local_98 = 0xd;
          if (include_textures == 0x59) {
            if (export_format == 0) {
              crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tTEXTURE\t\"%s\"\n",local_90);
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
          dVar5 = crt_math_c_round_FUN_005fe6b0
                            ((double)(g_ModelPolygonData[local_28].normal.x *
                                     (float)2048));
          local_78 = (int)ROUND(dVar5);
          dVar5 = crt_math_c_round_FUN_005fe6b0
                            ((double)(g_ModelPolygonData[local_28].normal.y *
                                     (float)2048));
          local_74 = (int)ROUND(dVar5);
          iVar7 = 0x45b410;
          dVar5 = crt_math_c_round_FUN_005fe6b0
                            ((double)(g_ModelPolygonData[local_28].normal.z *
                                     (float)2048));
          local_70 = (int)ROUND(dVar5);
          uVar10 = 0x45b436;
          dVar5 = crt_math_c_round_FUN_005fe6b0
                            ((double)(local_14 *
                                     g_ModelPolygonData[local_28].plane_distance *
                                     (float)2048 *
                                     (float)256));
          local_6c = (int)ROUND(dVar5);
        }
        else if (depth_mode == 0x48) {
          local_80 = 0xe;
          dVar5 = crt_math_c_round_FUN_005fe6b0
                            ((double)(g_ModelPolygonData[local_28].normal.x *
                                     (float)2048));
          local_78 = (int)ROUND(dVar5);
          dVar5 = crt_math_c_round_FUN_005fe6b0
                            ((double)(g_ModelPolygonData[local_28].normal.y *
                                     (float)2048));
          local_74 = (int)ROUND(dVar5);
          iVar7 = 0x45b49d;
          dVar5 = crt_math_c_round_FUN_005fe6b0
                            ((double)(g_ModelPolygonData[local_28].normal.z *
                                     (float)2048));
          local_70 = (int)ROUND(dVar5);
          uVar10 = 0x45b4c3;
          dVar5 = crt_math_c_round_FUN_005fe6b0
                            ((double)(local_14 *
                                     g_ModelPolygonData[local_28].plane_distance *
                                     (float)2048 *
                                     (float)256));
          local_6c = (int)ROUND(dVar5);
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
          for (iVar7 = 0; iVar7 < (int)local_7c; iVar7 = iVar7 + 1) {
            uVar10 = g_ModelPolygonData[local_28].vertex_indices[iVar7];
            if (ABS(g_VertexNormals[uVar10].vertex.x) != 0.0) {
              bVar11 = true;
            }
            if (ABS(g_VertexNormals[uVar10].vertex.y) != 0.0) {
              bVar11 = true;
            }
            if (ABS(g_VertexNormals[uVar10].vertex.z) != 0.0) {
              bVar11 = true;
            }
          }
          if (!bVar11) {
            local_80 = 0x18;
          }
        }
        if (export_format == 0) {
          if (local_80 == 5) {
            crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tFACET",uVar10,iVar7);
          }
          if (local_80 == 0x19) {
            crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\tZFACET",uVar10);
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
            uVar6 = 0x45b761;
            dVar5 = crt_math_c_round_FUN_005fe6b0
                              ((double)g_ModelPolygonData[local_28].uv_v[local_24]);
            iVar7 = (int)ROUND(dVar5);
            uVar8 = 0x45b787;
            dVar5 = crt_math_c_round_FUN_005fe6b0
                              ((double)g_ModelPolygonData[local_28].uv_u[local_24]);
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (local_1c,",%d,%d,%d",
                       g_ModelPolygonData[local_28].vertex_indices[local_24],(int)ROUND(dVar5),uVar8
                       ,iVar7,uVar6);
          }
          crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"\n");
        }
        else {
          crt_stdio_c_fwrite_FUN_005fdc00(&local_80,1,0x18,local_1c);
          for (local_24 = 0; local_24 < (int)local_7c; local_24 = local_24 + 1) {
            crt_stdio_c_fwrite_FUN_005fdc00
                      ((void *)(local_28 * 0x184 + 0x16e99c8 + local_24 * 4),1,4,local_1c);
            dVar5 = crt_math_c_round_FUN_005fe6b0
                              ((double)(g_ModelPolygonData[local_28].uv_u[local_24] *
                                       (float)65536));
            local_20 = (int)ROUND(dVar5);
            crt_stdio_c_fwrite_FUN_005fdc00(&local_20,1,4,local_1c);
            dVar5 = crt_math_c_round_FUN_005fe6b0
                              ((double)(g_ModelPolygonData[local_28].uv_v[local_24] *
                                       (float)65536));
            local_20 = (int)ROUND(dVar5);
            crt_stdio_c_fwrite_FUN_005fdc00(&local_20,1,4,local_1c);
          }
        }
      }
    }
    local_28 = 0;
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

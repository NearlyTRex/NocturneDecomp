// Name: shape_design.c_loadModelBinary_FUN_00458170
// Address: 00458170
// Address Range: [[00458170, 004587e3] [004587e9, 00458a0d]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_loadModelBinary_FUN_00458170(char *filename)

#include "nocturne.h"

int __cdecl shape_design_c_loadModelBinary_FUN_00458170(char *filename)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  byte bVar7;
  SMRGLModelBounds *in_stack_fffffe64;
  int local_198 [13];
  uint local_164;
  char local_160 [80];
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_dc [13];
  byte local_a8 [4];
  uint local_a4;
  byte local_90 [8];
  char local_88 [16];
  int local_78;
  int local_74;
  int local_70;
  byte local_6c [4];
  int local_68;
  int local_64;
  byte local_54 [12];
  byte local_48 [4];
  int local_44;
  byte local_40 [4];
  uint local_3c;
  _FILE *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  float local_20;
  SMRGLHeaderExtended *local_1c;
  uint local_18;
  SIZE_T local_14;
  
  bVar7 = 0;
  local_20 = 1.0;
  local_38 = engine_dosio_c_getFile_FUN_00481a50("models",filename,"rb");
  if (local_38 == (_FILE *)0x0) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    sprintf(local_160,"loadBinary: Unable to read binary file: (%s)");
    engine_2d_c_drawText_FUN_00401fd0(local_160,0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    local_30 = 0;
  }
  else {
    g_PolygonCount = 0;
    g_VertexCount = 0;
    local_14 = _fread(&local_18,1,4,local_38);
    _fseek(local_38,-4,1);
    while ((local_18 != 0 && (local_14 != 0xffffffff))) {
      local_164 = local_18;
      if (local_18 < 0x14) {
        if (local_18 < 6) {
          if (local_18 < 3) {
            if (local_18 != 2) goto LAB_00458677;
            _fread(local_6c,1,0xc,local_38);
            g_VertexCount = local_64;
            for (local_2c = 0; local_2c < local_64; local_2c = local_2c + 1) {
              _fread(&local_78,1,0xc,local_38);
              g_LoadedVertices[local_2c].vertex.x =
                   ((float)local_78 * (float)0.00390625) / local_20;
              g_LoadedVertices[local_2c].vertex.y =
                   ((float)local_74 * (float)0.00390625) / local_20;
              g_LoadedVertices[local_2c].vertex.z =
                   ((float)local_70 * (float)0.00390625) / local_20;
            }
            g_GouraudShadingEnabled = 0;
          }
          else {
            if (3 < local_18) {
              if (local_18 != 5) goto LAB_00458677;
              goto LAB_00458378;
            }
            _fread(local_6c,1,0xc,local_38);
            for (local_2c = 0; local_2c < local_64; local_2c = local_2c + 1) {
              _fread(&local_78,1,0xc,local_38);
            }
            g_GouraudShadingEnabled = 1;
          }
        }
        else if (local_18 < 7) {
LAB_00458378:
          _fread(local_a8,1,0x18,local_38);
          g_ModelPolygonData[g_PolygonCount].polygon_type = 1;
          g_ModelPolygonData[g_PolygonCount].vertex_indices_count = local_a4;
          shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + g_PolygonCount);
          pcVar3 = g_TempTextureName;
          pcVar5 = g_ModelPolygonData[g_PolygonCount].texture_name;
          do {
            cVar1 = *pcVar3;
            *pcVar5 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            pcVar5[1] = cVar1;
            pcVar5 = pcVar5 + 2;
          } while (cVar1 != '\0');
          g_ModelPolygonData[g_PolygonCount].material_id = local_24;
          _fread(g_ModelPolygonData[g_PolygonCount].vertex_indices,local_a4,4,local_38);
          for (local_2c = 0; local_2c < (int)g_ModelPolygonData[g_PolygonCount].vertex_indices_count
              ; local_2c = local_2c + 1) {
            g_ModelPolygonData[g_PolygonCount].vertex_indices[0] =
                 g_ModelPolygonData[g_PolygonCount].vertex_indices[0] - local_68;
          }
          g_PolygonCount = g_PolygonCount + 1;
        }
        else if (local_18 < 0xd) {
          if (local_18 != 10) goto LAB_00458677;
          _fread(local_40,1,8,local_38);
          local_3c = g_ModelPolygonData[local_2c].material_id;
          local_24 = local_3c;
        }
        else {
          if (0xd < local_18) {
            if ((0xe < local_18) && (local_18 != 0x11)) goto LAB_00458677;
            goto LAB_004584f3;
          }
          _fread(local_90,1,0x18,local_38);
          pcVar5 = local_88;
          pcVar3 = g_TempTextureName;
          do {
            cVar1 = *pcVar5;
            *pcVar3 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar3[1] = cVar1;
            pcVar3 = pcVar3 + 2;
          } while (cVar1 != '\0');
        }
      }
      else if (local_18 < 0x15) {
        _fread(local_48,1,8,local_38);
        local_20 = (float)local_44 * (float)1.52587890625e-05;
      }
      else {
        if (local_18 < 0x1b) {
          if (local_18 < 0x18) {
            if (local_18 != 0x17) goto LAB_00458677;
            _fread(local_54,1,0xc,local_38);
            goto LAB_00458835;
          }
          if (0x18 < local_18) {
            if (local_18 != 0x19) goto LAB_00458677;
            goto LAB_00458378;
          }
        }
        else {
          if (local_18 < 0x1c) goto LAB_00458378;
          if (local_18 < 0x29) {
            if (local_18 != 0x22) goto LAB_00458677;
          }
          else if ((0x29 < local_18) &&
                  ((local_18 < 0x34 || ((0x34 < local_18 && (local_18 != 0x3e)))))) {
LAB_00458677:
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_38,"..\\shape\\design.c",0x2a4);
            wincore_windll_cpp_clearScreen_FUN_005b3e70();
            engine_2d_c_clearInputAndWait_FUN_00403260();
            sprintf(local_160,"loadBinary: type %d is not known");
            engine_2d_c_drawText_FUN_00401fd0(local_160,0,0);
            wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
            wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
            return 1;
          }
        }
LAB_004584f3:
        _fread(local_a8,1,0x18,local_38);
        g_ModelPolygonData[g_PolygonCount].polygon_type = 2;
        g_ModelPolygonData[g_PolygonCount].vertex_indices_count = local_a4;
        shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + g_PolygonCount);
        pcVar3 = g_TempTextureName;
        pcVar5 = g_ModelPolygonData[g_PolygonCount].texture_name;
        do {
          cVar1 = *pcVar3;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar3[1];
          pcVar3 = pcVar3 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        g_ModelPolygonData[g_PolygonCount].material_id = local_24;
        for (local_28 = 0; local_28 < (int)local_a4; local_28 = local_28 + 1) {
          _fread((void *)(local_28 * 4 + g_PolygonCount * 0x184 + 0x16e99c8),1,4,local_38);
          g_ModelPolygonData[g_PolygonCount].vertex_indices[local_28] =
               g_ModelPolygonData[g_PolygonCount].vertex_indices[local_28] - local_68;
          _fread(&local_34,1,4,local_38);
          g_ModelPolygonData[g_PolygonCount].uv_u[local_28] =
               (float)local_34 * (float)1.52587890625e-05;
          _fread(&local_34,1,4,local_38);
          g_ModelPolygonData[g_PolygonCount].uv_v[local_28] =
               (float)local_34 * (float)1.52587890625e-05;
        }
        g_PolygonCount = g_PolygonCount + 1;
      }
LAB_00458835:
      local_14 = _fread(&local_18,1,4,local_38);
      _fseek(local_38,-4,1);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_38,"..\\shape\\design.c",0x2b2);
    shape_design_c_calculateVertexNormals_FUN_0045be40();
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    local_1c = engine_model_c_loadModelFile_FUN_00527ec0(filename);
    if (local_1c == (SMRGLHeaderExtended *)0x0) {
      g_CurrentFilename = "..\\shape\\design.c";
      g_CurrentLineNumber = 699;
      core_main_c_displayErrorAndQuit_FUN_00506f10("loadBinary - Out of mem!");
    }
    engine_model_c_getMRGLBounds_FUN_00528140(local_1c,in_stack_fffffe64);
    piVar4 = local_198;
    piVar6 = local_dc;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    piVar4 = local_dc;
    piVar6 = &local_110;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    engine_model_c_freeMRGLData_FUN_005280b0(local_1c);
    sprintf
              (local_160,"X size : %f",(double)(local_104 - local_110) * 0.00390625);
    engine_2d_c_drawText_FUN_00401fd0(local_160,0,0);
    sprintf
              (local_160,"Y size : %f",(double)(local_100 - local_10c) * 0.00390625);
    engine_2d_c_drawText_FUN_00401fd0(local_160,0,0xb);
    sprintf
              (local_160,"Z size : %f",(double)(local_fc - local_108) * 0.00390625);
    engine_2d_c_drawText_FUN_00401fd0(local_160,0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("Hit a key...",0,0x2c);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    local_30 = 1;
  }
  return local_30;
}

// Name: shape_design.c_loadModelBinary_FUN_00458170
// Address: 00458170
// Address Range: [[00458170, 004587e3] [004587e9, 00458a0d]]
// Convention: __cdecl
// Signature: int shape_design.c_loadModelBinary_FUN_00458170(char * filename)
// Cross-references:
//   shape_design.c_loadModelFile_FUN_00458ac0 (00458ac0) at 00458b8e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rb_0061a8b2
//   TerminatedCString s_models_0061a8b5
//   TerminatedCString s_loadBinary_Unable_to_rea_0061a8bc
//   double g_ScaleFactorDivisor = 0.0000152587890625
//   double g_VertexCoordinateScale = 0.00390625
//   double g_UVCoordinateScale = 0.0000152587890625
//   TerminatedCString s_shape_design_c_0061a906
//   TerminatedCString s_loadBinary_type_d_is_not_0061a918
//   TerminatedCString s_shape_design_c_0061a939
//   TerminatedCString s_shape_design_c_0061a94b
//   TerminatedCString s_loadBinary_Out_of_mem_0061a95d
//   TerminatedCString s_X_size_f_0061a976
//   TerminatedCString s_Y_size_f_0061a982
//   TerminatedCString s_Z_size_f_0061a98e
//   TerminatedCString s_Hit_a_key_0061a99a
//   double DOUBLE_0061a9ae = 0.00390625
//   char[80] g_TempTextureName
//   undefined4 DAT_01626371
//   undefined4 DAT_01626372
//   undefined4 DAT_01626373
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e9915
//   undefined4 DAT_016e9916
//   undefined4 DAT_016e9917
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a48
//   undefined4 DAT_016e9a8c
//   int g_GouraudShadingEnabled
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_fseek_FUN_005ffacc
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_model.c_freeMRGLData_FUN_005280b0
//   engine_model.c_getMRGLBounds_FUN_00528140
//   engine_model.c_loadModelFile_FUN_00527ec0
//   shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   shape_design.c_calculateVertexNormals_FUN_0045be40
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

int __cdecl shape_design_c_loadModelBinary_FUN_00458170(char *filename)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  byte bVar7;
  SMRGLModelBounds *output;
  undefined8 in_stack_fffffe84;
  undefined4 local_110 [13];
  undefined4 local_dc [13];
  undefined1 local_a8 [4];
  uint local_a4;
  undefined1 local_90 [8];
  char local_88 [16];
  int local_78;
  int local_74;
  int local_70;
  undefined1 local_6c [4];
  int local_68;
  int local_64;
  undefined1 local_54 [12];
  undefined1 local_48 [4];
  int local_44;
  undefined1 local_40 [4];
  uint local_3c;
  FILE *local_38;
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
  if (local_38 == (FILE *)0x0) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffea0,"loadBinary: Unable to read binary file: (%s)");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffea0,0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    local_30 = 0;
  }
  else {
    g_PolygonCount = 0;
    g_VertexCount = 0;
    local_14 = crt_stdio_c_fread_FUN_005fd990(&local_18,1,4,local_38);
    crt_stdio_c_fseek_FUN_005ffacc(local_38,-4,1);
    while ((output = (SMRGLModelBounds *)in_stack_fffffe84, local_18 != 0 &&
           (local_14 != 0xffffffff))) {
      if (local_18 < 0x14) {
        if (local_18 < 6) {
          if (local_18 < 3) {
            if (local_18 != 2) goto LAB_00458677;
            crt_stdio_c_fread_FUN_005fd990(local_6c,1,0xc,local_38);
            g_VertexCount = local_64;
            for (local_2c = 0; local_2c < local_64; local_2c = local_2c + 1) {
              crt_stdio_c_fread_FUN_005fd990(&local_78,1,0xc,local_38);
              g_LoadedVertices[local_2c].vertex.x =
                   ((float)local_78 * (float)g_VertexCoordinateScale) / local_20;
              g_LoadedVertices[local_2c].vertex.y =
                   ((float)local_74 * (float)g_VertexCoordinateScale) / local_20;
              g_LoadedVertices[local_2c].vertex.z =
                   ((float)local_70 * (float)g_VertexCoordinateScale) / local_20;
            }
            g_GouraudShadingEnabled = 0;
          }
          else {
            if (3 < local_18) {
              if (local_18 != 5) goto LAB_00458677;
              goto LAB_00458378;
            }
            crt_stdio_c_fread_FUN_005fd990(local_6c,1,0xc,local_38);
            for (local_2c = 0; local_2c < local_64; local_2c = local_2c + 1) {
              crt_stdio_c_fread_FUN_005fd990(&local_78,1,0xc,local_38);
            }
            g_GouraudShadingEnabled = 1;
          }
        }
        else if (local_18 < 7) {
LAB_00458378:
          crt_stdio_c_fread_FUN_005fd990(local_a8,1,0x18,local_38);
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
          crt_stdio_c_fread_FUN_005fd990
                    (g_ModelPolygonData[g_PolygonCount].vertex_indices,local_a4,4,local_38);
          for (local_2c = 0; local_2c < (int)g_ModelPolygonData[g_PolygonCount].vertex_indices_count
              ; local_2c = local_2c + 1) {
            g_ModelPolygonData[g_PolygonCount].vertex_indices[0] =
                 g_ModelPolygonData[g_PolygonCount].vertex_indices[0] - local_68;
          }
          g_PolygonCount = g_PolygonCount + 1;
        }
        else if (local_18 < 0xd) {
          if (local_18 != 10) goto LAB_00458677;
          crt_stdio_c_fread_FUN_005fd990(local_40,1,8,local_38);
          local_3c = g_ModelPolygonData[local_2c].material_id;
          local_24 = local_3c;
        }
        else {
          if (0xd < local_18) {
            if ((0xe < local_18) && (local_18 != 0x11)) goto LAB_00458677;
            goto LAB_004584f3;
          }
          crt_stdio_c_fread_FUN_005fd990(local_90,1,0x18,local_38);
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
        crt_stdio_c_fread_FUN_005fd990(local_48,1,8,local_38);
        local_20 = (float)local_44 * (float)g_ScaleFactorDivisor;
      }
      else {
        if (local_18 < 0x1b) {
          if (local_18 < 0x18) {
            if (local_18 != 0x17) goto LAB_00458677;
            crt_stdio_c_fread_FUN_005fd990(local_54,1,0xc,local_38);
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
            crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffea0,"loadBinary: type %d is not known");
            engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffea0,0,0);
            wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
            wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
            return 1;
          }
        }
LAB_004584f3:
        crt_stdio_c_fread_FUN_005fd990(local_a8,1,0x18,local_38);
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
          crt_stdio_c_fread_FUN_005fd990
                    ((void *)(local_28 * 4 + g_PolygonCount * 0x184 + 0x16e99c8),1,4,local_38);
          g_ModelPolygonData[g_PolygonCount].vertex_indices[local_28] =
               g_ModelPolygonData[g_PolygonCount].vertex_indices[local_28] - local_68;
          crt_stdio_c_fread_FUN_005fd990(&local_34,1,4,local_38);
          g_ModelPolygonData[g_PolygonCount].vertex_indices[local_28 + 0x10] =
               (uint)((float)local_34 * (float)g_UVCoordinateScale);
          crt_stdio_c_fread_FUN_005fd990(&local_34,1,4,local_38);
          g_ModelPolygonData[g_PolygonCount].uv_coordinates[local_28] =
               (float)local_34 * (float)g_UVCoordinateScale;
        }
        g_PolygonCount = g_PolygonCount + 1;
      }
LAB_00458835:
      local_14 = crt_stdio_c_fread_FUN_005fd990(&local_18,1,4,local_38);
      crt_stdio_c_fseek_FUN_005ffacc(local_38,-4,1);
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
    engine_model_c_getMRGLBounds_FUN_00528140(local_1c,output);
    puVar4 = (undefined4 *)&stack0xfffffe68;
    puVar6 = local_dc;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    puVar4 = local_dc;
    puVar6 = local_110;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    engine_model_c_freeMRGLData_FUN_005280b0(local_1c);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffea0,"X size : %f");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffea0,0,0);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffea0,"Y size : %f");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffea0,0,0xb);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffea0,"Z size : %f");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffea0,0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("Hit a key...",0,0x2c);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    local_30 = 1;
  }
  return local_30;
}


// Assembly code:
// 00458170: PUSH EBX
//   Label: shape_design.c_loadModelBinary_FUN_00458170
// 00458171: PUSH ESI
// 00458172: PUSH EDI
// 00458173: PUSH EBP
// 00458174: MOV EBP,ESP
// 00458176: SUB ESP,0x18c
// 0045817c: MOV dword ptr [EBP + -0x10],0x3f800000
// 00458183: MOV EAX,0x61a8b2
//   XREF to: 0061a8b2 (DATA)
// 00458188: PUSH EAX
//   XREF to: 0061a8b2 (DATA)
// 00458189: MOV EAX,dword ptr [EBP + 0x14]
// 0045818c: PUSH EAX
// 0045818d: MOV EAX,0x61a8b5
//   XREF to: 0061a8b5 (DATA)
// 00458192: PUSH EAX
//   XREF to: 0061a8b5 (DATA)
// 00458193: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00458198: ADD ESP,0xc
// 0045819b: MOV dword ptr [EBP + -0x28],EAX
// 0045819e: CMP dword ptr [EBP + -0x28],0x0
// 004581a2: JNZ 0x004581f0
//   XREF to: 004581f0 (CONDITIONAL_JUMP)
// 004581a4: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004581a9: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004581ae: MOV EAX,dword ptr [EBP + 0x14]
// 004581b1: PUSH EAX
// 004581b2: MOV EAX,0x61a8bc
//   XREF to: 0061a8bc (DATA)
// 004581b7: PUSH EAX
//   XREF to: 0061a8bc (DATA)
// 004581b8: LEA EAX,[EBP + 0xfffffeb0]
// 004581be: PUSH EAX
// 004581bf: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004581c4: ADD ESP,0xc
// 004581c7: PUSH 0x0
// 004581c9: PUSH 0x0
// 004581cb: LEA EAX,[EBP + 0xfffffeb0]
// 004581d1: PUSH EAX
// 004581d2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004581d7: ADD ESP,0xc
// 004581da: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004581df: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 004581e4: MOV dword ptr [EBP + -0x20],0x0
// 004581eb: JMP 0x00458a04
//   XREF to: 00458a04 (UNCONDITIONAL_JUMP)
// 004581f0: MOV dword ptr [0x016e990c],0x0
//   Label: LAB_004581f0
//   XREF to: 016e990c (WRITE)
// 004581fa: MOV dword ptr [0x01626408],0x0
//   XREF to: 01626408 (WRITE)
// 00458204: MOV EAX,dword ptr [EBP + -0x28]
// 00458207: PUSH EAX
// 00458208: PUSH 0x4
// 0045820a: PUSH 0x1
// 0045820c: LEA EAX,[EBP + -0x8]
// 0045820f: PUSH EAX
// 00458210: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00458215: ADD ESP,0x10
// 00458218: MOV dword ptr [EBP + -0x4],EAX
// 0045821b: PUSH 0x1
// 0045821d: PUSH -0x4
// 0045821f: MOV EAX,dword ptr [EBP + -0x28]
// 00458222: PUSH EAX
// 00458223: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 00458228: ADD ESP,0xc
// 0045822b: CMP dword ptr [EBP + -0x8],0x0
//   Label: LAB_0045822b
// 0045822f: JZ 0x00458237
//   XREF to: 00458237 (CONDITIONAL_JUMP)
// 00458231: CMP dword ptr [EBP + -0x4],-0x1
// 00458235: JNZ 0x0045823c
//   XREF to: 0045823c (CONDITIONAL_JUMP)
// 00458237: JMP 0x00458861
//   Label: LAB_00458237
//   XREF to: 00458861 (UNCONDITIONAL_JUMP)
// 0045823c: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045823c
// 0045823f: MOV dword ptr [EBP + 0xfffffeac],EAX
// 00458245: JMP 0x004586da
//   XREF to: 004586da (UNCONDITIONAL_JUMP)
// 0045824a: MOV EAX,dword ptr [EBP + -0x28]
//   Label: LAB_0045824a
// 0045824d: PUSH EAX
// 0045824e: PUSH 0x8
// 00458250: PUSH 0x1
// 00458252: LEA EAX,[EBP + -0x38]
// 00458255: PUSH EAX
// 00458256: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0045825b: ADD ESP,0x10
// 0045825e: FILD dword ptr [EBP + -0x34]
// 00458261: FMUL double ptr [0x0061a8ee]
//   XREF to: 0061a8ee (READ)
// 00458267: FSTP float ptr [EBP + -0x10]
// 0045826a: JMP 0x00458835
//   XREF to: 00458835 (UNCONDITIONAL_JUMP)
// 0045826f: MOV EAX,dword ptr [EBP + -0x28]
//   Label: LAB_0045826f
// 00458272: PUSH EAX
// 00458273: PUSH 0xc
// 00458275: PUSH 0x1
// 00458277: LEA EAX,[EBP + -0x5c]
// 0045827a: PUSH EAX
// 0045827b: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00458280: ADD ESP,0x10
// 00458283: MOV EAX,dword ptr [EBP + -0x54]
// 00458286: MOV [0x01626408],EAX
//   XREF to: 01626408 (WRITE)
// 0045828b: MOV dword ptr [EBP + -0x1c],0x0
// 00458292: JMP 0x0045829a
//   XREF to: 0045829a (UNCONDITIONAL_JUMP)
// 00458294: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00458294
// 00458297: INC dword ptr [EBP + -0x1c]
// 0045829a: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_0045829a
// 0045829d: CMP EAX,dword ptr [EBP + -0x54]
// 004582a0: JGE 0x00458300
//   XREF to: 00458300 (CONDITIONAL_JUMP)
// 004582a2: MOV EAX,dword ptr [EBP + -0x28]
// 004582a5: PUSH EAX
// 004582a6: PUSH 0xc
// 004582a8: PUSH 0x1
// 004582aa: LEA EAX,[EBP + -0x68]
// 004582ad: PUSH EAX
// 004582ae: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004582b3: ADD ESP,0x10
// 004582b6: FILD dword ptr [EBP + -0x68]
// 004582b9: FMUL double ptr [0x0061a8f6]
//   XREF to: 0061a8f6 (READ)
// 004582bf: FLD float ptr [EBP + -0x10]
// 004582c2: FDIVP
// 004582c4: IMUL EAX,dword ptr [EBP + -0x1c],0x14
// 004582c8: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 004582ce: FILD dword ptr [EBP + -0x64]
// 004582d1: FMUL double ptr [0x0061a8f6]
//   XREF to: 0061a8f6 (READ)
// 004582d7: FLD float ptr [EBP + -0x10]
// 004582da: FDIVP
// 004582dc: IMUL EAX,dword ptr [EBP + -0x1c],0x14
// 004582e0: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 004582e6: FILD dword ptr [EBP + -0x60]
// 004582e9: FMUL double ptr [0x0061a8f6]
//   XREF to: 0061a8f6 (READ)
// 004582ef: FLD float ptr [EBP + -0x10]
// 004582f2: FDIVP
// 004582f4: IMUL EAX,dword ptr [EBP + -0x1c],0x14
// 004582f8: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 004582fe: JMP 0x00458294
//   XREF to: 00458294 (UNCONDITIONAL_JUMP)
// 00458300: MOV dword ptr [0x01e528c0],0x0
//   Label: LAB_00458300
//   XREF to: 01e528c0 (WRITE)
// 0045830a: JMP 0x00458835
//   XREF to: 00458835 (UNCONDITIONAL_JUMP)
// 0045830f: MOV EAX,dword ptr [EBP + -0x28]
//   Label: LAB_0045830f
// 00458312: PUSH EAX
// 00458313: PUSH 0xc
// 00458315: PUSH 0x1
// 00458317: LEA EAX,[EBP + -0x5c]
// 0045831a: PUSH EAX
// 0045831b: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00458320: ADD ESP,0x10
// 00458323: MOV dword ptr [EBP + -0x1c],0x0
// 0045832a: JMP 0x00458332
//   XREF to: 00458332 (UNCONDITIONAL_JUMP)
// 0045832c: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_0045832c
// 0045832f: INC dword ptr [EBP + -0x1c]
// 00458332: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00458332
// 00458335: CMP EAX,dword ptr [EBP + -0x54]
// 00458338: JGE 0x00458350
//   XREF to: 00458350 (CONDITIONAL_JUMP)
// 0045833a: MOV EAX,dword ptr [EBP + -0x28]
// 0045833d: PUSH EAX
// 0045833e: PUSH 0xc
// 00458340: PUSH 0x1
// 00458342: LEA EAX,[EBP + -0x68]
// 00458345: PUSH EAX
// 00458346: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0045834b: ADD ESP,0x10
// 0045834e: JMP 0x0045832c
//   XREF to: 0045832c (UNCONDITIONAL_JUMP)
// 00458350: MOV dword ptr [0x01e528c0],0x1
//   Label: LAB_00458350
//   XREF to: 01e528c0 (WRITE)
// 0045835a: JMP 0x00458835
//   XREF to: 00458835 (UNCONDITIONAL_JUMP)
// 0045835f: MOV EAX,dword ptr [EBP + -0x28]
//   Label: LAB_0045835f
// 00458362: PUSH EAX
// 00458363: PUSH 0xc
// 00458365: PUSH 0x1
// 00458367: LEA EAX,[EBP + -0x44]
// 0045836a: PUSH EAX
// 0045836b: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00458370: ADD ESP,0x10
// 00458373: JMP 0x00458835
//   XREF to: 00458835 (UNCONDITIONAL_JUMP)
// 00458378: MOV EAX,dword ptr [EBP + -0x28]
//   Label: LAB_00458378
// 0045837b: PUSH EAX
// 0045837c: PUSH 0x18
// 0045837e: PUSH 0x1
// 00458380: LEA EAX,[EBP + 0xffffff68]
// 00458386: PUSH EAX
// 00458387: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0045838c: ADD ESP,0x10
// 0045838f: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 00458399: MOV dword ptr [EAX + 0x16e9910],0x1
//   XREF to: 016e9910 (WRITE)
// 004583a3: IMUL ESI,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 004583ad: MOV EAX,dword ptr [EBP + 0xffffff6c]
// 004583b3: MOV dword ptr [ESI + 0x16e99b4],EAX
//   XREF to: 016e99b4 (WRITE)
// 004583b9: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 004583c3: MOV ESI,0x16e9910
//   XREF to: 016e9910 (DATA)
// 004583c8: ADD EAX,ESI
//   XREF to: 016e9910 (PARAM)
// 004583ca: PUSH EAX
//   XREF to: 016e9910 (DATA)
// 004583cb: CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   XREF to: 0045caa0 (UNCONDITIONAL_CALL)
// 004583d0: ADD ESP,0x4
// 004583d3: MOV ESI,0x1626370
//   XREF to: 01626370 (DATA)
// 004583d8: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 004583e2: MOV EDI,0x16e9910
//   XREF to: 016e9910 (DATA)
// 004583e7: ADD EAX,EDI
// 004583e9: LEA EDI,[EAX + 0x4]
//   XREF to: 016e9914 (DATA)
// 004583ec: PUSH EDI
//   XREF to: 016e9914 (DATA)
// 004583ed: MOV AL,byte ptr [ESI]
//   Label: LAB_004583ed
//   XREF to: 01626370 (READ)
//   XREF to: 01626372 (READ)
// 004583ef: MOV byte ptr [EDI],AL
//   XREF to: 016e9914 (WRITE)
//   XREF to: 016e9916 (WRITE)
// 004583f1: CMP AL,0x0
// 004583f3: JZ 0x00458405
//   XREF to: 00458405 (CONDITIONAL_JUMP)
// 004583f5: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 01626371 (READ)
//   XREF to: 01626373 (READ)
// 004583f8: ADD ESI,0x2
// 004583fb: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 016e9915 (WRITE)
//   XREF to: 016e9917 (WRITE)
// 004583fe: ADD EDI,0x2
// 00458401: CMP AL,0x0
// 00458403: JNZ 0x004583ed
//   XREF to: 004583ed (CONDITIONAL_JUMP)
// 00458405: POP EDI
//   Label: LAB_00458405
// 00458406: IMUL ESI,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 00458410: MOV EAX,dword ptr [EBP + -0x14]
// 00458413: MOV dword ptr [ESI + 0x16e9a8c],EAX
//   XREF to: 016e9a8c (WRITE)
// 00458419: MOV EAX,dword ptr [EBP + -0x28]
// 0045841c: PUSH EAX
// 0045841d: PUSH 0x4
// 0045841f: MOV EAX,dword ptr [EBP + 0xffffff6c]
// 00458425: PUSH EAX
// 00458426: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 00458430: MOV ESI,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00458435: ADD EAX,ESI
// 00458437: ADD EAX,0xb8
// 0045843c: PUSH EAX
//   XREF to: 016e99c8 (DATA)
// 0045843d: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00458442: ADD ESP,0x10
// 00458445: MOV dword ptr [EBP + -0x1c],0x0
// 0045844c: JMP 0x00458454
//   XREF to: 00458454 (UNCONDITIONAL_JUMP)
// 0045844e: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_0045844e
// 00458451: INC dword ptr [EBP + -0x1c]
// 00458454: IMUL EDX,dword ptr [0x016e990c],0x184
//   Label: LAB_00458454
//   XREF to: 016e990c (READ)
// 0045845e: MOV EAX,dword ptr [EBP + -0x1c]
// 00458461: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (READ)
// 00458467: JGE 0x0045847e
//   XREF to: 0045847e (CONDITIONAL_JUMP)
// 00458469: IMUL EDX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 00458473: MOV EAX,dword ptr [EBP + -0x58]
// 00458476: SUB dword ptr [EDX + 0x16e99c8],EAX
//   XREF to: 016e99c8 (READ_WRITE)
// 0045847c: JMP 0x0045844e
//   XREF to: 0045844e (UNCONDITIONAL_JUMP)
// 0045847e: INC dword ptr [0x016e990c]
//   Label: LAB_0045847e
//   XREF to: 016e990c (READ_WRITE)
// 00458484: JMP 0x00458835
//   XREF to: 00458835 (UNCONDITIONAL_JUMP)
// 00458489: MOV ESI,dword ptr [EBP + -0x28]
//   Label: LAB_00458489
// 0045848c: PUSH ESI
// 0045848d: PUSH 0x18
// 0045848f: PUSH 0x1
// 00458491: LEA ESI,[EBP + -0x80]
// 00458494: PUSH ESI
// 00458495: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0045849a: ADD ESP,0x10
// 0045849d: LEA ESI,[EBP + -0x78]
// 004584a0: MOV EDI,0x1626370
//   XREF to: 01626370 (DATA)
// 004584a5: PUSH EDI
//   XREF to: 01626370 (DATA)
// 004584a6: MOV AL,byte ptr [ESI]
//   Label: LAB_004584a6
// 004584a8: MOV byte ptr [EDI],AL
//   XREF to: 01626370 (WRITE)
//   XREF to: 01626372 (WRITE)
// 004584aa: CMP AL,0x0
// 004584ac: JZ 0x004584be
//   XREF to: 004584be (CONDITIONAL_JUMP)
// 004584ae: MOV AL,byte ptr [ESI + 0x1]
// 004584b1: ADD ESI,0x2
// 004584b4: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 01626371 (WRITE)
//   XREF to: 01626373 (WRITE)
// 004584b7: ADD EDI,0x2
// 004584ba: CMP AL,0x0
// 004584bc: JNZ 0x004584a6
//   XREF to: 004584a6 (CONDITIONAL_JUMP)
// 004584be: POP EDI
//   Label: LAB_004584be
// 004584bf: JMP 0x00458835
//   XREF to: 00458835 (UNCONDITIONAL_JUMP)
// 004584c4: MOV EAX,dword ptr [EBP + -0x28]
//   Label: LAB_004584c4
// 004584c7: PUSH EAX
// 004584c8: PUSH 0x8
// 004584ca: PUSH 0x1
// 004584cc: LEA EAX,[EBP + -0x30]
// 004584cf: PUSH EAX
// 004584d0: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004584d5: ADD ESP,0x10
// 004584d8: IMUL EAX,dword ptr [EBP + -0x1c],0x184
// 004584df: MOV EAX,dword ptr [EAX + 0x16e9a8c]
//   XREF to: 016e9a8c (DATA)
// 004584e5: MOV dword ptr [EBP + -0x2c],EAX
// 004584e8: MOV EAX,dword ptr [EBP + -0x2c]
// 004584eb: MOV dword ptr [EBP + -0x14],EAX
// 004584ee: JMP 0x00458835
//   XREF to: 00458835 (UNCONDITIONAL_JUMP)
// 004584f3: MOV EAX,dword ptr [EBP + -0x28]
//   Label: LAB_004584f3
// 004584f6: PUSH EAX
// 004584f7: PUSH 0x18
// 004584f9: PUSH 0x1
// 004584fb: LEA EAX,[EBP + 0xffffff68]
// 00458501: PUSH EAX
// 00458502: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00458507: ADD ESP,0x10
// 0045850a: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 00458514: MOV dword ptr [EAX + 0x16e9910],0x2
//   XREF to: 016e9910 (WRITE)
// 0045851e: IMUL ESI,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 00458528: MOV EAX,dword ptr [EBP + 0xffffff6c]
// 0045852e: MOV dword ptr [ESI + 0x16e99b4],EAX
//   XREF to: 016e99b4 (WRITE)
// 00458534: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045853e: MOV ESI,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00458543: ADD EAX,ESI
//   XREF to: 016e9910 (PARAM)
// 00458545: PUSH EAX
//   XREF to: 016e9910 (DATA)
// 00458546: CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   XREF to: 0045caa0 (UNCONDITIONAL_CALL)
// 0045854b: ADD ESP,0x4
// 0045854e: MOV ESI,0x1626370
//   XREF to: 01626370 (DATA)
// 00458553: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045855d: MOV EDI,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00458562: ADD EAX,EDI
// 00458564: LEA EDI,[EAX + 0x4]
//   XREF to: 016e9914 (DATA)
// 00458567: PUSH EDI
//   XREF to: 016e9914 (DATA)
// 00458568: MOV AL,byte ptr [ESI]
//   Label: LAB_00458568
//   XREF to: 01626370 (READ)
//   XREF to: 01626372 (READ)
// 0045856a: MOV byte ptr [EDI],AL
//   XREF to: 016e9914 (WRITE)
//   XREF to: 016e9916 (WRITE)
// 0045856c: CMP AL,0x0
// 0045856e: JZ 0x00458580
//   XREF to: 00458580 (CONDITIONAL_JUMP)
// 00458570: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 01626371 (READ)
//   XREF to: 01626373 (READ)
// 00458573: ADD ESI,0x2
// 00458576: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 016e9915 (WRITE)
//   XREF to: 016e9917 (WRITE)
// 00458579: ADD EDI,0x2
// 0045857c: CMP AL,0x0
// 0045857e: JNZ 0x00458568
//   XREF to: 00458568 (CONDITIONAL_JUMP)
// 00458580: POP EDI
//   Label: LAB_00458580
// 00458581: IMUL ESI,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045858b: MOV EAX,dword ptr [EBP + -0x14]
// 0045858e: MOV dword ptr [ESI + 0x16e9a8c],EAX
//   XREF to: 016e9a8c (WRITE)
// 00458594: MOV dword ptr [EBP + -0x18],0x0
// 0045859b: JMP 0x004585a3
//   XREF to: 004585a3 (UNCONDITIONAL_JUMP)
// 0045859d: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_0045859d
// 004585a0: INC dword ptr [EBP + -0x18]
// 004585a3: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_004585a3
// 004585a6: CMP EAX,dword ptr [EBP + 0xffffff6c]
// 004585ac: JGE 0x0045866c
//   XREF to: 0045866c (CONDITIONAL_JUMP)
// 004585b2: MOV EAX,dword ptr [EBP + -0x28]
// 004585b5: PUSH EAX
// 004585b6: PUSH 0x4
// 004585b8: PUSH 0x1
// 004585ba: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 004585c4: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 004585c9: ADD EDX,EAX
// 004585cb: MOV EAX,dword ptr [EBP + -0x18]
// 004585ce: SHL EAX,0x2
// 004585d1: ADD EDX,0xb8
// 004585d7: ADD EAX,EDX
// 004585d9: PUSH EAX
// 004585da: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004585df: ADD ESP,0x10
// 004585e2: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 004585ec: MOV EDX,dword ptr [EBP + -0x18]
// 004585ef: SHL EDX,0x2
// 004585f2: ADD EDX,EAX
// 004585f4: MOV EAX,dword ptr [EBP + -0x58]
// 004585f7: SUB dword ptr [EDX + 0x16e99c8],EAX
//   XREF to: 016e99c8 (DATA)
// 004585fd: MOV EAX,dword ptr [EBP + -0x28]
// 00458600: PUSH EAX
// 00458601: PUSH 0x4
// 00458603: PUSH 0x1
// 00458605: LEA EAX,[EBP + -0x24]
// 00458608: PUSH EAX
// 00458609: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0045860e: ADD ESP,0x10
// 00458611: FILD dword ptr [EBP + -0x24]
// 00458614: FMUL double ptr [0x0061a8fe]
//   XREF to: 0061a8fe (READ)
// 0045861a: IMUL EDX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 00458624: MOV EAX,dword ptr [EBP + -0x18]
// 00458627: SHL EAX,0x2
// 0045862a: ADD EAX,EDX
// 0045862c: FSTP float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 00458632: MOV EAX,dword ptr [EBP + -0x28]
// 00458635: PUSH EAX
// 00458636: PUSH 0x4
// 00458638: PUSH 0x1
// 0045863a: LEA EAX,[EBP + -0x24]
// 0045863d: PUSH EAX
// 0045863e: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00458643: ADD ESP,0x10
// 00458646: FILD dword ptr [EBP + -0x24]
// 00458649: FMUL double ptr [0x0061a8fe]
//   XREF to: 0061a8fe (READ)
// 0045864f: IMUL EDX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 00458659: MOV EAX,dword ptr [EBP + -0x18]
// 0045865c: SHL EAX,0x2
// 0045865f: ADD EAX,EDX
// 00458661: FSTP float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 00458667: JMP 0x0045859d
//   XREF to: 0045859d (UNCONDITIONAL_JUMP)
// 0045866c: INC dword ptr [0x016e990c]
//   Label: LAB_0045866c
//   XREF to: 016e990c (READ_WRITE)
// 00458672: JMP 0x00458835
//   XREF to: 00458835 (UNCONDITIONAL_JUMP)
// 00458677: PUSH 0x2a4
//   Label: LAB_00458677
// 0045867c: MOV EAX,0x61a906
//   XREF to: 0061a906 (DATA)
// 00458681: PUSH EAX
//   XREF to: 0061a906 (DATA)
// 00458682: MOV EAX,dword ptr [EBP + -0x28]
// 00458685: PUSH EAX
// 00458686: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0045868b: ADD ESP,0xc
// 0045868e: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00458693: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00458698: MOV EAX,dword ptr [EBP + -0x8]
// 0045869b: PUSH EAX
// 0045869c: MOV EAX,0x61a918
//   XREF to: 0061a918 (DATA)
// 004586a1: PUSH EAX
//   XREF to: 0061a918 (DATA)
// 004586a2: LEA EAX,[EBP + 0xfffffeb0]
// 004586a8: PUSH EAX
// 004586a9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004586ae: ADD ESP,0xc
// 004586b1: PUSH 0x0
// 004586b3: PUSH 0x0
// 004586b5: LEA EAX,[EBP + 0xfffffeb0]
// 004586bb: PUSH EAX
// 004586bc: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004586c1: ADD ESP,0xc
// 004586c4: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004586c9: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 004586ce: MOV dword ptr [EBP + -0x20],0x1
// 004586d5: JMP 0x00458a04
//   XREF to: 00458a04 (UNCONDITIONAL_JUMP)
// 004586da: CMP dword ptr [EBP + 0xfffffeac],0x14
//   Label: LAB_004586da
// 004586e1: JC 0x00458799
//   XREF to: 00458799 (CONDITIONAL_JUMP)
// 004586e7: CMP dword ptr [EBP + 0xfffffeac],0x14
// 004586ee: JBE 0x0045824a
//   XREF to: 0045824a (CONDITIONAL_JUMP)
// 004586f4: CMP dword ptr [EBP + 0xfffffeac],0x1b
// 004586fb: JC 0x0045875f
//   XREF to: 0045875f (CONDITIONAL_JUMP)
// 004586fd: CMP dword ptr [EBP + 0xfffffeac],0x1b
// 00458704: JBE 0x00458378
//   XREF to: 00458378 (CONDITIONAL_JUMP)
// 0045870a: CMP dword ptr [EBP + 0xfffffeac],0x29
// 00458711: JC 0x0045874d
//   XREF to: 0045874d (CONDITIONAL_JUMP)
// 00458713: CMP dword ptr [EBP + 0xfffffeac],0x29
// 0045871a: JBE 0x004584f3
//   XREF to: 004584f3 (CONDITIONAL_JUMP)
// 00458720: CMP dword ptr [EBP + 0xfffffeac],0x34
// 00458727: JC 0x00458748
//   XREF to: 00458748 (CONDITIONAL_JUMP)
// 00458729: CMP dword ptr [EBP + 0xfffffeac],0x34
// 00458730: JBE 0x004584f3
//   XREF to: 004584f3 (CONDITIONAL_JUMP)
// 00458736: CMP dword ptr [EBP + 0xfffffeac],0x3e
// 0045873d: JZ 0x004584f3
//   XREF to: 004584f3 (CONDITIONAL_JUMP)
// 00458743: JMP 0x00458677
//   XREF to: 00458677 (UNCONDITIONAL_JUMP)
// 00458748: JMP 0x00458677
//   Label: LAB_00458748
//   XREF to: 00458677 (UNCONDITIONAL_JUMP)
// 0045874d: CMP dword ptr [EBP + 0xfffffeac],0x22
//   Label: LAB_0045874d
// 00458754: JZ 0x004584f3
//   XREF to: 004584f3 (CONDITIONAL_JUMP)
// 0045875a: JMP 0x00458677
//   XREF to: 00458677 (UNCONDITIONAL_JUMP)
// 0045875f: CMP dword ptr [EBP + 0xfffffeac],0x18
//   Label: LAB_0045875f
// 00458766: JC 0x00458787
//   XREF to: 00458787 (CONDITIONAL_JUMP)
// 00458768: CMP dword ptr [EBP + 0xfffffeac],0x18
// 0045876f: JBE 0x004584f3
//   XREF to: 004584f3 (CONDITIONAL_JUMP)
// 00458775: CMP dword ptr [EBP + 0xfffffeac],0x19
// 0045877c: JZ 0x00458378
//   XREF to: 00458378 (CONDITIONAL_JUMP)
// 00458782: JMP 0x00458677
//   XREF to: 00458677 (UNCONDITIONAL_JUMP)
// 00458787: CMP dword ptr [EBP + 0xfffffeac],0x17
//   Label: LAB_00458787
// 0045878e: JZ 0x0045835f
//   XREF to: 0045835f (CONDITIONAL_JUMP)
// 00458794: JMP 0x00458677
//   XREF to: 00458677 (UNCONDITIONAL_JUMP)
// 00458799: CMP dword ptr [EBP + 0xfffffeac],0x6
//   Label: LAB_00458799
// 004587a0: JC 0x004587fb
//   XREF to: 004587fb (CONDITIONAL_JUMP)
// 004587a2: CMP dword ptr [EBP + 0xfffffeac],0x6
// 004587a9: JBE 0x00458378
//   XREF to: 00458378 (CONDITIONAL_JUMP)
// 004587af: CMP dword ptr [EBP + 0xfffffeac],0xd
// 004587b6: JC 0x004587e9
//   XREF to: 004587e9 (CONDITIONAL_JUMP)
// 004587b8: CMP dword ptr [EBP + 0xfffffeac],0xd
// 004587bf: JBE 0x00458489
//   XREF to: 00458489 (CONDITIONAL_JUMP)
// 004587c5: CMP dword ptr [EBP + 0xfffffeac],0xe
// 004587cc: JBE 0x004584f3
//   XREF to: 004584f3 (CONDITIONAL_JUMP)
// 004587d2: CMP dword ptr [EBP + 0xfffffeac],0x11
// 004587d9: JZ 0x004584f3
//   XREF to: 004584f3 (CONDITIONAL_JUMP)
// 004587df: JMP 0x00458677
//   XREF to: 00458677 (UNCONDITIONAL_JUMP)
// 004587e9: CMP dword ptr [EBP + 0xfffffeac],0xa
//   Label: LAB_004587e9
// 004587f0: JZ 0x004584c4
//   XREF to: 004584c4 (CONDITIONAL_JUMP)
// 004587f6: JMP 0x00458677
//   XREF to: 00458677 (UNCONDITIONAL_JUMP)
// 004587fb: CMP dword ptr [EBP + 0xfffffeac],0x3
//   Label: LAB_004587fb
// 00458802: JC 0x00458823
//   XREF to: 00458823 (CONDITIONAL_JUMP)
// 00458804: CMP dword ptr [EBP + 0xfffffeac],0x3
// 0045880b: JBE 0x0045830f
//   XREF to: 0045830f (CONDITIONAL_JUMP)
// 00458811: CMP dword ptr [EBP + 0xfffffeac],0x5
// 00458818: JZ 0x00458378
//   XREF to: 00458378 (CONDITIONAL_JUMP)
// 0045881e: JMP 0x00458677
//   XREF to: 00458677 (UNCONDITIONAL_JUMP)
// 00458823: CMP dword ptr [EBP + 0xfffffeac],0x2
//   Label: LAB_00458823
// 0045882a: JZ 0x0045826f
//   XREF to: 0045826f (CONDITIONAL_JUMP)
// 00458830: JMP 0x00458677
//   XREF to: 00458677 (UNCONDITIONAL_JUMP)
// 00458835: MOV EAX,dword ptr [EBP + -0x28]
//   Label: LAB_00458835
// 00458838: PUSH EAX
// 00458839: PUSH 0x4
// 0045883b: PUSH 0x1
// 0045883d: LEA EAX,[EBP + -0x8]
// 00458840: PUSH EAX
// 00458841: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00458846: ADD ESP,0x10
// 00458849: MOV dword ptr [EBP + -0x4],EAX
// 0045884c: PUSH 0x1
// 0045884e: PUSH -0x4
// 00458850: MOV EAX,dword ptr [EBP + -0x28]
// 00458853: PUSH EAX
// 00458854: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 00458859: ADD ESP,0xc
// 0045885c: JMP 0x0045822b
//   XREF to: 0045822b (UNCONDITIONAL_JUMP)
// 00458861: PUSH 0x2b2
//   Label: LAB_00458861
// 00458866: MOV EAX,0x61a939
//   XREF to: 0061a939 (DATA)
// 0045886b: PUSH EAX
//   XREF to: 0061a939 (DATA)
// 0045886c: MOV EAX,dword ptr [EBP + -0x28]
// 0045886f: PUSH EAX
// 00458870: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00458875: ADD ESP,0xc
// 00458878: CALL shape_design.c_calculateVertexNormals_FUN_0045be40
//   XREF to: 0045be40 (UNCONDITIONAL_CALL)
// 0045887d: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00458882: MOV EAX,dword ptr [EBP + 0x14]
// 00458885: PUSH EAX
// 00458886: CALL engine_model.c_loadModelFile_FUN_00527ec0
//   XREF to: 00527ec0 (UNCONDITIONAL_CALL)
// 0045888b: ADD ESP,0x4
// 0045888e: MOV dword ptr [EBP + -0xc],EAX
// 00458891: CMP dword ptr [EBP + -0xc],0x0
// 00458895: JNZ 0x004588b9
//   XREF to: 004588b9 (CONDITIONAL_JUMP)
// 00458897: MOV dword ptr [0x02f0ca48],0x61a94b
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061a94b (DATA)
// 004588a1: MOV dword ptr [0x02f0ca4c],0x2bb
//   XREF to: 02f0ca4c (WRITE)
// 004588ab: MOV EAX,0x61a95d
//   XREF to: 0061a95d (DATA)
// 004588b0: PUSH EAX
//   XREF to: 0061a95d (DATA)
// 004588b1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004588b6: ADD ESP,0x4
// 004588b9: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_004588b9
// 004588bc: PUSH EAX
// 004588bd: LEA ESI,[EBP + 0xfffffe78]
// 004588c3: CALL engine_model.c_getMRGLBounds_FUN_00528140
//   XREF to: 00528140 (UNCONDITIONAL_CALL)
// 004588c8: ADD ESP,0x4
// 004588cb: MOV ECX,0xd
// 004588d0: LEA EDI,[EBP + 0xffffff34]
// 004588d6: LEA ESI,[EBP + 0xfffffe78]
// 004588dc: MOVSD.REP ES:EDI,ESI
// 004588de: MOV ECX,0xd
// 004588e3: LEA EDI,[EBP + 0xffffff00]
// 004588e9: LEA ESI,[EBP + 0xffffff34]
// 004588ef: MOVSD.REP ES:EDI,ESI
// 004588f1: MOV EAX,dword ptr [EBP + -0xc]
// 004588f4: PUSH EAX
// 004588f5: CALL engine_model.c_freeMRGLData_FUN_005280b0
//   XREF to: 005280b0 (UNCONDITIONAL_CALL)
// 004588fa: ADD ESP,0x4
// 004588fd: MOV EAX,dword ptr [EBP + 0xffffff0c]
// 00458903: SUB EAX,dword ptr [EBP + 0xffffff00]
// 00458909: MOV dword ptr [EBP + 0xfffffe74],EAX
// 0045890f: FILD dword ptr [EBP + 0xfffffe74]
// 00458915: FMUL double ptr [0x0061a9ae]
//   XREF to: 0061a9ae (READ)
// 0045891b: SUB ESP,0x8
// 0045891e: FSTP double ptr [ESP]
// 00458921: MOV EAX,0x61a976
//   XREF to: 0061a976 (DATA)
// 00458926: PUSH EAX
//   XREF to: 0061a976 (DATA)
// 00458927: LEA EAX,[EBP + 0xfffffeb0]
// 0045892d: PUSH EAX
// 0045892e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00458933: ADD ESP,0x10
// 00458936: PUSH 0x0
// 00458938: PUSH 0x0
// 0045893a: LEA EAX,[EBP + 0xfffffeb0]
// 00458940: PUSH EAX
// 00458941: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00458946: ADD ESP,0xc
// 00458949: MOV EAX,dword ptr [EBP + 0xffffff10]
// 0045894f: SUB EAX,dword ptr [EBP + 0xffffff04]
// 00458955: MOV dword ptr [EBP + 0xfffffe74],EAX
// 0045895b: FILD dword ptr [EBP + 0xfffffe74]
// 00458961: FMUL double ptr [0x0061a9ae]
//   XREF to: 0061a9ae (READ)
// 00458967: SUB ESP,0x8
// 0045896a: FSTP double ptr [ESP]
// 0045896d: MOV EAX,0x61a982
//   XREF to: 0061a982 (DATA)
// 00458972: PUSH EAX
//   XREF to: 0061a982 (DATA)
// 00458973: LEA EAX,[EBP + 0xfffffeb0]
// 00458979: PUSH EAX
// 0045897a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0045897f: ADD ESP,0x10
// 00458982: PUSH 0xb
// 00458984: PUSH 0x0
// 00458986: LEA EAX,[EBP + 0xfffffeb0]
// 0045898c: PUSH EAX
// 0045898d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00458992: ADD ESP,0xc
// 00458995: MOV EAX,dword ptr [EBP + 0xffffff14]
// 0045899b: SUB EAX,dword ptr [EBP + 0xffffff08]
// 004589a1: MOV dword ptr [EBP + 0xfffffe74],EAX
// 004589a7: FILD dword ptr [EBP + 0xfffffe74]
// 004589ad: FMUL double ptr [0x0061a9ae]
//   XREF to: 0061a9ae (READ)
// 004589b3: SUB ESP,0x8
// 004589b6: FSTP double ptr [ESP]
// 004589b9: MOV EAX,0x61a98e
//   XREF to: 0061a98e (DATA)
// 004589be: PUSH EAX
//   XREF to: 0061a98e (DATA)
// 004589bf: LEA EAX,[EBP + 0xfffffeb0]
// 004589c5: PUSH EAX
// 004589c6: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004589cb: ADD ESP,0x10
// 004589ce: PUSH 0x16
// 004589d0: PUSH 0x0
// 004589d2: LEA EAX,[EBP + 0xfffffeb0]
// 004589d8: PUSH EAX
// 004589d9: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004589de: ADD ESP,0xc
// 004589e1: PUSH 0x2c
// 004589e3: PUSH 0x0
// 004589e5: MOV EAX,0x61a99a
//   XREF to: 0061a99a (DATA)
// 004589ea: PUSH EAX
//   XREF to: 0061a99a (DATA)
// 004589eb: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004589f0: ADD ESP,0xc
// 004589f3: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004589f8: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 004589fd: MOV dword ptr [EBP + -0x20],0x1
// 00458a04: MOV EAX,dword ptr [EBP + -0x20]
//   Label: LAB_00458a04
// 00458a07: MOV ESP,EBP
// 00458a09: POP EBP
// 00458a0a: POP EDI
// 00458a0b: POP ESI
// 00458a0c: POP EBX
// 00458a0d: RET

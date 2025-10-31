// Name: shape_design.c_exportModelToMDL_FUN_00459e80
// Address: 00459e80
// Address Range: [[00459e80, 0045a1fe]]
// Convention: __cdecl
// Signature: void shape_design.c_exportModelToMDL_FUN_00459e80(char * mdl_filename)
// Cross-references:
//   shape_design.c_saveCurrentModel_FUN_00459de0 (00459de0) at 00459e6f [UNCONDITIONAL_CALL]
//   shape_design.c_tileTextureMaps_FUN_0046a180 (0046a180) at 0046a7ab [UNCONDITIONAL_CALL]
//   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 (0053ee70) at 0053f249 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wt_0061ad9b
//   TerminatedCString s_models_0061ad9e
//   TerminatedCString s_FILE_ERROR_Nothing_chang_0061ada5
//   TerminatedCString s_d_0061adc2
//   TerminatedCString s_f_f_f_0061adc6
//   TerminatedCString s_d_0061add0
//   TerminatedCString s_d_d_s_s_0061add4
//   TerminatedCString s_d_d_x_0061ade1
//   TerminatedCString s_d_d_s_0061adea
//   TerminatedCString s_d_f_f_0061adf4
//   TerminatedCString s_d_0061adfe
//   TerminatedCString s_s_0061ae02
//   TerminatedCString s_d_0061ae06
//   TerminatedCString s_d_0061ae0a
//   TerminatedCString s_shape_design_c_0061ae0e
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e9964
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a48
//   undefined4 DAT_016e9a88
//   undefined4 DAT_016e9a8c
//   SModelPartName[500] g_ModelPartNames
//   int g_PartsCount
//   STreeNode* g_SpatialTreeRoot
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_design.c_sortPolygonsByTexture_FUN_0045b8b0
//   shape_design.c_writeBinaryTreeNode_FUN_00457fd0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_exportModelToMDL_FUN_00459e80(char *mdl_filename)

{
  char cVar1;
  FILE *file;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  int local_1c;
  int local_18;
  
  shape_design_c_sortPolygonsByTexture_FUN_0045b8b0();
  pcVar2 = &stack0xffffff94;
  do {
    cVar1 = *mdl_filename;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = mdl_filename[1];
    mdl_filename = mdl_filename + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  file = engine_dosio_c_getFile_FUN_00481a50("models",&stack0xffffff94,"wt");
  if (file == (FILE *)0x0) {
    engine_2d_c_drawText_FUN_00401fd0("FILE ERROR! Nothing changed!",0,0x16);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  else {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
    for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%f,%f,%f\n",(double)g_LoadedVertices[local_1c].vertex.x,
                 SUB84((double)g_LoadedVertices[local_1c].vertex.y,0));
    }
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
    for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
      if (g_ModelPolygonData[local_1c].lightmap_name[0] == '\0') {
        if (g_ModelPolygonData[local_1c].texture_name[0] == '\0') {
          crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d,%d,x\n");
        }
        else {
          crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d,%d,%s\n");
        }
      }
      else {
        crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d,%d,%s,%s\n");
      }
      for (local_18 = 0; local_18 < (int)g_ModelPolygonData[local_1c].vertex_indices_count;
          local_18 = local_18 + 1) {
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (file,"%d,%f,%f\n",g_ModelPolygonData[local_1c].vertex_indices[local_18]);
      }
    }
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
    for (local_1c = 0; local_1c < g_PartsCount; local_1c = local_1c + 1) {
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s\n");
    }
    for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
    }
    for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
    }
    shape_design_c_writeBinaryTreeNode_FUN_00457fd0(g_SpatialTreeRoot,file,1);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\design.c",0x604);
  }
  return;
}


// Assembly code:
// 00459e80: PUSH EBX
//   Label: shape_design.c_exportModelToMDL_FUN_00459e80
// 00459e81: PUSH ESI
// 00459e82: PUSH EDI
// 00459e83: PUSH EBP
// 00459e84: MOV EBP,ESP
// 00459e86: SUB ESP,0x5c
// 00459e8c: CALL shape_design.c_sortPolygonsByTexture_FUN_0045b8b0
//   XREF to: 0045b8b0 (UNCONDITIONAL_CALL)
// 00459e91: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00459e94: LEA EDI,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 00459e97: PUSH EDI
// 00459e98: MOV AL,byte ptr [ESI]
//   Label: LAB_00459e98
// 00459e9a: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x6c] (DATA)
// 00459e9c: CMP AL,0x0
// 00459e9e: JZ 0x00459eb0
//   XREF to: 00459eb0 (CONDITIONAL_JUMP)
// 00459ea0: MOV AL,byte ptr [ESI + 0x1]
// 00459ea3: ADD ESI,0x2
// 00459ea6: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x6b] (WRITE)
// 00459ea9: ADD EDI,0x2
// 00459eac: CMP AL,0x0
// 00459eae: JNZ 0x00459e98
//   XREF to: 00459e98 (CONDITIONAL_JUMP)
// 00459eb0: POP EDI
//   Label: LAB_00459eb0
// 00459eb1: MOV EAX,0x61ad9b
//   XREF to: 0061ad9b (DATA)
// 00459eb6: PUSH EAX
//   XREF to: 0061ad9b (DATA)
// 00459eb7: LEA EAX,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 00459eba: PUSH EAX
// 00459ebb: MOV EAX,0x61ad9e
//   XREF to: 0061ad9e (PARAM)
// 00459ec0: PUSH EAX
//   XREF to: 0061ad9e (DATA)
// 00459ec1: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00459ec6: ADD ESP,0xc
// 00459ec9: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00459ecc: CMP dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (READ)
// 00459ed0: JNZ 0x00459ef3
//   XREF to: 00459ef3 (CONDITIONAL_JUMP)
// 00459ed2: PUSH 0x16
// 00459ed4: PUSH 0x0
// 00459ed6: MOV EAX,0x61ada5
//   XREF to: 0061ada5 (PARAM)
// 00459edb: PUSH EAX
//   XREF to: 0061ada5 (DATA)
// 00459edc: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00459ee1: ADD ESP,0xc
// 00459ee4: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00459ee9: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00459eee: JMP 0x0045a1f8
//   XREF to: 0045a1f8 (UNCONDITIONAL_JUMP)
// 00459ef3: PUSH dword ptr [0x01626408]
//   Label: LAB_00459ef3
//   XREF to: 01626408 (READ)
// 00459ef9: MOV EAX,0x61adc2
//   XREF to: 0061adc2 (DATA)
// 00459efe: PUSH EAX
//   XREF to: 0061adc2 (DATA)
// 00459eff: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00459f02: PUSH EAX
// 00459f03: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00459f08: ADD ESP,0xc
// 00459f0b: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 00459f12: JMP 0x00459f1a
//   XREF to: 00459f1a (UNCONDITIONAL_JUMP)
// 00459f14: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00459f14
//   XREF to: Stack[-0x1c] (READ)
// 00459f17: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00459f1a: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00459f1a
//   XREF to: Stack[-0x1c] (READ)
// 00459f1d: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00459f23: JGE 0x00459f69
//   XREF to: 00459f69 (CONDITIONAL_JUMP)
// 00459f25: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 00459f29: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00459f2f: SUB ESP,0x8
// 00459f32: FSTP double ptr [ESP]
//   XREF to: Stack[-0x74] (DATA)
// 00459f35: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 00459f39: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00459f3f: SUB ESP,0x8
// 00459f42: FSTP double ptr [ESP]
//   XREF to: Stack[-0x7c] (DATA)
// 00459f45: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 00459f49: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00459f4f: SUB ESP,0x8
// 00459f52: FSTP double ptr [ESP]
//   XREF to: Stack[-0x84] (DATA)
// 00459f55: MOV EAX,0x61adc6
//   XREF to: 0061adc6 (DATA)
// 00459f5a: PUSH EAX
//   XREF to: 0061adc6 (DATA)
// 00459f5b: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00459f5e: PUSH EAX
// 00459f5f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00459f64: ADD ESP,0x20
// 00459f67: JMP 0x00459f14
//   XREF to: 00459f14 (UNCONDITIONAL_JUMP)
// 00459f69: PUSH dword ptr [0x016e990c]
//   Label: LAB_00459f69
//   XREF to: 016e990c (READ)
// 00459f6f: MOV EAX,0x61add0
//   XREF to: 0061add0 (DATA)
// 00459f74: PUSH EAX
//   XREF to: 0061add0 (DATA)
// 00459f75: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00459f78: PUSH EAX
// 00459f79: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00459f7e: ADD ESP,0xc
// 00459f81: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 00459f88: JMP 0x00459f90
//   XREF to: 00459f90 (UNCONDITIONAL_JUMP)
// 00459f8a: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00459f8a
//   XREF to: Stack[-0x1c] (READ)
// 00459f8d: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00459f90: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00459f90
//   XREF to: Stack[-0x1c] (READ)
// 00459f93: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 00459f99: JGE 0x0045a105
//   XREF to: 0045a105 (CONDITIONAL_JUMP)
// 00459f9f: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 00459fa6: CMP byte ptr [EAX + 0x16e9964],0x0
//   XREF to: 016e9964 (DATA)
// 00459fad: JZ 0x0045a004
//   XREF to: 0045a004 (CONDITIONAL_JUMP)
// 00459faf: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 00459fb6: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00459fbb: ADD EAX,EDX
// 00459fbd: ADD EAX,0x54
// 00459fc0: PUSH EAX
// 00459fc1: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 00459fc8: MOV EDX,0x16e9910
//   XREF to: 016e9910 (PARAM)
// 00459fcd: ADD EAX,EDX
// 00459fcf: ADD EAX,0x4
// 00459fd2: PUSH EAX
// 00459fd3: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 00459fda: PUSH dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00459fe0: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 00459fe7: PUSH dword ptr [EAX + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 00459fed: MOV EAX,0x61add4
//   XREF to: 0061add4 (DATA)
// 00459ff2: PUSH EAX
//   XREF to: 0061add4 (DATA)
// 00459ff3: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00459ff6: PUSH EAX
// 00459ff7: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00459ffc: ADD ESP,0x18
// 00459fff: JMP 0x0045a080
//   XREF to: 0045a080 (UNCONDITIONAL_JUMP)
// 0045a004: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   Label: LAB_0045a004
//   XREF to: Stack[-0x1c] (READ)
// 0045a00b: CMP byte ptr [EAX + 0x16e9914],0x0
//   XREF to: 016e9914 (DATA)
// 0045a012: JNZ 0x0045a042
//   XREF to: 0045a042 (CONDITIONAL_JUMP)
// 0045a014: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0045a01b: PUSH dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045a021: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0045a028: PUSH dword ptr [EAX + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 0045a02e: MOV EAX,0x61ade1
//   XREF to: 0061ade1 (DATA)
// 0045a033: PUSH EAX
//   XREF to: 0061ade1 (DATA)
// 0045a034: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a037: PUSH EAX
// 0045a038: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a03d: ADD ESP,0x10
// 0045a040: JMP 0x0045a080
//   XREF to: 0045a080 (UNCONDITIONAL_JUMP)
// 0045a042: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   Label: LAB_0045a042
//   XREF to: Stack[-0x1c] (READ)
// 0045a049: MOV EDX,0x16e9910
//   XREF to: 016e9910 (PARAM)
// 0045a04e: ADD EAX,EDX
// 0045a050: ADD EAX,0x4
// 0045a053: PUSH EAX
// 0045a054: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0045a05b: PUSH dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045a061: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0045a068: PUSH dword ptr [EAX + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 0045a06e: MOV EAX,0x61adea
//   XREF to: 0061adea (DATA)
// 0045a073: PUSH EAX
//   XREF to: 0061adea (DATA)
// 0045a074: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a077: PUSH EAX
// 0045a078: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a07d: ADD ESP,0x14
// 0045a080: MOV dword ptr [EBP + -0x8],0x0
//   Label: LAB_0045a080
//   XREF to: Stack[-0x18] (WRITE)
// 0045a087: JMP 0x0045a08f
//   XREF to: 0045a08f (UNCONDITIONAL_JUMP)
// 0045a089: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045a089
//   XREF to: Stack[-0x18] (READ)
// 0045a08c: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0045a08f: IMUL EDX,dword ptr [EBP + -0xc],0x184
//   Label: LAB_0045a08f
//   XREF to: Stack[-0x1c] (READ)
// 0045a096: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045a099: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045a09f: JGE 0x0045a100
//   XREF to: 0045a100 (CONDITIONAL_JUMP)
// 0045a0a1: IMUL EDX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0045a0a8: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045a0ab: SHL EAX,0x2
// 0045a0ae: ADD EAX,EDX
// 0045a0b0: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0045a0b6: SUB ESP,0x8
// 0045a0b9: FSTP double ptr [ESP]
//   XREF to: Stack[-0x74] (DATA)
// 0045a0bc: IMUL EDX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0045a0c3: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045a0c6: SHL EAX,0x2
// 0045a0c9: ADD EAX,EDX
// 0045a0cb: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0045a0d1: SUB ESP,0x8
// 0045a0d4: FSTP double ptr [ESP]
//   XREF to: Stack[-0x7c] (DATA)
// 0045a0d7: IMUL EDX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0045a0de: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045a0e1: SHL EAX,0x2
// 0045a0e4: ADD EAX,EDX
// 0045a0e6: PUSH dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0045a0ec: MOV EAX,0x61adf4
//   XREF to: 0061adf4 (DATA)
// 0045a0f1: PUSH EAX
//   XREF to: 0061adf4 (DATA)
// 0045a0f2: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a0f5: PUSH EAX
// 0045a0f6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a0fb: ADD ESP,0x1c
// 0045a0fe: JMP 0x0045a089
//   XREF to: 0045a089 (UNCONDITIONAL_JUMP)
// 0045a100: JMP 0x00459f8a
//   Label: LAB_0045a100
//   XREF to: 00459f8a (UNCONDITIONAL_JUMP)
// 0045a105: PUSH dword ptr [0x01e528a0]
//   Label: LAB_0045a105
//   XREF to: 01e528a0 (READ)
// 0045a10b: MOV EAX,0x61adfe
//   XREF to: 0061adfe (DATA)
// 0045a110: PUSH EAX
//   XREF to: 0061adfe (DATA)
// 0045a111: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a114: PUSH EAX
// 0045a115: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a11a: ADD ESP,0xc
// 0045a11d: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 0045a124: JMP 0x0045a12c
//   XREF to: 0045a12c (UNCONDITIONAL_JUMP)
// 0045a126: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045a126
//   XREF to: Stack[-0x1c] (READ)
// 0045a129: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0045a12c: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045a12c
//   XREF to: Stack[-0x1c] (READ)
// 0045a12f: CMP EAX,dword ptr [0x01e528a0]
//   XREF to: 01e528a0 (READ)
// 0045a135: JGE 0x0045a157
//   XREF to: 0045a157 (CONDITIONAL_JUMP)
// 0045a137: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 0045a13b: MOV EDX,0x1e50190
//   XREF to: 01e50190 (PARAM)
// 0045a140: ADD EAX,EDX
// 0045a142: PUSH EAX
// 0045a143: MOV EAX,0x61ae02
//   XREF to: 0061ae02 (DATA)
// 0045a148: PUSH EAX
//   XREF to: 0061ae02 (DATA)
// 0045a149: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a14c: PUSH EAX
// 0045a14d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a152: ADD ESP,0xc
// 0045a155: JMP 0x0045a126
//   XREF to: 0045a126 (UNCONDITIONAL_JUMP)
// 0045a157: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_0045a157
//   XREF to: Stack[-0x1c] (WRITE)
// 0045a15e: JMP 0x0045a166
//   XREF to: 0045a166 (UNCONDITIONAL_JUMP)
// 0045a160: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045a160
//   XREF to: Stack[-0x1c] (READ)
// 0045a163: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0045a166: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045a166
//   XREF to: Stack[-0x1c] (READ)
// 0045a169: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0045a16f: JGE 0x0045a192
//   XREF to: 0045a192 (CONDITIONAL_JUMP)
// 0045a171: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0045a178: PUSH dword ptr [EAX + 0x16e9a88]
//   XREF to: 016e9a88 (DATA)
// 0045a17e: MOV EAX,0x61ae06
//   XREF to: 0061ae06 (DATA)
// 0045a183: PUSH EAX
//   XREF to: 0061ae06 (DATA)
// 0045a184: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a187: PUSH EAX
// 0045a188: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a18d: ADD ESP,0xc
// 0045a190: JMP 0x0045a160
//   XREF to: 0045a160 (UNCONDITIONAL_JUMP)
// 0045a192: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_0045a192
//   XREF to: Stack[-0x1c] (WRITE)
// 0045a199: JMP 0x0045a1a1
//   XREF to: 0045a1a1 (UNCONDITIONAL_JUMP)
// 0045a19b: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045a19b
//   XREF to: Stack[-0x1c] (READ)
// 0045a19e: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0045a1a1: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045a1a1
//   XREF to: Stack[-0x1c] (READ)
// 0045a1a4: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0045a1aa: JGE 0x0045a1cd
//   XREF to: 0045a1cd (CONDITIONAL_JUMP)
// 0045a1ac: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0045a1b3: PUSH dword ptr [EAX + 0x16e9a8c]
//   XREF to: 016e9a8c (DATA)
// 0045a1b9: MOV EAX,0x61ae0a
//   XREF to: 0061ae0a (DATA)
// 0045a1be: PUSH EAX
//   XREF to: 0061ae0a (DATA)
// 0045a1bf: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a1c2: PUSH EAX
// 0045a1c3: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a1c8: ADD ESP,0xc
// 0045a1cb: JMP 0x0045a19b
//   XREF to: 0045a19b (UNCONDITIONAL_JUMP)
// 0045a1cd: PUSH 0x1
//   Label: LAB_0045a1cd
// 0045a1cf: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a1d2: PUSH EAX
// 0045a1d3: PUSH dword ptr [0x01e66150]
//   XREF to: 01e66150 (READ)
// 0045a1d9: CALL shape_design.c_writeBinaryTreeNode_FUN_00457fd0
//   XREF to: 00457fd0 (UNCONDITIONAL_CALL)
// 0045a1de: ADD ESP,0xc
// 0045a1e1: PUSH 0x604
// 0045a1e6: MOV EAX,0x61ae0e
//   XREF to: 0061ae0e (DATA)
// 0045a1eb: PUSH EAX
//   XREF to: 0061ae0e (DATA)
// 0045a1ec: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a1ef: PUSH EAX
// 0045a1f0: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0045a1f5: ADD ESP,0xc
// 0045a1f8: MOV ESP,EBP
//   Label: LAB_0045a1f8
// 0045a1fa: POP EBP
// 0045a1fb: POP EDI
// 0045a1fc: POP ESI
// 0045a1fd: POP EBX
// 0045a1fe: RET

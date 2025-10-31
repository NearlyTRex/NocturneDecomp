// Name: shape_design.c_exportVertexListFile_FUN_0045a610
// Address: 0045a610
// Address Range: [[0045a610, 0045a7aa]]
// Convention: __cdecl
// Signature: void shape_design.c_exportVertexListFile_FUN_0045a610(void)
// Cross-references:
//   shape_design.c_handleEditorHotkeys_FUN_0045b990 (0045b990) at 0045ba44 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wt_0061aed2
//   TerminatedCString s_input_lst_0061aed5
//   TerminatedCString s_models_0061aedf
//   TerminatedCString s_shape_design_c_0061aee6
//   TerminatedCString s_Unable_to_open_input_lst_0061aef8
//   TerminatedCString s_d_0061af11
//   TerminatedCString s_f_f_f_0061af15
//   TerminatedCString s_d_0061af1f
//   TerminatedCString s_d_0061af23
//   TerminatedCString s_d_0061af26
//   TerminatedCString s_anon_0061af2a
//   TerminatedCString s_shape_design_c_0061af2c
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   int g_PolygonCount
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl shape_design_c_exportVertexListFile_FUN_0045a610(void)

{
  FILE *file;
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  int iVar4;
  char *file_00;
  
  file = engine_dosio_c_getFile_FUN_00481a50("models","input.lst","wt");
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x6ca;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to open input.lst");
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  iVar3 = 0;
  while (iVar3 < g_VertexCount) {
    iVar2 = (int)((ulonglong)(double)g_LoadedVertices[iVar3].vertex.y >> 0x20);
    crt_stdio_c_fprintf_FUN_005fe6d0
              ((FILE *)((ulonglong)(double)g_LoadedVertices[iVar3].vertex.z >> 0x20),
               "%f,%f,%f\n",(double)g_LoadedVertices[iVar2].vertex.x);
    iVar3 = iVar2 + 1;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)g_PolygonCount,"%d\n");
  for (iVar3 = 0; iVar3 < g_PolygonCount; iVar3 = iVar3 + 1) {
    file_00 = "%d";
    uVar1 = 0x45a72900000000;
    crt_stdio_c_fprintf_FUN_005fe6d0
              ((FILE *)"%d","%d",g_ModelPolygonData[iVar3].vertex_indices_count);
    iVar2 = 0;
    while (iVar3 = (int)((ulonglong)uVar1 >> 0x20),
          iVar2 < (int)g_ModelPolygonData[iVar3].vertex_indices_count) {
      iVar4 = 0x45a771;
      crt_stdio_c_fprintf_FUN_005fe6d0
                ((FILE *)file_00,",%d",g_ModelPolygonData[iVar3].vertex_indices[iVar2]);
      iVar2 = iVar4 + 1;
    }
    crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)file_00,"\n");
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0
            ((FILE *)"..\\shape\\design.c","..\\shape\\design.c",0x6d8);
  return;
}


// Assembly code:
// 0045a610: PUSH EBX
//   Label: shape_design.c_exportVertexListFile_FUN_0045a610
// 0045a611: PUSH ESI
// 0045a612: PUSH EDI
// 0045a613: PUSH EBP
// 0045a614: MOV EBP,ESP
// 0045a616: SUB ESP,0xc
// 0045a61c: MOV EAX,0x61aed2
//   XREF to: 0061aed2 (DATA)
// 0045a621: PUSH EAX
//   XREF to: 0061aed2 (DATA)
// 0045a622: MOV EAX,0x61aed5
//   XREF to: 0061aed5 (DATA)
// 0045a627: PUSH EAX
//   XREF to: 0061aed5 (DATA)
// 0045a628: MOV EAX,0x61aedf
//   XREF to: 0061aedf (PARAM)
// 0045a62d: PUSH EAX
//   XREF to: 0061aedf (DATA)
// 0045a62e: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0045a633: ADD ESP,0xc
// 0045a636: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045a639: CMP dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (READ)
// 0045a63d: JNZ 0x0045a661
//   XREF to: 0045a661 (CONDITIONAL_JUMP)
// 0045a63f: MOV dword ptr [0x02f0ca48],0x61aee6
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061aee6 (DATA)
// 0045a649: MOV dword ptr [0x02f0ca4c],0x6ca
//   XREF to: 02f0ca4c (WRITE)
// 0045a653: MOV EAX,0x61aef8
//   XREF to: 0061aef8 (PARAM)
// 0045a658: PUSH EAX
//   XREF to: 0061aef8 (DATA)
// 0045a659: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0045a65e: ADD ESP,0x4
// 0045a661: PUSH dword ptr [0x01626408]
//   Label: LAB_0045a661
//   XREF to: 01626408 (READ)
// 0045a667: MOV EAX,0x61af11
//   XREF to: 0061af11 (DATA)
// 0045a66c: PUSH EAX
//   XREF to: 0061af11 (DATA)
// 0045a66d: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a670: PUSH EAX
// 0045a671: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a676: ADD ESP,0xc
// 0045a679: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 0045a680: JMP 0x0045a688
//   XREF to: 0045a688 (UNCONDITIONAL_JUMP)
// 0045a682: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045a682
//   XREF to: Stack[-0x1c] (READ)
// 0045a685: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0045a688: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045a688
//   XREF to: Stack[-0x1c] (READ)
// 0045a68b: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045a691: JGE 0x0045a6d7
//   XREF to: 0045a6d7 (CONDITIONAL_JUMP)
// 0045a693: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 0045a697: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045a69d: SUB ESP,0x8
// 0045a6a0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0045a6a3: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 0045a6a7: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045a6ad: SUB ESP,0x8
// 0045a6b0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 0045a6b3: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 0045a6b7: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045a6bd: SUB ESP,0x8
// 0045a6c0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x34] (DATA)
// 0045a6c3: MOV EAX,0x61af15
//   XREF to: 0061af15 (DATA)
// 0045a6c8: PUSH EAX
//   XREF to: 0061af15 (DATA)
// 0045a6c9: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a6cc: PUSH EAX
// 0045a6cd: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a6d2: ADD ESP,0x20
// 0045a6d5: JMP 0x0045a682
//   XREF to: 0045a682 (UNCONDITIONAL_JUMP)
// 0045a6d7: PUSH dword ptr [0x016e990c]
//   Label: LAB_0045a6d7
//   XREF to: 016e990c (READ)
// 0045a6dd: MOV EAX,0x61af1f
//   XREF to: 0061af1f (DATA)
// 0045a6e2: PUSH EAX
//   XREF to: 0061af1f (DATA)
// 0045a6e3: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a6e6: PUSH EAX
// 0045a6e7: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a6ec: ADD ESP,0xc
// 0045a6ef: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 0045a6f6: JMP 0x0045a6fe
//   XREF to: 0045a6fe (UNCONDITIONAL_JUMP)
// 0045a6f8: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045a6f8
//   XREF to: Stack[-0x1c] (READ)
// 0045a6fb: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0045a6fe: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045a6fe
//   XREF to: Stack[-0x1c] (READ)
// 0045a701: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0045a707: JGE 0x0045a78d
//   XREF to: 0045a78d (CONDITIONAL_JUMP)
// 0045a70d: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0045a714: PUSH dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045a71a: MOV EAX,0x61af23
//   XREF to: 0061af23 (DATA)
// 0045a71f: PUSH EAX
//   XREF to: 0061af23 (DATA)
// 0045a720: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a723: PUSH EAX
// 0045a724: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a729: ADD ESP,0xc
// 0045a72c: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 0045a733: JMP 0x0045a73b
//   XREF to: 0045a73b (UNCONDITIONAL_JUMP)
// 0045a735: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045a735
//   XREF to: Stack[-0x18] (READ)
// 0045a738: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0045a73b: IMUL EDX,dword ptr [EBP + -0xc],0x184
//   Label: LAB_0045a73b
//   XREF to: Stack[-0x1c] (READ)
// 0045a742: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045a745: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045a74b: JGE 0x0045a776
//   XREF to: 0045a776 (CONDITIONAL_JUMP)
// 0045a74d: IMUL EDX,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0045a754: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045a757: SHL EAX,0x2
// 0045a75a: ADD EAX,EDX
// 0045a75c: PUSH dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0045a762: MOV EAX,0x61af26
//   XREF to: 0061af26 (DATA)
// 0045a767: PUSH EAX
//   XREF to: 0061af26 (DATA)
// 0045a768: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a76b: PUSH EAX
// 0045a76c: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a771: ADD ESP,0xc
// 0045a774: JMP 0x0045a735
//   XREF to: 0045a735 (UNCONDITIONAL_JUMP)
// 0045a776: MOV EAX,0x61af2a
//   Label: LAB_0045a776
//   XREF to: 0061af2a (DATA)
// 0045a77b: PUSH EAX
//   XREF to: 0061af2a (DATA)
// 0045a77c: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a77f: PUSH EAX
// 0045a780: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a785: ADD ESP,0x8
// 0045a788: JMP 0x0045a6f8
//   XREF to: 0045a6f8 (UNCONDITIONAL_JUMP)
// 0045a78d: PUSH 0x6d8
//   Label: LAB_0045a78d
// 0045a792: MOV EAX,0x61af2c
//   XREF to: 0061af2c (DATA)
// 0045a797: PUSH EAX
//   XREF to: 0061af2c (DATA)
// 0045a798: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a79b: PUSH EAX
// 0045a79c: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0045a7a1: ADD ESP,0xc
// 0045a7a4: MOV ESP,EBP
// 0045a7a6: POP EBP
// 0045a7a7: POP EDI
// 0045a7a8: POP ESI
// 0045a7a9: POP EBX
// 0045a7aa: RET

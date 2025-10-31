// Name: shape_design.c_centerKeyframeModels_FUN_004681a0
// Address: 004681a0
// Address Range: [[004681a0, 0046831d]]
// Convention: __cdecl
// Signature: void shape_design.c_centerKeyframeModels_FUN_004681a0(SMRGLKeyframeModel * keyframe_model)
// Cross-references:
//   shape_design.c_createKeyframeModel_FUN_00468320 (00468320) at 004685c8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_in_common_nonmovin_0061cc1f
//   TerminatedCString s_models_0061cc45
//   TerminatedCString s_wb_0061cc4c
//   TerminatedCString s_models_0061cc4f
//   TerminatedCString s_shape_design_c_0061cc56
//   TerminatedCString s_Can_t_write_key_model_0061cc68
//   TerminatedCString s_shape_design_c_0061cc7e
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fwrite_FUN_005fdc00
//   crt_stdlib.c_atoi_FUN_005ffef0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   engine_model.c_freeMRGLData_FUN_005280b0
//   engine_model.c_loadModelFile_FUN_00527ec0
//   shape_design.c_applyVertexCentering_FUN_004680f0
//   shape_design.c_findVertexListInModel_FUN_00468000
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl shape_design_c_centerKeyframeModels_FUN_004681a0(SMRGLKeyframeModel *keyframe_model)

{
  char cVar1;
  SMRGLHeaderExtended *model_ptr;
  CVector3i *pCVar2;
  SMRGLHeaderExtended *target_model;
  SIZE_T size;
  FILE *file;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  byte bVar5;
  int local_24;
  
  bVar5 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff8c,8,0,0,"Enter in common nonmoving vertex # : ");
  iVar3 = -1;
  pcVar4 = &stack0xffffff8c;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    iVar3 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff8c);
    model_ptr = engine_model_c_loadModelFile_FUN_00527ec0(keyframe_model->filenames[0]);
    pCVar2 = shape_design_c_findVertexListInModel_FUN_00468000(model_ptr);
    for (local_24 = 1; local_24 < (keyframe_model->header).child_count; local_24 = local_24 + 1) {
      target_model = engine_model_c_loadModelFile_FUN_00527ec0(keyframe_model->filenames[local_24]);
      shape_design_c_applyVertexCentering_FUN_004680f0(target_model,pCVar2 + iVar3,iVar3);
      size = engine_dosio_c_getFileSize_FUN_00481880
                       ("models",keyframe_model->filenames[local_24]);
      file = engine_dosio_c_getFile_FUN_00481a50
                       ("models",keyframe_model->filenames[local_24],"wb");
      if (file == (FILE *)0x0) {
        g_CurrentFilename = "..\\shape\\design.c";
        g_CurrentLineNumber = 0x2235;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Can't write key model");
      }
      crt_stdio_c_fwrite_FUN_005fdc00(target_model,size,1,file);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\design.c",0x2237);
      engine_model_c_freeMRGLData_FUN_005280b0(target_model);
    }
    engine_model_c_freeMRGLData_FUN_005280b0(model_ptr);
  }
  return;
}


// Assembly code:
// 004681a0: PUSH EBX
//   Label: shape_design.c_centerKeyframeModels_FUN_004681a0
// 004681a1: PUSH ESI
// 004681a2: PUSH EDI
// 004681a3: PUSH EBP
// 004681a4: MOV EBP,ESP
// 004681a6: SUB ESP,0x6c
// 004681ac: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004681b1: MOV ECX,0x61cc1f
//   XREF to: 0061cc1f (DATA)
// 004681b6: PUSH ECX
//   XREF to: 0061cc1f (DATA)
// 004681b7: PUSH 0x0
// 004681b9: PUSH 0x0
// 004681bb: PUSH 0x8
// 004681bd: LEA ECX,[EBP + -0x64]
//   XREF to: Stack[-0x74] (DATA)
// 004681c0: PUSH ECX
// 004681c1: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 004681c6: ADD ESP,0x14
// 004681c9: LEA EDI,[EBP + -0x64]
//   XREF to: Stack[-0x74] (DATA)
// 004681cc: SUB ECX,ECX
// 004681ce: DEC ECX
// 004681cf: XOR EAX,EAX
// 004681d1: SCASB.REPNE ES:EDI
// 004681d3: NOT ECX
// 004681d5: DEC ECX
// 004681d6: TEST ECX,ECX
// 004681d8: JNZ 0x004681df
//   XREF to: 004681df (CONDITIONAL_JUMP)
// 004681da: JMP 0x00468317
//   XREF to: 00468317 (UNCONDITIONAL_JUMP)
// 004681df: LEA EAX,[EBP + -0x64]
//   Label: LAB_004681df
//   XREF to: Stack[-0x74] (DATA)
// 004681e2: PUSH EAX
// 004681e3: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 004681e8: ADD ESP,0x4
// 004681eb: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004681ee: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004681f1: ADD EAX,0x18
// 004681f4: PUSH EAX
// 004681f5: CALL engine_model.c_loadModelFile_FUN_00527ec0
//   XREF to: 00527ec0 (UNCONDITIONAL_CALL)
// 004681fa: ADD ESP,0x4
// 004681fd: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00468200: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00468203: PUSH EAX
// 00468204: CALL shape_design.c_findVertexListInModel_FUN_00468000
//   XREF to: 00468000 (UNCONDITIONAL_CALL)
// 00468209: ADD ESP,0x4
// 0046820c: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046820f: MOV dword ptr [EBP + -0x14],0x1
//   XREF to: Stack[-0x24] (WRITE)
// 00468216: JMP 0x0046821e
//   XREF to: 0046821e (UNCONDITIONAL_JUMP)
// 00468218: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_00468218
//   XREF to: Stack[-0x24] (READ)
// 0046821b: INC dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ_WRITE)
// 0046821e: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0046821e
//   XREF to: Stack[-0x24] (READ)
// 00468221: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00468224: CMP EAX,dword ptr [EDX + 0x8]
// 00468227: JGE 0x0046830b
//   XREF to: 0046830b (CONDITIONAL_JUMP)
// 0046822d: MOV EDX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00468230: SHL EDX,0x4
// 00468233: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00468236: ADD EAX,0x18
// 00468239: ADD EAX,EDX
// 0046823b: PUSH EAX
// 0046823c: CALL engine_model.c_loadModelFile_FUN_00527ec0
//   XREF to: 00527ec0 (UNCONDITIONAL_CALL)
// 00468241: ADD ESP,0x4
// 00468244: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00468247: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046824a: PUSH EAX
// 0046824b: IMUL EAX,dword ptr [EBP + -0x8],0xc
//   XREF to: Stack[-0x18] (READ)
// 0046824f: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468252: PUSH EAX
// 00468253: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00468256: PUSH EAX
// 00468257: CALL shape_design.c_applyVertexCentering_FUN_004680f0
//   XREF to: 004680f0 (UNCONDITIONAL_CALL)
// 0046825c: ADD ESP,0xc
// 0046825f: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00468262: SHL EAX,0x4
// 00468265: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00468268: ADD EDX,0x18
// 0046826b: ADD EAX,EDX
// 0046826d: PUSH EAX
// 0046826e: MOV EAX,0x61cc45
//   XREF to: 0061cc45 (PARAM)
// 00468273: PUSH EAX
//   XREF to: 0061cc45 (DATA)
// 00468274: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 00468279: ADD ESP,0x8
// 0046827c: MOV dword ptr [EBP + -0x6c],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0046827f: MOV EAX,0x61cc4c
//   XREF to: 0061cc4c (DATA)
// 00468284: PUSH EAX
//   XREF to: 0061cc4c (DATA)
// 00468285: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00468288: SHL EAX,0x4
// 0046828b: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046828e: ADD EDX,0x18
// 00468291: ADD EAX,EDX
// 00468293: PUSH EAX
// 00468294: MOV EAX,0x61cc4f
//   XREF to: 0061cc4f (PARAM)
// 00468299: PUSH EAX
//   XREF to: 0061cc4f (DATA)
// 0046829a: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0046829f: ADD ESP,0xc
// 004682a2: MOV dword ptr [EBP + -0x68],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 004682a5: CMP dword ptr [EBP + -0x68],0x0
//   XREF to: Stack[-0x78] (READ)
// 004682a9: JNZ 0x004682cd
//   XREF to: 004682cd (CONDITIONAL_JUMP)
// 004682ab: MOV dword ptr [0x02f0ca48],0x61cc56
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061cc56 (DATA)
// 004682b5: MOV dword ptr [0x02f0ca4c],0x2235
//   XREF to: 02f0ca4c (WRITE)
// 004682bf: MOV EAX,0x61cc68
//   XREF to: 0061cc68 (PARAM)
// 004682c4: PUSH EAX
//   XREF to: 0061cc68 (DATA)
// 004682c5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004682ca: ADD ESP,0x4
// 004682cd: MOV EAX,dword ptr [EBP + -0x68]
//   Label: LAB_004682cd
//   XREF to: Stack[-0x78] (READ)
// 004682d0: PUSH EAX
// 004682d1: PUSH 0x1
// 004682d3: MOV EAX,dword ptr [EBP + -0x6c]
//   XREF to: Stack[-0x7c] (READ)
// 004682d6: PUSH EAX
// 004682d7: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004682da: PUSH EAX
// 004682db: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 004682e0: ADD ESP,0x10
// 004682e3: PUSH 0x2237
// 004682e8: MOV EAX,0x61cc7e
//   XREF to: 0061cc7e (DATA)
// 004682ed: PUSH EAX
//   XREF to: 0061cc7e (DATA)
// 004682ee: MOV EAX,dword ptr [EBP + -0x68]
//   XREF to: Stack[-0x78] (READ)
// 004682f1: PUSH EAX
// 004682f2: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004682f7: ADD ESP,0xc
// 004682fa: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004682fd: PUSH EAX
// 004682fe: CALL engine_model.c_freeMRGLData_FUN_005280b0
//   XREF to: 005280b0 (UNCONDITIONAL_CALL)
// 00468303: ADD ESP,0x4
// 00468306: JMP 0x00468218
//   XREF to: 00468218 (UNCONDITIONAL_JUMP)
// 0046830b: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0046830b
//   XREF to: Stack[-0x1c] (READ)
// 0046830e: PUSH EAX
// 0046830f: CALL engine_model.c_freeMRGLData_FUN_005280b0
//   XREF to: 005280b0 (UNCONDITIONAL_CALL)
// 00468314: ADD ESP,0x4
// 00468317: MOV ESP,EBP
//   Label: LAB_00468317
// 00468319: POP EBP
// 0046831a: POP EDI
// 0046831b: POP ESI
// 0046831c: POP EBX
// 0046831d: RET

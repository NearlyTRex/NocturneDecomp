// Name: core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
// Address: 00476db0
// Address Range: [[00476db0, 00476f16]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0(CKeyFramedModel * this_ptr, char * filename)
// Cross-references:
//   core_cloth.cpp_CCloth_load_FUN_00438cf0 (00438cf0) at 00438dc0 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043dcc0 (0043dcc0) at 0043dccd [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047d6b7 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_loadModel_FUN_00478c00 (00478c00) at 00478c8a [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_writeModelDependencies_FUN_0047ee30 (0047ee30) at 0047ee97 [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_show_FUN_00503dc0 (00503dc0) at 00503e4a [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_init_FUN_00529ae0 (00529ae0) at 00529c11 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 00569e1b [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 0059842c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rb_0061f2e3
//   TerminatedCString s_models_0061f2e6
//   TerminatedCString s_core_dmodel_cpp_0061f2ed
//   TerminatedCString s_Can_t_open_keyframed_mod_0061f300
//   TerminatedCString s_core_dmodel_cpp_0061f31e
//   TerminatedCString s_rt_0061f331
//   TerminatedCString s_models_0061f334
//   TerminatedCString s_core_dmodel_cpp_0061f33b
//   TerminatedCString s_Can_t_open_keyframed_mod_0061f34e
//   TerminatedCString s_core_dmodel_cpp_0061f36c
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
//   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
//   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20
//   core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fputc_FUN_005fea10
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(CKeyFramedModel *this_ptr,char *filename)

{
  char cVar1;
  FILE *file;
  int iVar2;
  CKeyFramedModel *pCVar3;
  char *pcVar4;
  char *in_stack_0000000c;
  undefined4 in_stack_00000010;
  char *in_stack_00000014;
  undefined4 in_stack_00000018;
  
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
  file = engine_dosio_c_getFile_FUN_00481a50("models",in_stack_0000000c,"rb");
  pcVar4 = in_stack_00000014;
  pCVar3 = this_ptr;
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0xb8;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Can't open keyframed model %s",in_stack_00000010);
  }
  do {
    cVar1 = *pcVar4;
    pCVar3->model_filename[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pCVar3->model_filename[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pCVar3 = (CKeyFramedModel *)(pCVar3->model_filename + 2);
  } while (cVar1 != '\0');
  iVar2 = crt_stdio_c_fgetc_FUN_005fe840(file);
  crt_stdio_c_fputc_FUN_005fea10(iVar2,file);
  if (iVar2 == 0x2f) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\dmodel.cpp",0xc3);
    file = engine_dosio_c_getFile_FUN_00481a50("models",in_stack_00000014,"rt");
    if (file == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0xc5;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Can't open keyframed model %s",in_stack_00000018);
    }
    core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00477110(this_ptr,file);
  }
  else {
    core_dmodel_cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20(this_ptr,file);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\dmodel.cpp",0xcd);
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->texture_count) {
    do {
      pCVar3->texture_list[0].base.base.count = 0;
      iVar2 = iVar2 + 1;
      pCVar3 = (CKeyFramedModel *)(pCVar3->model_filename + 0x48);
    } while (iVar2 < this_ptr->texture_count);
  }
  core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(this_ptr);
  return;
}


// Assembly code:
// 00476db0: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
// 00476db1: PUSH ESI
// 00476db2: PUSH EDI
// 00476db3: PUSH EBP
// 00476db4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00476db8: PUSH EBX
// 00476db9: CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   XREF to: 00477690 (UNCONDITIONAL_CALL)
// 00476dbe: ADD ESP,0x4
// 00476dc1: PUSH 0x61f2e3
//   XREF to: 0061f2e3 (DATA)
// 00476dc6: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00476dca: PUSH EDX
// 00476dcb: PUSH 0x61f2e6
//   XREF to: 0061f2e6 (DATA)
// 00476dd0: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00476dd5: ADD ESP,0xc
// 00476dd8: MOV EBP,EAX
// 00476dda: TEST EAX,EAX
// 00476ddc: JZ 0x00476ede
//   XREF to: 00476ede (CONDITIONAL_JUMP)
// 00476de2: MOV ESI,dword ptr [ESP + 0x18]
//   Label: LAB_00476de2
//   XREF to: Stack[0x8] (READ)
// 00476de6: MOV EDI,EBX
// 00476de8: PUSH EDI
// 00476de9: MOV AL,byte ptr [ESI]
//   Label: LAB_00476de9
// 00476deb: MOV byte ptr [EDI],AL
// 00476ded: CMP AL,0x0
// 00476def: JZ 0x00476e01
//   XREF to: 00476e01 (CONDITIONAL_JUMP)
// 00476df1: MOV AL,byte ptr [ESI + 0x1]
// 00476df4: ADD ESI,0x2
// 00476df7: MOV byte ptr [EDI + 0x1],AL
// 00476dfa: ADD EDI,0x2
// 00476dfd: CMP AL,0x0
// 00476dff: JNZ 0x00476de9
//   XREF to: 00476de9 (CONDITIONAL_JUMP)
// 00476e01: POP EDI
//   Label: LAB_00476e01
// 00476e02: PUSH EBP
// 00476e03: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00476e08: ADD ESP,0x4
// 00476e0b: PUSH EBP
// 00476e0c: PUSH EAX
// 00476e0d: MOV ESI,EAX
// 00476e0f: CALL crt_stdio.c_fputc_FUN_005fea10
//   XREF to: 005fea10 (UNCONDITIONAL_CALL)
// 00476e14: ADD ESP,0x8
// 00476e17: CMP ESI,0x2f
// 00476e1a: JNZ 0x00476f0b
//   XREF to: 00476f0b (CONDITIONAL_JUMP)
// 00476e20: PUSH 0xc3
// 00476e25: PUSH 0x61f31e
//   XREF to: 0061f31e (DATA)
// 00476e2a: PUSH EBP
// 00476e2b: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00476e30: ADD ESP,0xc
// 00476e33: PUSH 0x61f331
//   XREF to: 0061f331 (DATA)
// 00476e38: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00476e3c: PUSH EBP
// 00476e3d: PUSH 0x61f334
//   XREF to: 0061f334 (DATA)
// 00476e42: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00476e47: ADD ESP,0xc
// 00476e4a: MOV EBP,EAX
// 00476e4c: TEST EAX,EAX
// 00476e4e: JNZ 0x00476e77
//   XREF to: 00476e77 (CONDITIONAL_JUMP)
// 00476e50: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00476e54: PUSH ECX
// 00476e55: MOV EAX,0x61f33b
//   XREF to: 0061f33b (PARAM)
// 00476e5a: MOV EDX,0xc5
// 00476e5f: PUSH 0x61f34e
//   XREF to: 0061f34e (DATA)
// 00476e64: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00476e69: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00476e6f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00476e74: ADD ESP,0x8
// 00476e77: PUSH EBP
//   Label: LAB_00476e77
// 00476e78: PUSH EBX
// 00476e79: CALL core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110
//   XREF to: 00477110 (UNCONDITIONAL_CALL)
// 00476e7e: ADD ESP,0x8
//   Label: LAB_00476e7e
// 00476e81: PUSH 0xcd
// 00476e86: PUSH 0x61f36c
//   XREF to: 0061f36c (DATA)
// 00476e8b: PUSH EBP
// 00476e8c: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00476e91: ADD ESP,0xc
// 00476e94: PUSH EBX
// 00476e95: CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
//   XREF to: 00478010 (UNCONDITIONAL_CALL)
// 00476e9a: ADD ESP,0x4
// 00476e9d: MOV ESI,dword ptr [EBX + 0x120]
// 00476ea3: XOR EDX,EDX
// 00476ea5: TEST ESI,ESI
// 00476ea7: JLE 0x00476ed0
//   XREF to: 00476ed0 (CONDITIONAL_JUMP)
// 00476ea9: MOV EAX,EBX
// 00476eab: MOV dword ptr [EAX + 0x128],0x0
//   Label: LAB_00476eab
// 00476eb5: INC EDX
// 00476eb6: MOV EDI,dword ptr [EBX + 0x120]
// 00476ebc: ADD EAX,0x48
// 00476ebf: CMP EDX,EDI
// 00476ec1: JL 0x00476eab
//   XREF to: 00476eab (CONDITIONAL_JUMP)
// 00476ec3: LEA EAX,[EAX]
// 00476ec9: LEA EDX,[EDX]
// 00476ecf: NOP
// 00476ed0: PUSH EBX
//   Label: LAB_00476ed0
// 00476ed1: CALL core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
//   XREF to: 00477e60 (UNCONDITIONAL_CALL)
// 00476ed6: ADD ESP,0x4
// 00476ed9: POP EBP
// 00476eda: POP EDI
// 00476edb: POP ESI
// 00476edc: POP EBX
// 00476edd: RET
// 00476ede: MOV EDI,dword ptr [ESP + 0x18]
//   Label: LAB_00476ede
//   XREF to: Stack[0x8] (READ)
// 00476ee2: PUSH EDI
// 00476ee3: MOV ECX,0x61f2ed
//   XREF to: 0061f2ed (PARAM)
// 00476ee8: MOV ESI,0xb8
// 00476eed: PUSH 0x61f300
//   XREF to: 0061f300 (DATA)
// 00476ef2: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00476ef8: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00476efe: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00476f03: ADD ESP,0x8
// 00476f06: JMP 0x00476de2
//   XREF to: 00476de2 (UNCONDITIONAL_JUMP)
// 00476f0b: PUSH EBP
//   Label: LAB_00476f0b
// 00476f0c: PUSH EBX
// 00476f0d: CALL core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20
//   XREF to: 00476f20 (UNCONDITIONAL_CALL)
// 00476f12: JMP 0x00476e7e
//   XREF to: 00476e7e (UNCONDITIONAL_JUMP)

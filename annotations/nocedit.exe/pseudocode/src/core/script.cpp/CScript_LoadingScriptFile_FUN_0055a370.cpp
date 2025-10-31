// Name: core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370
// Address: 0055a370
// Address Range: [[0055a370, 0055a4ad]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370()
// Cross-references:
//   core_script.cpp_CScript_CallLoadingScriptFile_FUN_00566fa0 (00566fa0) at 00566fb9 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a0c4 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565d00 (00565d00) at 00565dd1 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566080 (00566080) at 0056608b [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00567630 (00567630) at 00567649 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00567bc0 (00567bc0) at 00567bd2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_script_cpp_006419d9
//   TerminatedCString s_core_script_cpp_006419ec
//   TerminatedCString s_Out_of_memory_loading_sc_006419ff
//   TerminatedCString s_core_script_cpp_00641a27
//   TerminatedCString s_core_script_cpp_00641a3a
//   TerminatedCString s_Out_of_memory_loading_sc_00641a4d
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined1 DAT_031091e8
//   undefined1 DAT_031091e9
//   undefined1 DAT_031091ea
//   undefined1 DAT_031091eb
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_script.cpp_CScript_FreeSomething2_FUN_005598f0
//   core_script.cpp_FUN_005592c0
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_LoadingScriptFile(CScript* param_1) */

void core_script_cpp_CScript_LoadingScriptFile_FUN_0055a370(void)

{
  char cVar1;
  int iVar2;
  CBitFont *font_ptr;
  void *pvVar3;
  uint uVar4;
  int index;
  char *pcVar5;
  CStrList *unaff_EDI;
  char *pcVar6;
  byte bVar7;
  int in_stack_00000004;
  
  bVar7 = 0;
  core_script_cpp_CScript_FreeSomething2_FUN_005598f0();
  font_ptr = (CBitFont *)(in_stack_00000004 + 0x38);
  index = 0;
  do {
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr);
    if (iVar2 <= index) {
      return;
    }
    font_ptr = (CBitFont *)shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(unaff_EDI,index);
    core_script_cpp_FUN_005592c0();
    if (DAT_031091e8 != '\0') {
      font_ptr = (CBitFont *)((*(int *)(in_stack_00000004 + 0x30) + 1) * 8);
      pvVar3 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                         (*(void **)(in_stack_00000004 + 0x34),(int)font_ptr,
                          "..\\core\\script.cpp",0x397);
      *(void **)(in_stack_00000004 + 0x34) = pvVar3;
      if (pvVar3 == (void *)0x0) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x398;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory loading script at line %d",index + 1);
      }
      *(int *)(*(int *)(in_stack_00000004 + 0x34) + *(int *)(in_stack_00000004 + 0x30) * 8) =
           index + 1;
      uVar4 = 0xffffffff;
      pcVar6 = &DAT_031091e8;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      unaff_EDI = (CStrList *)0x55a445;
      pvVar3 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(~uVar4,"..\\core\\script.cpp",0x39a);
      *(void **)(*(int *)(in_stack_00000004 + 0x34) + 4 + *(int *)(in_stack_00000004 + 0x30) * 8) =
           pvVar3;
      if (*(int *)(in_stack_00000004 + 0x34) == 0) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x39b;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory loading script at line %d");
      }
      pcVar5 = &DAT_031091e8;
      pcVar6 = *(char **)(*(int *)(in_stack_00000004 + 0x34) + 4 +
                         *(int *)(in_stack_00000004 + 0x30) * 8);
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      *(int *)(in_stack_00000004 + 0x30) = *(int *)(in_stack_00000004 + 0x30) + 1;
    }
    index = index + 1;
  } while( true );
}


// Assembly code:
// 0055a370: PUSH EBX
//   Label: core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370
// 0055a371: PUSH ESI
// 0055a372: PUSH EDI
// 0055a373: PUSH EBP
// 0055a374: SUB ESP,0x4
// 0055a377: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0055a37b: PUSH EBX
// 0055a37c: CALL core_script.cpp_CScript_FreeSomething2_FUN_005598f0
//   XREF to: 005598f0 (UNCONDITIONAL_CALL)
// 0055a381: ADD ESP,0x4
// 0055a384: LEA EAX,[EBX + 0x38]
// 0055a387: XOR EBP,EBP
// 0055a389: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0055a38c: MOV EDX,dword ptr [ESP]
//   Label: LAB_0055a38c
//   XREF to: Stack[-0x14] (DATA)
// 0055a38f: PUSH EDX
// 0055a390: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 0055a395: ADD ESP,0x4
// 0055a398: CMP EBP,EAX
// 0055a39a: JL 0x0055a3a4
//   XREF to: 0055a3a4 (CONDITIONAL_JUMP)
// 0055a39c: ADD ESP,0x4
// 0055a39f: POP EBP
// 0055a3a0: POP EDI
// 0055a3a1: POP ESI
// 0055a3a2: POP EBX
// 0055a3a3: RET
// 0055a3a4: PUSH 0x31091e8
//   Label: LAB_0055a3a4
//   XREF to: 031091e8 (DATA)
// 0055a3a9: PUSH EBP
// 0055a3aa: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 0055a3ae: PUSH ECX
// 0055a3af: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0055a3b4: ADD ESP,0x8
// 0055a3b7: PUSH EAX
// 0055a3b8: CALL core_script.cpp_FUN_005592c0
//   XREF to: 005592c0 (UNCONDITIONAL_CALL)
// 0055a3bd: MOV AH,byte ptr [0x031091e8]
//   XREF to: 031091e8 (READ)
// 0055a3c3: ADD ESP,0x8
// 0055a3c6: TEST AH,AH
// 0055a3c8: JZ 0x0055a4a8
//   XREF to: 0055a4a8 (CONDITIONAL_JUMP)
// 0055a3ce: MOV EAX,dword ptr [EBX + 0x30]
// 0055a3d1: PUSH 0x397
// 0055a3d6: INC EAX
// 0055a3d7: PUSH 0x6419d9
//   XREF to: 006419d9 (DATA)
// 0055a3dc: SHL EAX,0x3
// 0055a3df: PUSH EAX
// 0055a3e0: MOV ESI,dword ptr [EBX + 0x34]
// 0055a3e3: PUSH ESI
// 0055a3e4: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 0055a3e9: ADD ESP,0x10
// 0055a3ec: MOV dword ptr [EBX + 0x34],EAX
// 0055a3ef: TEST EAX,EAX
// 0055a3f1: JNZ 0x0055a419
//   XREF to: 0055a419 (CONDITIONAL_JUMP)
// 0055a3f3: MOV dword ptr [0x02f0ca48],0x6419ec
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 006419ec (DATA)
// 0055a3fd: LEA EAX,[EBP + 0x1]
// 0055a400: PUSH EAX
// 0055a401: MOV EDX,0x398
// 0055a406: PUSH 0x6419ff
//   XREF to: 006419ff (DATA)
// 0055a40b: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0055a411: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0055a416: ADD ESP,0x8
// 0055a419: PUSH 0x39a
//   Label: LAB_0055a419
// 0055a41e: LEA ESI,[EBP + 0x1]
// 0055a421: MOV EAX,dword ptr [EBX + 0x30]
// 0055a424: MOV ECX,dword ptr [EBX + 0x34]
// 0055a427: PUSH 0x641a27
//   XREF to: 00641a27 (DATA)
// 0055a42c: MOV EDI,0x31091e8
//   XREF to: 031091e8 (DATA)
// 0055a431: MOV dword ptr [ECX + EAX*0x8],ESI
// 0055a434: SUB ECX,ECX
// 0055a436: DEC ECX
// 0055a437: XOR EAX,EAX
// 0055a439: SCASB.REPNE ES:EDI
//   XREF to: 031091e8 (READ)
//   XREF to: 031091e9 (READ)
// 0055a43b: NOT ECX
// 0055a43d: DEC ECX
// 0055a43e: INC ECX
// 0055a43f: PUSH ECX
// 0055a440: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0055a445: MOV ECX,dword ptr [EBX + 0x30]
// 0055a448: MOV EDI,dword ptr [EBX + 0x34]
// 0055a44b: MOV dword ptr [EDI + ECX*0x8 + 0x4],EAX
// 0055a44f: MOV ECX,dword ptr [EBX + 0x34]
// 0055a452: ADD ESP,0xc
// 0055a455: TEST ECX,ECX
// 0055a457: JNZ 0x0055a47c
//   XREF to: 0055a47c (CONDITIONAL_JUMP)
// 0055a459: PUSH ESI
// 0055a45a: MOV EDI,0x641a3a
//   XREF to: 00641a3a (DATA)
// 0055a45f: MOV EAX,0x39b
// 0055a464: PUSH 0x641a4d
//   XREF to: 00641a4d (DATA)
// 0055a469: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0055a46f: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0055a474: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0055a479: ADD ESP,0x8
// 0055a47c: MOV EAX,dword ptr [EBX + 0x30]
//   Label: LAB_0055a47c
// 0055a47f: MOV ECX,dword ptr [EBX + 0x34]
// 0055a482: MOV ESI,0x31091e8
//   XREF to: 031091e8 (DATA)
// 0055a487: MOV EDI,dword ptr [ECX + EAX*0x8 + 0x4]
// 0055a48b: PUSH EDI
// 0055a48c: MOV AL,byte ptr [ESI]
//   Label: LAB_0055a48c
//   XREF to: 031091e8 (READ)
//   XREF to: 031091ea (READ)
// 0055a48e: MOV byte ptr [EDI],AL
// 0055a490: CMP AL,0x0
// 0055a492: JZ 0x0055a4a4
//   XREF to: 0055a4a4 (CONDITIONAL_JUMP)
// 0055a494: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 031091e9 (READ)
//   XREF to: 031091eb (READ)
// 0055a497: ADD ESI,0x2
// 0055a49a: MOV byte ptr [EDI + 0x1],AL
// 0055a49d: ADD EDI,0x2
// 0055a4a0: CMP AL,0x0
// 0055a4a2: JNZ 0x0055a48c
//   XREF to: 0055a48c (CONDITIONAL_JUMP)
// 0055a4a4: POP EDI
//   Label: LAB_0055a4a4
// 0055a4a5: INC dword ptr [EBX + 0x30]
// 0055a4a8: INC EBP
//   Label: LAB_0055a4a8
// 0055a4a9: JMP 0x0055a38c
//   XREF to: 0055a38c (UNCONDITIONAL_JUMP)

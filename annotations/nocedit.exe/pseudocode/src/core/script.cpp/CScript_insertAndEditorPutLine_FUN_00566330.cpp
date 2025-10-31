// Name: core_script.cpp_CScript_insertAndEditorPutLine_FUN_00566330
// Address: 00566330
// Address Range: [[00566330, 0056638d]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_insertAndEditorPutLine_FUN_00566330()
// Cross-references:
//   core_script.cpp_FUN_00566390 (00566390) at 00566476 [UNCONDITIONAL_CALL]
// Globals:
//   undefined1 DAT_031101c0
//   undefined1 DAT_031101c1
// Function calls:
//   core_script.cpp_CScript_editorPutLine_FUN_005662a0
//   core_script.cpp_FUN_00566230
//   shape_edittool.cpp_CStrList_insert_FUN_004a2bc0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_insertAndEditorPutLine(CScript* param_1, undefined4
   param_2, undefined4 param_3) */

void core_script_cpp_CScript_insertAndEditorPutLine_FUN_00566330(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  byte bVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  bVar4 = 0;
  core_script_cpp_FUN_00566230();
  uVar2 = 0xffffffff;
  pcVar3 = &DAT_031101c0;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if ((int)(~uVar2 - 1) < in_stack_00000008) {
    in_stack_00000008 = ~uVar2 - 1;
  }
  shape_edittool_cpp_CStrList_insert_FUN_004a2bc0
            ((CStrList *)(in_stack_00000004 + 0x38),in_stack_0000000c + 1,
             &DAT_031101c0 + in_stack_00000008);
  (&DAT_031101c0)[in_stack_00000008] = 0;
  core_script_cpp_CScript_editorPutLine_FUN_005662a0();
  return;
}


// Assembly code:
// 00566330: PUSH EBX
//   Label: core_script.cpp_CScript_insertAndEditorPutLine_FUN_00566330
// 00566331: PUSH ESI
// 00566332: PUSH EDI
// 00566333: PUSH EBP
// 00566334: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00566338: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056633c: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00566340: PUSH EBP
// 00566341: PUSH ESI
// 00566342: CALL core_script.cpp_FUN_00566230
//   XREF to: 00566230 (UNCONDITIONAL_CALL)
// 00566347: ADD ESP,0x8
// 0056634a: MOV EDI,0x31101c0
//   XREF to: 031101c0 (DATA)
// 0056634f: SUB ECX,ECX
// 00566351: DEC ECX
// 00566352: XOR EAX,EAX
// 00566354: SCASB.REPNE ES:EDI
//   XREF to: 031101c0 (READ)
//   XREF to: 031101c1 (READ)
// 00566356: NOT ECX
// 00566358: DEC ECX
// 00566359: CMP EBX,ECX
// 0056635b: JLE 0x0056635f
//   XREF to: 0056635f (CONDITIONAL_JUMP)
// 0056635d: MOV EBX,ECX
// 0056635f: MOV ECX,0x31101c0
//   Label: LAB_0056635f
//   XREF to: 031101c0 (DATA)
// 00566364: ADD ECX,EBX
// 00566366: PUSH ECX
//   XREF to: 031101c0 (DATA)
//   XREF to: 031101c1 (DATA)
// 00566367: LEA ECX,[EBP + 0x1]
// 0056636a: PUSH ECX
// 0056636b: LEA ECX,[ESI + 0x38]
// 0056636e: PUSH ECX
// 0056636f: CALL shape_edittool.cpp_CStrList_insert_FUN_004a2bc0
//   XREF to: 004a2bc0 (UNCONDITIONAL_CALL)
// 00566374: ADD ESP,0xc
// 00566377: PUSH EBP
// 00566378: XOR AH,AH
// 0056637a: PUSH ESI
// 0056637b: MOV byte ptr [EBX + 0x31101c0],AH
//   XREF to: 031101c0 (WRITE)
// 00566381: CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0
//   XREF to: 005662a0 (UNCONDITIONAL_CALL)
// 00566386: ADD ESP,0x8
// 00566389: POP EBP
// 0056638a: POP EDI
// 0056638b: POP ESI
// 0056638c: POP EBX
// 0056638d: RET

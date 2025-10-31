// Name: core_script.cpp_FUN_00566230
// Address: 00566230
// Address Range: [[00566230, 0056629d]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00566230()
// Cross-references:
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 00565990 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 00564f07 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_insertAndEditorPutLine_FUN_00566330 (00566330) at 00566342 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566390 (00566390) at 005663d4 [UNCONDITIONAL_CALL]
// Globals:
//   undefined1 DAT_00643f94
//   undefined1 DAT_031101c0
//   undefined1 DAT_031101c1
//   undefined4 DAT_031141bf
// Function calls:
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00566230(CScript* param_1, undefined4 param_2) */

void core_script_cpp_FUN_00566230(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  
  bVar7 = 0;
  pcVar5 = &DAT_00643f94;
  if (-1 < in_stack_00000008) {
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (in_stack_00000008 < iVar2) {
      pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)(in_stack_00000004 + 0x38),in_stack_00000008);
    }
  }
  uVar3 = 0xffffffff;
  pcVar6 = pcVar5;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  if (0x3fff < uVar3) {
    uVar3 = 0x3fff;
  }
  pcVar6 = &DAT_031101c0;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -8 + 4;
    pcVar6 = pcVar6 + (uint)bVar7 * -8 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  }
  (&DAT_031101c0)[uVar3] = 0;
  return;
}


// Assembly code:
// 00566230: PUSH EBX
//   Label: core_script.cpp_FUN_00566230
// 00566231: PUSH ESI
// 00566232: PUSH EDI
// 00566233: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00566237: MOV ESI,0x643f94
//   XREF to: 00643f94 (DATA)
// 0056623c: TEST EDI,EDI
// 0056623e: JL 0x00566260
//   XREF to: 00566260 (CONDITIONAL_JUMP)
// 00566240: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00566244: ADD EBX,0x38
// 00566247: PUSH EBX
// 00566248: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 0056624d: ADD ESP,0x4
// 00566250: CMP EDI,EAX
// 00566252: JGE 0x00566260
//   XREF to: 00566260 (CONDITIONAL_JUMP)
// 00566254: PUSH EDI
// 00566255: PUSH EBX
// 00566256: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0056625b: MOV ESI,EAX
// 0056625d: ADD ESP,0x8
// 00566260: MOV EDI,ESI
//   Label: LAB_00566260
// 00566262: SUB ECX,ECX
// 00566264: DEC ECX
// 00566265: XOR EAX,EAX
// 00566267: SCASB.REPNE ES:EDI
//   XREF to: 00643f94 (READ)
// 00566269: NOT ECX
// 0056626b: DEC ECX
// 0056626c: MOV EDX,ECX
// 0056626e: CMP ECX,0x3fff
// 00566274: JBE 0x0056627b
//   XREF to: 0056627b (CONDITIONAL_JUMP)
// 00566276: MOV EDX,0x3fff
// 0056627b: MOV EDI,0x31101c0
//   Label: LAB_0056627b
//   XREF to: 031101c0 (DATA)
// 00566280: MOV ECX,EDX
// 00566282: PUSH EDI
//   XREF to: 031101c0 (DATA)
// 00566283: MOV EAX,ECX
// 00566285: SHR ECX,0x2
// 00566288: MOVSD.REP ES:EDI,ESI
//   XREF to: 031101c0 (WRITE)
// 0056628a: MOV CL,AL
// 0056628c: AND CL,0x3
// 0056628f: MOVSB.REP ES:EDI,ESI
//   XREF to: 031101c0 (WRITE)
//   XREF to: 031101c1 (WRITE)
// 00566291: POP EDI
// 00566292: XOR AH,AH
// 00566294: MOV byte ptr [EDX + 0x31101c0],AH
//   XREF to: 031101c0 (WRITE)
//   XREF to: 031141bf (WRITE)
// 0056629a: POP EDI
// 0056629b: POP ESI
// 0056629c: POP EBX
// 0056629d: RET

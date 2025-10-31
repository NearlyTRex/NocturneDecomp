// Name: core_script.cpp_FUN_00566800
// Address: 00566800
// Address Range: [[00566800, 0056687c]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00566800()
// Cross-references:
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 00565a4d [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorPutLine_FUN_005662a0 (005662a0) at 005662e3 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_unk50_FUN_00566660 (00566660) at 005667ef [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566180 (00566180) at 005661d4 [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable
//   undefined4 DAT_0310fd10
//   undefined4 DAT_0310fd48
// Function calls:
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00566800(undefined4 param_1, undefined4 param_2) */

void core_script_cpp_FUN_00566800(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  
  bVar6 = 0;
  if (-1 < in_stack_00000008) {
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (in_stack_00000008 < iVar2) {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)(in_stack_00000004 + 0x38),in_stack_00000008);
      uVar4 = 0xffffffff;
      pcVar5 = pcVar3;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
      } while (cVar1 != '\0');
      iVar2 = ~uVar4 - 1;
      if (in_stack_00000008 != DAT_0310fd48) {
        pcVar5 = pcVar3 + iVar2;
        while ((0 < iVar2 && ((g_CharacterClassificationTable[(byte)(pcVar5[-1] + 1)] & 2U) != 0)))
        {
          iVar2 = iVar2 + -1;
          pcVar5 = pcVar5 + -1;
        }
        pcVar3[iVar2] = '\0';
      }
      if (DAT_0310fd10 < iVar2) {
        DAT_0310fd10 = iVar2;
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 00566800: PUSH EBX
//   Label: core_script.cpp_FUN_00566800
// 00566801: PUSH ESI
// 00566802: PUSH EDI
// 00566803: PUSH EBP
// 00566804: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00566808: TEST ESI,ESI
// 0056680a: JGE 0x00566811
//   XREF to: 00566811 (CONDITIONAL_JUMP)
// 0056680c: POP EBP
//   Label: LAB_0056680c
// 0056680d: POP EDI
// 0056680e: POP ESI
// 0056680f: POP EBX
// 00566810: RET
// 00566811: MOV EBX,dword ptr [ESP + 0x14]
//   Label: LAB_00566811
//   XREF to: Stack[0x4] (READ)
// 00566815: ADD EBX,0x38
// 00566818: PUSH EBX
// 00566819: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 0056681e: ADD ESP,0x4
// 00566821: CMP ESI,EAX
// 00566823: JGE 0x0056680c
//   XREF to: 0056680c (CONDITIONAL_JUMP)
// 00566825: PUSH ESI
// 00566826: PUSH EBX
// 00566827: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0056682c: MOV EDX,EAX
// 0056682e: ADD ESP,0x8
// 00566831: MOV EDI,EAX
// 00566833: MOV EBP,EAX
// 00566835: SUB ECX,ECX
// 00566837: DEC ECX
// 00566838: XOR EAX,EAX
// 0056683a: SCASB.REPNE ES:EDI
// 0056683c: NOT ECX
// 0056683e: DEC ECX
// 0056683f: MOV EBX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00566845: MOV EAX,ECX
// 00566847: CMP ESI,EBX
// 00566849: JZ 0x0056686b
//   XREF to: 0056686b (CONDITIONAL_JUMP)
// 0056684b: ADD EDX,ECX
// 0056684d: TEST EAX,EAX
//   Label: LAB_0056684d
// 0056684f: JLE 0x00566867
//   XREF to: 00566867 (CONDITIONAL_JUMP)
// 00566851: MOV BL,byte ptr [EDX + -0x1]
// 00566854: XOR ECX,ECX
// 00566856: INC BL
// 00566858: MOV CL,BL
// 0056685a: TEST byte ptr [ECX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 00566861: JZ 0x00566867
//   XREF to: 00566867 (CONDITIONAL_JUMP)
// 00566863: DEC EAX
// 00566864: DEC EDX
// 00566865: JMP 0x0056684d
//   XREF to: 0056684d (UNCONDITIONAL_JUMP)
// 00566867: MOV byte ptr [EAX + EBP*0x1],0x0
//   Label: LAB_00566867
// 0056686b: CMP EAX,dword ptr [0x0310fd10]
//   Label: LAB_0056686b
//   XREF to: 0310fd10 (READ)
// 00566871: JLE 0x0056680c
//   XREF to: 0056680c (CONDITIONAL_JUMP)
// 00566873: MOV [0x0310fd10],EAX
//   XREF to: 0310fd10 (WRITE)
// 00566878: POP EBP
// 00566879: POP EDI
// 0056687a: POP ESI
// 0056687b: POP EBX
// 0056687c: RET

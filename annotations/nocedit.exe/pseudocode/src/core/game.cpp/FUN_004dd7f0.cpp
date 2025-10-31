// Name: core_game.cpp_FUN_004dd7f0
// Address: 004dd7f0
// Address Range: [[004dd7f0, 004dd862]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004dd7f0()
// Globals:
//   undefined1 DAT_02d831d6
//   char[20] g_InputHistory
//   undefined4 CHAR_ARRAY_02d831d8
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0

#include "nocturne.h"

undefined4 core_game_cpp_FUN_004dd7f0(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *in_stack_00000004;
  
  uVar3 = 0xffffffff;
  pbVar6 = in_stack_00000004;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  iVar5 = 0;
  for (iVar4 = ~uVar3 - 1; 0 < iVar4; iVar4 = iVar4 + -1) {
    bVar1 = g_InputHistory[iVar4];
    uVar2 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*in_stack_00000004);
    if (bVar1 == uVar2) {
      iVar5 = iVar5 + 1;
    }
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  if (iVar5 == ~uVar3 - 1) {
    g_InputHistory[1] = '\0';
    return 1;
  }
  return 0;
}


// Assembly code:
// 004dd7f0: PUSH EBX
//   Label: core_game.cpp_FUN_004dd7f0
// 004dd7f1: PUSH ESI
// 004dd7f2: PUSH EDI
// 004dd7f3: PUSH EBP
// 004dd7f4: SUB ESP,0x8
// 004dd7f7: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004dd7fb: MOV EDI,ESI
// 004dd7fd: SUB ECX,ECX
// 004dd7ff: DEC ECX
// 004dd800: XOR EAX,EAX
// 004dd802: SCASB.REPNE ES:EDI
// 004dd804: NOT ECX
// 004dd806: DEC ECX
// 004dd807: XOR EBP,EBP
// 004dd809: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x18] (DATA)
// 004dd80c: TEST ECX,ECX
// 004dd80e: JLE 0x004dd83f
//   XREF to: 004dd83f (CONDITIONAL_JUMP)
// 004dd810: MOV EAX,ECX
// 004dd812: NEG EAX
// 004dd814: MOV EBX,ECX
// 004dd816: ADD ECX,EAX
// 004dd818: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004dd81c: XOR EAX,EAX
//   Label: LAB_004dd81c
// 004dd81e: MOV AL,byte ptr [ESI]
// 004dd820: PUSH EAX
// 004dd821: MOVZX EDI,byte ptr [EBX + 0x2d831d7]
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d8 (READ)
// 004dd828: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004dd82d: ADD ESP,0x4
// 004dd830: CMP EDI,EAX
// 004dd832: JNZ 0x004dd835
//   XREF to: 004dd835 (CONDITIONAL_JUMP)
// 004dd834: INC EBP
// 004dd835: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_004dd835
//   XREF to: Stack[-0x14] (READ)
// 004dd839: DEC EBX
// 004dd83a: INC ESI
// 004dd83b: CMP EBX,EDX
// 004dd83d: JG 0x004dd81c
//   XREF to: 004dd81c (CONDITIONAL_JUMP)
// 004dd83f: CMP EBP,dword ptr [ESP]
//   Label: LAB_004dd83f
//   XREF to: Stack[-0x18] (DATA)
// 004dd842: JNZ 0x004dd859
//   XREF to: 004dd859 (CONDITIONAL_JUMP)
// 004dd844: XOR AH,AH
// 004dd846: MOV byte ptr [0x02d831d8],AH
//   XREF to: 02d831d8 (WRITE)
// 004dd84c: MOV EAX,0x1
// 004dd851: ADD ESP,0x8
// 004dd854: POP EBP
// 004dd855: POP EDI
// 004dd856: POP ESI
// 004dd857: POP EBX
// 004dd858: RET
// 004dd859: XOR EAX,EAX
//   Label: LAB_004dd859
// 004dd85b: ADD ESP,0x8
// 004dd85e: POP EBP
// 004dd85f: POP EDI
// 004dd860: POP ESI
// 004dd861: POP EBX
// 004dd862: RET

// Name: core_script.cpp_FUN_005624f0
// Address: 005624f0
// Address Range: [[005624f0, 00562615]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005624f0()
// Cross-references:
//   core_script.cpp_FUN_00565f70 (00565f70) at 00566013 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_005624f0(undefined4 param_1, undefined4 param_2) */

void core_script_cpp_FUN_005624f0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  pcVar4 = (char *)(in_stack_00000004 + 4);
  pcVar5 = in_stack_00000008;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = (char *)(in_stack_00000004 + 0x68);
  iVar2 = -1;
  pcVar5 = in_stack_00000008;
  do {
    pcVar6 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xcc)) {
    pcVar5 = (char *)(in_stack_00000004 + 0x134);
    do {
      pcVar6 = (char *)(iVar2 * 0x328 + in_stack_00000004 + 0xd0);
      iVar3 = -1;
      pcVar4 = in_stack_00000008;
      do {
        pcVar7 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      iVar3 = -1;
      pcVar4 = in_stack_00000008;
      do {
        pcVar6 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar6 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      pcVar4 = pcVar5;
      do {
        cVar1 = *pcVar4;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      iVar2 = iVar2 + 1;
      pcVar5 = pcVar5 + 0x328;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0xcc));
  }
  pcVar5 = (char *)(in_stack_00000004 + 0x2060);
  iVar2 = -1;
  do {
    pcVar4 = in_stack_00000008;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = in_stack_00000008 + 1;
    cVar1 = *in_stack_00000008;
    in_stack_00000008 = pcVar4;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 005624f0: PUSH EBX
//   Label: core_script.cpp_FUN_005624f0
// 005624f1: PUSH ESI
// 005624f2: PUSH EDI
// 005624f3: PUSH EBP
// 005624f4: SUB ESP,0x4
// 005624f7: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005624fb: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005624ff: MOV EDI,EDX
// 00562501: ADD ESI,0x4
// 00562504: PUSH EDI
// 00562505: MOV AL,byte ptr [ESI]
//   Label: LAB_00562505
// 00562507: MOV byte ptr [EDI],AL
// 00562509: CMP AL,0x0
// 0056250b: JZ 0x0056251d
//   XREF to: 0056251d (CONDITIONAL_JUMP)
// 0056250d: MOV AL,byte ptr [ESI + 0x1]
// 00562510: ADD ESI,0x2
// 00562513: MOV byte ptr [EDI + 0x1],AL
// 00562516: ADD EDI,0x2
// 00562519: CMP AL,0x0
// 0056251b: JNZ 0x00562505
//   XREF to: 00562505 (CONDITIONAL_JUMP)
// 0056251d: POP EDI
//   Label: LAB_0056251d
// 0056251e: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00562522: ADD ESI,0x68
// 00562525: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00562529: PUSH EDI
// 0056252a: SUB ECX,ECX
// 0056252c: DEC ECX
// 0056252d: MOV AL,0x0
// 0056252f: SCASB.REPNE ES:EDI
// 00562531: DEC EDI
// 00562532: MOV AL,byte ptr [ESI]
//   Label: LAB_00562532
// 00562534: MOV byte ptr [EDI],AL
// 00562536: CMP AL,0x0
// 00562538: JZ 0x0056254a
//   XREF to: 0056254a (CONDITIONAL_JUMP)
// 0056253a: MOV AL,byte ptr [ESI + 0x1]
// 0056253d: ADD ESI,0x2
// 00562540: MOV byte ptr [EDI + 0x1],AL
// 00562543: ADD EDI,0x2
// 00562546: CMP AL,0x0
// 00562548: JNZ 0x00562532
//   XREF to: 00562532 (CONDITIONAL_JUMP)
// 0056254a: POP EDI
//   Label: LAB_0056254a
// 0056254b: MOV ECX,dword ptr [EBX + 0xcc]
// 00562551: XOR EBP,EBP
// 00562553: TEST ECX,ECX
// 00562555: JLE 0x005625e0
//   XREF to: 005625e0 (CONDITIONAL_JUMP)
// 0056255b: ADD EBX,0xd0
// 00562561: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x14] (DATA)
// 00562564: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00562568: ADD EBX,0x134
// 0056256e: IMUL ESI,EBP,0x328
//   Label: LAB_0056256e
// 00562574: ADD ESI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00562577: MOV EDI,EDX
// 00562579: PUSH EDI
// 0056257a: SUB ECX,ECX
// 0056257c: DEC ECX
// 0056257d: MOV AL,0x0
// 0056257f: SCASB.REPNE ES:EDI
// 00562581: DEC EDI
// 00562582: MOV AL,byte ptr [ESI]
//   Label: LAB_00562582
// 00562584: MOV byte ptr [EDI],AL
// 00562586: CMP AL,0x0
// 00562588: JZ 0x0056259a
//   XREF to: 0056259a (CONDITIONAL_JUMP)
// 0056258a: MOV AL,byte ptr [ESI + 0x1]
// 0056258d: ADD ESI,0x2
// 00562590: MOV byte ptr [EDI + 0x1],AL
// 00562593: ADD EDI,0x2
// 00562596: CMP AL,0x0
// 00562598: JNZ 0x00562582
//   XREF to: 00562582 (CONDITIONAL_JUMP)
// 0056259a: POP EDI
//   Label: LAB_0056259a
// 0056259b: MOV ESI,EBX
// 0056259d: PUSH EDI
// 0056259e: SUB ECX,ECX
// 005625a0: DEC ECX
// 005625a1: MOV AL,0x0
// 005625a3: SCASB.REPNE ES:EDI
// 005625a5: DEC EDI
// 005625a6: MOV AL,byte ptr [ESI]
//   Label: LAB_005625a6
// 005625a8: MOV byte ptr [EDI],AL
// 005625aa: CMP AL,0x0
// 005625ac: JZ 0x005625be
//   XREF to: 005625be (CONDITIONAL_JUMP)
// 005625ae: MOV AL,byte ptr [ESI + 0x1]
// 005625b1: ADD ESI,0x2
// 005625b4: MOV byte ptr [EDI + 0x1],AL
// 005625b7: ADD EDI,0x2
// 005625ba: CMP AL,0x0
// 005625bc: JNZ 0x005625a6
//   XREF to: 005625a6 (CONDITIONAL_JUMP)
// 005625be: POP EDI
//   Label: LAB_005625be
// 005625bf: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005625c3: INC EBP
// 005625c4: MOV EAX,dword ptr [ESI + 0xcc]
// 005625ca: ADD EBX,0x328
// 005625d0: CMP EBP,EAX
// 005625d2: JL 0x0056256e
//   XREF to: 0056256e (CONDITIONAL_JUMP)
// 005625d4: LEA EAX,[EAX]
// 005625da: LEA EDX,[EDX]
// 005625e0: MOV ESI,dword ptr [ESP + 0x18]
//   Label: LAB_005625e0
//   XREF to: Stack[0x4] (READ)
// 005625e4: MOV EDI,EDX
// 005625e6: ADD ESI,0x2060
// 005625ec: PUSH EDI
// 005625ed: SUB ECX,ECX
// 005625ef: DEC ECX
// 005625f0: MOV AL,0x0
// 005625f2: SCASB.REPNE ES:EDI
// 005625f4: DEC EDI
// 005625f5: MOV AL,byte ptr [ESI]
//   Label: LAB_005625f5
// 005625f7: MOV byte ptr [EDI],AL
// 005625f9: CMP AL,0x0
// 005625fb: JZ 0x0056260d
//   XREF to: 0056260d (CONDITIONAL_JUMP)
// 005625fd: MOV AL,byte ptr [ESI + 0x1]
// 00562600: ADD ESI,0x2
// 00562603: MOV byte ptr [EDI + 0x1],AL
// 00562606: ADD EDI,0x2
// 00562609: CMP AL,0x0
// 0056260b: JNZ 0x005625f5
//   XREF to: 005625f5 (CONDITIONAL_JUMP)
// 0056260d: POP EDI
//   Label: LAB_0056260d
// 0056260e: ADD ESP,0x4
// 00562611: POP EBP
// 00562612: POP EDI
// 00562613: POP ESI
// 00562614: POP EBX
// 00562615: RET

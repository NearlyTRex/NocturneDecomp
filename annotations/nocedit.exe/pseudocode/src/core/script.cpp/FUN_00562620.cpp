// Name: core_script.cpp_FUN_00562620
// Address: 00562620
// Address Range: [[00562620, 005626c4]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00562620()
// Cross-references:
//   core_script.cpp_SCmdParse_bestParse_FUN_00561db0 (00561db0) at 00561ee6 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00562620(undefined4 param_1, undefined4 param_2) */

int core_script_cpp_FUN_00562620(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  
  uVar2 = 0xffffffff;
  pcVar5 = (char *)(in_stack_00000004 + 4);
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  pcVar5 = (char *)(in_stack_00000004 + 0x68);
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar2 + (~uVar3 - 2);
  iVar6 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xcc)) {
    pcVar5 = (char *)(in_stack_00000004 + 0xd0);
    do {
      uVar2 = 0xffffffff;
      pcVar7 = pcVar5;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar4 = iVar4 + (~uVar2 - 1);
      if (in_stack_00000008 < iVar4) goto LAB_00562676;
      uVar2 = 0xffffffff;
      pcVar7 = pcVar5 + 100;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar4 = iVar4 + (~uVar2 - 1);
      if (in_stack_00000008 <= iVar4) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 0x328;
    } while (iVar6 < *(int *)(in_stack_00000004 + 0xcc));
  }
  if (iVar4 + 1 < in_stack_00000008) {
LAB_00562676:
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(in_stack_00000004 + 0xcc) + -1;
  }
  return iVar4;
}


// Assembly code:
// 00562620: PUSH EBX
//   Label: core_script.cpp_FUN_00562620
// 00562621: PUSH ESI
// 00562622: PUSH EDI
// 00562623: PUSH EBP
// 00562624: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00562628: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056262c: ADD EDI,0x4
// 0056262f: SUB ECX,ECX
// 00562631: DEC ECX
// 00562632: XOR EAX,EAX
// 00562634: SCASB.REPNE ES:EDI
// 00562636: NOT ECX
// 00562638: DEC ECX
// 00562639: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056263d: ADD EDI,0x68
// 00562640: MOV EDX,ECX
// 00562642: SUB ECX,ECX
// 00562644: DEC ECX
// 00562645: XOR EAX,EAX
// 00562647: SCASB.REPNE ES:EDI
// 00562649: NOT ECX
// 0056264b: DEC ECX
// 0056264c: ADD EDX,ECX
// 0056264e: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00562652: MOV EBX,dword ptr [ECX + 0xcc]
// 00562658: XOR ESI,ESI
// 0056265a: TEST EBX,EBX
// 0056265c: JLE 0x00562697
//   XREF to: 00562697 (CONDITIONAL_JUMP)
// 0056265e: LEA EBX,[ECX + 0xd0]
// 00562664: MOV EDI,EBX
//   Label: LAB_00562664
// 00562666: SUB ECX,ECX
// 00562668: DEC ECX
// 00562669: XOR EAX,EAX
// 0056266b: SCASB.REPNE ES:EDI
// 0056266d: NOT ECX
// 0056266f: DEC ECX
// 00562670: ADD EDX,ECX
// 00562672: CMP EDX,EBP
// 00562674: JLE 0x005626a9
//   XREF to: 005626a9 (CONDITIONAL_JUMP)
// 00562676: MOV ECX,0xffffffff
//   Label: LAB_00562676
// 0056267b: MOV EAX,ECX
//   Label: LAB_0056267b
// 0056267d: POP EBP
// 0056267e: POP EDI
// 0056267f: POP ESI
// 00562680: POP EBX
// 00562681: RET
// 00562682: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_00562682
//   XREF to: Stack[0x4] (READ)
// 00562686: INC ESI
// 00562687: MOV EDI,dword ptr [ECX + 0xcc]
// 0056268d: ADD EBX,0x328
// 00562693: CMP ESI,EDI
// 00562695: JL 0x00562664
//   XREF to: 00562664 (CONDITIONAL_JUMP)
// 00562697: INC EDX
//   Label: LAB_00562697
// 00562698: CMP EDX,EBP
// 0056269a: JL 0x00562676
//   XREF to: 00562676 (CONDITIONAL_JUMP)
// 0056269c: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005626a0: MOV ECX,dword ptr [ECX + 0xcc]
// 005626a6: DEC ECX
// 005626a7: JMP 0x0056267b
//   XREF to: 0056267b (UNCONDITIONAL_JUMP)
// 005626a9: LEA EDI,[EBX + 0x64]
//   Label: LAB_005626a9
// 005626ac: SUB ECX,ECX
// 005626ae: DEC ECX
// 005626af: XOR EAX,EAX
// 005626b1: SCASB.REPNE ES:EDI
// 005626b3: NOT ECX
// 005626b5: DEC ECX
// 005626b6: ADD EDX,ECX
// 005626b8: CMP EDX,EBP
// 005626ba: JL 0x00562682
//   XREF to: 00562682 (CONDITIONAL_JUMP)
// 005626bc: MOV ECX,ESI
// 005626be: MOV EAX,ECX
// 005626c0: POP EBP
// 005626c1: POP EDI
// 005626c2: POP ESI
// 005626c3: POP EBX
// 005626c4: RET

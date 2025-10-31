// Name: core_script.cpp_FUN_00562760
// Address: 00562760
// Address Range: [[00562760, 005627e9]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00562760()
// Cross-references:
//   core_script.cpp_FUN_00565f70 (00565f70) at 00566031 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00562760(undefined4 param_1, undefined4 param_2) */

int core_script_cpp_FUN_00562760(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0xcc) <= in_stack_00000008) {
    in_stack_00000008 = *(int *)(in_stack_00000004 + 0xcc) + -1;
  }
  uVar2 = 0xffffffff;
  pcVar6 = (char *)(in_stack_00000004 + 4);
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar5 = 0;
  uVar3 = 0xffffffff;
  pcVar6 = (char *)(in_stack_00000004 + 0x68);
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar2 + (~uVar3 - 2);
  if (-1 < in_stack_00000008) {
    pcVar6 = (char *)(in_stack_00000004 + 0x134);
    do {
      uVar2 = 0xffffffff;
      pcVar7 = (char *)(iVar5 * 0x328 + in_stack_00000004 + 0xd0);
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar5 = iVar5 + 1;
      uVar3 = 0xffffffff;
      pcVar7 = pcVar6;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + 0x328;
      iVar4 = iVar4 + ~uVar2 + (~uVar3 - 2);
    } while (iVar5 <= in_stack_00000008);
  }
  return iVar4;
}


// Assembly code:
// 00562760: PUSH EBX
//   Label: core_script.cpp_FUN_00562760
// 00562761: PUSH ESI
// 00562762: PUSH EDI
// 00562763: PUSH EBP
// 00562764: SUB ESP,0x4
// 00562767: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0056276b: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0056276f: MOV EDX,dword ptr [ESI + 0xcc]
// 00562775: CMP EBP,EDX
// 00562777: JL 0x0056277c
//   XREF to: 0056277c (CONDITIONAL_JUMP)
// 00562779: LEA EBP,[EDX + -0x1]
// 0056277c: LEA EDI,[ESI + 0x4]
//   Label: LAB_0056277c
// 0056277f: SUB ECX,ECX
// 00562781: DEC ECX
// 00562782: XOR EAX,EAX
// 00562784: SCASB.REPNE ES:EDI
// 00562786: NOT ECX
// 00562788: DEC ECX
// 00562789: XOR EBX,EBX
// 0056278b: LEA EDI,[ESI + 0x68]
// 0056278e: MOV EDX,ECX
// 00562790: SUB ECX,ECX
// 00562792: DEC ECX
// 00562793: XOR EAX,EAX
// 00562795: SCASB.REPNE ES:EDI
// 00562797: NOT ECX
// 00562799: DEC ECX
// 0056279a: ADD EDX,ECX
// 0056279c: TEST EBP,EBP
// 0056279e: JL 0x005627e0
//   XREF to: 005627e0 (CONDITIONAL_JUMP)
// 005627a0: LEA ECX,[ESI + 0xd0]
// 005627a6: ADD ESI,0x134
// 005627ac: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 005627af: IMUL EDI,EBX,0x328
//   Label: LAB_005627af
// 005627b5: ADD EDI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 005627b8: SUB ECX,ECX
// 005627ba: DEC ECX
// 005627bb: XOR EAX,EAX
// 005627bd: SCASB.REPNE ES:EDI
// 005627bf: NOT ECX
// 005627c1: DEC ECX
// 005627c2: INC EBX
// 005627c3: MOV EDI,ESI
// 005627c5: ADD EDX,ECX
// 005627c7: SUB ECX,ECX
// 005627c9: DEC ECX
// 005627ca: XOR EAX,EAX
// 005627cc: SCASB.REPNE ES:EDI
// 005627ce: NOT ECX
// 005627d0: DEC ECX
// 005627d1: ADD ESI,0x328
// 005627d7: ADD EDX,ECX
// 005627d9: CMP EBX,EBP
// 005627db: JLE 0x005627af
//   XREF to: 005627af (CONDITIONAL_JUMP)
// 005627dd: LEA EAX,[EAX]
// 005627e0: MOV EAX,EDX
//   Label: LAB_005627e0
// 005627e2: ADD ESP,0x4
// 005627e5: POP EBP
// 005627e6: POP EDI
// 005627e7: POP ESI
// 005627e8: POP EBX
// 005627e9: RET

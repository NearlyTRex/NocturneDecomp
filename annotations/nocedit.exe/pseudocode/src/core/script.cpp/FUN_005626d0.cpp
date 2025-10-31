// Name: core_script.cpp_FUN_005626d0
// Address: 005626d0
// Address Range: [[005626d0, 00562758]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005626d0()

#include "nocturne.h"

int core_script_cpp_FUN_005626d0(void)

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
  
  uVar2 = 0xffffffff;
  pcVar6 = (char *)(in_stack_00000004 + 4);
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  pcVar6 = (char *)(in_stack_00000004 + 0x68);
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar2 + (~uVar3 - 2);
  if (*(int *)(in_stack_00000004 + 0xcc) < in_stack_00000008) {
    in_stack_00000008 = *(int *)(in_stack_00000004 + 0xcc);
  }
  iVar5 = 0;
  if (0 < in_stack_00000008) {
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
    } while (iVar5 < in_stack_00000008);
  }
  return iVar4;
}


// Assembly code:
// 005626d0: PUSH EBX
//   Label: core_script.cpp_FUN_005626d0
// 005626d1: PUSH ESI
// 005626d2: PUSH EDI
// 005626d3: PUSH EBP
// 005626d4: SUB ESP,0x4
// 005626d7: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005626db: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005626df: LEA EDI,[ESI + 0x4]
// 005626e2: SUB ECX,ECX
// 005626e4: DEC ECX
// 005626e5: XOR EAX,EAX
// 005626e7: SCASB.REPNE ES:EDI
// 005626e9: NOT ECX
// 005626eb: DEC ECX
// 005626ec: LEA EDI,[ESI + 0x68]
// 005626ef: MOV EDX,ECX
// 005626f1: SUB ECX,ECX
// 005626f3: DEC ECX
// 005626f4: XOR EAX,EAX
// 005626f6: SCASB.REPNE ES:EDI
// 005626f8: NOT ECX
// 005626fa: DEC ECX
// 005626fb: ADD EDX,ECX
// 005626fd: MOV ECX,dword ptr [ESI + 0xcc]
// 00562703: CMP EBP,ECX
// 00562705: JLE 0x00562709
//   XREF to: 00562709 (CONDITIONAL_JUMP)
// 00562707: MOV EBP,ECX
// 00562709: XOR EBX,EBX
//   Label: LAB_00562709
// 0056270b: TEST EBP,EBP
// 0056270d: JLE 0x00562750
//   XREF to: 00562750 (CONDITIONAL_JUMP)
// 0056270f: LEA ECX,[ESI + 0xd0]
// 00562715: ADD ESI,0x134
// 0056271b: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 0056271e: IMUL EDI,EBX,0x328
//   Label: LAB_0056271e
// 00562724: ADD EDI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00562727: SUB ECX,ECX
// 00562729: DEC ECX
// 0056272a: XOR EAX,EAX
// 0056272c: SCASB.REPNE ES:EDI
// 0056272e: NOT ECX
// 00562730: DEC ECX
// 00562731: INC EBX
// 00562732: MOV EDI,ESI
// 00562734: ADD EDX,ECX
// 00562736: SUB ECX,ECX
// 00562738: DEC ECX
// 00562739: XOR EAX,EAX
// 0056273b: SCASB.REPNE ES:EDI
// 0056273d: NOT ECX
// 0056273f: DEC ECX
// 00562740: ADD ESI,0x328
// 00562746: ADD EDX,ECX
// 00562748: CMP EBX,EBP
// 0056274a: JL 0x0056271e
//   XREF to: 0056271e (CONDITIONAL_JUMP)
// 0056274c: LEA EAX,[EAX]
// 00562750: MOV EAX,EDX
//   Label: LAB_00562750
// 00562752: ADD ESP,0x4
// 00562755: POP EBP
// 00562756: POP EDI
// 00562757: POP ESI
// 00562758: POP EBX

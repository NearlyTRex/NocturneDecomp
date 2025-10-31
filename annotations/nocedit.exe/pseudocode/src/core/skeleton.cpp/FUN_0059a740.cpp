// Name: core_skeleton.cpp_FUN_0059a740
// Address: 0059a740
// Address Range: [[0059a740, 0059a776]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_FUN_0059a740()

#include "nocturne.h"

void core_skeleton_cpp_FUN_0059a740(void)

{
  char cVar1;
  char *pcVar2;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  pcVar2 = (char *)(in_stack_00000004 + 0x8f5c);
  do {
    cVar1 = *in_stack_00000008;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)(in_stack_00000004 + 0x8fac) = 0;
  return;
}


// Assembly code:
// 0059a740: PUSH ESI
//   Label: core_skeleton.cpp_FUN_0059a740
// 0059a741: PUSH EDI
// 0059a742: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0059a746: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0059a74a: LEA EDI,[EDX + 0x8f5c]
// 0059a750: PUSH EDI
// 0059a751: MOV AL,byte ptr [ESI]
//   Label: LAB_0059a751
// 0059a753: MOV byte ptr [EDI],AL
// 0059a755: CMP AL,0x0
// 0059a757: JZ 0x0059a769
//   XREF to: 0059a769 (CONDITIONAL_JUMP)
// 0059a759: MOV AL,byte ptr [ESI + 0x1]
// 0059a75c: ADD ESI,0x2
// 0059a75f: MOV byte ptr [EDI + 0x1],AL
// 0059a762: ADD EDI,0x2
// 0059a765: CMP AL,0x0
// 0059a767: JNZ 0x0059a751
//   XREF to: 0059a751 (CONDITIONAL_JUMP)
// 0059a769: POP EDI
//   Label: LAB_0059a769
// 0059a76a: MOV dword ptr [EDX + 0x8fac],0x0
// 0059a774: POP EDI
// 0059a775: POP ESI
// 0059a776: RET

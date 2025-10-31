// Name: core_event.cpp_FUN_004b1b5c
// Address: 004b1b5c
// Address Range: [[004b1b5c, 004b1bcc] [004b1bd0, 004b1bde] [004b1be0, 004b1be9] [004b1bec, 004b1bfe]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b1b5c()

#include "nocturne.h"

void core_event_cpp_FUN_004b1b5c(undefined4 param_1,uint *param_2,undefined4 param_3,uint *param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  cVar2 = (char)*param_2;
  uVar4 = (uint)param_4 & 7;
  while (uVar4 != 0) {
    *(char *)param_4 = cVar2;
    if (cVar2 == '\0') {
      return;
    }
    cVar2 = *(char *)((int)param_2 + 1);
    param_4 = (uint *)((int)param_4 + 1);
    param_2 = (uint *)((int)param_2 + 1);
    uVar4 = (uint)param_4 & 7;
  }
  while( true ) {
    lVar1 = *(longlong *)param_2;
    uVar4 = *param_2;
    if ((uVar4 & 0xff) == 0) {
      *(char *)param_4 = (char)uVar4;
      return;
    }
    if ((uVar4 & 0xff00) == 0) break;
    if ((uVar4 & 0xff0000) == 0) {
      *(undefined1 *)((int)param_4 + 2) = 0;
      break;
    }
    if ((uVar4 & 0xff000000) == 0) {
LAB_004b1be3:
      *param_4 = uVar4;
      return;
    }
    uVar3 = param_2[1];
    param_2 = param_2 + 2;
    if ((uVar3 & 0xff) == 0) {
      *(char *)(param_4 + 1) = (char)uVar3;
      goto LAB_004b1be3;
    }
    if ((uVar3 & 0xff00) == 0) {
LAB_004b1bd4:
      *(short *)(param_4 + 1) = (short)uVar3;
      *param_4 = uVar4;
      return;
    }
    if ((uVar3 & 0xff0000) == 0) {
      *(undefined1 *)((int)param_4 + 6) = 0;
      goto LAB_004b1bd4;
    }
    if ((uVar3 & 0xff000000) == 0) {
      *(longlong *)param_4 = (longlong)ROUND((float10)lVar1);
      return;
    }
    *(longlong *)param_4 = (longlong)ROUND((float10)lVar1);
    param_4 = param_4 + 2;
  }
  *(short *)param_4 = (short)uVar4;
  return;
}


// Assembly code:
// 004b1b5c: PUSH EBX
//   Label: core_event.cpp_FUN_004b1b5c
// 004b1b5d: MOV AL,byte ptr [EDX]
// 004b1b5f: TEST ECX,0x7
// 004b1b65: JZ 0x004b1b7f
//   XREF to: 004b1b7f (CONDITIONAL_JUMP)
// 004b1b67: TEST AL,AL
//   Label: LAB_004b1b67
// 004b1b69: MOV byte ptr [ECX],AL
// 004b1b6b: JZ 0x004b1bcb
//   XREF to: 004b1bcb (CONDITIONAL_JUMP)
// 004b1b6d: MOV AL,byte ptr [EDX + 0x1]
// 004b1b70: INC ECX
// 004b1b71: INC EDX
// 004b1b72: TEST ECX,0x7
// 004b1b78: JNZ 0x004b1b67
//   XREF to: 004b1b67 (CONDITIONAL_JUMP)
// 004b1b7a: JMP 0x004b1b7f
//   XREF to: 004b1b7f (UNCONDITIONAL_JUMP)
// 004b1b7c: FISTP qword ptr [ECX + -0x8]
//   Label: LAB_004b1b7c
// 004b1b7f: FILD qword ptr [EDX]
//   Label: LAB_004b1b7f
// 004b1b81: MOV EAX,dword ptr [EDX]
// 004b1b83: ADD ECX,0x8
// 004b1b86: TEST EAX,0xff
// 004b1b8b: JZ 0x004b1bf8
//   XREF to: 004b1bf8 (CONDITIONAL_JUMP)
// 004b1b8d: TEST EAX,0xff00
// 004b1b92: JZ 0x004b1bf0
//   XREF to: 004b1bf0 (CONDITIONAL_JUMP)
// 004b1b94: TEST EAX,0xff0000
// 004b1b99: JZ 0x004b1bec
//   XREF to: 004b1bec (CONDITIONAL_JUMP)
// 004b1b9b: TEST EAX,0xff000000
// 004b1ba0: JZ 0x004b1be3
//   XREF to: 004b1be3 (CONDITIONAL_JUMP)
// 004b1ba2: MOV EBX,dword ptr [EDX + 0x4]
// 004b1ba5: ADD EDX,0x8
// 004b1ba8: TEST EBX,0xff
// 004b1bae: JZ 0x004b1be0
//   XREF to: 004b1be0 (CONDITIONAL_JUMP)
// 004b1bb0: TEST EBX,0xff00
// 004b1bb6: JZ 0x004b1bd4
//   XREF to: 004b1bd4 (CONDITIONAL_JUMP)
// 004b1bb8: TEST EBX,0xff0000
// 004b1bbe: JZ 0x004b1bd0
//   XREF to: 004b1bd0 (CONDITIONAL_JUMP)
// 004b1bc0: TEST EBX,0xff000000
// 004b1bc6: JNZ 0x004b1b7c
//   XREF to: 004b1b7c (CONDITIONAL_JUMP)
// 004b1bc8: FISTP qword ptr [ECX + -0x8]
// 004b1bcb: POP EBX
//   Label: LAB_004b1bcb
// 004b1bcc: RET
// 004b1bd0: MOV byte ptr [ECX + -0x2],0x0
//   Label: LAB_004b1bd0
// 004b1bd4: MOV word ptr [ECX + -0x4],BX
//   Label: LAB_004b1bd4
// 004b1bd8: MOV dword ptr [ECX + -0x8],EAX
// 004b1bdb: FMULP ST0
// 004b1bdd: POP EBX
// 004b1bde: RET
// 004b1be0: MOV byte ptr [ECX + -0x4],BL
//   Label: LAB_004b1be0
// 004b1be3: MOV dword ptr [ECX + -0x8],EAX
//   Label: LAB_004b1be3
// 004b1be6: POP EBX
// 004b1be7: FMULP ST0
// 004b1be9: RET
// 004b1bec: MOV byte ptr [ECX + -0x6],0x0
//   Label: LAB_004b1bec
// 004b1bf0: MOV word ptr [ECX + -0x8],AX
//   Label: LAB_004b1bf0
// 004b1bf4: POP EBX
// 004b1bf5: FMULP ST0
// 004b1bf7: RET
// 004b1bf8: MOV byte ptr [ECX + -0x8],AL
//   Label: LAB_004b1bf8
// 004b1bfb: POP EBX
// 004b1bfc: FMULP ST0
// 004b1bfe: RET

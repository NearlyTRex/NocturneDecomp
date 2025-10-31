// Name: crt_unknown.c_FUN_0060d576
// Address: 0060d576
// Address Range: [[0060d576, 0060d5fe]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060d576()
// Cross-references:
//   crt_string.c_mbstrncpy_core_FUN_0060b670 (0060b6d7) at 0060b70c [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_reportStreamError_FUN_00606020
//   crt_stdio.c_stream_valid_FUN_00608cd1

#include "nocturne.h"

uint crt_unknown_c_FUN_0060d576(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  FILE *in_stack_00000004;
  
  iVar2 = crt_stdio_c_stream_valid_FUN_00608cd1(in_stack_00000004,1);
  if (iVar2 == 0) {
    in_stack_00000004->_cnt = 0;
    return 0xffffffff;
  }
  iVar2 = *(int *)((int)&in_stack_00000004->_cnt + *(int *)(in_stack_00000004->_ptr + 4));
  if (*(uint *)(iVar2 + 0x10) <= *(uint *)(iVar2 + 0x14)) {
    iVar4 = (**(code **)(*(int *)(iVar2 + 0x28) + 0x10))();
    if (iVar4 == -1) {
      uVar3 = 0xffffffff;
      goto LAB_0060d5b5;
    }
  }
  pbVar1 = *(byte **)(iVar2 + 0x14);
  *(byte **)(iVar2 + 0x14) = pbVar1 + 1;
  uVar3 = (uint)*pbVar1;
LAB_0060d5b5:
  if (uVar3 != 0xffffffff) {
    in_stack_00000004->_cnt = 1;
    return uVar3;
  }
  crt_stdio_c_reportStreamError_FUN_00606020
            ((FileEmbeddedData *)
             ((int)&in_stack_00000004->_ptr + *(int *)(in_stack_00000004->_ptr + 4)),4);
  in_stack_00000004->_cnt = 0;
  return 0xffffffff;
}


// Assembly code:
// 0060d576: PUSH EBX
//   Label: crt_unknown.c_FUN_0060d576
// 0060d577: PUSH ESI
// 0060d578: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060d57c: PUSH 0x1
// 0060d57e: PUSH EBX
// 0060d57f: MOV ESI,0xffffffff
// 0060d584: CALL crt_stdio.c_stream_valid_FUN_00608cd1
//   XREF to: 00608cd1 (UNCONDITIONAL_CALL)
// 0060d589: ADD ESP,0x8
// 0060d58c: TEST EAX,EAX
// 0060d58e: JZ 0x0060d5f7
//   XREF to: 0060d5f7 (CONDITIONAL_JUMP)
// 0060d590: MOV EAX,dword ptr [EBX]
// 0060d592: MOV EAX,dword ptr [EAX + 0x4]
// 0060d595: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4]
// 0060d599: MOV EDX,dword ptr [EAX + 0x14]
// 0060d59c: MOV ECX,dword ptr [EAX + 0x10]
// 0060d59f: MOV ESI,EAX
// 0060d5a1: CMP EDX,ECX
// 0060d5a3: JNC 0x0060d5c8
//   XREF to: 0060d5c8 (CONDITIONAL_JUMP)
// 0060d5a5: MOV EAX,dword ptr [ESI + 0x14]
//   Label: LAB_0060d5a5
// 0060d5a8: LEA EDX,[EAX + 0x1]
// 0060d5ab: MOV dword ptr [ESI + 0x14],EDX
// 0060d5ae: MOV AL,byte ptr [EAX]
// 0060d5b0: AND EAX,0xff
// 0060d5b5: MOV ESI,EAX
//   Label: LAB_0060d5b5
// 0060d5b7: CMP EAX,-0x1
// 0060d5ba: JZ 0x0060d5d9
//   XREF to: 0060d5d9 (CONDITIONAL_JUMP)
// 0060d5bc: MOV dword ptr [EBX + 0x4],0x1
// 0060d5c3: MOV EAX,ESI
// 0060d5c5: POP ESI
// 0060d5c6: POP EBX
// 0060d5c7: RET
// 0060d5c8: PUSH EAX
//   Label: LAB_0060d5c8
// 0060d5c9: MOV EDX,dword ptr [EAX + 0x28]
// 0060d5cc: CALL dword ptr [EDX + 0x10]
// 0060d5cf: ADD ESP,0x4
// 0060d5d2: CMP EAX,-0x1
// 0060d5d5: JNZ 0x0060d5a5
//   XREF to: 0060d5a5 (CONDITIONAL_JUMP)
// 0060d5d7: JMP 0x0060d5b5
//   XREF to: 0060d5b5 (UNCONDITIONAL_JUMP)
// 0060d5d9: MOV EAX,dword ptr [EBX]
//   Label: LAB_0060d5d9
// 0060d5db: MOV EAX,dword ptr [EAX + 0x4]
// 0060d5de: PUSH 0x4
// 0060d5e0: ADD EAX,EBX
// 0060d5e2: PUSH EAX
// 0060d5e3: CALL crt_stdio.c_reportStreamError_FUN_00606020
//   XREF to: 00606020 (UNCONDITIONAL_CALL)
// 0060d5e8: ADD ESP,0x8
// 0060d5eb: MOV dword ptr [EBX + 0x4],0x0
// 0060d5f2: MOV EAX,ESI
// 0060d5f4: POP ESI
// 0060d5f5: POP EBX
// 0060d5f6: RET
// 0060d5f7: MOV dword ptr [EBX + 0x4],EAX
//   Label: LAB_0060d5f7
// 0060d5fa: MOV EAX,ESI
// 0060d5fc: POP ESI
// 0060d5fd: POP EBX
// 0060d5fe: RET

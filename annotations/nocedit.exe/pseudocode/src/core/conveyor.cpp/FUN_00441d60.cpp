// Name: core_conveyor.cpp_FUN_00441d60
// Address: 00441d60
// Address Range: [[00441d60, 00441dec]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_00441d60()
// Function calls:
//   core_platfrm.cpp_CPlatform_LoadCourseSomething_FUN_0054ca20
//   core_xform.cpp_eulerToQuaternion_FUN_005f7b20

#include "nocturne.h"

/* Signature: undefined1 actors_other_conveyor.cpp_FUN_00441d60(undefined4 param_1) */

void core_conveyor_cpp_FUN_00441d60(void)

{
  BADSPACEBASE *in_ESP;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  int in_stack_00000004;
  undefined4 auStackY_17f4 [1525];
  CVector3f *in_stack_ffffffe4;
  undefined4 uStack_18;
  
  bVar5 = 0;
  puVar1 = (undefined4 *)(in_stack_00000004 + 0x328);
  if (puVar1 != (undefined4 *)(in_stack_00000004 + 0x20)) {
    *puVar1 = *(undefined4 *)(in_stack_00000004 + 0x20);
    *(undefined4 *)(in_stack_00000004 + 0x32c) = *(undefined4 *)(in_stack_00000004 + 0x24);
    *(undefined4 *)(in_stack_00000004 + 0x330) = *(undefined4 *)(in_stack_00000004 + 0x28);
  }
  if ((undefined4 *)(in_stack_00000004 + 0x31c) != puVar1) {
    *(undefined4 *)(in_stack_00000004 + 0x31c) = *puVar1;
    *(undefined4 *)(in_stack_00000004 + 800) = *(undefined4 *)(in_stack_00000004 + 0x32c);
    *(undefined4 *)(in_stack_00000004 + 0x324) = *(undefined4 *)(in_stack_00000004 + 0x330);
  }
  core_xform_cpp_eulerToQuaternion_FUN_005f7b20
            ((CQuaternion4f *)(in_stack_00000004 + 0x30),in_stack_ffffffe4);
  puVar1 = (undefined4 *)(in_stack_00000004 + 0x348 + (uint)bVar5 * -8);
  *(undefined4 *)(in_stack_00000004 + 0x344) = uStack_18;
  puVar2 = puVar1 + (uint)bVar5 * -2 + 1;
  *puVar1 = *(undefined4 *)(&stack0xffffffec + (uint)bVar5 * -8);
  *puVar2 = *(undefined4 *)(&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  puVar2[(uint)bVar5 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  puVar3 = (undefined4 *)(in_stack_00000004 + 0x338 + (uint)bVar5 * -8);
  puVar1 = (undefined4 *)(in_stack_00000004 + 0x348 + (uint)bVar5 * -8);
  *(undefined4 *)(in_stack_00000004 + 0x334) = *(undefined4 *)(in_stack_00000004 + 0x344);
  puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
  puVar2 = puVar1 + (uint)bVar5 * -2 + 1;
  *puVar3 = *puVar1;
  *puVar4 = *puVar2;
  puVar4[(uint)bVar5 * -2 + 1] = puVar2[(uint)bVar5 * -2 + 1];
  core_platfrm_cpp_CPlatform_LoadCourseSomething_FUN_0054ca20();
  *(undefined4 *)(in_stack_00000004 + 0xfc) = 1;
  return;
}


// Assembly code:
// 00441d60: PUSH EBX
//   Label: core_conveyor.cpp_FUN_00441d60
// 00441d61: PUSH ESI
// 00441d62: PUSH EDI
// 00441d63: SUB ESP,0x10
// 00441d66: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00441d6a: LEA EAX,[EBX + 0x328]
// 00441d70: LEA EDX,[EBX + 0x20]
// 00441d73: MOV ECX,EAX
// 00441d75: CMP EAX,EDX
// 00441d77: JNZ 0x00441ddb
//   XREF to: 00441ddb (CONDITIONAL_JUMP)
// 00441d79: LEA EAX,[EBX + 0x31c]
//   Label: LAB_00441d79
// 00441d7f: CMP EAX,ECX
// 00441d81: JZ 0x00441d93
//   XREF to: 00441d93 (CONDITIONAL_JUMP)
// 00441d83: MOV EDX,dword ptr [ECX]
// 00441d85: MOV dword ptr [EAX],EDX
// 00441d87: MOV EDX,dword ptr [ECX + 0x4]
// 00441d8a: MOV dword ptr [EAX + 0x4],EDX
// 00441d8d: MOV EDX,dword ptr [ECX + 0x8]
// 00441d90: MOV dword ptr [EAX + 0x8],EDX
// 00441d93: LEA EAX,[EBX + 0x30]
//   Label: LAB_00441d93
// 00441d96: PUSH EAX
// 00441d97: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x1c] (DATA)
// 00441d9b: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 00441da0: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x1c] (DATA)
// 00441da4: LEA EDI,[EBX + 0x344]
// 00441daa: ADD ESP,0x4
// 00441dad: MOVSD ES:EDI,ESI
// 00441dae: MOVSD ES:EDI,ESI
// 00441daf: MOVSD ES:EDI,ESI
// 00441db0: MOVSD ES:EDI,ESI
// 00441db1: LEA EDI,[EBX + 0x334]
// 00441db7: LEA ESI,[EBX + 0x344]
// 00441dbd: PUSH EBX
// 00441dbe: MOVSD ES:EDI,ESI
// 00441dbf: MOVSD ES:EDI,ESI
// 00441dc0: MOVSD ES:EDI,ESI
// 00441dc1: MOVSD ES:EDI,ESI
// 00441dc2: CALL core_platfrm.cpp_CPlatform_LoadCourseSomething_FUN_0054ca20
//   XREF to: 0054ca20 (UNCONDITIONAL_CALL)
// 00441dc7: ADD ESP,0x4
// 00441dca: MOV dword ptr [EBX + 0xfc],0x1
// 00441dd4: ADD ESP,0x10
// 00441dd7: POP EDI
// 00441dd8: POP ESI
// 00441dd9: POP EBX
// 00441dda: RET
// 00441ddb: MOV ESI,dword ptr [EDX]
//   Label: LAB_00441ddb
// 00441ddd: MOV dword ptr [EAX],ESI
// 00441ddf: MOV ESI,dword ptr [EDX + 0x4]
// 00441de2: MOV dword ptr [EAX + 0x4],ESI
// 00441de5: MOV ESI,dword ptr [EDX + 0x8]
// 00441de8: MOV dword ptr [EAX + 0x8],ESI
// 00441deb: JMP 0x00441d79
//   XREF to: 00441d79 (UNCONDITIONAL_JUMP)

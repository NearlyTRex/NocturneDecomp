// Name: shape_superopt.cpp_FUN_005cc6a0
// Address: 005cc6a0
// Address Range: [[005cc6a0, 005cc71e]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005cc6a0()
// Cross-references:
//   shape_superopt.cpp_DeletingTJunctionsMaybe_FUN_005d47b0 (005d47b0) at 005d522a [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005cc6a0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void shape_superopt_cpp_FUN_005cc6a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  *in_stack_00000004 = in_stack_0000000c;
  puVar3 = in_stack_00000004 + 1;
  puVar2 = in_stack_00000008;
  for (iVar1 = 3; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  puVar2 = in_stack_00000008 + 4;
  puVar3 = in_stack_00000004 + 4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  in_stack_00000004[0x17] = in_stack_00000008[0x17];
  in_stack_00000004[0x18] = in_stack_00000008[0x18];
  in_stack_00000004[0x10] = in_stack_00000008[0x10];
  in_stack_00000004[0x11] = in_stack_00000008[0x11];
  in_stack_00000004[0x12] = in_stack_00000008[0x12];
  in_stack_00000004[0x13] = in_stack_00000008[0x13];
  in_stack_00000004[0x14] = in_stack_00000008[0x14];
  in_stack_00000004[0x15] = in_stack_00000008[0x15];
  return;
}


// Assembly code:
// 005cc6a0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005cc6a0
// 005cc6a1: PUSH ESI
// 005cc6a2: PUSH EDI
// 005cc6a3: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005cc6a7: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005cc6ab: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005cc6af: MOV ECX,0xc
// 005cc6b4: LEA ESI,[EBX + 0x4]
// 005cc6b7: LEA EDI,[EDX + 0x4]
// 005cc6ba: MOV dword ptr [EDX],EAX
// 005cc6bc: PUSH EDI
// 005cc6bd: MOV EAX,ECX
// 005cc6bf: SHR ECX,0x2
// 005cc6c2: MOVSD.REP ES:EDI,ESI
// 005cc6c4: MOV CL,AL
// 005cc6c6: AND CL,0x3
// 005cc6c9: MOVSB.REP ES:EDI,ESI
// 005cc6cb: POP EDI
// 005cc6cc: MOV ECX,0x30
// 005cc6d1: LEA ESI,[EBX + 0x10]
// 005cc6d4: LEA EDI,[EDX + 0x10]
// 005cc6d7: PUSH EDI
// 005cc6d8: MOV EAX,ECX
// 005cc6da: SHR ECX,0x2
// 005cc6dd: MOVSD.REP ES:EDI,ESI
// 005cc6df: MOV CL,AL
// 005cc6e1: AND CL,0x3
// 005cc6e4: MOVSB.REP ES:EDI,ESI
// 005cc6e6: POP EDI
// 005cc6e7: MOV EAX,dword ptr [EBX + 0x5c]
// 005cc6ea: MOV dword ptr [EDX + 0x5c],EAX
// 005cc6ed: MOV EAX,dword ptr [EBX + 0x60]
// 005cc6f0: MOV dword ptr [EDX + 0x60],EAX
// 005cc6f3: LEA EAX,[EDX + 0x40]
// 005cc6f6: LEA EDX,[EBX + 0x40]
// 005cc6f9: MOV ECX,dword ptr [EDX]
// 005cc6fb: MOV dword ptr [EAX],ECX
// 005cc6fd: MOV ECX,dword ptr [EDX + 0x4]
// 005cc700: MOV dword ptr [EAX + 0x4],ECX
// 005cc703: MOV ECX,dword ptr [EDX + 0x8]
// 005cc706: MOV dword ptr [EAX + 0x8],ECX
// 005cc709: MOV ECX,dword ptr [EDX + 0xc]
// 005cc70c: MOV dword ptr [EAX + 0xc],ECX
// 005cc70f: MOV ECX,dword ptr [EDX + 0x10]
// 005cc712: MOV dword ptr [EAX + 0x10],ECX
// 005cc715: MOV ECX,dword ptr [EDX + 0x14]
// 005cc718: MOV dword ptr [EAX + 0x14],ECX
// 005cc71b: POP EDI
// 005cc71c: POP ESI
// 005cc71d: POP EBX
// 005cc71e: RET

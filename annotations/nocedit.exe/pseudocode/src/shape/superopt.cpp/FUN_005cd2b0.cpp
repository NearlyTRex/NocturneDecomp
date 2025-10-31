// Name: shape_superopt.cpp_FUN_005cd2b0
// Address: 005cd2b0
// Address Range: [[005cd2b0, 005cd340]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005cd2b0()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005cd2b0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void shape_superopt_cpp_FUN_005cd2b0(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  iVar2 = *(int *)(*in_stack_00000004 + 4);
  iVar1 = in_stack_00000004[1] * 0x38 + iVar2;
  if ((*(uint *)(iVar1 + 0x34) & in_stack_0000000c) == in_stack_0000000c) {
    *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | in_stack_00000008;
  }
  else {
    *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) & ~in_stack_00000008;
  }
  iVar1 = in_stack_00000004[2] * 0x38 + iVar2;
  if ((*(uint *)(iVar1 + 0x34) & in_stack_0000000c) == in_stack_0000000c) {
    *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | in_stack_00000008;
  }
  else {
    *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) & ~in_stack_00000008;
  }
  iVar2 = in_stack_00000004[3] * 0x38 + iVar2;
  if ((*(uint *)(iVar2 + 0x34) & in_stack_0000000c) == in_stack_0000000c) {
    *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) | in_stack_00000008;
    return;
  }
  *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) & ~in_stack_00000008;
  return;
}


// Assembly code:
// 005cd2b0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005cd2b0
// 005cd2b1: PUSH ESI
// 005cd2b2: PUSH EDI
// 005cd2b3: PUSH EBP
// 005cd2b4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005cd2b8: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cd2bc: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005cd2c0: MOV EAX,dword ptr [EDI + 0x4]
// 005cd2c3: SHL EAX,0x3
// 005cd2c6: MOV ESI,dword ptr [EDI]
// 005cd2c8: MOV EBX,EAX
// 005cd2ca: SHL EAX,0x3
// 005cd2cd: MOV ESI,dword ptr [ESI + 0x4]
// 005cd2d0: SUB EAX,EBX
// 005cd2d2: ADD EAX,ESI
// 005cd2d4: MOV EBX,dword ptr [EAX + 0x34]
// 005cd2d7: AND EBX,EDX
// 005cd2d9: CMP EBX,EDX
// 005cd2db: JZ 0x005cd324
//   XREF to: 005cd324 (CONDITIONAL_JUMP)
// 005cd2dd: MOV EBX,ECX
// 005cd2df: MOV EBP,dword ptr [EAX + 0x34]
// 005cd2e2: NOT EBX
// 005cd2e4: AND EBP,EBX
// 005cd2e6: MOV dword ptr [EAX + 0x34],EBP
// 005cd2e9: MOV EAX,dword ptr [EDI + 0x8]
//   Label: LAB_005cd2e9
// 005cd2ec: SHL EAX,0x3
// 005cd2ef: MOV EBX,EAX
// 005cd2f1: SHL EAX,0x3
// 005cd2f4: SUB EAX,EBX
// 005cd2f6: ADD EAX,ESI
// 005cd2f8: MOV EBX,dword ptr [EAX + 0x34]
// 005cd2fb: AND EBX,EDX
// 005cd2fd: CMP EBX,EDX
// 005cd2ff: JNZ 0x005cd329
//   XREF to: 005cd329 (CONDITIONAL_JUMP)
// 005cd301: OR dword ptr [EAX + 0x34],ECX
// 005cd304: MOV EAX,dword ptr [EDI + 0xc]
//   Label: LAB_005cd304
// 005cd307: SHL EAX,0x3
// 005cd30a: MOV EBX,EAX
// 005cd30c: SHL EAX,0x3
// 005cd30f: SUB EAX,EBX
// 005cd311: ADD EAX,ESI
// 005cd313: MOV EBX,dword ptr [EAX + 0x34]
// 005cd316: AND EBX,EDX
// 005cd318: CMP EBX,EDX
// 005cd31a: JNZ 0x005cd337
//   XREF to: 005cd337 (CONDITIONAL_JUMP)
// 005cd31c: OR dword ptr [EAX + 0x34],ECX
// 005cd31f: POP EBP
// 005cd320: POP EDI
// 005cd321: POP ESI
// 005cd322: POP EBX
// 005cd323: RET
// 005cd324: OR dword ptr [EAX + 0x34],ECX
//   Label: LAB_005cd324
// 005cd327: JMP 0x005cd2e9
//   XREF to: 005cd2e9 (UNCONDITIONAL_JUMP)
// 005cd329: MOV EBX,ECX
//   Label: LAB_005cd329
// 005cd32b: MOV EBP,dword ptr [EAX + 0x34]
// 005cd32e: NOT EBX
// 005cd330: AND EBP,EBX
// 005cd332: MOV dword ptr [EAX + 0x34],EBP
// 005cd335: JMP 0x005cd304
//   XREF to: 005cd304 (UNCONDITIONAL_JUMP)
// 005cd337: NOT ECX
//   Label: LAB_005cd337
// 005cd339: AND dword ptr [EAX + 0x34],ECX
// 005cd33c: POP EBP
// 005cd33d: POP EDI
// 005cd33e: POP ESI
// 005cd33f: POP EBX
// 005cd340: RET

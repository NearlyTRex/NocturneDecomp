// Name: shape_superopt.cpp_FUN_005cd120
// Address: 005cd120
// Address Range: [[005cd120, 005cd19d]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005cd120()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005cd120(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void shape_superopt_cpp_FUN_005cd120(void)

{
  uint *puVar1;
  int iVar2;
  int *in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  iVar2 = *(int *)(*in_stack_00000004 + 4);
  puVar1 = (uint *)(iVar2 + 0x30 + in_stack_00000004[1] * 0x38);
  *puVar1 = *puVar1 & in_stack_0000000c;
  puVar1 = (uint *)(iVar2 + 0x30 + in_stack_00000004[1] * 0x38);
  *puVar1 = *puVar1 | in_stack_00000008;
  puVar1 = (uint *)(iVar2 + 0x30 + in_stack_00000004[2] * 0x38);
  *puVar1 = *puVar1 & in_stack_0000000c;
  puVar1 = (uint *)(iVar2 + 0x30 + in_stack_00000004[2] * 0x38);
  *puVar1 = *puVar1 | in_stack_00000008;
  puVar1 = (uint *)(iVar2 + 0x30 + in_stack_00000004[3] * 0x38);
  *puVar1 = *puVar1 & in_stack_0000000c;
  puVar1 = (uint *)(iVar2 + 0x30 + in_stack_00000004[3] * 0x38);
  *puVar1 = *puVar1 | in_stack_00000008;
  return;
}


// Assembly code:
// 005cd120: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005cd120
// 005cd121: PUSH ESI
// 005cd122: PUSH EDI
// 005cd123: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005cd127: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005cd12b: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005cd12f: MOV EAX,dword ptr [ECX + 0x4]
// 005cd132: SHL EAX,0x3
// 005cd135: MOV EDX,dword ptr [ECX]
// 005cd137: MOV EBX,EAX
// 005cd139: SHL EAX,0x3
// 005cd13c: MOV EDX,dword ptr [EDX + 0x4]
// 005cd13f: SUB EAX,EBX
// 005cd141: AND dword ptr [EDX + EAX*0x1 + 0x30],ESI
// 005cd145: MOV EAX,dword ptr [ECX + 0x4]
// 005cd148: SHL EAX,0x3
// 005cd14b: MOV EBX,EAX
// 005cd14d: SHL EAX,0x3
// 005cd150: SUB EAX,EBX
// 005cd152: OR dword ptr [EDX + EAX*0x1 + 0x30],EDI
// 005cd156: MOV EAX,dword ptr [ECX + 0x8]
// 005cd159: SHL EAX,0x3
// 005cd15c: MOV EBX,EAX
// 005cd15e: SHL EAX,0x3
// 005cd161: SUB EAX,EBX
// 005cd163: AND dword ptr [EDX + EAX*0x1 + 0x30],ESI
// 005cd167: MOV EAX,dword ptr [ECX + 0x8]
// 005cd16a: SHL EAX,0x3
// 005cd16d: MOV EBX,EAX
// 005cd16f: SHL EAX,0x3
// 005cd172: SUB EAX,EBX
// 005cd174: OR dword ptr [EDX + EAX*0x1 + 0x30],EDI
// 005cd178: MOV EAX,dword ptr [ECX + 0xc]
// 005cd17b: SHL EAX,0x3
// 005cd17e: MOV EBX,EAX
// 005cd180: SHL EAX,0x3
// 005cd183: SUB EAX,EBX
// 005cd185: AND dword ptr [EDX + EAX*0x1 + 0x30],ESI
// 005cd189: MOV EAX,dword ptr [ECX + 0xc]
// 005cd18c: SHL EAX,0x3
// 005cd18f: MOV ECX,EAX
// 005cd191: SHL EAX,0x3
// 005cd194: SUB EAX,ECX
// 005cd196: OR dword ptr [EDX + EAX*0x1 + 0x30],EDI
// 005cd19a: POP EDI
// 005cd19b: POP ESI
// 005cd19c: POP EBX
// 005cd19d: RET

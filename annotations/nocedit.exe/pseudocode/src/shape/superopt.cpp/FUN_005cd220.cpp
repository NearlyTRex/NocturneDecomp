// Name: shape_superopt.cpp_FUN_005cd220
// Address: 005cd220
// Address Range: [[005cd220, 005cd2ac]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005cd220()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005cd220(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void shape_superopt_cpp_FUN_005cd220(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int *in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  iVar2 = *(int *)(*in_stack_00000004 + 4);
  puVar1 = (uint *)(iVar2 + 0x34 + in_stack_00000004[1] * 0x38);
  *puVar1 = *puVar1 & in_stack_0000000c;
  puVar1 = (uint *)(iVar2 + 0x34 + in_stack_00000004[1] * 0x38);
  *puVar1 = *puVar1 | in_stack_00000008;
  puVar1 = (uint *)(iVar2 + 0x34 + in_stack_00000004[2] * 0x38);
  *puVar1 = *puVar1 & in_stack_0000000c;
  puVar1 = (uint *)(iVar2 + 0x34 + in_stack_00000004[2] * 0x38);
  *puVar1 = *puVar1 | in_stack_00000008;
  puVar1 = (uint *)(iVar2 + 0x34 + in_stack_00000004[3] * 0x38);
  *puVar1 = *puVar1 & in_stack_0000000c;
  puVar1 = (uint *)(iVar2 + 0x34 + in_stack_00000004[3] * 0x38);
  *puVar1 = *puVar1 | in_stack_00000008;
  uVar3 = in_stack_00000004[0x18];
  in_stack_00000004[0x18] = uVar3 & in_stack_0000000c;
  in_stack_00000004[0x18] = uVar3 & in_stack_0000000c | in_stack_00000008;
  return;
}


// Assembly code:
// 005cd220: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005cd220
// 005cd221: PUSH ESI
// 005cd222: PUSH EDI
// 005cd223: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005cd227: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005cd22b: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005cd22f: MOV EDX,dword ptr [EAX + 0x4]
// 005cd232: SHL EDX,0x3
// 005cd235: MOV ECX,dword ptr [EAX]
// 005cd237: MOV EBX,EDX
// 005cd239: SHL EDX,0x3
// 005cd23c: MOV ECX,dword ptr [ECX + 0x4]
// 005cd23f: SUB EDX,EBX
// 005cd241: AND dword ptr [ECX + EDX*0x1 + 0x34],EDI
// 005cd245: MOV EDX,dword ptr [EAX + 0x4]
// 005cd248: SHL EDX,0x3
// 005cd24b: MOV EBX,EDX
// 005cd24d: SHL EDX,0x3
// 005cd250: SUB EDX,EBX
// 005cd252: OR dword ptr [ECX + EDX*0x1 + 0x34],ESI
// 005cd256: MOV EDX,dword ptr [EAX + 0x8]
// 005cd259: SHL EDX,0x3
// 005cd25c: MOV EBX,EDX
// 005cd25e: SHL EDX,0x3
// 005cd261: SUB EDX,EBX
// 005cd263: AND dword ptr [ECX + EDX*0x1 + 0x34],EDI
// 005cd267: MOV EDX,dword ptr [EAX + 0x8]
// 005cd26a: SHL EDX,0x3
// 005cd26d: MOV EBX,EDX
// 005cd26f: SHL EDX,0x3
// 005cd272: SUB EDX,EBX
// 005cd274: OR dword ptr [ECX + EDX*0x1 + 0x34],ESI
// 005cd278: MOV EDX,dword ptr [EAX + 0xc]
// 005cd27b: SHL EDX,0x3
// 005cd27e: MOV EBX,EDX
// 005cd280: SHL EDX,0x3
// 005cd283: SUB EDX,EBX
// 005cd285: AND dword ptr [ECX + EDX*0x1 + 0x34],EDI
// 005cd289: MOV EDX,dword ptr [EAX + 0xc]
// 005cd28c: SHL EDX,0x3
// 005cd28f: MOV EBX,EDX
// 005cd291: SHL EDX,0x3
// 005cd294: SUB EDX,EBX
// 005cd296: OR dword ptr [ECX + EDX*0x1 + 0x34],ESI
// 005cd29a: MOV EDX,dword ptr [EAX + 0x60]
// 005cd29d: AND EDX,EDI
// 005cd29f: MOV ECX,EDX
// 005cd2a1: MOV dword ptr [EAX + 0x60],EDX
// 005cd2a4: OR ECX,ESI
// 005cd2a6: MOV dword ptr [EAX + 0x60],ECX
// 005cd2a9: POP EDI
// 005cd2aa: POP ESI
// 005cd2ab: POP EBX
// 005cd2ac: RET

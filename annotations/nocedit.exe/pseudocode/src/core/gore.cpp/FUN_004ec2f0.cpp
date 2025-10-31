// Name: core_gore.cpp_FUN_004ec2f0
// Address: 004ec2f0
// Address Range: [[004ec2f0, 004ec38e]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ec2f0()
// Cross-references:
//   core_gore.cpp_FUN_004edb40 (004edb40) at 004edb62 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065f024
// Function calls:
//   core_actor.cpp_FUN_0040cc70

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_gore.cpp_FUN_004ec2f0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_gore_cpp_FUN_004ec2f0(void)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  float *in_stack_00000008;
  undefined4 in_stack_00000010;
  
  in_stack_00000004[4] = 0;
  if ((float *)(in_stack_00000004 + 1) != in_stack_00000008) {
    in_stack_00000004[1] = *in_stack_00000008;
    in_stack_00000004[2] = in_stack_00000008[1];
    in_stack_00000004[3] = in_stack_00000008[2];
  }
  uVar1 = core_actor_cpp_FUN_0040cc70();
  in_stack_00000004[10] = uVar1;
  in_stack_00000004[9] = 0;
  in_stack_00000004[0xb] = (int)ROUND(*in_stack_00000008 * _DAT_0065f024);
  in_stack_00000004[0xc] = (int)ROUND(in_stack_00000008[1] * _DAT_0065f024);
  in_stack_00000004[0xd] = (int)ROUND(in_stack_00000008[2] * _DAT_0065f024);
  in_stack_00000004[0xe] = 0;
  in_stack_00000004[0xf] = 0xffff;
  in_stack_00000004[0x10] = 0;
  *in_stack_00000004 = 0;
  in_stack_00000004[8] = 0;
  in_stack_00000004[5] = in_stack_00000010;
  in_stack_00000004[7] = in_stack_00000004[8];
  in_stack_00000004[6] = in_stack_00000004[7];
  return;
}


// Assembly code:
// 004ec2f0: PUSH EBX
//   Label: core_gore.cpp_FUN_004ec2f0
// 004ec2f1: PUSH ESI
// 004ec2f2: PUSH EDI
// 004ec2f3: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004ec2f7: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004ec2fb: LEA EAX,[ESI + 0x4]
// 004ec2fe: MOV dword ptr [ESI + 0x10],0x0
// 004ec305: CMP EAX,EDI
// 004ec307: JZ 0x004ec319
//   XREF to: 004ec319 (CONDITIONAL_JUMP)
// 004ec309: MOV EDX,dword ptr [EDI]
// 004ec30b: MOV dword ptr [EAX],EDX
// 004ec30d: MOV EDX,dword ptr [EDI + 0x4]
// 004ec310: MOV dword ptr [EAX + 0x4],EDX
// 004ec313: MOV EDX,dword ptr [EDI + 0x8]
// 004ec316: MOV dword ptr [EAX + 0x8],EDX
// 004ec319: PUSH 0x3
//   Label: LAB_004ec319
// 004ec31b: PUSH 0x0
// 004ec31d: LEA EBX,[ESI + 0x2c]
// 004ec320: CALL core_actor.cpp_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 004ec325: ADD ESP,0x8
// 004ec328: MOV dword ptr [ESI + 0x28],EAX
// 004ec32b: MOV EAX,EDI
// 004ec32d: MOV dword ptr [ESI + 0x24],0x0
// 004ec334: FLD float ptr [EAX]
// 004ec336: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec33c: FISTP dword ptr [EBX]
// 004ec33e: FLD float ptr [EAX + 0x4]
// 004ec341: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec347: FISTP dword ptr [EBX + 0x4]
// 004ec34a: FLD float ptr [EAX + 0x8]
// 004ec34d: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec353: FISTP dword ptr [EBX + 0x8]
// 004ec356: MOV dword ptr [ESI + 0x38],0x0
// 004ec35d: MOV dword ptr [ESI + 0x3c],0xffff
// 004ec364: MOV dword ptr [ESI + 0x40],0x0
// 004ec36b: MOV dword ptr [ESI],0x0
// 004ec371: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004ec375: MOV dword ptr [ESI + 0x20],0x0
// 004ec37c: MOV dword ptr [ESI + 0x14],EAX
// 004ec37f: MOV EAX,dword ptr [ESI + 0x20]
// 004ec382: MOV dword ptr [ESI + 0x1c],EAX
// 004ec385: MOV EAX,dword ptr [ESI + 0x1c]
// 004ec388: MOV dword ptr [ESI + 0x18],EAX
// 004ec38b: POP EDI
// 004ec38c: POP ESI
// 004ec38d: POP EBX
// 004ec38e: RET

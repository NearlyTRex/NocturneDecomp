// Name: core_gore.cpp_FUN_004ec390
// Address: 004ec390
// Address Range: [[004ec390, 004ec462]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ec390()
// Cross-references:
//   core_gore.cpp_FUN_004edb70 (004edb70) at 004edb98 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065f024
//   undefined4 DAT_0065f028
// Function calls:
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   crt_math.c_atan2_FUN_006013b1

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_gore.cpp_FUN_004ec390(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

void core_gore_cpp_FUN_004ec390(void)

{
  int iVar1;
  float10 fVar2;
  undefined4 *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  in_stack_00000004[4] = 1;
  if ((float *)(in_stack_00000004 + 1) != in_stack_00000008) {
    in_stack_00000004[1] = *in_stack_00000008;
    in_stack_00000004[2] = in_stack_00000008[1];
    in_stack_00000004[3] = in_stack_00000008[2];
  }
  fVar2 = crt_math_c_atan2_FUN_006013b1
                    ((float10)in_stack_0000000c[1],
                     SQRT((float10)*in_stack_0000000c * (float10)*in_stack_0000000c +
                          (float10)in_stack_0000000c[2] * (float10)in_stack_0000000c[2]));
  in_stack_00000004[8] = 0;
  in_stack_00000004[6] = (float)-fVar2;
  fVar2 = crt_math_c_atan2_FUN_006013b1((float10)*in_stack_0000000c,(float10)in_stack_0000000c[2]);
  in_stack_00000004[7] = (float)fVar2;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,3);
  in_stack_00000004[10] = iVar1;
  in_stack_00000004[9] = 0;
  in_stack_00000004[0xb] = (int)ROUND(*in_stack_00000008 * _DAT_0065f024);
  in_stack_00000004[0xc] = (int)ROUND(in_stack_00000008[1] * _DAT_0065f024);
  in_stack_00000004[0xd] = (int)ROUND(in_stack_00000008[2] * _DAT_0065f024);
  in_stack_00000004[0xe] = (int)ROUND(*in_stack_0000000c * _DAT_0065f028);
  in_stack_00000004[0xf] = (int)ROUND(in_stack_0000000c[1] * _DAT_0065f028);
  in_stack_00000004[0x10] = (int)ROUND(in_stack_0000000c[2] * _DAT_0065f028);
  *in_stack_00000004 = 0;
  in_stack_00000004[5] = in_stack_0000000c;
  return;
}


// Assembly code:
// 004ec390: PUSH EBX
//   Label: core_gore.cpp_FUN_004ec390
// 004ec391: PUSH ESI
// 004ec392: PUSH EDI
// 004ec393: PUSH EBP
// 004ec394: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ec398: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004ec39c: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004ec3a0: LEA EAX,[ESI + 0x4]
// 004ec3a3: MOV dword ptr [ESI + 0x10],0x1
// 004ec3aa: CMP EAX,EBP
// 004ec3ac: JZ 0x004ec3bf
//   XREF to: 004ec3bf (CONDITIONAL_JUMP)
// 004ec3ae: MOV EDX,dword ptr [EBP]
// 004ec3b1: MOV dword ptr [EAX],EDX
// 004ec3b3: MOV EDX,dword ptr [EBP + 0x4]
// 004ec3b6: MOV dword ptr [EAX + 0x4],EDX
// 004ec3b9: MOV EDX,dword ptr [EBP + 0x8]
// 004ec3bc: MOV dword ptr [EAX + 0x8],EDX
// 004ec3bf: FLD float ptr [EDI + 0x8]
//   Label: LAB_004ec3bf
// 004ec3c2: FMUL ST0
// 004ec3c4: FLD float ptr [EDI]
// 004ec3c6: FMUL ST0
// 004ec3c8: FADDP
// 004ec3ca: FSQRT
// 004ec3cc: FLD float ptr [EDI + 0x4]
// 004ec3cf: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 004ec3d4: MOV dword ptr [ESI + 0x20],0x0
// 004ec3db: FCHS
// 004ec3dd: FSTP float ptr [ESI + 0x18]
// 004ec3e0: FLD float ptr [EDI + 0x8]
// 004ec3e3: FLD float ptr [EDI]
// 004ec3e5: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 004ec3ea: PUSH 0x3
// 004ec3ec: LEA EBX,[ESI + 0x2c]
// 004ec3ef: PUSH 0x0
// 004ec3f1: FSTP float ptr [ESI + 0x1c]
// 004ec3f4: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 004ec3f9: ADD ESP,0x8
// 004ec3fc: MOV dword ptr [ESI + 0x28],EAX
// 004ec3ff: MOV EAX,EBP
// 004ec401: MOV dword ptr [ESI + 0x24],0x0
// 004ec408: FLD float ptr [EAX]
// 004ec40a: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec410: FISTP dword ptr [EBX]
// 004ec412: FLD float ptr [EAX + 0x4]
// 004ec415: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec41b: FISTP dword ptr [EBX + 0x4]
// 004ec41e: FLD float ptr [EAX + 0x8]
// 004ec421: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec427: FISTP dword ptr [EBX + 0x8]
// 004ec42a: LEA EBX,[ESI + 0x38]
// 004ec42d: MOV EAX,EDI
// 004ec42f: FLD float ptr [EAX]
// 004ec431: FMUL float ptr [0x0065f028]
//   XREF to: 0065f028 (READ)
// 004ec437: FISTP dword ptr [EBX]
// 004ec439: FLD float ptr [EAX + 0x4]
// 004ec43c: FMUL float ptr [0x0065f028]
//   XREF to: 0065f028 (READ)
// 004ec442: FISTP dword ptr [EBX + 0x4]
// 004ec445: FLD float ptr [EAX + 0x8]
// 004ec448: FMUL float ptr [0x0065f028]
//   XREF to: 0065f028 (READ)
// 004ec44e: FISTP dword ptr [EBX + 0x8]
// 004ec451: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004ec455: MOV dword ptr [ESI],0x0
// 004ec45b: MOV dword ptr [ESI + 0x14],EAX
// 004ec45e: POP EBP
// 004ec45f: POP EDI
// 004ec460: POP ESI
// 004ec461: POP EBX
// 004ec462: RET

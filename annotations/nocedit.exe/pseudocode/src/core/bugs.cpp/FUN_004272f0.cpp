// Name: core_bugs.cpp_FUN_004272f0
// Address: 004272f0
// Address Range: [[004272f0, 004273f1]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004272f0()
// Cross-references:
//   core_bugs.cpp_FUN_00424e50 (00424e50) at 00425087 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425cc0 (00425cc0) at 00425dc1 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425fe0 (00425fe0) at 00426161 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00426410 (00426410) at 00426415 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004278d0 (004278d0) at 004279a1 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00616e5b = -0.3333333
//   float FLOAT_00616e5f = 0.3333333
// Function calls:
//   core_box.cpp_CBoundingBox3D_expand_FUN_00420240

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_004272f0(CCharacter* param_1) */

void core_bugs_cpp_FUN_004272f0(void)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3f *point;
  int iVar7;
  int in_stack_00000004;
  
  puVar1 = (undefined4 *)(in_stack_00000004 + 0xbecc);
  if ((undefined4 *)(in_stack_00000004 + 0x199cc) != puVar1) {
    *(undefined4 *)(in_stack_00000004 + 0x199cc) = *puVar1;
    *(undefined4 *)(in_stack_00000004 + 0x199d0) = *(undefined4 *)(in_stack_00000004 + 0xbed0);
    *(undefined4 *)(in_stack_00000004 + 0x199d4) = *(undefined4 *)(in_stack_00000004 + 0xbed4);
  }
  if ((undefined4 *)(in_stack_00000004 + 0x199d8) != puVar1) {
    *(undefined4 *)(in_stack_00000004 + 0x199d8) = *puVar1;
    *(undefined4 *)(in_stack_00000004 + 0x199dc) = *(undefined4 *)(in_stack_00000004 + 0xbed0);
    *(undefined4 *)(in_stack_00000004 + 0x199e0) = *(undefined4 *)(in_stack_00000004 + 0xbed4);
  }
  iVar7 = 1;
  if (1 < *(int *)(in_stack_00000004 + 0xbec0)) {
    point = (CVector3f *)(in_stack_00000004 + 0xbf0c);
    do {
      iVar7 = iVar7 + 1;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                ((CBoundingBox3D *)(in_stack_00000004 + 0x199cc),point);
      point = (CVector3f *)&point[5].y;
    } while (iVar7 < *(int *)(in_stack_00000004 + 0xbec0));
  }
  fVar2 = *(float *)(in_stack_00000004 + 0x199cc) + FLOAT_00616e5b;
  fVar3 = *(float *)(in_stack_00000004 + 0x199d4) + FLOAT_00616e5b;
  fVar4 = *(float *)(in_stack_00000004 + 0x199d8) + FLOAT_00616e5f;
  fVar5 = *(float *)(in_stack_00000004 + 0x199dc) + FLOAT_00616e5f;
  fVar6 = *(float *)(in_stack_00000004 + 0x199e0) + FLOAT_00616e5f;
  *(float *)(in_stack_00000004 + 0x199d0) = *(float *)(in_stack_00000004 + 0x199d0) + FLOAT_00616e5b
  ;
  *(float *)(in_stack_00000004 + 0x199d4) = fVar3;
  *(float *)(in_stack_00000004 + 0x199d8) = fVar4;
  *(float *)(in_stack_00000004 + 0x199dc) = fVar5;
  *(float *)(in_stack_00000004 + 0x199e0) = fVar6;
  *(float *)(in_stack_00000004 + 0x199cc) = fVar2;
  return;
}


// Assembly code:
// 004272f0: PUSH EBX
//   Label: core_bugs.cpp_FUN_004272f0
// 004272f1: PUSH ESI
// 004272f2: PUSH EDI
// 004272f3: PUSH EBP
// 004272f4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004272f8: LEA EBX,[EDI + 0x199cc]
// 004272fe: LEA ESI,[EDI + 0xbecc]
// 00427304: MOV EAX,EBX
// 00427306: MOV EBP,ESI
// 00427308: CMP EBX,ESI
// 0042730a: JNZ 0x004273dd
//   XREF to: 004273dd (CONDITIONAL_JUMP)
// 00427310: LEA EBX,[EAX + 0xc]
//   Label: LAB_00427310
// 00427313: CMP EBX,EBP
// 00427315: JZ 0x00427328
//   XREF to: 00427328 (CONDITIONAL_JUMP)
// 00427317: MOV EAX,dword ptr [EBP]
// 0042731a: MOV dword ptr [EBX],EAX
// 0042731c: MOV EAX,dword ptr [EBP + 0x4]
// 0042731f: MOV dword ptr [EBX + 0x4],EAX
// 00427322: MOV EAX,dword ptr [EBP + 0x8]
// 00427325: MOV dword ptr [EBX + 0x8],EAX
// 00427328: MOV ESI,0x1
//   Label: LAB_00427328
// 0042732d: CMP ESI,dword ptr [EDI + 0xbec0]
// 00427333: JGE 0x00427360
//   XREF to: 00427360 (CONDITIONAL_JUMP)
// 00427335: LEA EBP,[EDI + 0x199cc]
// 0042733b: LEA EBX,[EDI + 0xbf0c]
// 00427341: PUSH EBX
//   Label: LAB_00427341
// 00427342: PUSH EBP
// 00427343: INC ESI
// 00427344: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 00427349: ADD EBX,0x40
// 0042734c: MOV ECX,dword ptr [EDI + 0xbec0]
// 00427352: ADD ESP,0x8
// 00427355: CMP ESI,ECX
// 00427357: JL 0x00427341
//   XREF to: 00427341 (CONDITIONAL_JUMP)
// 00427359: LEA EAX,[EAX]
// 0042735f: NOP
// 00427360: FLD float ptr [EDI + 0x199cc]
//   Label: LAB_00427360
// 00427366: FLD float ptr [EDI + 0x199d0]
// 0042736c: FLD float ptr [EDI + 0x199d4]
// 00427372: FLD float ptr [EDI + 0x199d8]
// 00427378: FLD float ptr [EDI + 0x199dc]
// 0042737e: FLD float ptr [EDI + 0x199e0]
// 00427384: FXCH ST5
// 00427386: FLD float ptr [0x00616e5b]
//   XREF to: 00616e5b (READ)
// 0042738c: FXCH
// 0042738e: FADD ST0,ST1
// 00427390: FXCH ST5
// 00427392: FADD ST0,ST1
// 00427394: FXCH ST4
// 00427396: FADDP
// 00427398: FXCH ST2
// 0042739a: FLD float ptr [0x00616e5f]
//   XREF to: 00616e5f (READ)
// 004273a0: FXCH
// 004273a2: FADD ST0,ST1
// 004273a4: FXCH ST2
// 004273a6: FADD ST0,ST1
// 004273a8: FXCH ST6
// 004273aa: FADDP
// 004273ac: FXCH ST3
// 004273ae: FSTP float ptr [EDI + 0x199d0]
// 004273b4: FXCH
// 004273b6: FSTP float ptr [EDI + 0x199d4]
// 004273bc: FSTP float ptr [EDI + 0x199d8]
// 004273c2: FXCH ST2
// 004273c4: FSTP float ptr [EDI + 0x199dc]
// 004273ca: FXCH
// 004273cc: FSTP float ptr [EDI + 0x199e0]
// 004273d2: FSTP float ptr [EDI + 0x199cc]
// 004273d8: POP EBP
// 004273d9: POP EDI
// 004273da: POP ESI
// 004273db: POP EBX
// 004273dc: RET
// 004273dd: MOV EDX,dword ptr [ESI]
//   Label: LAB_004273dd
// 004273df: MOV dword ptr [EBX],EDX
// 004273e1: MOV EDX,dword ptr [ESI + 0x4]
// 004273e4: MOV dword ptr [EBX + 0x4],EDX
// 004273e7: MOV EDX,dword ptr [ESI + 0x8]
// 004273ea: MOV dword ptr [EBX + 0x8],EDX
// 004273ed: JMP 0x00427310
//   XREF to: 00427310 (UNCONDITIONAL_JUMP)

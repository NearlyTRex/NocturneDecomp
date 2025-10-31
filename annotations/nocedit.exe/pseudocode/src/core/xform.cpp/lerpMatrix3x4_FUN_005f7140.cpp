// Name: core_xform.cpp_lerpMatrix3x4_FUN_005f7140
// Address: 005f7140
// Address Range: [[005f7140, 005f727d]]
// Convention: __cdecl
// Signature: void core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042d090 (0042d090) at 0042d2ac [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c07b0 (005c07b0) at 005c0b63 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_FUN_005db9d0 (005db9d0) at 005dba11 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_FUN_005dbb70 (005dbb70) at 005dbbc2 [UNCONDITIONAL_CALL]
// Function calls:
//   core_xform.cpp_matrixToQuaternion_FUN_005f7420
//   core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
//   core_xform.cpp_slerpQuaternion_FUN_005f77e0

#include "nocturne.h"

void __cdecl
core_xform_cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,float t)

{
  float fVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  float *unaff_ESI;
  CMatrix3x4f *pCVar3;
  CQuaternion4f *pCVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined4 auStackY_184c [1500];
  double dVar7;
  CMatrix3x3f *matrix_ptr;
  float in_stack_ffffff30;
  undefined1 auStack_c8 [8];
  CMatrix3x4f CStack_c0;
  CQuaternion4f aCStack_90 [2];
  float local_70;
  undefined4 uStack_6c;
  CQuaternion4f CStack_68;
  undefined4 uStack_58;
  undefined4 auStack_54 [4];
  undefined4 uStack_44;
  undefined4 local_40 [2];
  CQuaternion4f CStack_38;
  undefined4 uStack_28;
  CQuaternion4f CStack_24;
  undefined4 auStack_14 [2];
  
  bVar6 = 0;
  dVar7 = (double)t;
  if (dVar7 <= 0.0) {
    iVar2 = 0xc;
    pCVar4 = CStack_c0.m + 2;
    pCVar3 = matrix_a;
  }
  else if (dVar7 < 1.0) {
    core_xform_cpp_matrixToQuaternion_FUN_005f7420(matrix_a->m,SUB84(dVar7,0));
    matrix_ptr = (CMatrix3x3f *)((ulonglong)dVar7 >> 0x20);
    local_70 = CStack_24.y;
    puVar5 = (undefined4 *)((int)&CStack_68 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    (&uStack_6c)[(uint)bVar6 * -2] = auStack_14[(uint)bVar6 * -2 + -1];
    *puVar5 = auStack_14[(uint)bVar6 * -2 + (uint)bVar6 * -2];
    puVar5[(uint)bVar6 * -2 + 1] =
         (auStack_14 + (uint)bVar6 * -2 + (uint)bVar6 * -2)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_matrixToQuaternion_FUN_005f7420(matrix_b->m,matrix_ptr);
    local_40[1] = uStack_58;
    puVar5 = (undefined4 *)((int)&CStack_38 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4);
    *(undefined4 *)((int)&CStack_38 + (uint)bVar6 * -8) = auStack_54[(uint)bVar6 * -2];
    *puVar5 = auStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    puVar5[(uint)bVar6 * -2 + 1] =
         (auStack_54 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              (&CStack_68,&CStack_38,(CQuaternion4f *)t,in_stack_ffffff30);
    uStack_28 = uStack_44;
    *(undefined4 *)((int)&CStack_24 + (uint)bVar6 * -8) = local_40[(uint)bVar6 * -2];
    auStack_14[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -3] =
         local_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    (auStack_14 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + -3)[(uint)bVar6 * -2 + 1] =
         (local_40 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)(auStack_c8 + 4),&CStack_24);
    fVar1 = 1.0 - (float)(double)auStack_c8;
    CStack_c0.m[0].z = matrix_b->m[0].z * t + matrix_a->m[0].z * fVar1;
    CStack_c0.m[1].z = matrix_b->m[1].z * t + matrix_a->m[1].z * fVar1;
    pCVar4 = aCStack_90;
    iVar2 = 0xc;
    pCVar3 = &CStack_c0;
    CStack_c0.m[2].z = matrix_b->m[2].z * t + fVar1 * matrix_a->m[2].z;
  }
  else {
    iVar2 = 0xc;
    pCVar3 = matrix_b;
    pCVar4 = CStack_c0.m + 2;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar4 = (CQuaternion4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
  }
  pCVar4 = aCStack_90;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = pCVar4->w;
    pCVar4 = (CQuaternion4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}


// Assembly code:
// 005f7140: PUSH EBX
//   Label: core_xform.cpp_lerpMatrix3x4_FUN_005f7140
// 005f7141: PUSH EDI
// 005f7142: PUSH EBP
// 005f7143: MOV EBP,ESP
// 005f7145: SUB ESP,0xcc
// 005f714b: AND ESP,0xfffffff8
// 005f714e: MOV EBX,ESI
// 005f7150: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005f7153: FLDZ
// 005f7155: FXCH
// 005f7157: FSTP double ptr [ESP]
//   XREF to: Stack[-0xd8] (DATA)
// 005f715a: FCOMP double ptr [ESP]
//   XREF to: Stack[-0xd8] (DATA)
// 005f715d: FNSTSW AX
// 005f715f: SAHF
// 005f7160: JNC 0x005f718f
//   XREF to: 005f718f (CONDITIONAL_JUMP)
// 005f7162: FLD1
// 005f7164: FCOMP double ptr [ESP]
//   XREF to: Stack[-0xd8] (DATA)
// 005f7167: FNSTSW AX
// 005f7169: SAHF
// 005f716a: JA 0x005f719d
//   XREF to: 005f719d (CONDITIONAL_JUMP)
// 005f716c: MOV ECX,0xc
// 005f7171: LEA EDI,[ESP + 0x38]
//   XREF to: Stack[-0xa0] (DATA)
// 005f7175: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005f7178: MOVSD.REP ES:EDI,ESI
//   Label: LAB_005f7178
// 005f717a: MOV ECX,0xc
// 005f717f: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0xa0] (DATA)
// 005f7183: MOV EDI,EBX
// 005f7185: MOVSD.REP ES:EDI,ESI
// 005f7187: MOV EAX,EBX
// 005f7189: MOV ESP,EBP
// 005f718b: POP EBP
// 005f718c: POP EDI
// 005f718d: POP EBX
// 005f718e: RET
// 005f718f: MOV ECX,0xc
//   Label: LAB_005f718f
// 005f7194: LEA EDI,[ESP + 0x38]
//   XREF to: Stack[-0xa0] (DATA)
// 005f7198: MOV ESI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005f719b: JMP 0x005f7178
//   XREF to: 005f7178 (UNCONDITIONAL_JUMP)
// 005f719d: MOV EDX,dword ptr [EBP + 0x10]
//   Label: LAB_005f719d
//   XREF to: Stack[0x4] (READ)
// 005f71a0: PUSH EDX
// 005f71a1: LEA ESI,[ESP + 0xbc]
//   XREF to: Stack[-0x20] (DATA)
// 005f71a8: LEA EDI,[ESP + 0x6c]
//   XREF to: Stack[-0x70] (DATA)
// 005f71ac: CALL core_xform.cpp_matrixToQuaternion_FUN_005f7420
//   XREF to: 005f7420 (UNCONDITIONAL_CALL)
// 005f71b1: ADD ESP,0x4
// 005f71b4: LEA ESI,[ESP + 0xb8]
//   XREF to: Stack[-0x20] (DATA)
// 005f71bb: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005f71be: MOVSD ES:EDI,ESI
// 005f71bf: MOVSD ES:EDI,ESI
// 005f71c0: MOVSD ES:EDI,ESI
// 005f71c1: MOVSD ES:EDI,ESI
// 005f71c2: PUSH ECX
// 005f71c3: LEA ESI,[ESP + 0x7c]
//   XREF to: Stack[-0x60] (DATA)
// 005f71c7: LEA EDI,[ESP + 0x9c]
//   XREF to: Stack[-0x40] (DATA)
// 005f71ce: CALL core_xform.cpp_matrixToQuaternion_FUN_005f7420
//   XREF to: 005f7420 (UNCONDITIONAL_CALL)
// 005f71d3: LEA ESI,[ESP + 0x7c]
//   XREF to: Stack[-0x60] (DATA)
// 005f71d7: ADD ESP,0x4
// 005f71da: MOVSD ES:EDI,ESI
// 005f71db: MOVSD ES:EDI,ESI
// 005f71dc: MOVSD ES:EDI,ESI
// 005f71dd: MOVSD ES:EDI,ESI
// 005f71de: LEA ESI,[ESP + 0x98]
//   XREF to: Stack[-0x40] (DATA)
// 005f71e5: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005f71e8: PUSH ESI
// 005f71e9: LEA ESI,[ESP + 0x70]
//   XREF to: Stack[-0x70] (DATA)
// 005f71ed: PUSH ESI
// 005f71ee: LEA ESI,[ESP + 0x94]
//   XREF to: Stack[-0x50] (DATA)
// 005f71f5: LEA EDI,[ESP + 0xb4]
//   XREF to: Stack[-0x30] (DATA)
// 005f71fc: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 005f7201: LEA ESI,[ESP + 0x94]
//   XREF to: Stack[-0x50] (DATA)
// 005f7208: ADD ESP,0xc
// 005f720b: MOVSD ES:EDI,ESI
// 005f720c: MOVSD ES:EDI,ESI
// 005f720d: MOVSD ES:EDI,ESI
// 005f720e: MOVSD ES:EDI,ESI
// 005f720f: LEA ESI,[ESP + 0xa8]
//   XREF to: Stack[-0x30] (DATA)
// 005f7216: PUSH ESI
// 005f7217: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0xd0] (DATA)
// 005f721b: PUSH ESI
// 005f721c: CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
//   XREF to: 005f7280 (UNCONDITIONAL_CALL)
// 005f7221: ADD ESP,0x8
// 005f7224: FLD1
// 005f7226: MOV ESI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005f7229: FSUB double ptr [ESP]
//   XREF to: Stack[-0xd8] (DATA)
// 005f722c: FLD float ptr [ESI + 0xc]
// 005f722f: FMUL ST1
// 005f7231: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005f7234: FLD float ptr [ESI + 0xc]
// 005f7237: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005f723a: FADDP
// 005f723c: MOV ESI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005f723f: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0xc4] (WRITE)
// 005f7243: FLD float ptr [ESI + 0x1c]
// 005f7246: FMUL ST1
// 005f7248: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005f724b: FLD float ptr [ESI + 0x1c]
// 005f724e: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005f7251: FADDP
// 005f7253: MOV ESI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005f7256: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0xb4] (WRITE)
// 005f725a: FMUL float ptr [ESI + 0x2c]
// 005f725d: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005f7260: FLD float ptr [ESI + 0x2c]
// 005f7263: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005f7266: LEA EDI,[ESP + 0x38]
//   XREF to: Stack[-0xa0] (DATA)
// 005f726a: MOV ECX,0xc
// 005f726f: FADDP
// 005f7271: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0xd0] (DATA)
// 005f7275: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0xa4] (WRITE)
// 005f7279: JMP 0x005f7178
//   XREF to: 005f7178 (UNCONDITIONAL_JUMP)

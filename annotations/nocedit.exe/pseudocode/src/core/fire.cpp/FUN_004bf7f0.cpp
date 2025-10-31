// Name: core_fire.cpp_FUN_004bf7f0
// Address: 004bf7f0
// Address Range: [[004bf7f0, 004bf9f4]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004bf7f0()
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c76a0 (004c76a0) at 004c7861 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00629c4f = 0.1000000
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ea0
//   core_actor.cpp_FUN_0040cc70
//   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_getTranslation_FUN_005f6110
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   crt_math.c_atan2_FUN_006013b1

#include "nocturne.h"

void core_fire_cpp_FUN_004bf7f0(void)

{
  float fVar1;
  CVector3f *extraout_EAX;
  CVector3f *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  float10 fVar7;
  CVector3f *in_stack_00000004;
  CVector3f *in_stack_00000008;
  float *in_stack_0000000c;
  CMatrix3x4f *in_stack_fffffef8;
  undefined1 local_dc [52];
  undefined4 uStack_a8;
  undefined1 auStack_a4 [48];
  undefined4 auStack_74 [10];
  float local_4c;
  float local_48;
  float local_44;
  CVector3f local_34 [3];
  
  bVar6 = 0;
  if (in_stack_00000004 != in_stack_00000008) {
    in_stack_00000004->x = in_stack_00000008->x;
    in_stack_00000004->y = in_stack_00000008->y;
    in_stack_00000004->z = in_stack_00000008->z;
  }
  local_4c = *in_stack_0000000c * FLOAT_00629c4f;
  local_48 = in_stack_0000000c[1] * FLOAT_00629c4f;
  local_44 = FLOAT_00629c4f * in_stack_0000000c[2];
  local_34[0].x = in_stack_00000004->x + local_4c;
  local_34[0].y = in_stack_00000004->y + local_48;
  local_34[0].z = in_stack_00000004->z + local_44;
  if (in_stack_00000004 != local_34) {
    in_stack_00000004->x = local_34[0].x;
    in_stack_00000004->y = local_34[0].y;
    in_stack_00000004->z = local_34[0].z;
  }
  fVar7 = crt_math_c_atan2_FUN_006013b1
                    ((float10)in_stack_0000000c[1],
                     SQRT((float10)*in_stack_0000000c * (float10)*in_stack_0000000c +
                          (float10)in_stack_0000000c[2] * (float10)in_stack_0000000c[2]));
  in_stack_00000004[2].y = 0.0;
  in_stack_00000004[1].z = (float)-fVar7;
  fVar7 = crt_math_c_atan2_FUN_006013b1((float10)*in_stack_0000000c,(float10)in_stack_0000000c[2]);
  in_stack_00000004[2].x = (float)fVar7;
  fVar1 = (float)core_actor_cpp_FUN_0040cc70();
  in_stack_00000004[1].x = 1.4013e-45;
  in_stack_00000004[2].z = fVar1;
  in_stack_00000004[1].y = (float)in_stack_0000000c;
  if (in_stack_0000000c != (float *)0x0) {
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)&stack0xfffffef0,in_stack_00000004,
               (CVector3f *)&in_stack_00000004[1].z);
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              ((CMatrix3x4f *)local_dc,(CVector3f *)((int)in_stack_00000004[1].y + 0x20),
               (CVector3f *)((int)in_stack_00000004[1].y + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              ((CMatrix3x4f *)&stack0xfffffef8,(CMatrix3x4f *)(local_dc + 4),in_stack_fffffef8);
    puVar4 = auStack_74;
    puVar5 = &uStack_a8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    core_xform_cpp_getTranslation_FUN_005f6110
              ((CVector3f *)auStack_a4,(CMatrix3x4f *)&stack0xffffffc8);
    if (in_stack_00000004 + 3 != extraout_EAX) {
      in_stack_00000004[3].x = extraout_EAX->x;
      in_stack_00000004[3].y = extraout_EAX->y;
      in_stack_00000004[3].z = extraout_EAX->z;
    }
    pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                       ((CVector3f *)(auStack_a4 + 4),(CMatrix3x3f *)&stack0xfffffff0);
    if ((CVector3f *)&in_stack_00000004[1].z != pCVar2) {
      in_stack_00000004[1].z = pCVar2->x;
      in_stack_00000004[2].x = pCVar2->y;
      in_stack_00000004[2].y = pCVar2->z;
    }
    pCVar2 = core_actor_cpp_CDemonActor_FUN_00408ea0((CDemonActor *)in_stack_00000004[1].y);
    if (in_stack_00000004 + 4 != pCVar2) {
      in_stack_00000004[4].x = pCVar2->x;
      in_stack_00000004[4].y = pCVar2->y;
      in_stack_00000004[4].z = pCVar2->z;
      return;
    }
  }
  return;
}


// Assembly code:
// 004bf7f0: PUSH EBX
//   Label: core_fire.cpp_FUN_004bf7f0
// 004bf7f1: PUSH ESI
// 004bf7f2: PUSH EDI
// 004bf7f3: PUSH EBP
// 004bf7f4: SUB ESP,0xfc
// 004bf7fa: MOV EBX,dword ptr [ESP + 0x110]
//   XREF to: Stack[0x4] (READ)
// 004bf801: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x8] (READ)
// 004bf808: MOV EBP,dword ptr [ESP + 0x118]
//   XREF to: Stack[0xc] (READ)
// 004bf80f: CMP EBX,EAX
// 004bf811: JNZ 0x004bf8f8
//   XREF to: 004bf8f8 (CONDITIONAL_JUMP)
// 004bf817: FLD float ptr [0x00629c4f]
//   Label: LAB_004bf817
//   XREF to: 00629c4f (READ)
// 004bf81d: FLD float ptr [EBP]
// 004bf820: FMUL ST1
// 004bf822: FSTP float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x4c] (WRITE)
// 004bf829: FLD float ptr [EBP + 0x4]
// 004bf82c: FMUL ST1
// 004bf82e: FSTP float ptr [ESP + 0xc4]
//   XREF to: Stack[-0x48] (WRITE)
// 004bf835: FMUL float ptr [EBP + 0x8]
// 004bf838: FSTP float ptr [ESP + 0xc8]
//   XREF to: Stack[-0x44] (WRITE)
// 004bf83f: FLD float ptr [EBX]
// 004bf841: FADD float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x4c] (READ)
// 004bf848: FSTP float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x34] (WRITE)
// 004bf84f: FLD float ptr [EBX + 0x4]
// 004bf852: FADD float ptr [ESP + 0xc4]
//   XREF to: Stack[-0x48] (READ)
// 004bf859: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x30] (WRITE)
// 004bf860: FLD float ptr [EBX + 0x8]
// 004bf863: FADD float ptr [ESP + 0xc8]
//   XREF to: Stack[-0x44] (READ)
// 004bf86a: LEA EAX,[ESP + 0xd8]
//   XREF to: Stack[-0x34] (DATA)
// 004bf871: FSTP float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x2c] (WRITE)
// 004bf878: CMP EBX,EAX
// 004bf87a: JZ 0x004bf899
//   XREF to: 004bf899 (CONDITIONAL_JUMP)
// 004bf87c: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x34] (DATA)
// 004bf883: MOV dword ptr [EBX],EAX
// 004bf885: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x30] (READ)
// 004bf88c: MOV dword ptr [EBX + 0x4],EAX
// 004bf88f: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x2c] (READ)
// 004bf896: MOV dword ptr [EBX + 0x8],EAX
// 004bf899: FLD float ptr [EBP + 0x8]
//   Label: LAB_004bf899
// 004bf89c: FMUL ST0
// 004bf89e: FLD float ptr [EBP]
// 004bf8a1: FMUL ST0
// 004bf8a3: FADDP
// 004bf8a5: FSQRT
// 004bf8a7: FLD float ptr [EBP + 0x4]
// 004bf8aa: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 004bf8af: MOV dword ptr [EBX + 0x1c],0x0
// 004bf8b6: FCHS
// 004bf8b8: FSTP float ptr [EBX + 0x14]
// 004bf8bb: FLD float ptr [EBP + 0x8]
// 004bf8be: FLD float ptr [EBP]
// 004bf8c1: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 004bf8c6: PUSH 0x3
// 004bf8c8: PUSH 0x0
// 004bf8ca: FSTP float ptr [EBX + 0x18]
// 004bf8cd: CALL core_actor.cpp_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 004bf8d2: MOV dword ptr [EBX + 0xc],0x1
// 004bf8d9: ADD ESP,0x8
// 004bf8dc: MOV dword ptr [EBX + 0x20],EAX
// 004bf8df: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x10] (READ)
// 004bf8e6: MOV dword ptr [EBX + 0x10],EAX
// 004bf8e9: TEST EAX,EAX
// 004bf8eb: JNZ 0x004bf90d
//   XREF to: 004bf90d (CONDITIONAL_JUMP)
// 004bf8ed: ADD ESP,0xfc
//   Label: LAB_004bf8ed
// 004bf8f3: POP EBP
// 004bf8f4: POP EDI
// 004bf8f5: POP ESI
// 004bf8f6: POP EBX
// 004bf8f7: RET
// 004bf8f8: MOV EDX,dword ptr [EAX]
//   Label: LAB_004bf8f8
// 004bf8fa: MOV dword ptr [EBX],EDX
// 004bf8fc: MOV EDX,dword ptr [EAX + 0x4]
// 004bf8ff: MOV dword ptr [EBX + 0x4],EDX
// 004bf902: MOV EDX,dword ptr [EAX + 0x8]
// 004bf905: MOV dword ptr [EBX + 0x8],EDX
// 004bf908: JMP 0x004bf817
//   XREF to: 004bf817 (UNCONDITIONAL_JUMP)
// 004bf90d: LEA EAX,[EBX + 0x14]
//   Label: LAB_004bf90d
// 004bf910: PUSH EAX
// 004bf911: PUSH EBX
// 004bf912: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x10c] (DATA)
// 004bf916: PUSH EAX
// 004bf917: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 004bf91c: MOV EAX,dword ptr [EBX + 0x10]
// 004bf91f: ADD ESP,0xc
// 004bf922: LEA EDX,[EAX + 0x30]
// 004bf925: PUSH EDX
// 004bf926: ADD EAX,0x20
// 004bf929: PUSH EAX
// 004bf92a: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0xdc] (DATA)
// 004bf92e: PUSH EAX
// 004bf92f: CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   XREF to: 005f5390 (UNCONDITIONAL_CALL)
// 004bf934: ADD ESP,0xc
// 004bf937: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0xdc] (DATA)
// 004bf93b: PUSH EAX
// 004bf93c: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x10c] (DATA)
// 004bf940: PUSH EAX
// 004bf941: LEA ESI,[ESP + 0x98]
//   XREF to: Stack[-0x7c] (DATA)
// 004bf948: LEA EDI,[ESP + 0x68]
//   XREF to: Stack[-0xac] (DATA)
// 004bf94c: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 004bf951: ADD ESP,0x8
// 004bf954: LEA EAX,[ESP + 0xcc]
//   XREF to: Stack[-0x40] (DATA)
// 004bf95b: MOV ECX,0xc
// 004bf960: PUSH EAX
// 004bf961: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0xac] (DATA)
// 004bf965: LEA ESI,[ESP + 0x94]
//   XREF to: Stack[-0x7c] (DATA)
// 004bf96c: PUSH EAX
// 004bf96d: MOVSD.REP ES:EDI,ESI
// 004bf96f: CALL core_xform.cpp_getTranslation_FUN_005f6110
//   XREF to: 005f6110 (UNCONDITIONAL_CALL)
// 004bf974: LEA EDX,[EBX + 0x24]
// 004bf977: ADD ESP,0x8
// 004bf97a: CMP EDX,EAX
// 004bf97c: JZ 0x004bf98e
//   XREF to: 004bf98e (CONDITIONAL_JUMP)
// 004bf97e: MOV ECX,dword ptr [EAX]
// 004bf980: MOV dword ptr [EDX],ECX
// 004bf982: MOV ECX,dword ptr [EAX + 0x4]
// 004bf985: MOV dword ptr [EDX + 0x4],ECX
// 004bf988: MOV ECX,dword ptr [EAX + 0x8]
// 004bf98b: MOV dword ptr [EDX + 0x8],ECX
// 004bf98e: LEA EAX,[ESP + 0xf0]
//   Label: LAB_004bf98e
//   XREF to: Stack[-0x1c] (DATA)
// 004bf995: PUSH EAX
// 004bf996: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0xac] (DATA)
// 004bf99a: PUSH EAX
// 004bf99b: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 004bf9a0: LEA EDX,[EBX + 0x14]
// 004bf9a3: ADD ESP,0x8
// 004bf9a6: CMP EDX,EAX
// 004bf9a8: JZ 0x004bf9ba
//   XREF to: 004bf9ba (CONDITIONAL_JUMP)
// 004bf9aa: MOV ECX,dword ptr [EAX]
// 004bf9ac: MOV dword ptr [EDX],ECX
// 004bf9ae: MOV ECX,dword ptr [EAX + 0x4]
// 004bf9b1: MOV dword ptr [EDX + 0x4],ECX
// 004bf9b4: MOV ECX,dword ptr [EAX + 0x8]
// 004bf9b7: MOV dword ptr [EDX + 0x8],ECX
// 004bf9ba: PUSH EBP
//   Label: LAB_004bf9ba
// 004bf9bb: LEA EAX,[ESP + 0xe8]
//   XREF to: Stack[-0x28] (DATA)
// 004bf9c2: PUSH EAX
// 004bf9c3: MOV ECX,dword ptr [EBX + 0x10]
// 004bf9c6: PUSH ECX
// 004bf9c7: ADD EBX,0x30
// 004bf9ca: CALL core_actor.cpp_CDemonActor_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 004bf9cf: ADD ESP,0xc
// 004bf9d2: CMP EBX,EAX
// 004bf9d4: JZ 0x004bf8ed
//   XREF to: 004bf8ed (CONDITIONAL_JUMP)
// 004bf9da: MOV EDX,dword ptr [EAX]
// 004bf9dc: MOV dword ptr [EBX],EDX
// 004bf9de: MOV EDX,dword ptr [EAX + 0x4]
// 004bf9e1: MOV dword ptr [EBX + 0x4],EDX
// 004bf9e4: MOV EDX,dword ptr [EAX + 0x8]
// 004bf9e7: MOV dword ptr [EBX + 0x8],EDX
// 004bf9ea: ADD ESP,0xfc
// 004bf9f0: POP EBP
// 004bf9f1: POP EDI
// 004bf9f2: POP ESI
// 004bf9f3: POP EBX
// 004bf9f4: RET

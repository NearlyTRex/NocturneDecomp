// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_0059f820
// Address: 0059f820
// Address Range: [[0059f820, 0059fa1c]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModelInstance_FUN_0059f820()
// Cross-references:
//   core_bride.cpp_FUN_00424aa0 (00424aa0) at 00424ac3 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6f80 (004d6f80) at 004d706b [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e84a0 (004e84a0) at 004e84c3 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 0051ff64 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20 (0059fa20) at 0059fac6 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fbe70 (005fbe70) at 005fbeb3 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
//   core_xform.cpp_setRotationScaleIdentity_FUN_005f5190
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModelInstance_FUN_0059f820(undefined4 param_1,
   undefined4 param_2) */

void core_skeleton_cpp_CDeformableModelInstance_FUN_0059f820(void)

{
  int extraout_EAX;
  int iVar1;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  float *unaff_ESI;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 *puVar4;
  byte bVar5;
  CDeformableModelInstance *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 auStack_a8 [11];
  int local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  CMatrix3x4f CStack_48;
  CVector3f local_18;
  
  bVar5 = 0;
  if (in_stack_00000008 < 0) {
    core_xform_cpp_setRotationScaleIdentity_FUN_005f5190((CMatrix3x4f *)&local_7c);
    local_6c = *(float *)(in_stack_00000004->field3_0x508 + 0x19c);
    local_5c = *(float *)(in_stack_00000004->field3_0x508 + 0x1a0);
    local_4c = *(undefined4 *)(in_stack_00000004->field3_0x508 + 0x1a4);
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(in_stack_00000004);
    local_18.z = (float)(in_stack_00000008 * 0xc);
    if (*(int *)(extraout_EAX + 0x2857c + in_stack_00000008 * 0x24) < 0) {
      local_70 = *(float *)(in_stack_00000004->field3_0x508 + 0x19c) +
                 in_stack_00000004->transformed_vertices[in_stack_00000008].x;
      local_60 = *(float *)(in_stack_00000004->field3_0x508 + 0x1a0) +
                 in_stack_00000004->transformed_vertices[in_stack_00000008].y;
      local_50 = *(float *)(in_stack_00000004->field3_0x508 + 0x1a4) +
                 in_stack_00000004->transformed_vertices[in_stack_00000008].z;
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_FUN_0059f820();
      puVar2 = auStack_a8;
      puVar4 = &local_4c;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      core_xform_cpp_transformVector3x4_FUN_005f4dc0
                (&local_18,
                 (CVector3f *)((int)&in_stack_00000004->transformed_vertices[0].x + unaff_EBP),
                 &CStack_48);
      local_68 = local_18.y;
      local_58 = local_18.z;
    }
    core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280
              ((CMatrix3x3f *)&local_7c,
               (CQuaternion4f *)(in_stack_00000004->field3_0x508 + in_stack_00000008 * 0x10 + 0x1a8)
              );
    if (*(int *)(in_stack_00000004->field3_0x508 + in_stack_0000000c * 4 + 0x7e8) != 0x3f800000) {
      local_78 = local_78 *
                 *(float *)(in_stack_00000004->field3_0x508 + in_stack_0000000c * 4 + 0x7e8);
      local_74 = local_74 *
                 *(float *)(in_stack_00000004->field3_0x508 + in_stack_0000000c * 4 + 0x7e8);
      local_70 = local_70 *
                 *(float *)(in_stack_00000004->field3_0x508 + in_stack_0000000c * 4 + 0x7e8);
      local_68 = local_68 *
                 *(float *)(in_stack_00000004->field3_0x508 + in_stack_0000000c * 4 + 0x7e8);
      local_64 = local_64 *
                 *(float *)(in_stack_00000004->field3_0x508 + in_stack_0000000c * 4 + 0x7e8);
      local_60 = local_60 *
                 *(float *)(in_stack_00000004->field3_0x508 + in_stack_0000000c * 4 + 0x7e8);
      local_58 = local_58 *
                 *(float *)(in_stack_00000004->field3_0x508 + in_stack_0000000c * 4 + 0x7e8);
      local_54 = local_54 *
                 *(float *)(in_stack_00000004->field3_0x508 + in_stack_0000000c * 4 + 0x7e8);
      local_50 = local_50 *
                 *(float *)(in_stack_00000004->field3_0x508 + in_stack_0000000c * 4 + 0x7e8);
    }
  }
  pfVar3 = &local_78;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}


// Assembly code:
// 0059f820: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_0059f820
// 0059f821: PUSH EDI
// 0059f822: PUSH EBP
// 0059f823: SUB ESP,0xa0
// 0059f829: MOV EBX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[0x4] (READ)
// 0059f830: MOV EBP,ESI
// 0059f832: CMP dword ptr [ESP + 0xb4],0x0
//   XREF to: Stack[0x8] (READ)
// 0059f83a: JL 0x0059f92e
//   XREF to: 0059f92e (CONDITIONAL_JUMP)
// 0059f840: PUSH EBX
// 0059f841: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0059f846: ADD ESP,0x4
// 0059f849: MOV EDX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[0x8] (READ)
// 0059f850: MOV ESI,EAX
// 0059f852: LEA EAX,[EDX*0x8 + 0x0]
// 0059f859: ADD EAX,EDX
// 0059f85b: MOV ESI,dword ptr [ESI + EAX*0x4 + 0x2857c]
// 0059f862: LEA EAX,[EDX*0x4 + 0x0]
// 0059f869: SUB EAX,EDX
// 0059f86b: SHL EAX,0x2
// 0059f86e: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0059f875: TEST ESI,ESI
// 0059f877: JL 0x0059f95b
//   XREF to: 0059f95b (CONDITIONAL_JUMP)
// 0059f87d: PUSH ESI
// 0059f87e: PUSH EBX
// 0059f87f: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0xac] (DATA)
// 0059f883: LEA EDI,[ESP + 0x68]
//   XREF to: Stack[-0x4c] (DATA)
// 0059f887: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059f820
//   XREF to: 0059f820 (UNCONDITIONAL_CALL)
// 0059f88c: MOV ECX,0xc
// 0059f891: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0xac] (DATA)
// 0059f895: ADD ESP,0x8
// 0059f898: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x4c] (DATA)
// 0059f89c: MOVSD.REP ES:EDI,ESI
// 0059f89e: PUSH EAX
// 0059f89f: MOV ECX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x10] (READ)
// 0059f8a6: LEA EAX,[EBX + 0x58]
// 0059f8a9: ADD EAX,ECX
// 0059f8ab: PUSH EAX
// 0059f8ac: LEA EAX,[ESP + 0x98]
//   XREF to: Stack[-0x1c] (DATA)
// 0059f8b3: PUSH EAX
// 0059f8b4: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0059f8b9: ADD ESP,0xc
// 0059f8bc: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x1c] (READ)
// 0059f8c3: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0059f8c7: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x18] (READ)
// 0059f8ce: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0059f8d2: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x14] (READ)
// 0059f8d9: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0059f8dd: MOV EAX,dword ptr [ESP + 0xb4]
//   Label: LAB_0059f8dd
//   XREF to: Stack[0x8] (READ)
// 0059f8e4: LEA EDX,[EBX + 0x6b0]
// 0059f8ea: SHL EAX,0x4
// 0059f8ed: ADD EAX,EDX
// 0059f8ef: PUSH EAX
// 0059f8f0: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x7c] (DATA)
// 0059f8f4: PUSH EAX
// 0059f8f5: CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
//   XREF to: 005f7280 (UNCONDITIONAL_CALL)
// 0059f8fa: ADD ESP,0x8
// 0059f8fd: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[0x8] (READ)
// 0059f904: SHL EAX,0x2
// 0059f907: ADD EBX,EAX
// 0059f909: CMP dword ptr [EBX + 0xcf0],0x3f800000
// 0059f913: JNZ 0x0059f98a
//   XREF to: 0059f98a (CONDITIONAL_JUMP)
// 0059f915: MOV ECX,0xc
//   Label: LAB_0059f915
// 0059f91a: LEA ESI,[ESP + 0x30]
//   XREF to: Stack[-0x7c] (DATA)
// 0059f91e: MOV EDI,EBP
// 0059f920: MOVSD.REP ES:EDI,ESI
// 0059f922: MOV EAX,EBP
// 0059f924: ADD ESP,0xa0
// 0059f92a: POP EBP
// 0059f92b: POP EDI
// 0059f92c: POP EBX
// 0059f92d: RET
// 0059f92e: LEA EAX,[ESP + 0x30]
//   Label: LAB_0059f92e
//   XREF to: Stack[-0x7c] (DATA)
// 0059f932: PUSH EAX
// 0059f933: CALL core_xform.cpp_setRotationScaleIdentity_FUN_005f5190
//   XREF to: 005f5190 (UNCONDITIONAL_CALL)
// 0059f938: ADD ESP,0x4
// 0059f93b: MOV EAX,dword ptr [EBX + 0x6a4]
// 0059f941: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0059f945: MOV EAX,dword ptr [EBX + 0x6a8]
// 0059f94b: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0059f94f: MOV EAX,dword ptr [EBX + 0x6ac]
// 0059f955: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0059f959: JMP 0x0059f915
//   XREF to: 0059f915 (UNCONDITIONAL_JUMP)
// 0059f95b: FLD float ptr [EBX + 0x6a4]
//   Label: LAB_0059f95b
// 0059f961: FADD float ptr [EBX + EAX*0x1 + 0x58]
// 0059f965: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x70] (WRITE)
// 0059f969: FLD float ptr [EBX + 0x6a8]
// 0059f96f: FADD float ptr [EBX + EAX*0x1 + 0x5c]
// 0059f973: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x60] (WRITE)
// 0059f977: FLD float ptr [EBX + 0x6ac]
// 0059f97d: FADD float ptr [EBX + EAX*0x1 + 0x60]
// 0059f981: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x50] (WRITE)
// 0059f985: JMP 0x0059f8dd
//   XREF to: 0059f8dd (UNCONDITIONAL_JUMP)
// 0059f98a: FLD float ptr [ESP + 0x30]
//   Label: LAB_0059f98a
//   XREF to: Stack[-0x7c] (READ)
// 0059f98e: FMUL float ptr [EBX + 0xcf0]
// 0059f994: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x78] (READ)
// 0059f998: FXCH
// 0059f99a: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x7c] (WRITE)
// 0059f99e: FMUL float ptr [EBX + 0xcf0]
// 0059f9a4: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x74] (READ)
// 0059f9a8: FXCH
// 0059f9aa: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x78] (WRITE)
// 0059f9ae: FMUL float ptr [EBX + 0xcf0]
// 0059f9b4: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x6c] (READ)
// 0059f9b8: FXCH
// 0059f9ba: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x74] (WRITE)
// 0059f9be: FMUL float ptr [EBX + 0xcf0]
// 0059f9c4: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x68] (READ)
// 0059f9c8: FXCH
// 0059f9ca: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x6c] (WRITE)
// 0059f9ce: FMUL float ptr [EBX + 0xcf0]
// 0059f9d4: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x64] (READ)
// 0059f9d8: FXCH
// 0059f9da: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x68] (WRITE)
// 0059f9de: FMUL float ptr [EBX + 0xcf0]
// 0059f9e4: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x5c] (READ)
// 0059f9e8: FXCH
// 0059f9ea: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x64] (WRITE)
// 0059f9ee: FMUL float ptr [EBX + 0xcf0]
// 0059f9f4: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x58] (READ)
// 0059f9f8: FXCH
// 0059f9fa: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x5c] (WRITE)
// 0059f9fe: FMUL float ptr [EBX + 0xcf0]
// 0059fa04: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x54] (READ)
// 0059fa08: FXCH
// 0059fa0a: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x58] (WRITE)
// 0059fa0e: FMUL float ptr [EBX + 0xcf0]
// 0059fa14: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x54] (WRITE)
// 0059fa18: JMP 0x0059f915
//   XREF to: 0059f915 (UNCONDITIONAL_JUMP)

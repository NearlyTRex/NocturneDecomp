// Name: core_gabriela.cpp_FUN_004d6f80
// Address: 004d6f80
// Address Range: [[004d6f80, 004d711f]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d6f80()
// Cross-references:
//   core_gabriela.cpp_FUN_004d6d40 (004d6d40) at 004d6ee6 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0062b101 = -0.3000000
//   double DOUBLE_0062b105 = 0.5
//   undefined4 DAT_0065e7c8
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
//   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a1510
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a15e0
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d6f80(undefined4 param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6) */

void core_gabriela_cpp_FUN_004d6f80(void)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *input_local_point;
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  CDemonActor *in_stack_00000004;
  float *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  CVector3f *in_stack_00000018;
  float fVar6;
  CDemonSet *in_stack_ffffe4cc;
  undefined4 uStack_94;
  CMatrix3x4f CStack_90;
  undefined4 auStack_60 [12];
  undefined1 local_30 [8];
  undefined1 auStack_28 [12];
  CVector3f CStack_1c;
  
  bVar5 = 0;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a1510
            ((CDeformableModelInstance *)(in_stack_00000004 + 1));
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
            ((CDeformableModelInstance *)(in_stack_00000004 + 1),(CVector3f *)(local_30 + 4),
             in_stack_00000014);
  auStack_28._4_4_ = (float)auStack_28._4_4_ + FLOAT_0062b101;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,&CStack_1c,(CVector3f *)auStack_28);
  this_ptr = (CDeformableModelInstance *)(in_stack_00000004 + 1);
  iVar2 = 0;
  do {
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a15e0(this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (this_ptr,0,0.0,*in_stack_0000000c,in_stack_00000014,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
              (this_ptr,in_stack_00000010,(CMatrix3x4f *)in_stack_ffffe4cc);
    puVar3 = auStack_60;
    puVar4 = &uStack_94;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    input_local_point =
         core_xform_cpp_transformVector3x4_FUN_005f4dc0
                   ((CVector3f *)local_30,in_stack_00000018,&CStack_90);
    fVar6 = 7.111756e-39;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,(CVector3f *)(auStack_28 + 8),input_local_point);
    in_stack_ffffe4cc = g_CDemonSetPtr;
    iVar1 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                      (g_CDemonSetPtr,(CVector3f *)&stack0xfffffffc,&CStack_1c);
    if (iVar1 == 0) {
      fVar6 = *in_stack_0000000c;
    }
    else if (iVar2 != 0) {
      in_stack_0000000c = (float *)*in_stack_0000000c;
    }
    iVar2 = iVar2 + 1;
    *in_stack_0000000c = ((float)in_stack_0000000c + fVar6) * (float)DOUBLE_0062b105;
  } while (iVar2 < 7);
  return;
}


// Assembly code:
// 004d6f80: PUSH EBX
//   Label: core_gabriela.cpp_FUN_004d6f80
// 004d6f81: PUSH ESI
// 004d6f82: PUSH EDI
// 004d6f83: PUSH EBP
// 004d6f84: MOV EBP,ESP
// 004d6f86: SUB ESP,0x1b38
// 004d6f8c: AND ESP,0xfffffff8
// 004d6f8f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1b44] (DATA)
// 004d6f93: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d6f96: PUSH EAX
// 004d6f97: ADD EBX,0x158
// 004d6f9d: PUSH EBX
// 004d6f9e: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a1510
//   XREF to: 005a1510 (UNCONDITIONAL_CALL)
// 004d6fa3: ADD ESP,0x8
// 004d6fa6: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004d6fa9: PUSH EDX
// 004d6faa: LEA EAX,[ESP + 0x1b1c]
//   XREF to: Stack[-0x30] (DATA)
// 004d6fb1: PUSH EAX
// 004d6fb2: PUSH EBX
// 004d6fb3: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 004d6fb8: ADD ESP,0xc
// 004d6fbb: LEA EAX,[ESP + 0x1b18]
//   XREF to: Stack[-0x30] (DATA)
// 004d6fc2: FLD float ptr [ESP + 0x1b1c]
//   XREF to: Stack[-0x2c] (READ)
// 004d6fc9: PUSH EAX
// 004d6fca: LEA EAX,[ESP + 0x1b28]
//   XREF to: Stack[-0x24] (DATA)
// 004d6fd1: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d6fd4: PUSH EAX
// 004d6fd5: FADD float ptr [0x0062b101]
//   XREF to: 0062b101 (READ)
// 004d6fdb: PUSH ECX
// 004d6fdc: FSTP float ptr [ESP + 0x1b28]
//   XREF to: Stack[-0x2c] (WRITE)
// 004d6fe3: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004d6fe8: ADD ESP,0xc
// 004d6feb: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d6fee: FDIV float ptr [0x0065e7c8]
//   XREF to: 0065e7c8 (READ)
// 004d6ff4: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004d6ff7: MOV EAX,dword ptr [EAX]
// 004d6ff9: MOV dword ptr [ESP + 0x1b30],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d7000: FADD float ptr [ESP + 0x1b30]
//   XREF to: Stack[-0x18] (READ)
// 004d7007: FST float ptr [ESP]
//   XREF to: Stack[-0x1b48] (DATA)
// 004d700a: FLD1
// 004d700c: FCOMPP
// 004d700e: FNSTSW AX
// 004d7010: SAHF
// 004d7011: JC 0x004d710a
//   XREF to: 004d710a (CONDITIONAL_JUMP)
// 004d7017: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004d7017
//   XREF to: Stack[0x4] (READ)
// 004d701a: ADD EAX,0x158
// 004d701f: XOR EBX,EBX
// 004d7021: MOV dword ptr [ESP + 0x1b34],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d7028: LEA EAX,[ESP + 0x4]
//   Label: LAB_004d7028
//   XREF to: Stack[-0x1b44] (DATA)
// 004d702c: PUSH EAX
// 004d702d: MOV ESI,dword ptr [ESP + 0x1b38]
//   XREF to: Stack[-0x14] (READ)
// 004d7034: PUSH ESI
// 004d7035: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a15e0
//   XREF to: 005a15e0 (UNCONDITIONAL_CALL)
// 004d703a: ADD ESP,0x8
// 004d703d: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 004d7042: MOV EDI,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004d7045: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004d7048: PUSH EDI
// 004d7049: PUSH dword ptr [EAX]
// 004d704b: PUSH 0x0
// 004d704d: PUSH 0x0
// 004d704f: PUSH ESI
// 004d7050: CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
// 004d7055: ADD ESP,0x18
// 004d7058: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004d705b: PUSH EDX
// 004d705c: PUSH ESI
// 004d705d: LEA ESI,[ESP + 0x1ad8]
//   XREF to: Stack[-0x78] (DATA)
// 004d7064: LEA EDI,[ESP + 0x1aa8]
//   XREF to: Stack[-0xa8] (DATA)
// 004d706b: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
//   XREF to: 0059f820 (UNCONDITIONAL_CALL)
// 004d7070: MOV ECX,0xc
// 004d7075: LEA ESI,[ESP + 0x1ad8]
//   XREF to: Stack[-0x78] (DATA)
// 004d707c: ADD ESP,0x8
// 004d707f: LEA EAX,[ESP + 0x1aa0]
//   XREF to: Stack[-0xa8] (DATA)
// 004d7086: MOVSD.REP ES:EDI,ESI
// 004d7088: PUSH EAX
// 004d7089: MOV ESI,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004d708c: PUSH ESI
// 004d708d: LEA EAX,[ESP + 0x1b08]
//   XREF to: Stack[-0x48] (DATA)
// 004d7094: PUSH EAX
// 004d7095: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 004d709a: ADD ESP,0xc
// 004d709d: PUSH EAX
// 004d709e: LEA EAX,[ESP + 0x1b10]
//   XREF to: Stack[-0x3c] (DATA)
// 004d70a5: PUSH EAX
// 004d70a6: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d70a9: PUSH EDI
// 004d70aa: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004d70af: ADD ESP,0xc
// 004d70b2: LEA EAX,[ESP + 0x1b0c]
//   XREF to: Stack[-0x3c] (DATA)
// 004d70b9: PUSH EAX
// 004d70ba: LEA EAX,[ESP + 0x1b28]
//   XREF to: Stack[-0x24] (DATA)
// 004d70c1: PUSH EAX
// 004d70c2: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004d70c7: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004d70c8: CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
//   XREF to: 00572460 (UNCONDITIONAL_CALL)
// 004d70cd: ADD ESP,0xc
// 004d70d0: TEST EAX,EAX
// 004d70d2: JZ 0x004d7116
//   XREF to: 004d7116 (CONDITIONAL_JUMP)
// 004d70d4: TEST EBX,EBX
// 004d70d6: JZ 0x004d70e4
//   XREF to: 004d70e4 (CONDITIONAL_JUMP)
// 004d70d8: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004d70db: MOV EAX,dword ptr [EAX]
// 004d70dd: MOV dword ptr [ESP + 0x1b30],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d70e4: FLD float ptr [ESP + 0x1b30]
//   Label: LAB_004d70e4
//   XREF to: Stack[-0x18] (READ)
// 004d70eb: FADD float ptr [ESP]
//   XREF to: Stack[-0x1b48] (DATA)
// 004d70ee: FMUL double ptr [0x0062b105]
//   XREF to: 0062b105 (READ)
// 004d70f4: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004d70f7: INC EBX
// 004d70f8: FSTP float ptr [EAX]
// 004d70fa: CMP EBX,0x7
// 004d70fd: JL 0x004d7028
//   XREF to: 004d7028 (CONDITIONAL_JUMP)
// 004d7103: MOV ESP,EBP
// 004d7105: POP EBP
// 004d7106: POP EDI
// 004d7107: POP ESI
// 004d7108: POP EBX
// 004d7109: RET
// 004d710a: MOV dword ptr [ESP],0x3f800000
//   Label: LAB_004d710a
//   XREF to: Stack[-0x1b48] (DATA)
// 004d7111: JMP 0x004d7017
//   XREF to: 004d7017 (UNCONDITIONAL_JUMP)
// 004d7116: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_004d7116
//   XREF to: Stack[0xc] (READ)
// 004d7119: MOV EAX,dword ptr [EAX]
// 004d711b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1b48] (DATA)
// 004d711e: JMP 0x004d70e4
//   XREF to: 004d70e4 (UNCONDITIONAL_JUMP)

// Name: core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
// Address: 0059f750
// Address Range: [[0059f750, 0059f81b]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * blend_callback)
// Cross-references:
//   core_baron.cpp_CBaron_process_FUN_00412e80 (00412e80) at 00413113 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fc85 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4d80 (004d4d80) at 004d4e97 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f10d4 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f83ab [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005571f0 (005571f0) at 00557596 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005584a0 (005584a0) at 0055870a [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0 (0059fdd0) at 0059ff03 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005be832 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c02b0 (005c02b0) at 005c058d [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8e98 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0064ee20 = 0.00100000000000000
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
//   core_xform.cpp_slerpQuaternion_FUN_005f77e0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
          (CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,
          int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CSkeleton *this_ptr_00;
  int hierarchy_distance;
  int start_bone_index;
  BADSPACEBASE *in_ESP;
  CQuaternion4f *result_out;
  int *piVar1;
  int *piVar2;
  byte bVar3;
  int in_stack_00000018;
  code *in_stack_0000001c;
  CQuaternion4f *in_stack_00000020;
  CQuaternion4f *in_stack_0000003c;
  CDeformableModel_MotionBlendWeightFunc *apCStack_17d0 [509];
  CDeformableModel_MotionBlendWeightFunc *apCStack_fdc [1001];
  
  bVar3 = 0;
  if ((float)DOUBLE_0064ee20 < blend_weight) {
    start_bone_index = 0;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    if (0 < this_ptr_00->bone_count) {
      result_out = source_quaternions + 0x6b;
      do {
        hierarchy_distance =
             core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                       (this_ptr_00,start_bone_index,(int)blend_callback);
        if (-1 < hierarchy_distance) {
          in_stack_00000020 =
               (CQuaternion4f *)
               (*in_stack_0000001c)
                         (start_bone_index,in_stack_00000018,(float)blend_callback,
                          hierarchy_distance,(CDeformableModelInstance *)blend_weight);
          core_xform_cpp_slerpQuaternion_FUN_005f77e0
                    (result_out,in_stack_0000003c,in_stack_00000020,(float)source_quaternions);
          piVar1 = (int *)((int)in_stack_00000020 + (uint)bVar3 * -8 + 0x6b4);
          in_stack_00000020[0x6b].w = blend_weight;
          piVar2 = piVar1 + (uint)bVar3 * -2 + 1;
          *piVar1 = (&bone_index)[(uint)bVar3 * -2];
          *piVar2 = (int)(&blend_callback)[(uint)bVar3 * -2 + (uint)bVar3 * -2];
          piVar2[(uint)bVar3 * -2 + 1] =
               (int)(&blend_callback + (uint)bVar3 * -2 + (uint)bVar3 * -2)[(uint)bVar3 * -2 + 1];
        }
        result_out = result_out + 1;
        start_bone_index = start_bone_index + 1;
      } while (start_bone_index < this_ptr_00->bone_count);
    }
  }
  return;
}


// Assembly code:
// 0059f750: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
// 0059f751: PUSH ESI
// 0059f752: PUSH EDI
// 0059f753: PUSH EBP
// 0059f754: SUB ESP,0x1c
// 0059f757: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 0059f75b: FCOMP double ptr [0x0064ee20]
//   XREF to: 0064ee20 (READ)
// 0059f761: FNSTSW AX
// 0059f763: SAHF
// 0059f764: JA 0x0059f76e
//   XREF to: 0059f76e (CONDITIONAL_JUMP)
// 0059f766: ADD ESP,0x1c
//   Label: LAB_0059f766
// 0059f769: POP EBP
// 0059f76a: POP EDI
// 0059f76b: POP ESI
// 0059f76c: POP EBX
// 0059f76d: RET
// 0059f76e: MOV EDX,dword ptr [ESP + 0x30]
//   Label: LAB_0059f76e
//   XREF to: Stack[0x4] (READ)
// 0059f772: PUSH EDX
// 0059f773: XOR EBX,EBX
// 0059f775: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0059f77a: ADD ESP,0x4
// 0059f77d: MOV ECX,dword ptr [EAX + 0x28558]
// 0059f783: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059f787: TEST ECX,ECX
// 0059f789: JLE 0x0059f766
//   XREF to: 0059f766 (CONDITIONAL_JUMP)
// 0059f78b: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0059f78f: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0059f793: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0059f797: ADD EBP,0x6b0
// 0059f79d: MOV EAX,dword ptr [ESP + 0x3c]
//   Label: LAB_0059f79d
//   XREF to: Stack[0x10] (READ)
// 0059f7a1: PUSH EAX
// 0059f7a2: PUSH EBX
// 0059f7a3: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 0059f7a7: PUSH EDX
// 0059f7a8: CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
//   XREF to: 0059a100 (UNCONDITIONAL_CALL)
// 0059f7ad: ADD ESP,0xc
// 0059f7b0: TEST EAX,EAX
// 0059f7b2: JGE 0x0059f7d3
//   XREF to: 0059f7d3 (CONDITIONAL_JUMP)
// 0059f7b4: MOV ESI,dword ptr [ESP + 0x14]
//   Label: LAB_0059f7b4
//   XREF to: Stack[-0x18] (READ)
// 0059f7b8: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0059f7bc: ADD EBP,0x10
// 0059f7bf: INC EBX
// 0059f7c0: ADD ESI,0x10
// 0059f7c3: MOV EDI,dword ptr [EAX + 0x28558]
// 0059f7c9: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0059f7cd: CMP EBX,EDI
// 0059f7cf: JGE 0x0059f766
//   XREF to: 0059f766 (CONDITIONAL_JUMP)
// 0059f7d1: JMP 0x0059f79d
//   XREF to: 0059f79d (UNCONDITIONAL_JUMP)
// 0059f7d3: MOV ECX,dword ptr [ESP + 0x30]
//   Label: LAB_0059f7d3
//   XREF to: Stack[0x4] (READ)
// 0059f7d7: PUSH ECX
// 0059f7d8: PUSH EAX
// 0059f7d9: MOV ESI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x10] (READ)
// 0059f7dd: PUSH dword ptr [ESP + 0x40]
//   XREF to: Stack[0xc] (READ)
// 0059f7e1: PUSH ESI
// 0059f7e2: PUSH EBX
// 0059f7e3: CALL dword ptr [ESP + 0x54]
//   XREF to: Stack[0x14] (READ)
// 0059f7e7: MOV dword ptr [ESP + 0x2c],EAX
// 0059f7eb: FLD float ptr [ESP + 0x2c]
// 0059f7ef: ADD ESP,0x14
// 0059f7f2: SUB ESP,0x4
// 0059f7f5: MOV EDI,dword ptr [ESP + 0x38]
// 0059f7f9: FSTP float ptr [ESP]
// 0059f7fc: PUSH EDI
// 0059f7fd: PUSH EBP
// 0059f7fe: LEA ESI,[ESP + 0xc]
// 0059f802: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 0059f807: ADD ESP,0xc
// 0059f80a: MOV EDI,dword ptr [ESP + 0x14]
// 0059f80e: MOV ESI,ESP
// 0059f810: LEA EDI,[EDI + 0x6b0]
// 0059f816: MOVSD ES:EDI,ESI
// 0059f817: MOVSD ES:EDI,ESI
// 0059f818: MOVSD ES:EDI,ESI
// 0059f819: MOVSD ES:EDI,ESI
// 0059f81a: JMP 0x0059f7b4
//   XREF to: 0059f7b4 (UNCONDITIONAL_JUMP)

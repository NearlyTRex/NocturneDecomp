// Name: core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0
// Address: 0059f6e0
// Address Range: [[0059f6e0, 0059f740]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, int bone_index)
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0
          (CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,int bone_index)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  int start_bone_index;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  float *in_stack_00000010;
  
  bVar5 = 0;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  start_bone_index = 0;
  if (0 < this_ptr_00->bone_count) {
    do {
      iVar1 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                        (this_ptr_00,start_bone_index,(int)in_stack_00000010);
      if (-1 < iVar1) {
        pfVar3 = (float *)((int)this_ptr + (uint)bVar5 * -8 + 0x6b4);
        pfVar2 = in_stack_00000010 + (uint)bVar5 * -2 + 1;
        this_ptr->bone_rotations[0].w = *in_stack_00000010;
        pfVar4 = pfVar3 + (uint)bVar5 * -2 + 1;
        *pfVar3 = *pfVar2;
        *pfVar4 = pfVar2[(uint)bVar5 * -2 + 1];
        pfVar4[(uint)bVar5 * -2 + 1] = (pfVar2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
      }
      start_bone_index = start_bone_index + 1;
      this_ptr = (CDeformableModelInstance *)&(this_ptr->motion_controller).tween_speed;
    } while (start_bone_index < this_ptr_00->bone_count);
  }
  return;
}


// Assembly code:
// 0059f6e0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0
// 0059f6e1: PUSH ESI
// 0059f6e2: PUSH EDI
// 0059f6e3: PUSH EBP
// 0059f6e4: SUB ESP,0x4
// 0059f6e7: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0059f6eb: PUSH EBP
// 0059f6ec: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0059f6f1: XOR EBX,EBX
// 0059f6f3: ADD ESP,0x4
// 0059f6f6: MOV EDX,dword ptr [EAX + 0x28558]
// 0059f6fc: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0059f6ff: TEST EDX,EDX
// 0059f701: JLE 0x0059f739
//   XREF to: 0059f739 (CONDITIONAL_JUMP)
// 0059f703: MOV ESI,dword ptr [ESP + 0x20]
//   Label: LAB_0059f703
//   XREF to: Stack[0xc] (READ)
// 0059f707: PUSH ESI
// 0059f708: PUSH EBX
// 0059f709: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 0059f70d: PUSH EDI
// 0059f70e: CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
//   XREF to: 0059a100 (UNCONDITIONAL_CALL)
// 0059f713: ADD ESP,0xc
// 0059f716: TEST EAX,EAX
// 0059f718: JL 0x0059f728
//   XREF to: 0059f728 (CONDITIONAL_JUMP)
// 0059f71a: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0059f71e: LEA EDI,[EBP + 0x6b0]
// 0059f724: MOVSD ES:EDI,ESI
// 0059f725: MOVSD ES:EDI,ESI
// 0059f726: MOVSD ES:EDI,ESI
// 0059f727: MOVSD ES:EDI,ESI
// 0059f728: MOV EAX,dword ptr [ESP]
//   Label: LAB_0059f728
//   XREF to: Stack[-0x14] (DATA)
// 0059f72b: INC EBX
// 0059f72c: MOV ECX,dword ptr [EAX + 0x28558]
// 0059f732: ADD EBP,0x10
// 0059f735: CMP EBX,ECX
// 0059f737: JL 0x0059f703
//   XREF to: 0059f703 (CONDITIONAL_JUMP)
// 0059f739: ADD ESP,0x4
//   Label: LAB_0059f739
// 0059f73c: POP EBP
// 0059f73d: POP EDI
// 0059f73e: POP ESI
// 0059f73f: POP EBX
// 0059f740: RET

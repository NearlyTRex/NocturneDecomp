// Name: core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0059dbe0
// Address: 0059dbe0
// Address Range: [[0059dbe0, 0059dc9f]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0059dbe0(CDeformableModel * this_ptr)
// Cross-references:
//   core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_0059c1f0 (0059c1f0) at 0059c209 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_0059dbe0
          (CDeformableModel *this_ptr)

{
  float fVar1;
  CSkeleton *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  CSkeleton *pCVar5;
  int iVar6;
  CDeformableModel *local_18;
  float local_14;
  
  pCVar2 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
  iVar6 = 0;
  if (0 < pCVar2->bone_count) {
    local_18 = this_ptr;
    do {
      local_18->farthest_child_bone[0] = -1;
      iVar3 = 0;
      local_14 = 0.0;
      pCVar4 = this_ptr->vertex_pool;
      pCVar5 = pCVar2;
      if (0 < pCVar2->bone_count) {
        do {
          if ((iVar6 == pCVar5->bone_list[0].parent_index) &&
             (fVar1 = SQRT(pCVar4->z * pCVar4->z + pCVar4->x * pCVar4->x + pCVar4->y * pCVar4->y),
             local_14 < fVar1)) {
            local_18->farthest_child_bone[0] = iVar3;
            local_14 = fVar1;
          }
          iVar3 = iVar3 + 1;
          pCVar4 = pCVar4 + 1;
          pCVar5 = (CSkeleton *)((pCVar5->motion_list).state_names[1] + 2);
        } while (iVar3 < pCVar2->bone_count);
      }
      iVar6 = iVar6 + 1;
      local_18 = (CDeformableModel *)local_18->lod_info;
    } while (iVar6 < pCVar2->bone_count);
  }
  return;
}


// Assembly code:
// 0059dbe0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0059dbe0
// 0059dbe1: PUSH ESI
// 0059dbe2: PUSH EDI
// 0059dbe3: PUSH EBP
// 0059dbe4: SUB ESP,0x10
// 0059dbe7: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0059dbeb: PUSH EBX
// 0059dbec: CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
//   XREF to: 0059a810 (UNCONDITIONAL_CALL)
// 0059dbf1: XOR ESI,ESI
// 0059dbf3: ADD ESP,0x4
// 0059dbf6: MOV EDX,dword ptr [EAX + 0x28558]
// 0059dbfc: MOV EDI,EAX
// 0059dbfe: TEST EDX,EDX
// 0059dc00: JLE 0x0059dc67
//   XREF to: 0059dc67 (CONDITIONAL_JUMP)
// 0059dc02: LEA EAX,[EBX + 0x7c90]
// 0059dc08: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x20] (DATA)
// 0059dc0b: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059dc0f: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0059dc0f
//   XREF to: Stack[-0x1c] (READ)
// 0059dc13: XOR EBP,EBP
// 0059dc15: MOV dword ptr [EAX + 0x8dcc],0xffffffff
// 0059dc1f: XOR ECX,ECX
// 0059dc21: MOV EAX,dword ptr [EDI + 0x28558]
// 0059dc27: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 0059dc2b: TEST EAX,EAX
// 0059dc2d: JLE 0x0059dc51
//   XREF to: 0059dc51 (CONDITIONAL_JUMP)
// 0059dc2f: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0059dc32: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 0059dc36: MOV EBX,EDI
// 0059dc38: CMP ESI,dword ptr [EBX + 0x2857c]
//   Label: LAB_0059dc38
// 0059dc3e: JZ 0x0059dc6f
//   XREF to: 0059dc6f (CONDITIONAL_JUMP)
// 0059dc40: ADD EBX,0x24
//   Label: LAB_0059dc40
// 0059dc43: INC ECX
// 0059dc44: MOV EAX,dword ptr [EDI + 0x28558]
// 0059dc4a: ADD EDX,0xc
// 0059dc4d: CMP ECX,EAX
// 0059dc4f: JL 0x0059dc38
//   XREF to: 0059dc38 (CONDITIONAL_JUMP)
// 0059dc51: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_0059dc51
//   XREF to: Stack[-0x1c] (READ)
// 0059dc55: INC ESI
// 0059dc56: ADD ECX,0x4
// 0059dc59: MOV EBX,dword ptr [EDI + 0x28558]
// 0059dc5f: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059dc63: CMP ESI,EBX
// 0059dc65: JL 0x0059dc0f
//   XREF to: 0059dc0f (CONDITIONAL_JUMP)
// 0059dc67: ADD ESP,0x10
//   Label: LAB_0059dc67
// 0059dc6a: POP EBP
// 0059dc6b: POP EDI
// 0059dc6c: POP ESI
// 0059dc6d: POP EBX
// 0059dc6e: RET
// 0059dc6f: FLD float ptr [EDX + 0x4]
//   Label: LAB_0059dc6f
// 0059dc72: FMUL ST0
// 0059dc74: FLD float ptr [EDX]
// 0059dc76: FMUL ST0
// 0059dc78: FADDP
// 0059dc7a: FLD float ptr [EDX + 0x8]
// 0059dc7d: FMUL ST0
// 0059dc7f: FADDP
// 0059dc81: FSQRT
// 0059dc83: FST float ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (WRITE)
// 0059dc87: FCOMP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0059dc8b: FNSTSW AX
// 0059dc8d: SAHF
// 0059dc8e: JBE 0x0059dc40
//   XREF to: 0059dc40 (CONDITIONAL_JUMP)
// 0059dc90: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0059dc94: MOV dword ptr [EBP + 0x8dcc],ECX
// 0059dc9a: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0059dc9e: JMP 0x0059dc40
//   XREF to: 0059dc40 (UNCONDITIONAL_JUMP)

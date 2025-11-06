// Name: core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
// Address: 005a15e0
// Address Range: [[005a15e0, 005a16bc]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0(CDeformableModelInstance * this_ptr, SBoneTransformData * bone_transform)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042af60 (0042af60) at 0042b0bd [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6f80 (004d6f80) at 004d7035 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 005972fc [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bf720 (005bf720) at 005bf7ed [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
          (CDeformableModelInstance *this_ptr,SBoneTransformData *bone_transform)

{
  int iVar1;
  CSkeleton *pCVar2;
  SBoneTransformData *pSVar3;
  int iVar4;
  int iVar5;
  SBoneTransformData *pSVar6;
  SBoneTransformData *pSVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  CMatrix3x4f *pCVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float *pfVar13;
  byte bVar14;
  SBoneTransformData *local_10;
  SBoneTransformData *local_c;
  SBoneTransformData *pSVar15;
  
  bVar14 = 0;
  if (&this_ptr->bone_transform != bone_transform) {
    (this_ptr->bone_transform).root_position.x = (bone_transform->root_position).x;
    (this_ptr->bone_transform).root_position.y = (bone_transform->root_position).y;
    (this_ptr->bone_transform).root_position.z = (bone_transform->root_position).z;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar1 = pCVar2->bone_count;
  iVar5 = 0;
  if (0 < iVar1) {
    local_c = bone_transform;
    local_10 = bone_transform;
    pSVar3 = bone_transform;
    pSVar6 = bone_transform;
    pSVar7 = bone_transform;
    pSVar15 = bone_transform;
    do {
      puVar11 = (undefined4 *)((int)pSVar7 + (uint)bVar14 * -8 + 0x6b4);
      puVar8 = (undefined4 *)((int)local_10 + (uint)bVar14 * -8 + 0x10);
      pSVar7->current_pose_data[0x19] = local_10->bone_rotations[0].w;
      puVar12 = puVar11 + (uint)bVar14 * -2 + 1;
      puVar9 = puVar8 + (uint)bVar14 * -2 + 1;
      *puVar11 = *puVar8;
      *puVar12 = *puVar9;
      puVar12[(uint)bVar14 * -2 + 1] = puVar9[(uint)bVar14 * -2 + 1];
      pSVar15->bone_world_matrices[0x1b].m[0].x = pSVar6->current_pose_data[0];
      pSVar6 = (SBoneTransformData *)&(pSVar6->root_position).y;
      pSVar7 = (SBoneTransformData *)&pSVar7->bone_rotations[0].x;
      pCVar10 = local_c->bone_world_matrices;
      pfVar13 = &pSVar3->bone_world_matrices[0x23].m[1].x;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar13 = pCVar10->m[0].w;
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + (uint)bVar14 * -8 + 4);
        pfVar13 = pfVar13 + (uint)bVar14 * -2 + 1;
      }
      iVar5 = iVar5 + 1;
      local_c = (SBoneTransformData *)&local_c->bone_rotations[2].x;
      pSVar15 = (SBoneTransformData *)&(pSVar15->root_position).y;
      local_10 = (SBoneTransformData *)&local_10->bone_rotations[0].x;
      pSVar3 = (SBoneTransformData *)&pSVar3->bone_rotations[2].x;
    } while (iVar5 < iVar1);
  }
  bone_transform[1].current_pose_data[0x52] = -NAN;
  return;
}


// Assembly code:
// 005a15e0: PUSH EDI
//   Label: core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
// 005a15e1: PUSH EBP
// 005a15e2: SUB ESP,0x10
// 005a15e5: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005a15e9: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005a15ed: ADD EAX,0x6a4
// 005a15f2: CMP EAX,EDI
// 005a15f4: JZ 0x005a1606
//   XREF to: 005a1606 (CONDITIONAL_JUMP)
// 005a15f6: MOV EDX,dword ptr [EDI]
// 005a15f8: MOV dword ptr [EAX],EDX
// 005a15fa: MOV EDX,dword ptr [EDI + 0x4]
// 005a15fd: MOV dword ptr [EAX + 0x4],EDX
// 005a1600: MOV EDX,dword ptr [EDI + 0x8]
// 005a1603: MOV dword ptr [EAX + 0x8],EDX
// 005a1606: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_005a1606
//   XREF to: Stack[0x4] (READ)
// 005a160a: PUSH EDX
// 005a160b: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005a1610: ADD ESP,0x4
// 005a1613: MOV EAX,dword ptr [EAX + 0x28558]
// 005a1619: XOR EDX,EDX
// 005a161b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 005a161e: TEST EAX,EAX
// 005a1620: JLE 0x005a16a9
//   XREF to: 005a16a9 (CONDITIONAL_JUMP)
// 005a1626: PUSH ESI
// 005a1627: PUSH EBX
// 005a1628: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005a162c: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x10] (WRITE)
// 005a1630: MOV EBX,EDI
// 005a1632: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005a1636: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005a163a: MOV EBP,EAX
// 005a163c: MOV ESI,dword ptr [ESP + 0xc]
//   Label: LAB_005a163c
//   XREF to: Stack[-0x14] (READ)
// 005a1640: LEA EDI,[EBP + 0x6b0]
// 005a1646: LEA ESI,[ESI + 0xc]
// 005a1649: MOV ECX,0xc
// 005a164e: MOVSD ES:EDI,ESI
// 005a164f: MOVSD ES:EDI,ESI
// 005a1650: MOVSD ES:EDI,ESI
// 005a1651: MOVSD ES:EDI,ESI
// 005a1652: ADD EAX,0x30
// 005a1655: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc] (READ)
// 005a1659: FLD float ptr [EBX + 0x64c]
// 005a165f: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 005a1663: FSTP float ptr [EDI + 0xcf0]
// 005a1669: LEA EDI,[EAX + 0xe50]
// 005a166f: LEA ESI,[ESI + 0x7dc]
// 005a1675: ADD EBX,0x4
// 005a1678: ADD EBP,0x10
// 005a167b: MOVSD.REP ES:EDI,ESI
// 005a167d: INC EDX
// 005a167e: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 005a1682: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc] (READ)
// 005a1686: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 005a168a: ADD ESI,0x30
// 005a168d: ADD EDI,0x4
// 005a1690: ADD ECX,0x10
// 005a1693: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 005a1697: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0xc] (WRITE)
// 005a169b: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005a169f: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005a16a3: CMP EDX,ESI
// 005a16a5: JL 0x005a163c
//   XREF to: 005a163c (CONDITIONAL_JUMP)
// 005a16a7: POP EBX
// 005a16a8: POP ESI
// 005a16a9: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_005a16a9
//   XREF to: Stack[0x4] (READ)
// 005a16ad: MOV dword ptr [EAX + 0x2230],0xffffffff
// 005a16b7: ADD ESP,0x10
// 005a16ba: POP EBP
// 005a16bb: POP EDI
// 005a16bc: RET

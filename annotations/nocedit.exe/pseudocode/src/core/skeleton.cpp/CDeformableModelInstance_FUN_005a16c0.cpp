// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_005a16c0
// Address: 005a16c0
// Address Range: [[005a16c0, 005a17a0]]
// Convention: __cdecl
// Signature: CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_FUN_005a16c0(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042d530 (0042d530) at 0042d552 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e620b [UNCONDITIONAL_CALL]
// Function calls:
//   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0
//   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_skeleton_cpp_CDeformableModelInstance_FUN_005a16c0(CDeformableModelInstance *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  CDeformableModel *this_ptr_01;
  CSkeleton *pCVar1;
  CVector3f *pCVar2;
  uint corner_index;
  BADSPACEBASE *in_ESP;
  CBoundingBox3D *in_stack_00000008;
  CBoundingBox3D *in_stack_ffffffd0;
  CVector3f local_20;
  CBoundingBox3D *local_14;
  int iVar3;
  
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  pCVar1 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr_01);
  local_20.y = (float)pCVar1->bone_count;
  core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0(in_stack_00000008);
  iVar3 = 0;
  if (0 < (int)local_20.z) {
    local_14 = (CBoundingBox3D *)&this_ptr_01->bbox_pool[0].max;
    do {
      this_ptr_00 = local_14;
      if (this_ptr_01->bone_flags[0] == 2) {
        corner_index = 0;
        do {
          pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                             (this_ptr_00,(CVector3f *)&stack0xffffffd0,corner_index);
          pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             (&local_20,pCVar2,(CMatrix3x4f *)in_stack_ffffffd0);
          corner_index = corner_index + 1;
          in_stack_ffffffd0 = in_stack_00000008;
          core_box_cpp_CBoundingBox3D_expand_FUN_00420240(in_stack_00000008,pCVar2);
        } while ((int)corner_index < 8);
      }
      this_ptr_01 = (CDeformableModel *)this_ptr_01->lod_info;
      local_14 = local_14 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)local_20.z);
  }
  return in_stack_00000008;
}


// Assembly code:
// 005a16c0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_005a16c0
// 005a16c1: PUSH ESI
// 005a16c2: PUSH EDI
// 005a16c3: PUSH EBP
// 005a16c4: SUB ESP,0x2c
// 005a16c7: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 005a16cb: MOV EBP,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 005a16cf: PUSH ESI
// 005a16d0: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a16d5: ADD ESP,0x4
// 005a16d8: PUSH EAX
// 005a16d9: MOV EBX,EAX
// 005a16db: CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
//   XREF to: 0059a810 (UNCONDITIONAL_CALL)
// 005a16e0: ADD ESP,0x4
// 005a16e3: MOV EAX,dword ptr [EAX + 0x28558]
// 005a16e9: PUSH EBP
// 005a16ea: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005a16ee: CALL core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0
//   XREF to: 00420fb0 (UNCONDITIONAL_CALL)
// 005a16f3: ADD ESP,0x4
// 005a16f6: XOR EDX,EDX
// 005a16f8: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 005a16fc: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a1700: TEST ECX,ECX
// 005a1702: JLE 0x005a1797
//   XREF to: 005a1797 (CONDITIONAL_JUMP)
// 005a1708: LEA EAX,[EBX + 0x814c]
// 005a170e: ADD ESI,0xe80
// 005a1714: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 005a1718: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005a171c: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 005a1720: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_005a1720
//   XREF to: Stack[-0x18] (READ)
// 005a1724: CMP dword ptr [EAX + 0x8aac],0x2
// 005a172b: JNZ 0x005a1765
//   XREF to: 005a1765 (CONDITIONAL_JUMP)
// 005a172d: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005a1731: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (READ)
// 005a1735: XOR EBX,EBX
// 005a1737: PUSH EDI
//   Label: LAB_005a1737
// 005a1738: PUSH EBX
// 005a1739: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3c] (DATA)
// 005a173d: PUSH EAX
// 005a173e: PUSH ESI
// 005a173f: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 005a1744: ADD ESP,0xc
// 005a1747: PUSH EAX
// 005a1748: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x30] (DATA)
// 005a174c: PUSH EAX
// 005a174d: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005a1752: ADD ESP,0xc
// 005a1755: PUSH EAX
// 005a1756: PUSH EBP
// 005a1757: INC EBX
// 005a1758: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 005a175d: ADD ESP,0x8
// 005a1760: CMP EBX,0x8
// 005a1763: JL 0x005a1737
//   XREF to: 005a1737 (CONDITIONAL_JUMP)
// 005a1765: MOV EBX,dword ptr [ESP + 0x24]
//   Label: LAB_005a1765
//   XREF to: Stack[-0x18] (READ)
// 005a1769: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (READ)
// 005a176d: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005a1771: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 005a1775: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 005a1779: ADD EBX,0x4
// 005a177c: ADD ESI,0x18
// 005a177f: ADD EDI,0x30
// 005a1782: INC EAX
// 005a1783: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 005a1787: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 005a178b: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005a178f: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a1793: CMP EAX,EDX
// 005a1795: JL 0x005a1720
//   XREF to: 005a1720 (CONDITIONAL_JUMP)
// 005a1797: MOV EAX,EBP
//   Label: LAB_005a1797
// 005a1799: ADD ESP,0x2c
// 005a179c: POP EBP
// 005a179d: POP EDI
// 005a179e: POP ESI
// 005a179f: POP EBX
// 005a17a0: RET

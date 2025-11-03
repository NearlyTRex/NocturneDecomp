// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_005a15e0
// Address: 005a15e0
// Address Range: [[005a15e0, 005a16bc]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_FUN_005a15e0(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042af60 (0042af60) at 0042b0bd [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6f80 (004d6f80) at 004d7035 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 005972fc [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bf720 (005bf720) at 005bf7ed [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_FUN_005a15e0(CDeformableModelInstance *this_ptr)

{
  int iVar1;
  int extraout_EAX;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  undefined4 *in_stack_00000008;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *puVar10;
  
  bVar9 = 0;
  if (this_ptr->field3_0x508 + 0x19c != (char *)in_stack_00000008) {
    *(undefined4 *)(this_ptr->field3_0x508 + 0x19c) = *in_stack_00000008;
    *(undefined4 *)(this_ptr->field3_0x508 + 0x1a0) = in_stack_00000008[1];
    *(undefined4 *)(this_ptr->field3_0x508 + 0x1a4) = in_stack_00000008[2];
  }
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(this_ptr);
  iVar1 = *(int *)(extraout_EAX + 0x28558);
  iVar4 = 0;
  if (0 < iVar1) {
    local_c = in_stack_00000008;
    local_10 = in_stack_00000008;
    puVar2 = in_stack_00000008;
    puVar5 = in_stack_00000008;
    puVar6 = in_stack_00000008;
    puVar10 = in_stack_00000008;
    do {
      puVar8 = puVar6 + (uint)bVar9 * -2 + 0x1ad;
      puVar7 = local_10 + (uint)bVar9 * -2 + 4;
      puVar6[0x1ac] = local_10[3];
      *puVar8 = *puVar7;
      puVar8[(uint)bVar9 * -2 + 1] = puVar7[(uint)bVar9 * -2 + 1];
      (puVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (puVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
      puVar10[0x33c] = puVar5[0x193];
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 4;
      puVar7 = local_c + 0x1f7;
      puVar8 = puVar2 + 0x3a0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      iVar4 = iVar4 + 1;
      local_c = local_c + 0xc;
      puVar10 = puVar10 + 1;
      local_10 = local_10 + 4;
      puVar2 = puVar2 + 0xc;
    } while (iVar4 < iVar1);
  }
  in_stack_00000008[0x88c] = 0xffffffff;
  return;
}


// Assembly code:
// 005a15e0: PUSH EDI
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_005a15e0
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
// 005a160b: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
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

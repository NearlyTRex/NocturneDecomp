// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_005a1510
// Address: 005a1510
// Address Range: [[005a1510, 005a15d8]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_FUN_005a1510(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042af60 (0042af60) at 0042b013 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6f80 (004d6f80) at 004d6f9e [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00528d20 (00528d20) at 005292b9 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 005972ee [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bf720 (005bf720) at 005bf7e1 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_FUN_005a1510(CDeformableModelInstance *this_ptr)

{
  int iVar1;
  int extraout_EAX;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  byte bVar9;
  undefined4 *in_stack_00000008;
  CDeformableModelInstance *local_10;
  CDeformableModelInstance *local_c;
  undefined4 *puVar10;
  
  bVar9 = 0;
  if ((char *)in_stack_00000008 != this_ptr->field3_0x508 + 0x19c) {
    *in_stack_00000008 = *(undefined4 *)(this_ptr->field3_0x508 + 0x19c);
    in_stack_00000008[1] = *(undefined4 *)(this_ptr->field3_0x508 + 0x1a0);
    in_stack_00000008[2] = *(undefined4 *)(this_ptr->field3_0x508 + 0x1a4);
  }
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(this_ptr);
  iVar1 = *(int *)(extraout_EAX + 0x28558);
  iVar4 = 0;
  if (0 < iVar1) {
    local_c = this_ptr;
    local_10 = this_ptr;
    puVar2 = in_stack_00000008;
    puVar10 = in_stack_00000008;
    do {
      puVar8 = in_stack_00000008 + (uint)bVar9 * -2 + 4;
      puVar5 = (undefined4 *)((int)local_10 + (uint)bVar9 * -8 + 0x6b4);
      in_stack_00000008[3] = *(undefined4 *)(local_10->field3_0x508 + 0x1a8);
      puVar6 = puVar5 + (uint)bVar9 * -2 + 1;
      *puVar8 = *puVar5;
      puVar8[(uint)bVar9 * -2 + 1] = *puVar6;
      (puVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
      puVar10[0x193] = *(undefined4 *)(this_ptr->field3_0x508 + 0x7e8);
      this_ptr = (CDeformableModelInstance *)&(this_ptr->motion_controller).current_motion_index;
      in_stack_00000008 = in_stack_00000008 + 4;
      pcVar7 = local_c->field3_0x508 + 0x978;
      puVar5 = puVar2 + 0x1f7;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + (uint)bVar9 * -8 + 4;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      }
      iVar4 = iVar4 + 1;
      local_c = (CDeformableModelInstance *)(local_c->motion_controller).current_motion_name;
      puVar10 = puVar10 + 1;
      local_10 = (CDeformableModelInstance *)&(local_10->motion_controller).tween_speed;
      puVar2 = puVar2 + 0xc;
    } while (iVar4 < iVar1);
  }
  return;
}


// Assembly code:
// 005a1510: PUSH EDI
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_005a1510
// 005a1511: PUSH EBP
// 005a1512: SUB ESP,0x10
// 005a1515: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005a1519: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005a151d: LEA EAX,[EDI + 0x6a4]
// 005a1523: CMP EBP,EAX
// 005a1525: JZ 0x005a1538
//   XREF to: 005a1538 (CONDITIONAL_JUMP)
// 005a1527: MOV EDX,dword ptr [EAX]
// 005a1529: MOV dword ptr [EBP],EDX
// 005a152c: MOV EDX,dword ptr [EAX + 0x4]
// 005a152f: MOV dword ptr [EBP + 0x4],EDX
// 005a1532: MOV EDX,dword ptr [EAX + 0x8]
// 005a1535: MOV dword ptr [EBP + 0x8],EDX
// 005a1538: PUSH EDI
//   Label: LAB_005a1538
// 005a1539: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005a153e: ADD ESP,0x4
// 005a1541: MOV EAX,dword ptr [EAX + 0x28558]
// 005a1547: XOR EDX,EDX
// 005a1549: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 005a154c: TEST EAX,EAX
// 005a154e: JLE 0x005a15d3
//   XREF to: 005a15d3 (CONDITIONAL_JUMP)
// 005a1554: PUSH ESI
// 005a1555: PUSH EBX
// 005a1556: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x10] (WRITE)
// 005a155a: MOV dword ptr [ESP + 0x14],EBP
//   XREF to: Stack[-0xc] (WRITE)
// 005a155e: MOV EBX,EDI
// 005a1560: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005a1564: MOV EAX,EBP
// 005a1566: MOV ESI,dword ptr [ESP + 0xc]
//   Label: LAB_005a1566
//   XREF to: Stack[-0x14] (READ)
// 005a156a: LEA EDI,[EBP + 0xc]
// 005a156d: LEA ESI,[ESI + 0x6b0]
// 005a1573: MOVSD ES:EDI,ESI
// 005a1574: MOVSD ES:EDI,ESI
// 005a1575: MOVSD ES:EDI,ESI
// 005a1576: MOVSD ES:EDI,ESI
// 005a1577: ADD EAX,0x30
// 005a157a: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc] (READ)
// 005a157e: MOV ECX,dword ptr [EBX + 0xcf0]
// 005a1584: MOV dword ptr [ESI + 0x64c],ECX
// 005a158a: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 005a158e: MOV ECX,0xc
// 005a1593: LEA EDI,[EAX + 0x7ac]
// 005a1599: LEA ESI,[ESI + 0xe80]
// 005a159f: ADD EBX,0x4
// 005a15a2: ADD EBP,0x10
// 005a15a5: MOVSD.REP ES:EDI,ESI
// 005a15a7: INC EDX
// 005a15a8: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 005a15ac: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc] (READ)
// 005a15b0: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 005a15b4: ADD ESI,0x30
// 005a15b7: ADD EDI,0x4
// 005a15ba: ADD ECX,0x10
// 005a15bd: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 005a15c1: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0xc] (WRITE)
// 005a15c5: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005a15c9: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005a15cd: CMP EDX,ESI
// 005a15cf: JL 0x005a1566
//   XREF to: 005a1566 (CONDITIONAL_JUMP)
// 005a15d1: POP EBX
// 005a15d2: POP ESI
// 005a15d3: ADD ESP,0x10
//   Label: LAB_005a15d3
// 005a15d6: POP EBP
// 005a15d7: POP EDI
// 005a15d8: RET

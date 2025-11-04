// Name: core_charactr.cpp_CCharacter_FUN_0042b110
// Address: 0042b110
// Address Range: [[0042b110, 0042b18e]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b110(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042b0e0 (0042b0e0) at 0042b100 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b110(CCharacter *this_ptr)

{
  CSkeleton *pCVar1;
  char *pcVar2;
  CCharacter *pCVar3;
  int iVar4;
  
  iVar4 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(&this_ptr->model);
  if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
    pcVar2 = this_ptr->cloth_data + 0x934;
    pCVar3 = this_ptr;
    do {
      if (((this_ptr->model).part_visibility_flags[*(int *)(pCVar3->cloth_data + 0x484)] != 0) &&
         (pCVar1->bone_list[*(int *)(pCVar3->cloth_data + 0x488)].parent_index != -1)) {
        (**(code **)(*(int *)(pcVar2 + 0x154) + 0xc))();
      }
      pCVar3 = (CCharacter *)((pCVar3->base_actor).actor_name + 0x18);
      iVar4 = iVar4 + 1;
      pcVar2 = pcVar2 + 0x2a4;
    } while (iVar4 < *(int *)(this_ptr->cloth_data + 0x478));
  }
  return;
}


// Assembly code:
// 0042b110: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042b110
// 0042b111: PUSH ESI
// 0042b112: PUSH EDI
// 0042b113: PUSH EBP
// 0042b114: SUB ESP,0x4
// 0042b117: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0042b11b: LEA EAX,[EBP + 0x158]
// 0042b121: PUSH EAX
// 0042b122: XOR EDI,EDI
// 0042b124: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0042b129: ADD ESP,0x4
// 0042b12c: MOV EDX,dword ptr [EBP + 0x2f10]
// 0042b132: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0042b135: TEST EDX,EDX
// 0042b137: JLE 0x0042b178
//   XREF to: 0042b178 (CONDITIONAL_JUMP)
// 0042b139: LEA EBX,[EBP + 0x33cc]
// 0042b13f: MOV ESI,EBP
// 0042b141: MOV EAX,dword ptr [ESI + 0x2f1c]
//   Label: LAB_0042b141
// 0042b147: CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0
// 0042b14f: JZ 0x0042b164
//   XREF to: 0042b164 (CONDITIONAL_JUMP)
// 0042b151: IMUL EAX,dword ptr [ESI + 0x2f20],0x24
// 0042b158: ADD EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0042b15b: CMP dword ptr [EAX + 0x2857c],-0x1
// 0042b162: JNZ 0x0042b180
//   XREF to: 0042b180 (CONDITIONAL_JUMP)
// 0042b164: ADD ESI,0x18
//   Label: LAB_0042b164
// 0042b167: INC EDI
// 0042b168: MOV ECX,dword ptr [EBP + 0x2f10]
// 0042b16e: ADD EBX,0x2a4
// 0042b174: CMP EDI,ECX
// 0042b176: JL 0x0042b141
//   XREF to: 0042b141 (CONDITIONAL_JUMP)
// 0042b178: ADD ESP,0x4
//   Label: LAB_0042b178
// 0042b17b: POP EBP
// 0042b17c: POP EDI
// 0042b17d: POP ESI
// 0042b17e: POP EBX
// 0042b17f: RET
// 0042b180: PUSH EBX
//   Label: LAB_0042b180
// 0042b181: MOV EAX,dword ptr [EBX + 0x154]
// 0042b187: CALL dword ptr [EAX + 0xc]
// 0042b18a: ADD ESP,0x4
// 0042b18d: JMP 0x0042b164
//   XREF to: 0042b164 (UNCONDITIONAL_JUMP)

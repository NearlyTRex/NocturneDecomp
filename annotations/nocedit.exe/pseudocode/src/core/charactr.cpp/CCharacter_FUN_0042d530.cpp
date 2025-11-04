// Name: core_charactr.cpp_CCharacter_FUN_0042d530
// Address: 0042d530
// Address Range: [[0042d530, 0042d598]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042d530(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0 (0042dfc0) at 0042dfe7 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_computePickupInLoop_FUN_0042f800 (0042f800) at 0042f82e [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup2_FUN_0051f780 (0051f780) at 0051f8e4 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a16c0

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042d530(CCharacter *this_ptr)

{
  CBoundingBox3D *pCVar1;
  
  if ((this_ptr->model).field18_0x2260[0] != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_FUN_005a16c0(&this_ptr->model);
    if ((CBoundingBox3D *)(this_ptr->field11_0x25a0 + 0x58) != pCVar1) {
      (((CBoundingBox3D *)(this_ptr->field11_0x25a0 + 0x58))->min).x = (pCVar1->min).x;
      *(float *)(this_ptr->field11_0x25a0 + 0x5c) = (pCVar1->min).y;
      *(float *)(this_ptr->field11_0x25a0 + 0x60) = (pCVar1->min).z;
    }
    if ((CVector3f *)(this_ptr->field11_0x25a0 + 100) != &pCVar1->max) {
      *(float *)(this_ptr->field11_0x25a0 + 100) = (pCVar1->max).x;
      *(float *)(this_ptr->field11_0x25a0 + 0x68) = (pCVar1->max).y;
      *(float *)(this_ptr->field11_0x25a0 + 0x6c) = (pCVar1->max).z;
      return;
    }
  }
  return;
}


// Assembly code:
// 0042d530: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042d530
// 0042d531: SUB ESP,0x18
// 0042d534: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0042d538: LEA EDX,[EBX + 0x158]
// 0042d53e: LEA EAX,[EBX + 0x23b8]
// 0042d544: CMP byte ptr [EAX],0x0
// 0042d547: JNZ 0x0042d54e
//   XREF to: 0042d54e (CONDITIONAL_JUMP)
// 0042d549: ADD ESP,0x18
//   Label: LAB_0042d549
// 0042d54c: POP EBX
// 0042d54d: RET
// 0042d54e: MOV EAX,ESP
//   Label: LAB_0042d54e
// 0042d550: PUSH EAX
// 0042d551: PUSH EDX
// 0042d552: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a16c0
//   XREF to: 005a16c0 (UNCONDITIONAL_CALL)
// 0042d557: LEA EDX,[EBX + 0x25f8]
// 0042d55d: ADD ESP,0x8
// 0042d560: MOV ECX,EDX
// 0042d562: MOV EBX,EAX
// 0042d564: CMP EDX,EAX
// 0042d566: JZ 0x0042d57a
//   XREF to: 0042d57a (CONDITIONAL_JUMP)
// 0042d568: PUSH ESI
// 0042d569: MOV ESI,dword ptr [EAX]
// 0042d56b: MOV dword ptr [EDX],ESI
// 0042d56d: MOV ESI,dword ptr [EAX + 0x4]
// 0042d570: MOV dword ptr [EDX + 0x4],ESI
// 0042d573: MOV ESI,dword ptr [EAX + 0x8]
// 0042d576: MOV dword ptr [EDX + 0x8],ESI
// 0042d579: POP ESI
// 0042d57a: LEA EDX,[EBX + 0xc]
//   Label: LAB_0042d57a
// 0042d57d: LEA EAX,[ECX + 0xc]
// 0042d580: CMP EAX,EDX
// 0042d582: JZ 0x0042d549
//   XREF to: 0042d549 (CONDITIONAL_JUMP)
// 0042d584: MOV ECX,dword ptr [EDX]
// 0042d586: MOV dword ptr [EAX],ECX
// 0042d588: MOV ECX,dword ptr [EDX + 0x4]
// 0042d58b: MOV dword ptr [EAX + 0x4],ECX
// 0042d58e: MOV ECX,dword ptr [EDX + 0x8]
// 0042d591: MOV dword ptr [EAX + 0x8],ECX
// 0042d594: ADD ESP,0x18
// 0042d597: POP EBX
// 0042d598: RET

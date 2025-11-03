// Name: core_charactr.cpp_CCharacter_FUN_0042d300
// Address: 0042d300
// Address Range: [[0042d300, 0042d35e]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042d300(CCharacter * this_ptr)
// Cross-references:
//   core_hostage.cpp_CHostage_FUN_004f6550 (004f6550) at 004f69a3 [UNCONDITIONAL_CALL]
// Function calls:
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042d300(CCharacter *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  byte bVar3;
  int in_stack_00000008;
  CMatrix3x4f *in_stack_ffffffc8;
  undefined4 auStack_34 [11];
  
  bVar3 = 0;
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)this_ptr->carry_hands[in_stack_00000008].field2_0xc,
             (CMatrix3x4f *)
             ((this_ptr->model).field3_0x508 +
             *(int *)this_ptr->carry_hands[in_stack_00000008].field0_0x0 * 0x30 + 0x978),
             in_stack_ffffffc8);
  puVar2 = auStack_34;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}


// Assembly code:
// 0042d300: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042d300
// 0042d301: PUSH EDI
// 0042d302: SUB ESP,0x30
// 0042d305: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 0042d309: MOV EBX,ESI
// 0042d30b: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 0042d30f: MOV EAX,EDX
// 0042d311: SHL EAX,0x4
// 0042d314: ADD EAX,EDX
// 0042d316: LEA ESI,[ECX + 0x24ac]
// 0042d31c: SHL EAX,0x2
// 0042d31f: ADD ESI,EAX
// 0042d321: MOV EDX,dword ptr [ESI]
// 0042d323: LEA EAX,[EDX*0x4 + 0x0]
// 0042d32a: SUB EAX,EDX
// 0042d32c: MOV EDX,EAX
// 0042d32e: SHL EDX,0x4
// 0042d331: LEA EAX,[ECX + 0xfd8]
// 0042d337: ADD EAX,EDX
// 0042d339: PUSH EAX
// 0042d33a: ADD ESI,0xc
// 0042d33d: PUSH ESI
// 0042d33e: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x38] (DATA)
// 0042d342: MOV EDI,EBX
// 0042d344: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0042d349: MOV ECX,0xc
// 0042d34e: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x38] (DATA)
// 0042d352: ADD ESP,0x8
// 0042d355: MOVSD.REP ES:EDI,ESI
// 0042d357: MOV EAX,EBX
// 0042d359: ADD ESP,0x30
// 0042d35c: POP EDI
// 0042d35d: POP EBX
// 0042d35e: RET

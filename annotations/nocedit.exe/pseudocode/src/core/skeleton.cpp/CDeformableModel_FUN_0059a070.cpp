// Name: core_skeleton.cpp_CDeformableModel_FUN_0059a070
// Address: 0059a070
// Address Range: [[0059a070, 0059a0ff]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModel_FUN_0059a070()
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e0a0 (0059e0a0) at 0059e1c0 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_UnkSomethingWriteMe2_FUN_0059eb50 (0059eb50) at 0059f12e [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_005a0ad0 (005a0ad0) at 005a0b3c [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModel_FUN_0059a050
//   core_xform.cpp_slerpQuaternion_FUN_005f77e0

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModel_FUN_0059a070(CDeformableModel* param_1,
   undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5) */

void core_skeleton_cpp_CDeformableModel_FUN_0059a070(void)

{
  undefined4 *puVar1;
  CQuaternion4f *result_out;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  float in_stack_00000014;
  undefined4 auStackY_180c [1524];
  double dVar6;
  float in_stack_ffffffd0;
  undefined4 uStack_24;
  
  bVar5 = 0;
  dVar6 = (double)in_stack_00000014;
  if ((dVar6 <= 0.0) || (1.0 <= dVar6)) {
    puVar3 = (undefined4 *)&stack0xffffffd0;
    puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModel_FUN_0059a050();
  }
  else {
    core_skeleton_cpp_CDeformableModel_FUN_0059a050();
    result_out = (CQuaternion4f *)core_skeleton_cpp_CDeformableModel_FUN_0059a050();
    puVar3 = (undefined4 *)&stack0xffffffd8;
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              (result_out,SUB84(dVar6,0),(CQuaternion4f *)((ulonglong)dVar6 >> 0x20),
               in_stack_ffffffd0);
    puVar1 = (undefined4 *)&stack0xffffffec;
  }
  puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
  puVar2 = puVar1 + (uint)bVar5 * -2 + 1;
  *puVar3 = *puVar1;
  *puVar4 = *puVar2;
  puVar4[(uint)bVar5 * -2 + 1] = puVar2[(uint)bVar5 * -2 + 1];
  (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (puVar2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  puVar3 = unaff_ESI + (uint)bVar5 * -2 + 1;
  *unaff_ESI = uStack_24;
  *puVar3 = *(undefined4 *)(&stack0xffffffe0 + (uint)bVar5 * -8);
  puVar3[(uint)bVar5 * -2 + 1] =
       *(undefined4 *)(&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  (puVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  return;
}


// Assembly code:
// 0059a070: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_FUN_0059a070
// 0059a071: PUSH EDI
// 0059a072: PUSH EBP
// 0059a073: MOV EBP,ESP
// 0059a075: SUB ESP,0x28
// 0059a078: AND ESP,0xfffffff8
// 0059a07b: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0059a07e: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 0059a081: MOV EBX,ESI
// 0059a083: MOV ESI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0059a086: FLD float ptr [EBP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 0059a089: FLDZ
// 0059a08b: FXCH
// 0059a08d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0059a090: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0059a093: FNSTSW AX
// 0059a095: SAHF
// 0059a096: JNC 0x0059a0c9
//   XREF to: 0059a0c9 (CONDITIONAL_JUMP)
// 0059a098: FLD1
// 0059a09a: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0059a09d: FNSTSW AX
// 0059a09f: SAHF
// 0059a0a0: JA 0x0059a0cf
//   XREF to: 0059a0cf (CONDITIONAL_JUMP)
// 0059a0a2: PUSH EDX
// 0059a0a3: PUSH EDI
//   Label: LAB_0059a0a3
// 0059a0a4: PUSH ESI
// 0059a0a5: LEA EDI,[ESP + 0x14]
//   XREF to: Stack[-0x30] (DATA)
// 0059a0a9: CALL core_skeleton.cpp_CDeformableModel_FUN_0059a050
//   XREF to: 0059a050 (UNCONDITIONAL_CALL)
// 0059a0ae: MOV ESI,EAX
// 0059a0b0: ADD ESP,0xc
//   Label: LAB_0059a0b0
// 0059a0b3: MOVSD ES:EDI,ESI
// 0059a0b4: MOVSD ES:EDI,ESI
// 0059a0b5: MOVSD ES:EDI,ESI
// 0059a0b6: MOVSD ES:EDI,ESI
// 0059a0b7: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x30] (DATA)
// 0059a0bb: MOV EDI,EBX
// 0059a0bd: MOVSD ES:EDI,ESI
// 0059a0be: MOVSD ES:EDI,ESI
// 0059a0bf: MOVSD ES:EDI,ESI
// 0059a0c0: MOVSD ES:EDI,ESI
// 0059a0c1: MOV EAX,EBX
// 0059a0c3: MOV ESP,EBP
// 0059a0c5: POP EBP
// 0059a0c6: POP EDI
// 0059a0c7: POP EBX
// 0059a0c8: RET
// 0059a0c9: MOV ECX,dword ptr [EBP + 0x18]
//   Label: LAB_0059a0c9
//   XREF to: Stack[0xc] (READ)
// 0059a0cc: PUSH ECX
// 0059a0cd: JMP 0x0059a0a3
//   XREF to: 0059a0a3 (UNCONDITIONAL_JUMP)
// 0059a0cf: PUSH dword ptr [EBP + 0x20]
//   Label: LAB_0059a0cf
//   XREF to: Stack[0x14] (READ)
// 0059a0d2: PUSH EDX
// 0059a0d3: PUSH EDI
// 0059a0d4: PUSH ESI
// 0059a0d5: CALL core_skeleton.cpp_CDeformableModel_FUN_0059a050
//   XREF to: 0059a050 (UNCONDITIONAL_CALL)
// 0059a0da: ADD ESP,0xc
// 0059a0dd: PUSH EAX
// 0059a0de: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0059a0e1: PUSH EDX
// 0059a0e2: PUSH EDI
// 0059a0e3: PUSH ESI
// 0059a0e4: CALL core_skeleton.cpp_CDeformableModel_FUN_0059a050
//   XREF to: 0059a050 (UNCONDITIONAL_CALL)
// 0059a0e9: ADD ESP,0xc
// 0059a0ec: PUSH EAX
// 0059a0ed: LEA ESI,[ESP + 0x24]
//   XREF to: Stack[-0x20] (DATA)
// 0059a0f1: LEA EDI,[ESP + 0x14]
//   XREF to: Stack[-0x30] (DATA)
// 0059a0f5: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 0059a0fa: LEA ESI,[ESP + 0x24]
//   XREF to: Stack[-0x20] (DATA)
// 0059a0fe: JMP 0x0059a0b0
//   XREF to: 0059a0b0 (UNCONDITIONAL_JUMP)

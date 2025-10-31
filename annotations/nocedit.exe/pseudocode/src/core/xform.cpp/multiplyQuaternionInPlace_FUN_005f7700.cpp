// Name: core_xform.cpp_multiplyQuaternionInPlace_FUN_005f7700
// Address: 005f7700
// Address Range: [[005f7700, 005f772e]]
// Convention: __cdecl
// Signature: CQuaternion4f * core_xform.cpp_multiplyQuaternionInPlace_FUN_005f7700(CQuaternion4f * quat1_inout, CQuaternion4f * quat2_ptr)
// Function calls:
//   core_xform.cpp_multiplyQuaternion_FUN_005f7640

#include "nocturne.h"

CQuaternion4f * __cdecl
core_xform_cpp_multiplyQuaternionInPlace_FUN_005f7700
          (CQuaternion4f *quat1_inout,CQuaternion4f *quat2_ptr)

{
  BADSPACEBASE *in_ESP;
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  float afStackY_17f4 [1524];
  CQuaternion4f *in_stack_ffffffe4;
  float fStack_18;
  
  bVar3 = 0;
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(quat1_inout,quat2_ptr,in_stack_ffffffe4);
  puVar1 = (undefined4 *)((int)quat1_inout + (uint)bVar3 * -8 + 4);
  quat1_inout->w = fStack_18;
  puVar2 = puVar1 + (uint)bVar3 * -2 + 1;
  *puVar1 = *(undefined4 *)(&stack0xffffffec + (uint)bVar3 * -8);
  *puVar2 = *(undefined4 *)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  return quat1_inout;
}


// Assembly code:
// 005f7700: PUSH EBX
//   Label: core_xform.cpp_multiplyQuaternionInPlace_FUN_005f7700
// 005f7701: PUSH ESI
// 005f7702: PUSH EDI
// 005f7703: SUB ESP,0x10
// 005f7706: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005f770a: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005f770e: PUSH EDX
// 005f770f: PUSH EBX
// 005f7710: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x1c] (DATA)
// 005f7714: MOV EDI,EBX
// 005f7716: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 005f771b: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x1c] (DATA)
// 005f771f: ADD ESP,0x8
// 005f7722: MOV EAX,EBX
// 005f7724: MOVSD ES:EDI,ESI
// 005f7725: MOVSD ES:EDI,ESI
// 005f7726: MOVSD ES:EDI,ESI
// 005f7727: MOVSD ES:EDI,ESI
// 005f7728: ADD ESP,0x10
// 005f772b: POP EDI
// 005f772c: POP ESI
// 005f772d: POP EBX
// 005f772e: RET

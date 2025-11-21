// Name: core_course.cpp_CCourse_FUN_00442710
// Address: 00442710
// Address Range: [[00442710, 00442794]]
// Convention: __cdecl
// Signature: void core_course.cpp_CCourse_FUN_00442710(CCourse * this_ptr)
// Cross-references:
//   core_bat.cpp_FUN_00414ce0 (00414ce0) at 00414d7f [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 00443c86 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e268 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430 (004d2430) at 004d24ae [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050bc30 (0050bc30) at 0050bca4 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050c050 (0050c050) at 0050c102 [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_render_FUN_00529ed0 (00529ed0) at 0052a036 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054cab0 (0054cab0) at 0054cbed [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 (005e7e80) at 005e7f48 [UNCONDITIONAL_CALL]
// Function calls:
//   core_course.cpp_CCourse_FUN_004427a0
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_FUN_00442710(CCourse *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  CVector3f *in_stack_00000010;
  CMatrix3x3f *in_stack_ffffff7c;
  CVector3f aCStack_80 [4];
  undefined4 auStack_50 [17];
  
  bVar5 = 0;
  core_course_cpp_CCourse_FUN_004427a0();
  core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0
            ((CMatrix3x4f *)(auStack_50 + 0xb),(CQuaternion4f *)(auStack_50 + 0xf));
  puVar3 = auStack_50;
  puVar4 = (undefined4 *)&stack0xffffff7c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  pCVar1 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(aCStack_80,in_stack_ffffff7c);
  if (in_stack_00000010 == pCVar1) {
    return;
  }
  in_stack_00000010->x = pCVar1->x;
  in_stack_00000010->y = pCVar1->y;
  in_stack_00000010->z = pCVar1->z;
  return;
}


// Assembly code:
// 00442710: PUSH EBX
//   Label: core_course.cpp_CCourse_FUN_00442710
// 00442711: PUSH ESI
// 00442712: PUSH EDI
// 00442713: SUB ESP,0x7c
// 00442716: MOV EBX,dword ptr [ESP + 0x98]
//   XREF to: Stack[0x10] (READ)
// 0044271d: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x28] (DATA)
// 00442721: PUSH EAX
// 00442722: MOV EDX,dword ptr [ESP + 0x98]
//   XREF to: Stack[0xc] (READ)
// 00442729: PUSH EDX
// 0044272a: MOV ECX,dword ptr [ESP + 0x94]
//   XREF to: Stack[0x4] (READ)
// 00442731: PUSH dword ptr [ESP + 0x98]
//   XREF to: Stack[0x8] (READ)
// 00442738: PUSH ECX
// 00442739: CALL core_course.cpp_CCourse_FUN_004427a0
//   XREF to: 004427a0 (UNCONDITIONAL_CALL)
// 0044273e: ADD ESP,0x10
// 00442741: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x18] (DATA)
// 00442745: PUSH EAX
// 00442746: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x28] (DATA)
// 0044274a: PUSH EAX
// 0044274b: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0x58] (DATA)
// 0044274f: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x88] (DATA)
// 00442753: CALL core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0
//   XREF to: 005f73e0 (UNCONDITIONAL_CALL)
// 00442758: MOV ECX,0xc
// 0044275d: ADD ESP,0x4
// 00442760: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x88] (DATA)
// 00442764: LEA ESI,[ESP + 0x34]
//   XREF to: Stack[-0x58] (DATA)
// 00442768: PUSH EAX
// 00442769: MOVSD.REP ES:EDI,ESI
// 0044276b: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 00442770: ADD ESP,0x8
// 00442773: CMP EBX,EAX
// 00442775: JNZ 0x0044277e
//   XREF to: 0044277e (CONDITIONAL_JUMP)
// 00442777: ADD ESP,0x7c
// 0044277a: POP EDI
// 0044277b: POP ESI
// 0044277c: POP EBX
// 0044277d: RET
// 0044277e: MOV EDX,dword ptr [EAX]
//   Label: LAB_0044277e
// 00442780: MOV dword ptr [EBX],EDX
// 00442782: MOV EDX,dword ptr [EAX + 0x4]
// 00442785: MOV dword ptr [EBX + 0x4],EDX
// 00442788: MOV EDX,dword ptr [EAX + 0x8]
// 0044278b: MOV dword ptr [EBX + 0x8],EDX
// 0044278e: ADD ESP,0x7c
// 00442791: POP EDI
// 00442792: POP ESI
// 00442793: POP EBX
// 00442794: RET

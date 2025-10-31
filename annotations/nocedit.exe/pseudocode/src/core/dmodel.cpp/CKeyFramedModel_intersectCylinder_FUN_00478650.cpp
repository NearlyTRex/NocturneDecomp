// Name: core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00478650
// Address: 00478650
// Address Range: [[00478650, 0047873e]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00478650(CKeyFramedModel * this_ptr, int frame_index, SIntersectXZCylinder * cylinder, CVector3f * transform_vector)
// Cross-references:
//   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 (00573470) at 00573857 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dmodel_cpp_0061f7a3
//   TerminatedCString s_Tried_to_call_CKeyFramed_0061f7b6
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950
//   core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00478650
          (CKeyFramedModel *this_ptr,int frame_index,SIntersectXZCylinder *cylinder,
          CVector3f *transform_vector)

{
  int iVar1;
  CDemonTriangle *triangle;
  
  if (this_ptr->frame_count <= frame_index) {
    frame_index = this_ptr->frame_count + -1;
  }
  if (frame_index < 0) {
    frame_index = 0;
  }
  if ((((this_ptr->transform_vector).x != transform_vector->x) ||
      ((this_ptr->transform_vector).y != transform_vector->y)) ||
     ((this_ptr->transform_vector).z != transform_vector->z)) {
    core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00478950(this_ptr,transform_vector);
  }
  if (this_ptr->collision_triangle_list == (CDemonTriangle *)0x0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x40e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Tried to call CKeyFramedModel::intersectCylinderXZ for model %s but this model does not have a collision triangle list!",this_ptr);
  }
  triangle = this_ptr->collision_triangle_list + frame_index * this_ptr->collision_triangle_count;
  iVar1 = 0;
  if (0 < this_ptr->collision_triangle_count) {
    do {
      iVar1 = iVar1 + 1;
      core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(triangle,cylinder);
      triangle = triangle + 1;
    } while (iVar1 < this_ptr->collision_triangle_count);
  }
  return;
}


// Assembly code:
// 00478650: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00478650
// 00478651: PUSH ESI
// 00478652: PUSH EDI
// 00478653: PUSH EBP
// 00478654: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00478658: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047865c: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00478660: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00478664: MOV ECX,dword ptr [EDI + 0x100]
// 0047866a: CMP EBX,ECX
// 0047866c: JL 0x00478671
//   XREF to: 00478671 (CONDITIONAL_JUMP)
// 0047866e: LEA EBX,[ECX + -0x1]
// 00478671: TEST EBX,EBX
//   Label: LAB_00478671
// 00478673: JL 0x00478715
//   XREF to: 00478715 (CONDITIONAL_JUMP)
// 00478679: LEA ESI,[EDI + 0x56a4]
//   Label: LAB_00478679
// 0047867f: FLD float ptr [ESI]
// 00478681: FCOMP float ptr [EDX]
// 00478683: FNSTSW AX
// 00478685: SAHF
// 00478686: JZ 0x0047871c
//   XREF to: 0047871c (CONDITIONAL_JUMP)
// 0047868c: PUSH EDX
//   Label: LAB_0047868c
// 0047868d: PUSH EDI
// 0047868e: CALL core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950
//   XREF to: 00478950 (UNCONDITIONAL_CALL)
// 00478693: ADD ESP,0x8
// 00478696: CMP dword ptr [EDI + 0x5698],0x0
//   Label: LAB_00478696
// 0047869d: JNZ 0x004786c2
//   XREF to: 004786c2 (CONDITIONAL_JUMP)
// 0047869f: PUSH EDI
// 004786a0: MOV EAX,0x61f7a3
//   XREF to: 0061f7a3 (PARAM)
// 004786a5: MOV EDX,0x40e
// 004786aa: PUSH 0x61f7b6
//   XREF to: 0061f7b6 (DATA)
// 004786af: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004786b4: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004786ba: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004786bf: ADD ESP,0x8
// 004786c2: MOV ESI,dword ptr [EDI + 0x5694]
//   Label: LAB_004786c2
// 004786c8: IMUL EBX,ESI
// 004786cb: SHL EBX,0x3
// 004786ce: MOV ESI,EBX
// 004786d0: SHL EBX,0x3
// 004786d3: SUB EBX,ESI
// 004786d5: MOV ESI,dword ptr [EDI + 0x5698]
// 004786db: MOV ECX,dword ptr [EDI + 0x5694]
// 004786e1: ADD ESI,EBX
// 004786e3: XOR EBX,EBX
// 004786e5: TEST ECX,ECX
// 004786e7: JLE 0x00478710
//   XREF to: 00478710 (CONDITIONAL_JUMP)
// 004786e9: PUSH EBP
//   Label: LAB_004786e9
// 004786ea: PUSH ESI
// 004786eb: INC EBX
// 004786ec: CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
//   XREF to: 0049ad80 (UNCONDITIONAL_CALL)
// 004786f1: ADD ESP,0x8
// 004786f4: MOV EAX,dword ptr [EDI + 0x5694]
// 004786fa: ADD ESI,0x38
// 004786fd: CMP EBX,EAX
// 004786ff: JL 0x004786e9
//   XREF to: 004786e9 (CONDITIONAL_JUMP)
// 00478701: LEA EAX,[EAX]
// 00478707: LEA EDX,[EDX]
// 0047870d: LEA EAX,[EAX]
// 00478710: POP EBP
//   Label: LAB_00478710
// 00478711: POP EDI
// 00478712: POP ESI
// 00478713: POP EBX
// 00478714: RET
// 00478715: XOR EBX,EBX
//   Label: LAB_00478715
// 00478717: JMP 0x00478679
//   XREF to: 00478679 (UNCONDITIONAL_JUMP)
// 0047871c: FLD float ptr [ESI + 0x4]
//   Label: LAB_0047871c
// 0047871f: FCOMP float ptr [EDX + 0x4]
// 00478722: FNSTSW AX
// 00478724: SAHF
// 00478725: JNZ 0x0047868c
//   XREF to: 0047868c (CONDITIONAL_JUMP)
// 0047872b: FLD float ptr [ESI + 0x8]
// 0047872e: FCOMP float ptr [EDX + 0x8]
// 00478731: FNSTSW AX
// 00478733: SAHF
// 00478734: JZ 0x00478696
//   XREF to: 00478696 (CONDITIONAL_JUMP)
// 0047873a: JMP 0x0047868c
//   XREF to: 0047868c (UNCONDITIONAL_JUMP)

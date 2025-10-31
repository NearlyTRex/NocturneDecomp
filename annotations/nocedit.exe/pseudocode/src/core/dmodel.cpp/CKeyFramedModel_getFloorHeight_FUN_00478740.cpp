// Name: core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00478740
// Address: 00478740
// Address Range: [[00478740, 0047882a]]
// Convention: __cdecl
// Signature: int core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00478740(CKeyFramedModel * this_ptr, int frame_index, float x, float z, float * out_height, CVector3f * transform_vector)
// Cross-references:
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (005716b0) at 005721aa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dmodel_cpp_0061f82e
//   TerminatedCString s_Tried_to_call_CKeyFramed_0061f841
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950
//   core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl
core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00478740
          (CKeyFramedModel *this_ptr,int frame_index,float x,float z,float *out_height,
          CVector3f *transform_vector)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CDemonTriangle *triangle;
  
  if (this_ptr->frame_count <= frame_index) {
    frame_index = this_ptr->frame_count + -1;
  }
  if (frame_index < 0) {
    frame_index = 0;
  }
  if (this_ptr->collision_triangle_list == (CDemonTriangle *)0x0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x43e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Tried to call CKeyFramedModel::getFloorHeight for model %s but this model does not have a collision triangle list!",this_ptr);
  }
  if ((((this_ptr->transform_vector).x != transform_vector->x) ||
      ((this_ptr->transform_vector).y != transform_vector->y)) ||
     ((this_ptr->transform_vector).z != transform_vector->z)) {
    core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00478950(this_ptr,transform_vector);
  }
  iVar3 = 0;
  triangle = this_ptr->collision_triangle_list + this_ptr->collision_triangle_count * frame_index;
  iVar2 = 0;
  if (0 < this_ptr->collision_triangle_count) {
    do {
      iVar1 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                        (triangle,z,(float)out_height,&transform_vector->x);
      if (iVar1 != 0) {
        iVar3 = 1;
      }
      iVar2 = iVar2 + 1;
      triangle = triangle + 1;
    } while (iVar2 < this_ptr->collision_triangle_count);
  }
  return iVar3;
}


// Assembly code:
// 00478740: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00478740
// 00478741: PUSH ESI
// 00478742: PUSH EDI
// 00478743: PUSH EBP
// 00478744: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00478748: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047874c: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 00478750: MOV EDX,dword ptr [EDI + 0x100]
// 00478756: CMP ESI,EDX
// 00478758: JL 0x0047875d
//   XREF to: 0047875d (CONDITIONAL_JUMP)
// 0047875a: LEA ESI,[EDX + -0x1]
// 0047875d: TEST ESI,ESI
//   Label: LAB_0047875d
// 0047875f: JL 0x00478809
//   XREF to: 00478809 (CONDITIONAL_JUMP)
// 00478765: CMP dword ptr [EDI + 0x5698],0x0
//   Label: LAB_00478765
// 0047876c: JNZ 0x00478791
//   XREF to: 00478791 (CONDITIONAL_JUMP)
// 0047876e: PUSH EDI
// 0047876f: MOV EBX,0x61f82e
//   XREF to: 0061f82e (PARAM)
// 00478774: MOV EAX,0x43e
// 00478779: PUSH 0x61f841
//   XREF to: 0061f841 (DATA)
// 0047877e: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00478784: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00478789: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0047878e: ADD ESP,0x8
// 00478791: LEA EBX,[EDI + 0x56a4]
//   Label: LAB_00478791
// 00478797: FLD float ptr [EBX]
// 00478799: FCOMP float ptr [EBP]
// 0047879c: FNSTSW AX
// 0047879e: SAHF
// 0047879f: JZ 0x00478810
//   XREF to: 00478810 (CONDITIONAL_JUMP)
// 004787a1: PUSH EBP
//   Label: LAB_004787a1
// 004787a2: PUSH EDI
// 004787a3: CALL core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950
//   XREF to: 00478950 (UNCONDITIONAL_CALL)
// 004787a8: ADD ESP,0x8
// 004787ab: MOV EAX,dword ptr [EDI + 0x5694]
//   Label: LAB_004787ab
// 004787b1: IMUL EAX,ESI
// 004787b4: SHL EAX,0x3
// 004787b7: MOV EDX,dword ptr [EDI + 0x5694]
// 004787bd: MOV EBX,EAX
// 004787bf: SHL EAX,0x3
// 004787c2: MOV ESI,dword ptr [EDI + 0x5698]
// 004787c8: SUB EAX,EBX
// 004787ca: XOR EBP,EBP
// 004787cc: ADD ESI,EAX
// 004787ce: XOR EBX,EBX
// 004787d0: TEST EDX,EDX
// 004787d2: JLE 0x00478802
//   XREF to: 00478802 (CONDITIONAL_JUMP)
// 004787d4: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_004787d4
//   XREF to: Stack[0x14] (READ)
// 004787d8: PUSH EAX
// 004787d9: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004787dd: PUSH dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 004787e1: PUSH EDX
// 004787e2: PUSH ESI
// 004787e3: CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
//   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)
// 004787e8: ADD ESP,0x10
// 004787eb: TEST EAX,EAX
// 004787ed: JZ 0x004787f4
//   XREF to: 004787f4 (CONDITIONAL_JUMP)
// 004787ef: MOV EBP,0x1
// 004787f4: INC EBX
//   Label: LAB_004787f4
// 004787f5: MOV ECX,dword ptr [EDI + 0x5694]
// 004787fb: ADD ESI,0x38
// 004787fe: CMP EBX,ECX
// 00478800: JL 0x004787d4
//   XREF to: 004787d4 (CONDITIONAL_JUMP)
// 00478802: MOV EAX,EBP
//   Label: LAB_00478802
// 00478804: POP EBP
// 00478805: POP EDI
// 00478806: POP ESI
// 00478807: POP EBX
// 00478808: RET
// 00478809: XOR ESI,ESI
//   Label: LAB_00478809
// 0047880b: JMP 0x00478765
//   XREF to: 00478765 (UNCONDITIONAL_JUMP)
// 00478810: FLD float ptr [EBX + 0x4]
//   Label: LAB_00478810
// 00478813: FCOMP float ptr [EBP + 0x4]
// 00478816: FNSTSW AX
// 00478818: SAHF
// 00478819: JNZ 0x004787a1
//   XREF to: 004787a1 (CONDITIONAL_JUMP)
// 0047881b: FLD float ptr [EBX + 0x8]
// 0047881e: FCOMP float ptr [EBP + 0x8]
// 00478821: FNSTSW AX
// 00478823: SAHF
// 00478824: JZ 0x004787ab
//   XREF to: 004787ab (CONDITIONAL_JUMP)
// 00478826: JMP 0x004787a1
//   XREF to: 004787a1 (UNCONDITIONAL_JUMP)

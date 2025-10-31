// Name: core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0
// Address: 004778d0
// Address Range: [[004778d0, 00477970]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0(CKeyFramedModel * this_ptr, CKeyFramedModelInstance * instance, int frame_index)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850 (00477850) at 0047786f [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
//   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0
          (CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int frame_index)

{
  if (this_ptr->poly_count < 1) {
    return;
  }
  core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(this_ptr,(int)instance);
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0(g_CDemonSetPtr,this_ptr->vertex_count);
  if (this_ptr->vertex_normal_list != (CVector3i **)0x0) {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0(g_CDemonSetPtr);
    return;
  }
  core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0(g_CDemonSetPtr);
  return;
}


// Assembly code:
// 004778d0: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0
// 004778d1: PUSH ESI
// 004778d2: PUSH EDI
// 004778d3: PUSH EBP
// 004778d4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004778d8: CMP dword ptr [EBX + 0x110],0x1
// 004778df: JGE 0x004778e6
//   XREF to: 004778e6 (CONDITIONAL_JUMP)
// 004778e1: POP EBP
// 004778e2: POP EDI
// 004778e3: POP ESI
// 004778e4: POP EBX
// 004778e5: RET
// 004778e6: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_004778e6
//   XREF to: Stack[0x8] (READ)
// 004778ea: PUSH ECX
// 004778eb: PUSH EBX
// 004778ec: CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
//   XREF to: 00477890 (UNCONDITIONAL_CALL)
// 004778f1: ADD ESP,0x8
// 004778f4: PUSH EAX
// 004778f5: MOV EDI,dword ptr [EBX + 0x104]
// 004778fb: PUSH EDI
// 004778fc: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00477902: PUSH EBP
//   XREF to: 03114278 (DATA)
// 00477903: MOV ESI,EAX
// 00477905: CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)
// 0047790a: MOV EAX,dword ptr [EBX + 0x108]
// 00477910: ADD ESP,0xc
// 00477913: TEST EAX,EAX
// 00477915: JZ 0x00477944
//   XREF to: 00477944 (CONDITIONAL_JUMP)
// 00477917: PUSH EAX
// 00477918: PUSH 0x4
// 0047791a: PUSH ESI
// 0047791b: MOV EAX,dword ptr [EBX + 0x114]
// 00477921: PUSH EAX
// 00477922: MOV EDX,dword ptr [EBX + 0x110]
// 00477928: PUSH EDX
// 00477929: MOV ECX,dword ptr [EBX + 0x104]
// 0047792f: PUSH ECX
// 00477930: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00477936: PUSH EBX
//   XREF to: 03114278 (DATA)
// 00477937: CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   XREF to: 0056eac0 (UNCONDITIONAL_CALL)
// 0047793c: ADD ESP,0x1c
// 0047793f: POP EBP
// 00477940: POP EDI
// 00477941: POP ESI
// 00477942: POP EBX
// 00477943: RET
// 00477944: PUSH EAX
//   Label: LAB_00477944
// 00477945: PUSH 0x4
// 00477947: PUSH ESI
// 00477948: MOV EDX,dword ptr [EBX + 0x114]
// 0047794e: PUSH EDX
// 0047794f: MOV ECX,dword ptr [EBX + 0x110]
// 00477955: PUSH ECX
// 00477956: MOV ESI,dword ptr [EBX + 0x104]
// 0047795c: PUSH ESI
// 0047795d: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00477963: PUSH EDI
//   XREF to: 03114278 (DATA)
// 00477964: CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   XREF to: 0056eac0 (UNCONDITIONAL_CALL)
// 00477969: ADD ESP,0x1c
// 0047796c: POP EBP
// 0047796d: POP EDI
// 0047796e: POP ESI
// 0047796f: POP EBX
// 00477970: RET

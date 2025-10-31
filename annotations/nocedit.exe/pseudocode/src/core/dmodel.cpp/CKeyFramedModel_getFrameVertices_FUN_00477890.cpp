// Name: core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
// Address: 00477890
// Address Range: [[00477890, 004778ce]]
// Convention: __cdecl
// Signature: CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(CKeyFramedModel * this_ptr, int frame_index)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0 (004781d0) at 00478276 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0 (004778d0) at 004778ec [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_LoadModel_FUN_004d2190 (004d2190) at 004d2209 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_CallMorphModel_addPart1_FUN_0052a8d0 (0052a8d0) at 0052a8fa [UNCONDITIONAL_CALL]
//   core_morph.cpp_CallToMorphModelAnimate_FUN_0052aa80 (0052aa80) at 0052aa95 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2240 (005e2240) at 005e2285 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CVector3i * __cdecl
core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
          (CKeyFramedModel *this_ptr,int frame_index)

{
  if (this_ptr->frame_count <= frame_index) {
    frame_index = this_ptr->frame_count + -1;
  }
  if (frame_index < 0) {
    frame_index = 0;
  }
  return (CVector3i *)(this_ptr->vertex_list + this_ptr->vertex_count * frame_index * 3);
}


// Assembly code:
// 00477890: MOV ECX,dword ptr [ESP + 0x4]
//   Label: core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
//   XREF to: Stack[0x4] (READ)
// 00477894: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00477898: MOV EDX,dword ptr [ECX + 0x100]
// 0047789e: CMP EAX,EDX
// 004778a0: JL 0x004778a5
//   XREF to: 004778a5 (CONDITIONAL_JUMP)
// 004778a2: LEA EAX,[EDX + -0x1]
// 004778a5: TEST EAX,EAX
//   Label: LAB_004778a5
// 004778a7: JL 0x004778cb
//   XREF to: 004778cb (CONDITIONAL_JUMP)
// 004778a9: MOV EDX,dword ptr [ECX + 0x104]
//   Label: LAB_004778a9
// 004778af: IMUL EDX,EAX
// 004778b2: LEA EAX,[EDX*0x4 + 0x0]
// 004778b9: SUB EAX,EDX
// 004778bb: LEA EDX,[EAX*0x4 + 0x0]
// 004778c2: MOV EAX,dword ptr [ECX + 0x10c]
// 004778c8: ADD EAX,EDX
// 004778ca: RET
// 004778cb: XOR EAX,EAX
//   Label: LAB_004778cb
// 004778cd: JMP 0x004778a9
//   XREF to: 004778a9 (UNCONDITIONAL_JUMP)

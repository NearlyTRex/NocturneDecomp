// Name: core_trap.cpp_CTrap_FUN_005de920
// Address: 005de920
// Address Range: [[005de920, 005de99d] [005de9ab, 005de9b0]]
// Convention: __cdecl
// Signature: int core_trap.cpp_CTrap_FUN_005de920(CTrap * this_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450

#include "nocturne.h"

int __cdecl core_trap_cpp_CTrap_FUN_005de920(CTrap *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  BADSPACEBASE *in_ESP;
  float fStack_18;
  float animation_frame;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&(this_ptr->base_actor).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&(this_ptr->base_actor).orient,(CVector3i *)0x0);
  this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                          (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffe0);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 != 0) {
    if (this_ptr->wolf_in_trap == 0) {
      animation_frame = 0.0;
    }
    else {
      animation_frame = 3.0;
    }
    fStack_18 = 8.624486e-39;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)&this_ptr->model_name,animation_frame,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return iVar1;
}


// Assembly code:
// 005de920: PUSH EBX
//   Label: core_trap.cpp_CTrap_FUN_005de920
// 005de921: PUSH ESI
// 005de922: PUSH EDI
// 005de923: PUSH EBP
// 005de924: SUB ESP,0x18
// 005de927: MOV EBX,dword ptr [ESP + 0x2c]
// 005de92b: LEA EAX,[EBX + 0x20]
// 005de92e: PUSH EAX
// 005de92f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005de935: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005de936: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 005de93b: ADD ESP,0x8
// 005de93e: PUSH 0x0
// 005de940: LEA EAX,[EBX + 0x30]
// 005de943: PUSH EAX
// 005de944: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005de94a: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005de94b: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 005de950: ADD ESP,0xc
// 005de953: MOV EAX,ESP
// 005de955: PUSH EAX
// 005de956: MOV ESI,dword ptr [EBX + 0x154]
// 005de95c: PUSH EBX
// 005de95d: CALL dword ptr [ESI + 0x14]
// 005de960: ADD ESP,0x8
// 005de963: PUSH EAX
// 005de964: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 005de969: ADD ESP,0x4
// 005de96c: MOV ESI,EAX
// 005de96e: TEST EAX,EAX
// 005de970: JZ 0x005de992
//   XREF to: 005de992 (CONDITIONAL_JUMP)
// 005de972: MOV EDI,dword ptr [EBX + 0x2d8]
// 005de978: LEA EAX,[EBX + 0x158]
// 005de97e: TEST EDI,EDI
// 005de980: JZ 0x005de9ab
//   XREF to: 005de9ab (CONDITIONAL_JUMP)
// 005de982: PUSH -0x1
// 005de984: PUSH 0x40400000
// 005de989: PUSH EAX
//   Label: LAB_005de989
// 005de98a: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 005de98f: ADD ESP,0xc
// 005de992: MOV EBP,dword ptr [0x006703ec]
//   Label: LAB_005de992
//   XREF to: 006703ec (READ)
// 005de998: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 005de999: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 005de9ab: PUSH -0x1
//   Label: LAB_005de9ab
// 005de9ad: PUSH 0x0
// 005de9af: JMP 0x005de989
//   XREF to: 005de989 (UNCONDITIONAL_JUMP)

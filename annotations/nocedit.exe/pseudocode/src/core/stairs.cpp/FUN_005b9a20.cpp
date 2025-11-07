// Name: core_stairs.cpp_FUN_005b9a20
// Address: 005b9a20
// Address Range: [[005b9a20, 005b9af3]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005b9a20()
// Cross-references:
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043ca73 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043d6f6 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c041 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052ca90 (0052ca90) at 0052cb13 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00596bb2 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051dcaa [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d520 (0051d520) at 0051d59c [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_stairs.cpp_FUN_005b9a20(undefined4 param_1) */

void core_stairs_cpp_FUN_005b9a20(void)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  undefined1 local_38 [8];
  float local_30;
  undefined4 local_2c;
  CVector3f CStack_24;
  CVector3f local_18;
  float local_c;
  
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr,28.0);
  local_38._4_4_ = *(int *)(in_stack_00000004 + 0x24);
  local_2c = 0;
  local_30 = *(float *)(in_stack_00000004 + 0x28);
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffff98,(CVector3f *)(local_38 + 4));
  local_18.x = *(float *)(in_stack_00000004 + 0x30);
  local_18.y = *(float *)(in_stack_00000004 + 0x34);
  local_18.z = -*(float *)(in_stack_00000004 + 0x2c);
  local_c = local_18.z;
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     ((CMatrix3x3f *)&stack0xffffff9c,&CStack_24,&local_18);
  local_38._0_4_ = *(float *)(in_stack_00000004 + 0x18) + pCVar1->x;
  local_38._4_4_ = *(float *)(in_stack_00000004 + 0x1c) + pCVar1->y;
  local_30 = *(float *)(in_stack_00000004 + 0x20) + pCVar1->z;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr,(CVector3i *)local_38);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr);
  return;
}


// Assembly code:
// 005b9a20: PUSH EBX
//   Label: core_stairs.cpp_FUN_005b9a20
// 005b9a21: PUSH ESI
// 005b9a22: SUB ESP,0x64
// 005b9a25: MOV EBX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 005b9a29: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005b9a2f: PUSH 0x41e00000
// 005b9a34: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005b9a35: CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   XREF to: 0048c650 (UNCONDITIONAL_CALL)
// 005b9a3a: ADD ESP,0x8
// 005b9a3d: MOV EAX,dword ptr [EBX + 0x24]
// 005b9a40: XOR ECX,ECX
// 005b9a42: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005b9a46: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 005b9a4a: MOV EAX,dword ptr [EBX + 0x28]
// 005b9a4d: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005b9a51: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x38] (DATA)
// 005b9a55: PUSH EAX
// 005b9a56: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6c] (DATA)
// 005b9a5a: PUSH EAX
// 005b9a5b: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 005b9a60: ADD ESP,0x8
// 005b9a63: MOV EAX,dword ptr [EBX + 0x30]
// 005b9a66: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005b9a6a: MOV EAX,dword ptr [EBX + 0x34]
// 005b9a6d: FLD float ptr [EBX + 0x2c]
// 005b9a70: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005b9a74: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x10] (READ)
// 005b9a78: FCHS
// 005b9a7a: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005b9a7e: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0xc] (READ)
// 005b9a82: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x14] (WRITE)
// 005b9a86: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005b9a8a: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x14] (READ)
// 005b9a8e: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005b9a92: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x20] (DATA)
// 005b9a96: PUSH EAX
// 005b9a97: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x2c] (DATA)
// 005b9a9b: PUSH EAX
// 005b9a9c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x6c] (DATA)
// 005b9aa0: PUSH EAX
// 005b9aa1: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 005b9aa6: FLD float ptr [EBX + 0x18]
// 005b9aa9: FADD float ptr [EAX]
// 005b9aab: ADD ESP,0xc
// 005b9aae: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x44] (WRITE)
// 005b9ab2: FLD float ptr [EBX + 0x1c]
// 005b9ab5: FADD float ptr [EAX + 0x4]
// 005b9ab8: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x40] (WRITE)
// 005b9abc: FLD float ptr [EBX + 0x20]
// 005b9abf: FADD float ptr [EAX + 0x8]
// 005b9ac2: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x44] (DATA)
// 005b9ac6: PUSH EAX
// 005b9ac7: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005b9acd: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 005b9ace: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x3c] (WRITE)
// 005b9ad2: CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   XREF to: 0048c150 (UNCONDITIONAL_CALL)
// 005b9ad7: ADD ESP,0x8
// 005b9ada: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x38] (DATA)
// 005b9ade: PUSH EAX
// 005b9adf: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005b9ae5: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 005b9ae6: CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)
// 005b9aeb: ADD ESP,0x8
// 005b9aee: ADD ESP,0x64
// 005b9af1: POP ESI
// 005b9af2: POP EBX
// 005b9af3: RET

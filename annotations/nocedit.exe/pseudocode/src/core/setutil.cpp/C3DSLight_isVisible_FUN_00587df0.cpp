// Name: core_setutil.cpp_C3DSLight_isVisible_FUN_00587df0
// Address: 00587df0
// Address Range: [[00587df0, 00587e6a]]
// Convention: __cdecl
// Signature: int core_setutil.cpp_C3DSLight_isVisible_FUN_00587df0(C3DSLight * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 (0056a470) at 0056a989 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450

#include "nocturne.h"

int __cdecl core_setutil_cpp_C3DSLight_isVisible_FUN_00587df0(C3DSLight *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (ABS(this_ptr->atten_end) == 0.0) {
    return 1;
  }
  local_14 = -this_ptr->atten_end;
  local_10 = -this_ptr->atten_end;
  local_c = this_ptr->atten_end;
  local_8 = local_c;
  local_4 = local_c;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&this_ptr->pos);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0((CBoundingBox3D *)&local_14);
  return iVar1;
}


// Assembly code:
// 00587df0: SUB ESP,0x18
//   Label: core_setutil.cpp_C3DSLight_isVisible_FUN_00587df0
// 00587df3: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00587df7: TEST dword ptr [EDX + 0x11d4],0x7fffffff
// 00587e01: JNZ 0x00587e0c
//   XREF to: 00587e0c (CONDITIONAL_JUMP)
// 00587e03: MOV EAX,0x1
// 00587e08: ADD ESP,0x18
// 00587e0b: RET
// 00587e0c: PUSH EBX
//   Label: LAB_00587e0c
// 00587e0d: FLD float ptr [EDX + 0x11d4]
// 00587e13: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00587e19: FCHS
// 00587e1b: ADD EDX,0x104
// 00587e21: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (WRITE)
// 00587e25: PUSH EDX
// 00587e26: FLD float ptr [EDX + 0x10d0]
// 00587e2c: FCHS
// 00587e2e: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (WRITE)
// 00587e32: FLD float ptr [EDX + 0x10d0]
// 00587e38: FCHS
// 00587e3a: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (WRITE)
// 00587e3e: MOV EAX,dword ptr [EDX + 0x10d0]
// 00587e44: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00587e45: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00587e49: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 00587e4d: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 00587e51: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00587e56: ADD ESP,0x8
// 00587e59: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 00587e5d: PUSH EAX
// 00587e5e: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00587e63: ADD ESP,0x4
// 00587e66: POP EBX
// 00587e67: ADD ESP,0x18
// 00587e6a: RET

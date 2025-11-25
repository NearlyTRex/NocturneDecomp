// Name: shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
// Address: 0051b2e0
// Address Range: [[0051b2e0, 0051b32e]]
// Convention: __cdecl
// Signature: CVector3f * shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0(CLodMesh * this_ptr, CVector3f * output_point, CVector3f * input_point)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051da1f [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 (0051d520) at 0051d704 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0 (0051e6b0) at 0051e6e3 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CVector3f * __cdecl
shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
          (CLodMesh *this_ptr,CVector3f *output_point,CVector3f *input_point)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pfVar1 = &this_ptr->scale_factor;
  fVar2 = input_point->y;
  fVar3 = *pfVar1;
  fVar4 = input_point->z;
  fVar5 = *pfVar1;
  output_point->x = input_point->x / *pfVar1 - (this_ptr->center_offset).x;
  output_point->y = fVar2 / fVar3 - (this_ptr->center_offset).y;
  output_point->z = fVar4 / fVar5 - (this_ptr->center_offset).z;
  return output_point;
}


// Assembly code:
// 0051b2e0: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
// 0051b2e1: SUB ESP,0xc
// 0051b2e4: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051b2e8: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051b2ec: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0051b2f0: LEA EAX,[EDX + 0x70]
// 0051b2f3: FLD float ptr [EBX]
// 0051b2f5: FDIV float ptr [EAX]
// 0051b2f7: FSTP float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0051b2fa: FLD float ptr [EBX + 0x4]
// 0051b2fd: FDIV float ptr [EAX]
// 0051b2ff: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (WRITE)
// 0051b303: FLD float ptr [EBX + 0x8]
// 0051b306: FDIV float ptr [EAX]
// 0051b308: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x8] (WRITE)
// 0051b30c: FLD float ptr [EDX + 0x64]
// 0051b30f: FSUBR float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0051b312: FSTP float ptr [ECX]
// 0051b314: FLD float ptr [EDX + 0x68]
// 0051b317: FSUBR float ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 0051b31b: FSTP float ptr [ECX + 0x4]
// 0051b31e: FLD float ptr [EDX + 0x6c]
// 0051b321: FSUBR float ptr [ESP + 0x8]
//   XREF to: Stack[-0x8] (READ)
// 0051b325: MOV EAX,ECX
// 0051b327: FSTP float ptr [ECX + 0x8]
// 0051b32a: ADD ESP,0xc
// 0051b32d: POP EBX
// 0051b32e: RET

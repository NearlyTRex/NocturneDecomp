// Name: core_box.cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
// Address: 00420e90
// Address Range: [[00420e90, 00420fa7]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90(CBoundingBox3D * this_ptr, int vertex_count, CVector3i * vertices)
// Cross-references:
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052bed4 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00597e01 [UNCONDITIONAL_CALL]
// Globals:
//   double g_BoundingBoxFixedPointScaleFactor = 0.00390625

#include "nocturne.h"

void __cdecl
core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
          (CBoundingBox3D *this_ptr,int vertex_count,CVector3i *vertices)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar5 = 1;
  iVar6 = vertices->x;
  iVar4 = vertices->y;
  local_20 = vertices->z;
  local_28 = iVar6;
  local_24 = iVar4;
  local_1c = local_20;
  if (1 < vertex_count) {
    do {
      iVar1 = vertices[1].x;
      iVar3 = iVar1;
      if ((local_28 <= iVar1) && (iVar3 = local_28, iVar6 < iVar1)) {
        iVar6 = iVar1;
      }
      local_28 = iVar3;
      iVar1 = vertices[1].y;
      iVar3 = iVar1;
      if ((local_24 <= iVar1) && (iVar3 = local_24, iVar4 < iVar1)) {
        iVar4 = iVar1;
      }
      local_24 = iVar3;
      iVar1 = vertices[1].z;
      iVar3 = iVar1;
      if ((local_20 <= iVar1) && (iVar3 = local_20, iVar4 < iVar1)) {
        local_1c = iVar1;
      }
      local_20 = iVar3;
      iVar5 = iVar5 + 1;
      vertices = vertices + 1;
    } while (iVar5 < vertex_count);
  }
  fVar2 = (float)g_BoundingBoxFixedPointScaleFactor;
  (this_ptr->min).x = (float)local_28 * fVar2;
  (this_ptr->min).y = (float)local_24 * fVar2;
  (this_ptr->max).x = (float)iVar6 * fVar2;
  (this_ptr->max).y = (float)iVar4 * fVar2;
  (this_ptr->min).z = (float)local_20 * fVar2;
  (this_ptr->max).z = (float)local_1c * fVar2;
  return;
}


// Assembly code:
// 00420e90: PUSH EBX
//   Label: core_box.cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
// 00420e91: PUSH ESI
// 00420e92: PUSH EDI
// 00420e93: PUSH EBP
// 00420e94: MOV EBP,ESP
// 00420e96: SUB ESP,0x18
// 00420e99: AND ESP,0xfffffff8
// 00420e9c: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00420e9f: MOV EBX,0x1
// 00420ea4: MOV ESI,dword ptr [EAX]
// 00420ea6: MOV ECX,dword ptr [EAX + 0x4]
// 00420ea9: MOV EDX,dword ptr [EAX + 0x8]
// 00420eac: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x28] (DATA)
// 00420eaf: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00420eb3: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00420eb7: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00420eba: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00420ebe: CMP EDX,EBX
// 00420ec0: JLE 0x00420f05
//   XREF to: 00420f05 (CONDITIONAL_JUMP)
// 00420ec2: LEA EDX,[EAX + 0xc]
// 00420ec5: MOV EDI,dword ptr [EDX]
//   Label: LAB_00420ec5
// 00420ec7: MOV EAX,EDX
// 00420ec9: CMP EDI,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00420ecc: JL 0x00420f80
//   XREF to: 00420f80 (CONDITIONAL_JUMP)
// 00420ed2: CMP ESI,EDI
// 00420ed4: JGE 0x00420ed8
//   XREF to: 00420ed8 (CONDITIONAL_JUMP)
// 00420ed6: MOV ESI,EDI
// 00420ed8: MOV EDI,dword ptr [EAX + 0x4]
//   Label: LAB_00420ed8
// 00420edb: CMP EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 00420edf: JGE 0x00420f88
//   XREF to: 00420f88 (CONDITIONAL_JUMP)
// 00420ee5: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 00420ee9: MOV EDI,dword ptr [EAX + 0x8]
//   Label: LAB_00420ee9
// 00420eec: CMP EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00420ef0: JGE 0x00420f97
//   XREF to: 00420f97 (CONDITIONAL_JUMP)
// 00420ef6: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 00420efa: MOV EDI,dword ptr [EBP + 0x18]
//   Label: LAB_00420efa
//   XREF to: Stack[0x8] (READ)
// 00420efd: INC EBX
// 00420efe: ADD EDX,0xc
// 00420f01: CMP EBX,EDI
// 00420f03: JL 0x00420ec5
//   XREF to: 00420ec5 (CONDITIONAL_JUMP)
// 00420f05: MOV EAX,dword ptr [ESP]
//   Label: LAB_00420f05
//   XREF to: Stack[-0x28] (DATA)
// 00420f08: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00420f0c: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00420f10: FLD double ptr [0x006165f7]
//   XREF to: 006165f7 (READ)
// 00420f16: FILD dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00420f1a: FMUL ST1
// 00420f1c: FILD dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00420f20: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00420f23: FMUL ST2
// 00420f25: FXCH
// 00420f27: FSTP float ptr [EAX]
// 00420f29: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 00420f2d: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00420f31: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00420f35: FILD dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00420f39: FMUL ST2
// 00420f3b: FILD dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00420f3f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00420f42: FMUL ST3
// 00420f44: FXCH
// 00420f46: FSTP float ptr [EAX + 0x4]
// 00420f49: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00420f4d: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00420f51: FILD dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00420f55: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00420f58: FMUL ST3
// 00420f5a: FXCH ST2
// 00420f5c: FSTP float ptr [EAX + 0xc]
// 00420f5f: FSTP float ptr [EAX + 0x10]
// 00420f62: FSTP float ptr [EAX + 0x8]
// 00420f65: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00420f69: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00420f6d: FILD dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00420f71: FMULP
// 00420f73: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00420f76: FSTP float ptr [EAX + 0x14]
// 00420f79: MOV ESP,EBP
// 00420f7b: POP EBP
// 00420f7c: POP EDI
// 00420f7d: POP ESI
// 00420f7e: POP EBX
// 00420f7f: RET
// 00420f80: MOV dword ptr [ESP],EDI
//   Label: LAB_00420f80
//   XREF to: Stack[-0x28] (DATA)
// 00420f83: JMP 0x00420ed8
//   XREF to: 00420ed8 (UNCONDITIONAL_JUMP)
// 00420f88: CMP ECX,EDI
//   Label: LAB_00420f88
// 00420f8a: JGE 0x00420ee9
//   XREF to: 00420ee9 (CONDITIONAL_JUMP)
// 00420f90: MOV ECX,EDI
// 00420f92: JMP 0x00420ee9
//   XREF to: 00420ee9 (UNCONDITIONAL_JUMP)
// 00420f97: CMP ECX,EDI
//   Label: LAB_00420f97
// 00420f99: JGE 0x00420efa
//   XREF to: 00420efa (CONDITIONAL_JUMP)
// 00420f9f: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00420fa3: JMP 0x00420efa
//   XREF to: 00420efa (UNCONDITIONAL_JUMP)

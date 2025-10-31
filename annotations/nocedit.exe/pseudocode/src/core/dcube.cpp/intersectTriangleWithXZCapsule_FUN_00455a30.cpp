// Name: core_dcube.cpp_intersectTriangleWithXZCapsule_FUN_00455a30
// Address: 00455a30
// Address Range: [[00455a30, 00455ec5]]
// Convention: __cdecl
// Signature: uint core_dcube.cpp_intersectTriangleWithXZCapsule_FUN_00455a30(CVector3f * * triangle_vertices, SIntersectXZCylinder * cylinder)
// Cross-references:
//   core_dcube.cpp_CDemonCube_testCapsuleCollision_FUN_00457a90 (00457a90) at 00457ab3 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dcube.cpp_intersectXZCapsule_FUN_004556b0
//   core_dcube.cpp_intersectXZCapsuleWithHeight_FUN_00455990

#include "nocturne.h"

uint __cdecl
core_dcube_cpp_intersectTriangleWithXZCapsule_FUN_00455a30
          (CVector3f **triangle_vertices,SIntersectXZCylinder *cylinder)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  CVector3f *pCVar9;
  CVector3f *pCVar10;
  CVector3f *pCVar11;
  bool bVar12;
  float in_stack_ffffff80;
  float afStack_7c [4];
  float local_6c [4];
  float local_5c [2];
  CVector3f *local_54;
  float local_50;
  float local_44;
  float local_38;
  CVector3f *local_34;
  float local_30;
  CVector3f *local_2c;
  uint local_28;
  uint local_24;
  float local_20;
  CVector3f *local_1c;
  int iStack_18;
  
  if ((float)triangle_vertices[5] * cylinder->normal_z +
      (float)triangle_vertices[3] * cylinder->normal_x <= 0.0) {
    return 0;
  }
  pCVar11 = *triangle_vertices;
  pCVar10 = triangle_vertices[1];
  local_34 = triangle_vertices[2];
  fVar4 = pCVar11->x * cylinder->normal_x + pCVar11->z * cylinder->normal_z;
  local_20 = pCVar10->x * cylinder->normal_x + pCVar10->z * cylinder->normal_z;
  fVar5 = local_34->x * cylinder->normal_x + local_34->z * cylinder->normal_z;
  pCVar9 = pCVar11;
  local_30 = fVar4;
  if (local_20 < fVar4) {
    pCVar9 = pCVar10;
    pCVar10 = pCVar11;
    local_50 = fVar4;
    local_30 = local_20;
    local_20 = fVar4;
  }
  pCVar11 = pCVar10;
  local_38 = fVar5;
  if (fVar5 < local_20) {
    local_44 = local_20;
    local_38 = local_20;
    pCVar11 = local_34;
    local_34 = pCVar10;
    local_20 = fVar5;
  }
  pCVar10 = pCVar9;
  if (local_20 < local_30) {
    local_30 = local_20;
    pCVar10 = pCVar11;
    pCVar11 = pCVar9;
  }
  if (local_38 < cylinder->inner_radius) {
    return 0;
  }
  if (cylinder->outer_radius < local_30) {
    return 0;
  }
  bVar1 = cylinder->bottom_y <= (*triangle_vertices)->y;
  if ((*triangle_vertices)->y <= cylinder->top_y) {
    bVar1 = bVar1 | 2;
  }
  local_2c = (CVector3f *)(uint)bVar1;
  bVar2 = cylinder->bottom_y <= triangle_vertices[1]->y;
  if (triangle_vertices[1]->y <= cylinder->top_y) {
    bVar2 = bVar2 | 2;
  }
  local_28 = (uint)bVar2;
  bVar3 = cylinder->bottom_y <= triangle_vertices[2]->y;
  if (triangle_vertices[2]->y <= cylinder->top_y) {
    bVar3 = bVar3 | 2;
  }
  local_24 = (uint)bVar3;
  if ((bVar1 & bVar2 & bVar3) != 0) {
    return 0;
  }
  if (0.0 <= (float)triangle_vertices[4]) {
    bVar12 = ((bVar1 ^ bVar2) & 1) != 0;
    if (bVar12) {
      pCVar9 = *triangle_vertices;
      fVar4 = (cylinder->bottom_y - pCVar9->y) / (triangle_vertices[1]->y - pCVar9->y);
      local_6c[0] = (triangle_vertices[1]->x - pCVar9->x) * fVar4 + pCVar9->x;
      afStack_7c[1] =
           (triangle_vertices[1]->z - (*triangle_vertices)->z) * fVar4 + (*triangle_vertices)->z;
    }
    uVar6 = (uint)bVar12;
    if (((bVar2 ^ bVar3) & 1) != 0) {
      pCVar9 = triangle_vertices[1];
      fVar4 = (cylinder->bottom_y - pCVar9->y) / (triangle_vertices[2]->y - pCVar9->y);
      afStack_7c[uVar6 + 4] = (triangle_vertices[2]->x - pCVar9->x) * fVar4 + pCVar9->x;
      local_1c = triangle_vertices[2];
      local_54 = triangle_vertices[1];
      uVar6 = uVar6 + 1;
      afStack_7c[uVar6] = (local_1c->z - local_54->z) * fVar4 + local_54->z;
    }
    uVar7 = uVar6;
    if (((bVar3 ^ bVar1) & 1) != 0) {
      pCVar9 = triangle_vertices[2];
      fVar4 = (cylinder->bottom_y - pCVar9->y) / ((*triangle_vertices)->y - pCVar9->y);
      local_1c = (CVector3f *)(uVar6 * 4);
      afStack_7c[uVar6 + 4] = ((*triangle_vertices)->x - pCVar9->x) * fVar4 + pCVar9->x;
      uVar7 = uVar6 + 1;
      afStack_7c[uVar6 + 1] =
           ((*triangle_vertices)->z - triangle_vertices[2]->z) * fVar4 + triangle_vertices[2]->z;
    }
    if (1 < uVar7) {
      cylinder->edge_x1 = local_6c[0];
      cylinder->edge_z1 = afStack_7c[1];
      cylinder->edge_x2 = local_6c[1];
      cylinder->edge_z2 = afStack_7c[2];
      iVar8 = core_dcube_cpp_intersectXZCapsule_FUN_004556b0(cylinder);
      if (iVar8 != 0) goto LAB_00455df4;
    }
  }
  if ((float)triangle_vertices[4] <= 0.0) {
    bVar12 = ((local_28 ^ local_24) & 2) != 0;
    if (bVar12) {
      pCVar9 = *triangle_vertices;
      fVar4 = (cylinder->top_y - pCVar9->y) / (triangle_vertices[1]->y - pCVar9->y);
      local_5c[0] = (triangle_vertices[1]->x - pCVar9->x) * fVar4 + pCVar9->x;
      in_stack_ffffff80 =
           (triangle_vertices[1]->z - (*triangle_vertices)->z) * fVar4 + (*triangle_vertices)->z;
    }
    uVar7 = (uint)bVar12;
    uVar6 = uVar7;
    if (((local_24 ^ (uint)local_20) & 2) != 0) {
      pCVar9 = triangle_vertices[1];
      fVar4 = (cylinder->top_y - pCVar9->y) / (triangle_vertices[2]->y - pCVar9->y);
      iStack_18 = uVar7 * 4;
      local_5c[uVar7] = (triangle_vertices[2]->x - pCVar9->x) * fVar4 + pCVar9->x;
      uVar6 = uVar7 + 1;
      afStack_7c[uVar7 - 1] =
           (triangle_vertices[2]->z - triangle_vertices[1]->z) * fVar4 + triangle_vertices[1]->z;
    }
    uVar7 = uVar6;
    if ((((uint)local_20 ^ local_28) & 2) != 0) {
      pCVar9 = triangle_vertices[2];
      fVar4 = (cylinder->top_y - pCVar9->y) / ((*triangle_vertices)->y - pCVar9->y);
      iStack_18 = uVar6 * 4;
      local_5c[uVar6] = ((*triangle_vertices)->x - pCVar9->x) * fVar4 + pCVar9->x;
      uVar7 = uVar6 + 1;
      afStack_7c[uVar6 - 1] =
           ((*triangle_vertices)->z - triangle_vertices[2]->z) * fVar4 + triangle_vertices[2]->z;
    }
    if (1 < uVar7) {
      cylinder->edge_x1 = local_5c[0];
      cylinder->edge_z1 = in_stack_ffffff80;
      cylinder->edge_x2 = local_5c[1];
      cylinder->edge_z2 = afStack_7c[0];
      iVar8 = core_dcube_cpp_intersectXZCapsule_FUN_004556b0(cylinder);
      if (iVar8 != 0) {
LAB_00455df4:
        cylinder->flags = 0;
        cylinder->max_distance = cylinder->param_t;
        cylinder->push_x =
             (cylinder->normal_z * cylinder->param_t + cylinder->center_z) - cylinder->intersect_z;
        cylinder->push_z =
             (cylinder->normal_x * cylinder->param_t + cylinder->center_x) - cylinder->intersect_x;
        return 1;
      }
    }
  }
  uVar6 = core_dcube_cpp_intersectXZCapsuleWithHeight_FUN_00455990(cylinder,pCVar10,pCVar11);
  uVar7 = core_dcube_cpp_intersectXZCapsuleWithHeight_FUN_00455990(cylinder,pCVar10,local_2c);
  return uVar7 | uVar6;
}


// Assembly code:
// 00455a30: PUSH EBX
//   Label: core_dcube.cpp_intersectTriangleWithXZCapsule_FUN_00455a30
// 00455a31: PUSH ESI
// 00455a32: PUSH EDI
// 00455a33: PUSH EBP
// 00455a34: SUB ESP,0x74
// 00455a37: MOV ESI,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x4] (READ)
// 00455a3e: MOV EBX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0x8] (READ)
// 00455a45: FLD float ptr [ESI + 0xc]
// 00455a48: FMUL float ptr [EBX + 0x18]
// 00455a4b: FLD float ptr [ESI + 0x14]
// 00455a4e: FMUL float ptr [EBX + 0x1c]
// 00455a51: FADDP
// 00455a53: FLDZ
// 00455a55: FCOMPP
// 00455a57: FNSTSW AX
// 00455a59: SAHF
// 00455a5a: JNC 0x00455e33
//   XREF to: 00455e33 (CONDITIONAL_JUMP)
// 00455a60: MOV EBP,dword ptr [ESI]
// 00455a62: FLD float ptr [EBP + 0x8]
// 00455a65: FMUL float ptr [EBX + 0x1c]
// 00455a68: MOV EDI,dword ptr [ESI + 0x4]
// 00455a6b: MOV EAX,dword ptr [ESI + 0x8]
// 00455a6e: FLD float ptr [EDI + 0x8]
// 00455a71: FMUL float ptr [EBX + 0x1c]
// 00455a74: FLD float ptr [EAX + 0x8]
// 00455a77: FMUL float ptr [EBX + 0x1c]
// 00455a7a: FLD float ptr [EBP]
// 00455a7d: FMUL float ptr [EBX + 0x18]
// 00455a80: FLD float ptr [EDI]
// 00455a82: FMUL float ptr [EBX + 0x18]
// 00455a85: FLD float ptr [EAX]
// 00455a87: FMUL float ptr [EBX + 0x18]
// 00455a8a: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00455a8e: FXCH ST2
// 00455a90: FADDP ST5,ST0
// 00455a92: FADDP ST3,ST0
// 00455a94: FADDP
// 00455a96: FXCH ST2
// 00455a98: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x30] (WRITE)
// 00455a9c: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x20] (WRITE)
// 00455aa0: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x38] (WRITE)
// 00455aa4: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x30] (READ)
// 00455aa8: FCOMP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x20] (READ)
// 00455aac: FNSTSW AX
// 00455aae: SAHF
// 00455aaf: JA 0x00455e3d
//   XREF to: 00455e3d (CONDITIONAL_JUMP)
// 00455ab5: FLD float ptr [ESP + 0x64]
//   Label: LAB_00455ab5
//   XREF to: Stack[-0x20] (READ)
// 00455ab9: FCOMP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x38] (READ)
// 00455abd: FNSTSW AX
// 00455abf: SAHF
// 00455ac0: JBE 0x00455ae4
//   XREF to: 00455ae4 (CONDITIONAL_JUMP)
// 00455ac2: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x20] (READ)
// 00455ac6: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00455aca: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x38] (READ)
// 00455ace: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00455ad2: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x44] (READ)
// 00455ad6: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00455ada: MOV EAX,EDI
// 00455adc: MOV EDI,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x34] (READ)
// 00455ae0: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00455ae4: FLD float ptr [ESP + 0x54]
//   Label: LAB_00455ae4
//   XREF to: Stack[-0x30] (READ)
// 00455ae8: FCOMP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x20] (READ)
// 00455aec: FNSTSW AX
// 00455aee: SAHF
// 00455aef: JBE 0x00455aff
//   XREF to: 00455aff (CONDITIONAL_JUMP)
// 00455af1: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x20] (READ)
// 00455af5: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00455af9: MOV EAX,EBP
// 00455afb: MOV EBP,EDI
// 00455afd: MOV EDI,EAX
// 00455aff: FLD float ptr [ESP + 0x4c]
//   Label: LAB_00455aff
//   XREF to: Stack[-0x38] (READ)
// 00455b03: FCOMP float ptr [EBX + 0x2c]
// 00455b06: FNSTSW AX
// 00455b08: SAHF
// 00455b09: JC 0x00455e33
//   XREF to: 00455e33 (CONDITIONAL_JUMP)
// 00455b0f: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x30] (READ)
// 00455b13: FCOMP float ptr [EBX + 0x30]
// 00455b16: FNSTSW AX
// 00455b18: SAHF
// 00455b19: JA 0x00455e33
//   XREF to: 00455e33 (CONDITIONAL_JUMP)
// 00455b1f: MOV EAX,dword ptr [ESI]
// 00455b21: XOR EDX,EDX
// 00455b23: FLD float ptr [EAX + 0x4]
// 00455b26: MOV dword ptr [ESP + 0x58],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00455b2a: FCOMP float ptr [EBX + 0x24]
// 00455b2d: FNSTSW AX
// 00455b2f: SAHF
// 00455b30: JC 0x00455b3a
//   XREF to: 00455b3a (CONDITIONAL_JUMP)
// 00455b32: MOV dword ptr [ESP + 0x58],0x1
//   XREF to: Stack[-0x2c] (WRITE)
// 00455b3a: MOV EAX,dword ptr [ESI]
//   Label: LAB_00455b3a
// 00455b3c: FLD float ptr [EAX + 0x4]
// 00455b3f: FCOMP float ptr [EBX + 0x28]
// 00455b42: FNSTSW AX
// 00455b44: SAHF
// 00455b45: JA 0x00455b4c
//   XREF to: 00455b4c (CONDITIONAL_JUMP)
// 00455b47: OR byte ptr [ESP + 0x58],0x2
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00455b4c: XOR EAX,EAX
//   Label: LAB_00455b4c
// 00455b4e: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00455b52: MOV EAX,dword ptr [ESI + 0x4]
// 00455b55: FLD float ptr [EAX + 0x4]
// 00455b58: FCOMP float ptr [EBX + 0x24]
// 00455b5b: FNSTSW AX
// 00455b5d: SAHF
// 00455b5e: JC 0x00455b68
//   XREF to: 00455b68 (CONDITIONAL_JUMP)
// 00455b60: MOV dword ptr [ESP + 0x5c],0x1
//   XREF to: Stack[-0x28] (WRITE)
// 00455b68: MOV EAX,dword ptr [ESI + 0x4]
//   Label: LAB_00455b68
// 00455b6b: FLD float ptr [EAX + 0x4]
// 00455b6e: FCOMP float ptr [EBX + 0x28]
// 00455b71: FNSTSW AX
// 00455b73: SAHF
// 00455b74: JA 0x00455b7b
//   XREF to: 00455b7b (CONDITIONAL_JUMP)
// 00455b76: OR byte ptr [ESP + 0x5c],0x2
//   XREF to: Stack[-0x28] (READ_WRITE)
// 00455b7b: MOV EAX,dword ptr [ESI + 0x8]
//   Label: LAB_00455b7b
// 00455b7e: XOR ECX,ECX
// 00455b80: FLD float ptr [EAX + 0x4]
// 00455b83: MOV dword ptr [ESP + 0x60],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00455b87: FCOMP float ptr [EBX + 0x24]
// 00455b8a: FNSTSW AX
// 00455b8c: SAHF
// 00455b8d: JC 0x00455b97
//   XREF to: 00455b97 (CONDITIONAL_JUMP)
// 00455b8f: MOV dword ptr [ESP + 0x60],0x1
//   XREF to: Stack[-0x24] (WRITE)
// 00455b97: MOV EAX,dword ptr [ESI + 0x8]
//   Label: LAB_00455b97
// 00455b9a: FLD float ptr [EAX + 0x4]
// 00455b9d: FCOMP float ptr [EBX + 0x28]
// 00455ba0: FNSTSW AX
// 00455ba2: SAHF
// 00455ba3: JA 0x00455baa
//   XREF to: 00455baa (CONDITIONAL_JUMP)
// 00455ba5: OR byte ptr [ESP + 0x60],0x2
//   XREF to: Stack[-0x24] (READ_WRITE)
// 00455baa: MOV EAX,dword ptr [ESP + 0x58]
//   Label: LAB_00455baa
//   XREF to: Stack[-0x2c] (READ)
// 00455bae: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x28] (READ)
// 00455bb2: MOV ECX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x24] (READ)
// 00455bb6: AND EAX,EDX
// 00455bb8: TEST EAX,ECX
// 00455bba: JNZ 0x00455e33
//   XREF to: 00455e33 (CONDITIONAL_JUMP)
// 00455bc0: FLDZ
// 00455bc2: FCOMP float ptr [ESI + 0x10]
// 00455bc5: FNSTSW AX
// 00455bc7: SAHF
// 00455bc8: JA 0x00455cf6
//   XREF to: 00455cf6 (CONDITIONAL_JUMP)
// 00455bce: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x2c] (READ)
// 00455bd2: XOR EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x28] (READ)
// 00455bd6: XOR EAX,EAX
// 00455bd8: TEST DL,0x1
// 00455bdb: JZ 0x00455c19
//   XREF to: 00455c19 (CONDITIONAL_JUMP)
// 00455bdd: MOV EDX,dword ptr [ESI + 0x4]
// 00455be0: MOV EAX,dword ptr [ESI]
// 00455be2: FLD float ptr [EDX + 0x4]
// 00455be5: FSUB float ptr [EAX + 0x4]
// 00455be8: FLD float ptr [EDX]
// 00455bea: FLD float ptr [EBX + 0x24]
// 00455bed: FSUB float ptr [EAX + 0x4]
// 00455bf0: FXCH
// 00455bf2: FSUB float ptr [EAX]
// 00455bf4: FXCH
// 00455bf6: FDIVRP ST2,ST0
// 00455bf8: FMUL ST1
// 00455bfa: FADD float ptr [EAX]
// 00455bfc: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x6c] (WRITE)
// 00455c00: MOV EDX,dword ptr [ESI + 0x4]
// 00455c03: MOV EAX,dword ptr [ESI]
// 00455c05: FLD float ptr [EDX + 0x8]
// 00455c08: FSUB float ptr [EAX + 0x8]
// 00455c0b: FMULP
// 00455c0d: FADD float ptr [EAX + 0x8]
// 00455c10: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x78] (WRITE)
// 00455c14: MOV EAX,0x1
// 00455c19: MOV EDX,dword ptr [ESP + 0x5c]
//   Label: LAB_00455c19
//   XREF to: Stack[-0x28] (READ)
// 00455c1d: XOR EDX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x24] (READ)
// 00455c21: TEST DL,0x1
// 00455c24: JZ 0x00455c70
//   XREF to: 00455c70 (CONDITIONAL_JUMP)
// 00455c26: MOV ECX,dword ptr [ESI + 0x8]
// 00455c29: MOV EDX,dword ptr [ESI + 0x4]
// 00455c2c: FLD float ptr [ECX + 0x4]
// 00455c2f: FSUB float ptr [EDX + 0x4]
// 00455c32: FLD float ptr [ECX]
// 00455c34: FLD float ptr [EBX + 0x24]
// 00455c37: FSUB float ptr [EDX + 0x4]
// 00455c3a: FXCH
// 00455c3c: FSUB float ptr [EDX]
// 00455c3e: FXCH
// 00455c40: FDIVRP ST2,ST0
// 00455c42: FMUL ST1
// 00455c44: FADD float ptr [EDX]
// 00455c46: FSTP float ptr [ESP + EAX*0x4 + 0x18]
//   XREF to: Stack[-0x68] (DATA)
// 00455c4a: MOV ECX,dword ptr [ESI + 0x8]
// 00455c4d: MOV dword ptr [ESP + 0x68],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00455c51: MOV ECX,dword ptr [ESI + 0x4]
// 00455c54: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 00455c58: MOV ECX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x1c] (READ)
// 00455c5c: FLD float ptr [ECX + 0x8]
// 00455c5f: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x54] (READ)
// 00455c63: FSUB float ptr [ECX + 0x8]
// 00455c66: FMULP
// 00455c68: FADD float ptr [ECX + 0x8]
// 00455c6b: INC EAX
// 00455c6c: FSTP float ptr [ESP + EAX*0x4 + 0x8]
//   XREF to: Stack[-0x78] (DATA)
// 00455c70: MOV EDX,dword ptr [ESP + 0x60]
//   Label: LAB_00455c70
//   XREF to: Stack[-0x24] (READ)
// 00455c74: XOR EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x2c] (READ)
// 00455c78: TEST DL,0x1
// 00455c7b: JZ 0x00455cc4
//   XREF to: 00455cc4 (CONDITIONAL_JUMP)
// 00455c7d: MOV ECX,dword ptr [ESI]
// 00455c7f: MOV EDX,dword ptr [ESI + 0x8]
// 00455c82: FLD float ptr [ECX + 0x4]
// 00455c85: FSUB float ptr [EDX + 0x4]
// 00455c88: FLD float ptr [ECX]
// 00455c8a: FLD float ptr [EBX + 0x24]
// 00455c8d: FSUB float ptr [EDX + 0x4]
// 00455c90: FXCH
// 00455c92: FSUB float ptr [EDX]
// 00455c94: FXCH
// 00455c96: FDIVRP ST2,ST0
// 00455c98: FMUL ST1
// 00455c9a: FADD float ptr [EDX]
// 00455c9c: LEA EDX,[EAX*0x4 + 0x0]
// 00455ca3: FSTP float ptr [ESP + EDX*0x1 + 0x18]
// 00455ca7: MOV ECX,dword ptr [ESI]
// 00455ca9: MOV dword ptr [ESP + 0x68],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00455cad: MOV EDX,dword ptr [ESI + 0x8]
// 00455cb0: FLD float ptr [ECX + 0x8]
// 00455cb3: FSUB float ptr [EDX + 0x8]
// 00455cb6: FMULP
// 00455cb8: FADD float ptr [EDX + 0x8]
// 00455cbb: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x1c] (READ)
// 00455cbf: INC EAX
// 00455cc0: FSTP float ptr [ESP + EDX*0x1 + 0xc]
// 00455cc4: CMP EAX,0x2
//   Label: LAB_00455cc4
// 00455cc7: JL 0x00455cf6
//   XREF to: 00455cf6 (CONDITIONAL_JUMP)
// 00455cc9: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x6c] (READ)
// 00455ccd: MOV dword ptr [EBX + 0x3c],EAX
// 00455cd0: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x78] (READ)
// 00455cd4: MOV dword ptr [EBX + 0x40],EAX
// 00455cd7: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x68] (READ)
// 00455cdb: MOV dword ptr [EBX + 0x44],EAX
// 00455cde: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x74] (READ)
// 00455ce2: PUSH EBX
// 00455ce3: MOV dword ptr [EBX + 0x48],EAX
// 00455ce6: CALL core_dcube.cpp_intersectXZCapsule_FUN_004556b0
//   XREF to: 004556b0 (UNCONDITIONAL_CALL)
// 00455ceb: ADD ESP,0x4
// 00455cee: TEST EAX,EAX
// 00455cf0: JNZ 0x00455df4
//   XREF to: 00455df4 (CONDITIONAL_JUMP)
// 00455cf6: FLDZ
//   Label: LAB_00455cf6
// 00455cf8: FCOMP float ptr [ESI + 0x10]
// 00455cfb: FNSTSW AX
// 00455cfd: SAHF
// 00455cfe: JC 0x00455ea0
//   XREF to: 00455ea0 (CONDITIONAL_JUMP)
// 00455d04: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x2c] (READ)
// 00455d08: XOR EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x28] (READ)
// 00455d0c: XOR EAX,EAX
// 00455d0e: TEST DL,0x2
// 00455d11: JNZ 0x00455e60
//   XREF to: 00455e60 (CONDITIONAL_JUMP)
// 00455d17: MOV EDX,dword ptr [ESP + 0x5c]
//   Label: LAB_00455d17
//   XREF to: Stack[-0x28] (READ)
// 00455d1b: XOR EDX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x24] (READ)
// 00455d1f: TEST DL,0x2
// 00455d22: JZ 0x00455d6c
//   XREF to: 00455d6c (CONDITIONAL_JUMP)
// 00455d24: MOV ECX,dword ptr [ESI + 0x8]
// 00455d27: MOV EDX,dword ptr [ESI + 0x4]
// 00455d2a: FLD float ptr [ECX + 0x4]
// 00455d2d: FSUB float ptr [EDX + 0x4]
// 00455d30: FLD float ptr [ECX]
// 00455d32: FLD float ptr [EBX + 0x28]
// 00455d35: FSUB float ptr [EDX + 0x4]
// 00455d38: FXCH
// 00455d3a: FSUB float ptr [EDX]
// 00455d3c: FXCH
// 00455d3e: FDIVRP ST2,ST0
// 00455d40: FMUL ST1
// 00455d42: FADD float ptr [EDX]
// 00455d44: LEA EDX,[EAX*0x4 + 0x0]
// 00455d4b: FSTP float ptr [ESP + EDX*0x1 + 0x24]
// 00455d4f: MOV ECX,dword ptr [ESI + 0x8]
// 00455d52: MOV dword ptr [ESP + 0x68],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00455d56: MOV EDX,dword ptr [ESI + 0x4]
// 00455d59: FLD float ptr [ECX + 0x8]
// 00455d5c: FSUB float ptr [EDX + 0x8]
// 00455d5f: FMULP
// 00455d61: FADD float ptr [EDX + 0x8]
// 00455d64: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x1c] (READ)
// 00455d68: INC EAX
// 00455d69: FSTP float ptr [ESP + EDX*0x1]
// 00455d6c: MOV EDX,dword ptr [ESP + 0x60]
//   Label: LAB_00455d6c
//   XREF to: Stack[-0x24] (READ)
// 00455d70: XOR EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x2c] (READ)
// 00455d74: TEST DL,0x2
// 00455d77: JZ 0x00455dbf
//   XREF to: 00455dbf (CONDITIONAL_JUMP)
// 00455d79: MOV ECX,dword ptr [ESI]
// 00455d7b: MOV EDX,dword ptr [ESI + 0x8]
// 00455d7e: FLD float ptr [ECX + 0x4]
// 00455d81: FSUB float ptr [EDX + 0x4]
// 00455d84: FLD float ptr [ECX]
// 00455d86: FLD float ptr [EBX + 0x28]
// 00455d89: FSUB float ptr [EDX + 0x4]
// 00455d8c: FXCH
// 00455d8e: FSUB float ptr [EDX]
// 00455d90: FXCH
// 00455d92: FDIVRP ST2,ST0
// 00455d94: FMUL ST1
// 00455d96: FADD float ptr [EDX]
// 00455d98: LEA EDX,[EAX*0x4 + 0x0]
// 00455d9f: FSTP float ptr [ESP + EDX*0x1 + 0x24]
// 00455da3: MOV ECX,dword ptr [ESI]
// 00455da5: MOV dword ptr [ESP + 0x68],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00455da9: MOV EDX,dword ptr [ESI + 0x8]
// 00455dac: FLD float ptr [ECX + 0x8]
// 00455daf: FSUB float ptr [EDX + 0x8]
// 00455db2: FMULP
// 00455db4: FADD float ptr [EDX + 0x8]
// 00455db7: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x1c] (READ)
// 00455dbb: INC EAX
// 00455dbc: FSTP float ptr [ESP + EDX*0x1]
// 00455dbf: CMP EAX,0x2
//   Label: LAB_00455dbf
// 00455dc2: JL 0x00455ea0
//   XREF to: 00455ea0 (CONDITIONAL_JUMP)
// 00455dc8: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x60] (READ)
// 00455dcc: MOV dword ptr [EBX + 0x3c],EAX
// 00455dcf: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x84] (DATA)
// 00455dd2: MOV dword ptr [EBX + 0x40],EAX
// 00455dd5: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x5c] (READ)
// 00455dd9: MOV dword ptr [EBX + 0x44],EAX
// 00455ddc: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x80] (READ)
// 00455de0: PUSH EBX
// 00455de1: MOV dword ptr [EBX + 0x48],EAX
// 00455de4: CALL core_dcube.cpp_intersectXZCapsule_FUN_004556b0
//   XREF to: 004556b0 (UNCONDITIONAL_CALL)
// 00455de9: ADD ESP,0x4
// 00455dec: TEST EAX,EAX
// 00455dee: JZ 0x00455ea0
//   XREF to: 00455ea0 (CONDITIONAL_JUMP)
// 00455df4: FLD float ptr [EBX + 0x18]
//   Label: LAB_00455df4
// 00455df7: FMUL float ptr [EBX + 0x4c]
// 00455dfa: FLD float ptr [EBX + 0x1c]
// 00455dfd: FMUL float ptr [EBX + 0x4c]
// 00455e00: FLD float ptr [EBX + 0x4c]
// 00455e03: MOV dword ptr [EBX + 0x8],0x0
// 00455e0a: MOV EAX,0x1
// 00455e0f: FSTP float ptr [EBX]
// 00455e11: FXCH
// 00455e13: FADD float ptr [EBX + 0x10]
// 00455e16: FXCH
// 00455e18: FADD float ptr [EBX + 0x14]
// 00455e1b: FLD float ptr [EBX + 0x54]
// 00455e1e: FLD float ptr [EBX + 0x58]
// 00455e21: FSUBP ST2,ST0
// 00455e23: FSUBP ST2,ST0
// 00455e25: FSTP float ptr [EBX + 0xc]
// 00455e28: FSTP float ptr [EBX + 0x4]
// 00455e2b: ADD ESP,0x74
// 00455e2e: POP EBP
// 00455e2f: POP EDI
// 00455e30: POP ESI
// 00455e31: POP EBX
// 00455e32: RET
// 00455e33: XOR EAX,EAX
//   Label: LAB_00455e33
// 00455e35: ADD ESP,0x74
// 00455e38: POP EBP
// 00455e39: POP EDI
// 00455e3a: POP ESI
// 00455e3b: POP EBX
// 00455e3c: RET
// 00455e3d: MOV EAX,dword ptr [ESP + 0x54]
//   Label: LAB_00455e3d
//   XREF to: Stack[-0x30] (READ)
// 00455e41: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00455e45: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x20] (READ)
// 00455e49: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00455e4d: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x50] (READ)
// 00455e51: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00455e55: MOV EAX,EBP
// 00455e57: MOV EBP,EDI
// 00455e59: MOV EDI,EAX
// 00455e5b: JMP 0x00455ab5
//   XREF to: 00455ab5 (UNCONDITIONAL_JUMP)
// 00455e60: MOV EDX,dword ptr [ESI + 0x4]
//   Label: LAB_00455e60
// 00455e63: MOV EAX,dword ptr [ESI]
// 00455e65: FLD float ptr [EDX + 0x4]
// 00455e68: FSUB float ptr [EAX + 0x4]
// 00455e6b: FLD float ptr [EDX]
// 00455e6d: FLD float ptr [EBX + 0x28]
// 00455e70: FSUB float ptr [EAX + 0x4]
// 00455e73: FXCH
// 00455e75: FSUB float ptr [EAX]
// 00455e77: FXCH
// 00455e79: FDIVRP ST2,ST0
// 00455e7b: FMUL ST1
// 00455e7d: FADD float ptr [EAX]
// 00455e7f: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x60] (WRITE)
// 00455e83: MOV EDX,dword ptr [ESI + 0x4]
// 00455e86: MOV EAX,dword ptr [ESI]
// 00455e88: FLD float ptr [EDX + 0x8]
// 00455e8b: FSUB float ptr [EAX + 0x8]
// 00455e8e: FMULP
// 00455e90: FADD float ptr [EAX + 0x8]
// 00455e93: FSTP float ptr [ESP]
//   XREF to: Stack[-0x84] (DATA)
// 00455e96: MOV EAX,0x1
// 00455e9b: JMP 0x00455d17
//   XREF to: 00455d17 (UNCONDITIONAL_JUMP)
// 00455ea0: PUSH EDI
//   Label: LAB_00455ea0
// 00455ea1: PUSH EBP
// 00455ea2: PUSH EBX
// 00455ea3: CALL core_dcube.cpp_intersectXZCapsuleWithHeight_FUN_00455990
//   XREF to: 00455990 (UNCONDITIONAL_CALL)
// 00455ea8: ADD ESP,0xc
// 00455eab: MOV EDI,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x34] (READ)
// 00455eaf: PUSH EDI
// 00455eb0: PUSH EBP
// 00455eb1: PUSH EBX
// 00455eb2: MOV ESI,EAX
// 00455eb4: CALL core_dcube.cpp_intersectXZCapsuleWithHeight_FUN_00455990
//   XREF to: 00455990 (UNCONDITIONAL_CALL)
// 00455eb9: ADD ESP,0xc
// 00455ebc: OR EAX,ESI
// 00455ebe: ADD ESP,0x74
// 00455ec1: POP EBP
// 00455ec2: POP EDI
// 00455ec3: POP ESI
// 00455ec4: POP EBX
// 00455ec5: RET

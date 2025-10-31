// Name: core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
// Address: 0049ad80
// Address Range: [[0049ad80, 0049b17c]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00478650 (00478650) at 004786ec [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140 (00573140) at 005732a4 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_testCylinderQuadCollision_FUN_005730d0 (005730d0) at 005730fd [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005ba660 (005ba660) at 005ba688 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00
//   core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0

#include "nocturne.h"

void __cdecl
core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
          (CDemonTriangle *triangle,SIntersectXZCylinder *cylinder)

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
  CDemonTriangle *pCVar9;
  CDemonTriangle *pCVar10;
  CDemonTriangle *vertex2;
  bool bVar11;
  float in_stack_ffffff84;
  float in_stack_ffffff88;
  float local_6c [10];
  float local_44;
  CDemonTriangle *local_40;
  float local_3c;
  CVector3f *local_38;
  uint local_34;
  uint local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  if ((triangle->normal).z * cylinder->normal_z + (triangle->normal).x * cylinder->normal_x <= 0.0)
  {
    return;
  }
  pCVar10 = (CDemonTriangle *)&triangle->vertex2;
  local_40 = (CDemonTriangle *)&triangle->vertex3;
  fVar4 = (triangle->vertex1).x * cylinder->normal_x + (triangle->vertex1).z * cylinder->normal_z;
  local_2c = ((CVector3f *)pCVar10)->x * cylinder->normal_x +
             (triangle->vertex2).z * cylinder->normal_z;
  fVar5 = (triangle->vertex3).z * cylinder->normal_z +
          ((CVector3f *)local_40)->x * cylinder->normal_x;
  pCVar9 = triangle;
  local_3c = fVar4;
  if (local_2c < fVar4) {
    pCVar9 = pCVar10;
    pCVar10 = triangle;
    local_3c = local_2c;
    local_2c = fVar4;
    local_28 = fVar4;
  }
  vertex2 = pCVar10;
  local_44 = fVar5;
  if (fVar5 < local_2c) {
    local_24 = local_2c;
    local_44 = local_2c;
    vertex2 = local_40;
    local_40 = pCVar10;
    local_2c = fVar5;
  }
  pCVar10 = pCVar9;
  if (local_2c < local_3c) {
    local_3c = local_2c;
    pCVar10 = vertex2;
    vertex2 = pCVar9;
  }
  if (local_44 < cylinder->inner_radius) {
    return;
  }
  if (cylinder->outer_radius < local_3c) {
    return;
  }
  bVar1 = cylinder->bottom_y <= (triangle->vertex1).y;
  if ((triangle->vertex1).y <= cylinder->top_y) {
    bVar1 = bVar1 | 2;
  }
  local_38 = (CVector3f *)(uint)bVar1;
  bVar2 = cylinder->bottom_y <= (triangle->vertex2).y;
  if ((triangle->vertex2).y <= cylinder->top_y) {
    bVar2 = bVar2 | 2;
  }
  local_30 = (uint)bVar2;
  bVar3 = cylinder->bottom_y <= (triangle->vertex3).y;
  if ((triangle->vertex3).y <= cylinder->top_y) {
    bVar3 = bVar3 | 2;
  }
  local_34 = (uint)bVar3;
  if ((bVar1 & bVar2 & bVar3) != 0) {
    return;
  }
  if (0.0 <= (triangle->normal).y) {
    bVar11 = ((bVar1 ^ bVar2) & 1) != 0;
    if (bVar11) {
      fVar4 = (cylinder->bottom_y - (triangle->vertex1).y) /
              ((triangle->vertex2).y - (triangle->vertex1).y);
      in_stack_ffffff84 =
           ((triangle->vertex2).x - (triangle->vertex1).x) * fVar4 + (triangle->vertex1).x;
      local_6c[5] = ((triangle->vertex2).z - (triangle->vertex1).z) * fVar4 + (triangle->vertex1).z;
    }
    uVar7 = (uint)bVar11;
    uVar6 = uVar7;
    if (((bVar2 ^ bVar3) & 1) != 0) {
      fVar4 = (cylinder->bottom_y - (triangle->vertex2).y) /
              ((triangle->vertex3).y - (triangle->vertex2).y);
      *(float *)(&stack0xffffff84 + uVar7 * 4) =
           ((triangle->vertex3).x - (triangle->vertex2).x) * fVar4 + (triangle->vertex2).x;
      uVar6 = uVar7 + 1;
      local_6c[uVar7 + 5] =
           ((triangle->vertex3).z - (triangle->vertex2).z) * fVar4 + (triangle->vertex2).z;
    }
    uVar7 = uVar6;
    if (((bVar3 ^ bVar1) & 1) != 0) {
      fVar4 = (cylinder->bottom_y - (triangle->vertex3).y) /
              ((triangle->vertex1).y - (triangle->vertex3).y);
      *(float *)(&stack0xffffff84 + uVar6 * 4) =
           ((triangle->vertex1).x - (triangle->vertex3).x) * fVar4 + (triangle->vertex3).x;
      uVar7 = uVar6 + 1;
      local_6c[uVar6 + 5] =
           ((triangle->vertex1).z - (triangle->vertex3).z) * fVar4 + (triangle->vertex3).z;
    }
    if (1 < uVar7) {
      cylinder->edge_x1 = in_stack_ffffff84;
      cylinder->edge_z1 = local_6c[5];
      cylinder->edge_x2 = in_stack_ffffff88;
      cylinder->edge_z2 = local_6c[6];
      iVar8 = core_dtri_cpp_cylinderEdgeIntersection_FUN_0049aa00(cylinder);
      if (iVar8 != 0) goto LAB_0049b0c8;
    }
  }
  if ((triangle->normal).y <= 0.0) {
    bVar11 = ((local_34 ^ (uint)local_2c) & 2) != 0;
    if (bVar11) {
      fVar4 = (cylinder->top_y - (triangle->vertex1).y) /
              ((triangle->vertex2).y - (triangle->vertex1).y);
      local_6c[0] = ((triangle->vertex2).x - (triangle->vertex1).x) * fVar4 + (triangle->vertex1).x;
      local_6c[3] = ((triangle->vertex2).z - (triangle->vertex1).z) * fVar4 + (triangle->vertex1).z;
    }
    uVar7 = (uint)bVar11;
    uVar6 = uVar7;
    if ((((uint)local_2c ^ local_30) & 2) != 0) {
      fVar4 = (cylinder->top_y - (triangle->vertex2).y) /
              ((triangle->vertex3).y - (triangle->vertex2).y);
      local_6c[uVar7] =
           ((triangle->vertex3).x - (triangle->vertex2).x) * fVar4 + (triangle->vertex2).x;
      uVar6 = uVar7 + 1;
      local_6c[uVar7 + 3] =
           ((triangle->vertex3).z - (triangle->vertex2).z) * fVar4 + (triangle->vertex2).z;
    }
    uVar7 = uVar6;
    if (((local_30 ^ local_34) & 2) != 0) {
      fVar4 = (cylinder->top_y - (triangle->vertex3).y) /
              ((triangle->vertex1).y - (triangle->vertex3).y);
      local_6c[uVar6] =
           ((triangle->vertex1).x - (triangle->vertex3).x) * fVar4 + (triangle->vertex3).x;
      uVar7 = uVar6 + 1;
      local_6c[uVar6 + 3] =
           ((triangle->vertex1).z - (triangle->vertex3).z) * fVar4 + (triangle->vertex3).z;
    }
    if (1 < uVar7) {
      cylinder->edge_x1 = local_6c[0];
      cylinder->edge_z1 = local_6c[3];
      cylinder->edge_x2 = local_6c[1];
      cylinder->edge_z2 = local_6c[4];
      iVar8 = core_dtri_cpp_cylinderEdgeIntersection_FUN_0049aa00(cylinder);
      if (iVar8 != 0) {
LAB_0049b0c8:
        cylinder->flags = 0;
        cylinder->max_distance = cylinder->param_t;
        cylinder->push_x =
             (cylinder->normal_z * cylinder->param_t + cylinder->center_z) - cylinder->intersect_z;
        cylinder->push_z =
             (cylinder->normal_x * cylinder->param_t + cylinder->center_x) - cylinder->intersect_x;
        return;
      }
    }
  }
  core_dtri_cpp_cylinderEdgeTestWithHeight_FUN_0049ace0
            (cylinder,&pCVar10->vertex1,&vertex2->vertex1);
  core_dtri_cpp_cylinderEdgeTestWithHeight_FUN_0049ace0(cylinder,&pCVar10->vertex1,local_38);
  return;
}


// Assembly code:
// 0049ad80: PUSH EBX
//   Label: core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
// 0049ad81: PUSH ESI
// 0049ad82: PUSH EDI
// 0049ad83: PUSH EBP
// 0049ad84: SUB ESP,0x6c
// 0049ad87: MOV EBX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x4] (READ)
// 0049ad8e: MOV ESI,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x8] (READ)
// 0049ad95: FLD float ptr [EBX + 0x24]
// 0049ad98: FMUL float ptr [ESI + 0x18]
// 0049ad9b: FLD float ptr [EBX + 0x2c]
// 0049ad9e: FMUL float ptr [ESI + 0x1c]
// 0049ada1: FADDP
// 0049ada3: FLDZ
// 0049ada5: FCOMPP
// 0049ada7: FNSTSW AX
// 0049ada9: SAHF
// 0049adaa: JNC 0x0049b0fa
//   XREF to: 0049b0fa (CONDITIONAL_JUMP)
// 0049adb0: FLD float ptr [EBX + 0x8]
// 0049adb3: FMUL float ptr [ESI + 0x1c]
// 0049adb6: MOV EBP,EBX
// 0049adb8: LEA EDI,[EBX + 0xc]
// 0049adbb: FLD float ptr [EBX]
// 0049adbd: FMUL float ptr [ESI + 0x18]
// 0049adc0: FLD float ptr [EDI + 0x8]
// 0049adc3: LEA EAX,[EBX + 0x18]
// 0049adc6: FMUL float ptr [ESI + 0x1c]
// 0049adc9: FLD float ptr [EAX + 0x8]
// 0049adcc: FMUL float ptr [ESI + 0x1c]
// 0049adcf: FLD float ptr [EDI]
// 0049add1: FMUL float ptr [ESI + 0x18]
// 0049add4: FLD float ptr [EAX]
// 0049add6: FMUL float ptr [ESI + 0x18]
// 0049add9: FXCH ST4
// 0049addb: FADDP ST5,ST0
// 0049addd: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0049ade1: FXCH ST4
// 0049ade3: FST float ptr [ESP + 0x40]
//   XREF to: Stack[-0x3c] (WRITE)
// 0049ade7: FXCH ST4
// 0049ade9: FADDP ST2,ST0
// 0049adeb: FADDP ST2,ST0
// 0049aded: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x2c] (WRITE)
// 0049adf1: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x44] (WRITE)
// 0049adf5: FCOMP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x2c] (READ)
// 0049adf9: FNSTSW AX
// 0049adfb: SAHF
// 0049adfc: JA 0x0049b102
//   XREF to: 0049b102 (CONDITIONAL_JUMP)
// 0049ae02: FLD float ptr [ESP + 0x50]
//   Label: LAB_0049ae02
//   XREF to: Stack[-0x2c] (READ)
// 0049ae06: FCOMP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x44] (READ)
// 0049ae0a: FNSTSW AX
// 0049ae0c: SAHF
// 0049ae0d: JBE 0x0049ae31
//   XREF to: 0049ae31 (CONDITIONAL_JUMP)
// 0049ae0f: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x2c] (READ)
// 0049ae13: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0049ae17: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x44] (READ)
// 0049ae1b: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0049ae1f: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x24] (READ)
// 0049ae23: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0049ae27: MOV EAX,EDI
// 0049ae29: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x40] (READ)
// 0049ae2d: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0049ae31: FLD float ptr [ESP + 0x40]
//   Label: LAB_0049ae31
//   XREF to: Stack[-0x3c] (READ)
// 0049ae35: FCOMP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x2c] (READ)
// 0049ae39: FNSTSW AX
// 0049ae3b: SAHF
// 0049ae3c: JBE 0x0049ae4c
//   XREF to: 0049ae4c (CONDITIONAL_JUMP)
// 0049ae3e: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x2c] (READ)
// 0049ae42: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0049ae46: MOV EAX,EBP
// 0049ae48: MOV EBP,EDI
// 0049ae4a: MOV EDI,EAX
// 0049ae4c: FLD float ptr [ESP + 0x38]
//   Label: LAB_0049ae4c
//   XREF to: Stack[-0x44] (READ)
// 0049ae50: FCOMP float ptr [ESI + 0x2c]
// 0049ae53: FNSTSW AX
// 0049ae55: SAHF
// 0049ae56: JC 0x0049b0fa
//   XREF to: 0049b0fa (CONDITIONAL_JUMP)
// 0049ae5c: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x3c] (READ)
// 0049ae60: FCOMP float ptr [ESI + 0x30]
// 0049ae63: FNSTSW AX
// 0049ae65: SAHF
// 0049ae66: JA 0x0049b0fa
//   XREF to: 0049b0fa (CONDITIONAL_JUMP)
// 0049ae6c: XOR EDX,EDX
// 0049ae6e: FLD float ptr [EBX + 0x4]
// 0049ae71: MOV dword ptr [ESP + 0x44],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 0049ae75: FCOMP float ptr [ESI + 0x24]
// 0049ae78: FNSTSW AX
// 0049ae7a: SAHF
// 0049ae7b: JC 0x0049ae85
//   XREF to: 0049ae85 (CONDITIONAL_JUMP)
// 0049ae7d: MOV dword ptr [ESP + 0x44],0x1
//   XREF to: Stack[-0x38] (WRITE)
// 0049ae85: FLD float ptr [EBX + 0x4]
//   Label: LAB_0049ae85
// 0049ae88: FCOMP float ptr [ESI + 0x28]
// 0049ae8b: FNSTSW AX
// 0049ae8d: SAHF
// 0049ae8e: JA 0x0049ae95
//   XREF to: 0049ae95 (CONDITIONAL_JUMP)
// 0049ae90: OR byte ptr [ESP + 0x44],0x2
//   XREF to: Stack[-0x38] (READ_WRITE)
// 0049ae95: XOR EAX,EAX
//   Label: LAB_0049ae95
// 0049ae97: FLD float ptr [EBX + 0x10]
// 0049ae9a: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0049ae9e: FCOMP float ptr [ESI + 0x24]
// 0049aea1: FNSTSW AX
// 0049aea3: SAHF
// 0049aea4: JC 0x0049aeae
//   XREF to: 0049aeae (CONDITIONAL_JUMP)
// 0049aea6: MOV dword ptr [ESP + 0x4c],0x1
//   XREF to: Stack[-0x30] (WRITE)
// 0049aeae: FLD float ptr [EBX + 0x10]
//   Label: LAB_0049aeae
// 0049aeb1: FCOMP float ptr [ESI + 0x28]
// 0049aeb4: FNSTSW AX
// 0049aeb6: SAHF
// 0049aeb7: JA 0x0049aebe
//   XREF to: 0049aebe (CONDITIONAL_JUMP)
// 0049aeb9: OR byte ptr [ESP + 0x4c],0x2
//   XREF to: Stack[-0x30] (READ_WRITE)
// 0049aebe: XOR ECX,ECX
//   Label: LAB_0049aebe
// 0049aec0: FLD float ptr [EBX + 0x1c]
// 0049aec3: MOV dword ptr [ESP + 0x48],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 0049aec7: FCOMP float ptr [ESI + 0x24]
// 0049aeca: FNSTSW AX
// 0049aecc: SAHF
// 0049aecd: JC 0x0049aed7
//   XREF to: 0049aed7 (CONDITIONAL_JUMP)
// 0049aecf: MOV dword ptr [ESP + 0x48],0x1
//   XREF to: Stack[-0x34] (WRITE)
// 0049aed7: FLD float ptr [EBX + 0x1c]
//   Label: LAB_0049aed7
// 0049aeda: FCOMP float ptr [ESI + 0x28]
// 0049aedd: FNSTSW AX
// 0049aedf: SAHF
// 0049aee0: JA 0x0049aee7
//   XREF to: 0049aee7 (CONDITIONAL_JUMP)
// 0049aee2: OR byte ptr [ESP + 0x48],0x2
//   XREF to: Stack[-0x34] (READ_WRITE)
// 0049aee7: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_0049aee7
//   XREF to: Stack[-0x38] (READ)
// 0049aeeb: MOV EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x30] (READ)
// 0049aeef: MOV ECX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x34] (READ)
// 0049aef3: AND EAX,EDX
// 0049aef5: TEST EAX,ECX
// 0049aef7: JNZ 0x0049b0fa
//   XREF to: 0049b0fa (CONDITIONAL_JUMP)
// 0049aefd: FLDZ
// 0049aeff: FCOMP float ptr [EBX + 0x28]
// 0049af02: FNSTSW AX
// 0049af04: SAHF
// 0049af05: JA 0x0049aff6
//   XREF to: 0049aff6 (CONDITIONAL_JUMP)
// 0049af0b: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x38] (READ)
// 0049af0f: XOR EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x30] (READ)
// 0049af13: XOR EAX,EAX
// 0049af15: TEST DL,0x1
// 0049af18: JZ 0x0049af4c
//   XREF to: 0049af4c (CONDITIONAL_JUMP)
// 0049af1a: FLD float ptr [ESI + 0x24]
// 0049af1d: FSUB float ptr [EBX + 0x4]
// 0049af20: FLD float ptr [EBX + 0xc]
// 0049af23: FLD float ptr [EBX + 0x10]
// 0049af26: FSUB float ptr [EBX + 0x4]
// 0049af29: FXCH
// 0049af2b: FSUB float ptr [EBX]
// 0049af2d: FXCH
// 0049af2f: FDIVP ST2,ST0
// 0049af31: FMUL ST1
// 0049af33: FADD float ptr [EBX]
// 0049af35: FSTP float ptr [ESP]
//   XREF to: Stack[-0x7c] (DATA)
// 0049af38: FLD float ptr [EBX + 0x14]
// 0049af3b: FSUB float ptr [EBX + 0x8]
// 0049af3e: FMULP
// 0049af40: FADD float ptr [EBX + 0x8]
// 0049af43: MOV EAX,0x1
// 0049af48: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x58] (WRITE)
// 0049af4c: MOV EDX,dword ptr [ESP + 0x4c]
//   Label: LAB_0049af4c
//   XREF to: Stack[-0x30] (READ)
// 0049af50: XOR EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x34] (READ)
// 0049af54: TEST DL,0x1
// 0049af57: JZ 0x0049af89
//   XREF to: 0049af89 (CONDITIONAL_JUMP)
// 0049af59: FLD float ptr [ESI + 0x24]
// 0049af5c: FSUB float ptr [EBX + 0x10]
// 0049af5f: FLD float ptr [EBX + 0x18]
// 0049af62: FLD float ptr [EBX + 0x1c]
// 0049af65: FSUB float ptr [EBX + 0x10]
// 0049af68: FXCH
// 0049af6a: FSUB float ptr [EBX + 0xc]
// 0049af6d: FXCH
// 0049af6f: FDIVP ST2,ST0
// 0049af71: FMUL ST1
// 0049af73: FADD float ptr [EBX + 0xc]
// 0049af76: FSTP float ptr [ESP + EAX*0x4]
//   XREF to: Stack[-0x78] (DATA)
// 0049af79: FLD float ptr [EBX + 0x20]
// 0049af7c: FSUB float ptr [EBX + 0x14]
// 0049af7f: FMULP
// 0049af81: FADD float ptr [EBX + 0x14]
// 0049af84: INC EAX
// 0049af85: FSTP float ptr [ESP + EAX*0x4 + 0x20]
//   XREF to: Stack[-0x58] (DATA)
// 0049af89: MOV EDX,dword ptr [ESP + 0x48]
//   Label: LAB_0049af89
//   XREF to: Stack[-0x34] (READ)
// 0049af8d: XOR EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x38] (READ)
// 0049af91: TEST DL,0x1
// 0049af94: JZ 0x0049afc5
//   XREF to: 0049afc5 (CONDITIONAL_JUMP)
// 0049af96: FLD float ptr [ESI + 0x24]
// 0049af99: FSUB float ptr [EBX + 0x1c]
// 0049af9c: FLD float ptr [EBX]
// 0049af9e: FLD float ptr [EBX + 0x4]
// 0049afa1: FSUB float ptr [EBX + 0x1c]
// 0049afa4: FXCH
// 0049afa6: FSUB float ptr [EBX + 0x18]
// 0049afa9: FXCH
// 0049afab: FDIVP ST2,ST0
// 0049afad: FMUL ST1
// 0049afaf: FADD float ptr [EBX + 0x18]
// 0049afb2: FSTP float ptr [ESP + EAX*0x4]
//   XREF to: Stack[-0x7c] (DATA)
// 0049afb5: FLD float ptr [EBX + 0x8]
// 0049afb8: FSUB float ptr [EBX + 0x20]
// 0049afbb: FMULP
// 0049afbd: FADD float ptr [EBX + 0x20]
// 0049afc0: INC EAX
// 0049afc1: FSTP float ptr [ESP + EAX*0x4 + 0x20]
//   XREF to: Stack[-0x58] (DATA)
// 0049afc5: CMP EAX,0x2
//   Label: LAB_0049afc5
// 0049afc8: JL 0x0049aff6
//   XREF to: 0049aff6 (CONDITIONAL_JUMP)
// 0049afca: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x7c] (DATA)
// 0049afcd: MOV dword ptr [ESI + 0x3c],EAX
// 0049afd0: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x58] (READ)
// 0049afd4: MOV dword ptr [ESI + 0x40],EAX
// 0049afd7: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x78] (READ)
// 0049afdb: MOV dword ptr [ESI + 0x44],EAX
// 0049afde: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x54] (READ)
// 0049afe2: PUSH ESI
// 0049afe3: MOV dword ptr [ESI + 0x48],EAX
// 0049afe6: CALL core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00
//   XREF to: 0049aa00 (UNCONDITIONAL_CALL)
// 0049afeb: ADD ESP,0x4
// 0049afee: TEST EAX,EAX
// 0049aff0: JNZ 0x0049b0c8
//   XREF to: 0049b0c8 (CONDITIONAL_JUMP)
// 0049aff6: FLDZ
//   Label: LAB_0049aff6
// 0049aff8: FCOMP float ptr [EBX + 0x28]
// 0049affb: FNSTSW AX
// 0049affd: SAHF
// 0049affe: JC 0x0049b15b
//   XREF to: 0049b15b (CONDITIONAL_JUMP)
// 0049b004: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x38] (READ)
// 0049b008: XOR EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x30] (READ)
// 0049b00c: XOR EAX,EAX
// 0049b00e: TEST DL,0x2
// 0049b011: JNZ 0x0049b123
//   XREF to: 0049b123 (CONDITIONAL_JUMP)
// 0049b017: MOV EDX,dword ptr [ESP + 0x4c]
//   Label: LAB_0049b017
//   XREF to: Stack[-0x30] (READ)
// 0049b01b: XOR EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x34] (READ)
// 0049b01f: TEST DL,0x2
// 0049b022: JZ 0x0049b055
//   XREF to: 0049b055 (CONDITIONAL_JUMP)
// 0049b024: FLD float ptr [ESI + 0x28]
// 0049b027: FSUB float ptr [EBX + 0x10]
// 0049b02a: FLD float ptr [EBX + 0x18]
// 0049b02d: FLD float ptr [EBX + 0x1c]
// 0049b030: FSUB float ptr [EBX + 0x10]
// 0049b033: FXCH
// 0049b035: FSUB float ptr [EBX + 0xc]
// 0049b038: FXCH
// 0049b03a: FDIVP ST2,ST0
// 0049b03c: FMUL ST1
// 0049b03e: FADD float ptr [EBX + 0xc]
// 0049b041: FSTP float ptr [ESP + EAX*0x4 + 0xc]
// 0049b045: FLD float ptr [EBX + 0x20]
// 0049b048: FSUB float ptr [EBX + 0x14]
// 0049b04b: FMULP
// 0049b04d: FADD float ptr [EBX + 0x14]
// 0049b050: INC EAX
// 0049b051: FSTP float ptr [ESP + EAX*0x4 + 0x14]
//   XREF to: Stack[-0x64] (DATA)
// 0049b055: MOV EDX,dword ptr [ESP + 0x48]
//   Label: LAB_0049b055
//   XREF to: Stack[-0x34] (READ)
// 0049b059: XOR EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x38] (READ)
// 0049b05d: TEST DL,0x2
// 0049b060: JZ 0x0049b092
//   XREF to: 0049b092 (CONDITIONAL_JUMP)
// 0049b062: FLD float ptr [ESI + 0x28]
// 0049b065: FSUB float ptr [EBX + 0x1c]
// 0049b068: FLD float ptr [EBX]
// 0049b06a: FLD float ptr [EBX + 0x4]
// 0049b06d: FSUB float ptr [EBX + 0x1c]
// 0049b070: FXCH
// 0049b072: FSUB float ptr [EBX + 0x18]
// 0049b075: FXCH
// 0049b077: FDIVP ST2,ST0
// 0049b079: FMUL ST1
// 0049b07b: FADD float ptr [EBX + 0x18]
// 0049b07e: FSTP float ptr [ESP + EAX*0x4 + 0xc]
//   XREF to: Stack[-0x6c] (DATA)
// 0049b082: FLD float ptr [EBX + 0x8]
// 0049b085: FSUB float ptr [EBX + 0x20]
// 0049b088: FMULP
// 0049b08a: FADD float ptr [EBX + 0x20]
// 0049b08d: INC EAX
// 0049b08e: FSTP float ptr [ESP + EAX*0x4 + 0x14]
//   XREF to: Stack[-0x64] (DATA)
// 0049b092: CMP EAX,0x2
//   Label: LAB_0049b092
// 0049b095: JL 0x0049b15b
//   XREF to: 0049b15b (CONDITIONAL_JUMP)
// 0049b09b: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x70] (READ)
// 0049b09f: MOV dword ptr [ESI + 0x3c],EAX
// 0049b0a2: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x64] (READ)
// 0049b0a6: MOV dword ptr [ESI + 0x40],EAX
// 0049b0a9: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x6c] (READ)
// 0049b0ad: MOV dword ptr [ESI + 0x44],EAX
// 0049b0b0: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x60] (READ)
// 0049b0b4: PUSH ESI
// 0049b0b5: MOV dword ptr [ESI + 0x48],EAX
// 0049b0b8: CALL core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00
//   XREF to: 0049aa00 (UNCONDITIONAL_CALL)
// 0049b0bd: ADD ESP,0x4
// 0049b0c0: TEST EAX,EAX
// 0049b0c2: JZ 0x0049b15b
//   XREF to: 0049b15b (CONDITIONAL_JUMP)
// 0049b0c8: MOV dword ptr [ESI + 0x8],0x0
//   Label: LAB_0049b0c8
// 0049b0cf: FLD float ptr [ESI + 0x18]
// 0049b0d2: FMUL float ptr [ESI + 0x4c]
// 0049b0d5: FLD float ptr [ESI + 0x1c]
// 0049b0d8: FMUL float ptr [ESI + 0x4c]
// 0049b0db: MOV EAX,dword ptr [ESI + 0x4c]
// 0049b0de: MOV dword ptr [ESI],EAX
// 0049b0e0: FXCH
// 0049b0e2: FADD float ptr [ESI + 0x10]
// 0049b0e5: FXCH
// 0049b0e7: FADD float ptr [ESI + 0x14]
// 0049b0ea: FLD float ptr [ESI + 0x54]
// 0049b0ed: FLD float ptr [ESI + 0x58]
// 0049b0f0: FSUBP ST2,ST0
// 0049b0f2: FSUBP ST2,ST0
// 0049b0f4: FSTP float ptr [ESI + 0xc]
// 0049b0f7: FSTP float ptr [ESI + 0x4]
// 0049b0fa: ADD ESP,0x6c
//   Label: LAB_0049b0fa
// 0049b0fd: POP EBP
// 0049b0fe: POP EDI
// 0049b0ff: POP ESI
// 0049b100: POP EBX
// 0049b101: RET
// 0049b102: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_0049b102
//   XREF to: Stack[-0x3c] (READ)
// 0049b106: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0049b10a: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x2c] (READ)
// 0049b10e: MOV EBP,EDI
// 0049b110: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0049b114: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x28] (READ)
// 0049b118: MOV EDI,EBX
// 0049b11a: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0049b11e: JMP 0x0049ae02
//   XREF to: 0049ae02 (UNCONDITIONAL_JUMP)
// 0049b123: FLD float ptr [ESI + 0x28]
//   Label: LAB_0049b123
// 0049b126: FSUB float ptr [EBX + 0x4]
// 0049b129: FLD float ptr [EBX + 0xc]
// 0049b12c: FLD float ptr [EBX + 0x10]
// 0049b12f: FSUB float ptr [EBX + 0x4]
// 0049b132: FXCH
// 0049b134: FSUB float ptr [EBX]
// 0049b136: FXCH
// 0049b138: FDIVP ST2,ST0
// 0049b13a: FMUL ST1
// 0049b13c: FADD float ptr [EBX]
// 0049b13e: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x70] (WRITE)
// 0049b142: FLD float ptr [EBX + 0x14]
// 0049b145: FSUB float ptr [EBX + 0x8]
// 0049b148: FMULP
// 0049b14a: FADD float ptr [EBX + 0x8]
// 0049b14d: MOV EAX,0x1
// 0049b152: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x64] (WRITE)
// 0049b156: JMP 0x0049b017
//   XREF to: 0049b017 (UNCONDITIONAL_JUMP)
// 0049b15b: PUSH EDI
//   Label: LAB_0049b15b
// 0049b15c: PUSH EBP
// 0049b15d: PUSH ESI
// 0049b15e: CALL core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0
//   XREF to: 0049ace0 (UNCONDITIONAL_CALL)
// 0049b163: ADD ESP,0xc
// 0049b166: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x40] (READ)
// 0049b16a: PUSH EBX
// 0049b16b: PUSH EBP
// 0049b16c: PUSH ESI
// 0049b16d: CALL core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0
//   XREF to: 0049ace0 (UNCONDITIONAL_CALL)
// 0049b172: ADD ESP,0xc
// 0049b175: ADD ESP,0x6c
// 0049b178: POP EBP
// 0049b179: POP EDI
// 0049b17a: POP ESI
// 0049b17b: POP EBX
// 0049b17c: RET

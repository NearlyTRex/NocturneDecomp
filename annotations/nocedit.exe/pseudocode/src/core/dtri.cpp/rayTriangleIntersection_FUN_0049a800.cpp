// Name: core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
// Address: 0049a800
// Address Range: [[0049a800, 0049a9fe]]
// Convention: __cdecl
// Signature: float core_dtri.cpp_rayTriangleIntersection_FUN_0049a800(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0 (004781d0) at 004783eb [UNCONDITIONAL_CALL]
//   core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 (0049b2f0) at 0049b633 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509330 (00509330) at 005093fc [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0 (0059cba0) at 0059cd29 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005ba590 (005ba590) at 005ba5d6 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005eb740 (005eb740) at 005eb803 [UNCONDITIONAL_CALL]

#include "nocturne.h"

float __cdecl
core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
          (CDemonTriangle *triangle,CVector3f *rayOrigin,CVector3f *rayDirection)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  
  fVar2 = (triangle->normal).z * rayDirection->z +
          (triangle->normal).x * rayDirection->x + (triangle->normal).y * rayDirection->y;
  if (fVar2 <= 0.0) {
    return -1.0;
  }
  fVar3 = -((triangle->normal).z * rayOrigin->z +
           (triangle->normal).y * rayOrigin->y +
           (triangle->normal).x * rayOrigin->x + triangle->plane_distance);
  if (fVar3 < 0.0) {
    return -1.0;
  }
  if (fVar2 < fVar3) {
    return -1.0;
  }
  fVar3 = fVar3 / fVar2;
  fVar4 = fVar3 * rayDirection->x + rayOrigin->x;
  fVar5 = fVar3 * rayDirection->y + rayOrigin->y;
  fVar2 = triangle->area;
  if (fVar2 == 0.0) {
    fVar2 = (triangle->vertex2).z;
    fVar1 = (triangle->vertex3).z;
    local_14 = fVar5 - (triangle->vertex1).y;
    local_24 = (triangle->vertex2).y - (triangle->vertex1).y;
    local_28 = (triangle->vertex3).y - (triangle->vertex1).y;
  }
  else {
    if (1 < (uint)fVar2) {
      if (fVar2 == 2.8026e-45) {
        local_14 = fVar4 - (triangle->vertex1).x;
        local_24 = (triangle->vertex2).x - (triangle->vertex1).x;
        local_28 = (triangle->vertex3).x - (triangle->vertex1).x;
        local_2c = fVar5 - (triangle->vertex1).y;
        local_1c = (triangle->vertex2).y - (triangle->vertex1).y;
        local_20 = (triangle->vertex3).y - (triangle->vertex1).y;
      }
      goto LAB_0049a90b;
    }
    fVar2 = (triangle->vertex2).z;
    fVar1 = (triangle->vertex3).z;
    local_14 = fVar4 - (triangle->vertex1).x;
    local_24 = (triangle->vertex2).x - (triangle->vertex1).x;
    local_28 = (triangle->vertex3).x - (triangle->vertex1).x;
  }
  local_2c = (fVar3 * rayDirection->z + rayOrigin->z) - (triangle->vertex1).z;
  local_1c = fVar2 - (triangle->vertex1).z;
  local_20 = fVar1 - (triangle->vertex1).z;
LAB_0049a90b:
  fVar4 = 1.0 / (local_24 * local_20 - local_1c * local_28);
  fVar2 = (local_14 * local_20 - local_28 * local_2c) * fVar4;
  if (((0.0 <= fVar2) && (fVar4 = (local_24 * local_2c - local_1c * local_14) * fVar4, 0.0 <= fVar4)
      ) && (fVar2 + fVar4 <= 1.0)) {
    return fVar3;
  }
  return -1.0;
}


// Assembly code:
// 0049a800: PUSH EBX
//   Label: core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
// 0049a801: PUSH EBP
// 0049a802: MOV EBP,ESP
// 0049a804: SUB ESP,0x3c
// 0049a807: AND ESP,0xfffffff8
// 0049a80a: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0049a80d: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0049a810: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0049a813: FLD float ptr [EDX + 0x28]
// 0049a816: FMUL float ptr [ECX + 0x4]
// 0049a819: FLD float ptr [EDX + 0x24]
// 0049a81c: FMUL float ptr [ECX]
// 0049a81e: FADDP
// 0049a820: FLD float ptr [EDX + 0x2c]
// 0049a823: FMUL float ptr [ECX + 0x8]
// 0049a826: FADDP
// 0049a828: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (WRITE)
// 0049a82c: FLDZ
// 0049a82e: FCOMPP
// 0049a830: FNSTSW AX
// 0049a832: SAHF
// 0049a833: JNC 0x0049a989
//   XREF to: 0049a989 (CONDITIONAL_JUMP)
// 0049a839: FLD float ptr [EDX + 0x24]
// 0049a83c: FMUL float ptr [EBX]
// 0049a83e: FADD float ptr [EDX + 0x30]
// 0049a841: FLD float ptr [EDX + 0x28]
// 0049a844: FMUL float ptr [EBX + 0x4]
// 0049a847: FADDP
// 0049a849: FLD float ptr [EDX + 0x2c]
// 0049a84c: FMUL float ptr [EBX + 0x8]
// 0049a84f: FADDP
// 0049a851: FCHS
// 0049a853: FST float ptr [ESP + 0xc]
//   XREF to: Stack[-0x3c] (WRITE)
// 0049a857: FLDZ
// 0049a859: FCOMPP
// 0049a85b: FNSTSW AX
// 0049a85d: SAHF
// 0049a85e: JA 0x0049a989
//   XREF to: 0049a989 (CONDITIONAL_JUMP)
// 0049a864: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x3c] (READ)
// 0049a868: FCOMP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (READ)
// 0049a86c: FNSTSW AX
// 0049a86e: SAHF
// 0049a86f: JA 0x0049a989
//   XREF to: 0049a989 (CONDITIONAL_JUMP)
// 0049a875: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x3c] (READ)
// 0049a879: FDIV float ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (READ)
// 0049a87d: FST float ptr [ESP + 0xc]
//   XREF to: Stack[-0x3c] (WRITE)
// 0049a881: FMUL float ptr [ECX]
// 0049a883: FADD float ptr [EBX]
// 0049a885: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x3c] (READ)
// 0049a889: FXCH
// 0049a88b: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x38] (WRITE)
// 0049a88f: FMUL float ptr [ECX + 0x4]
// 0049a892: FADD float ptr [EBX + 0x4]
// 0049a895: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x3c] (READ)
// 0049a899: FXCH
// 0049a89b: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x34] (WRITE)
// 0049a89f: FMUL float ptr [ECX + 0x8]
// 0049a8a2: FADD float ptr [EBX + 0x8]
// 0049a8a5: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (WRITE)
// 0049a8a9: MOV ECX,dword ptr [EDX + 0x34]
// 0049a8ac: CMP ECX,0x1
// 0049a8af: JNC 0x0049a9f3
//   XREF to: 0049a9f3 (CONDITIONAL_JUMP)
// 0049a8b5: TEST ECX,ECX
// 0049a8b7: JNZ 0x0049a90b
//   XREF to: 0049a90b (CONDITIONAL_JUMP)
// 0049a8b9: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x34] (READ)
// 0049a8bd: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 0049a8c1: FLD float ptr [EDX + 0x10]
// 0049a8c4: FLD float ptr [EDX + 0x1c]
// 0049a8c7: FLD float ptr [EDX + 0x14]
// 0049a8ca: FLD float ptr [EDX + 0x20]
// 0049a8cd: FXCH ST5
// 0049a8cf: FSUB float ptr [EDX + 0x4]
// 0049a8d2: FXCH ST3
// 0049a8d4: FSUB float ptr [EDX + 0x4]
// 0049a8d7: FXCH ST2
// 0049a8d9: FSUB float ptr [EDX + 0x4]
// 0049a8dc: FXCH ST4
//   Label: LAB_0049a8dc
// 0049a8de: FSUB float ptr [EDX + 0x8]
// 0049a8e1: FXCH
// 0049a8e3: FSUB float ptr [EDX + 0x8]
// 0049a8e6: FXCH ST5
// 0049a8e8: FSUB float ptr [EDX + 0x8]
// 0049a8eb: FXCH ST2
//   Label: LAB_0049a8eb
// 0049a8ed: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x24] (WRITE)
// 0049a8f1: FXCH ST3
// 0049a8f3: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (WRITE)
// 0049a8f7: FXCH ST2
// 0049a8f9: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x2c] (WRITE)
// 0049a8fd: FXCH ST2
// 0049a8ff: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (WRITE)
// 0049a903: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (WRITE)
// 0049a907: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (WRITE)
// 0049a90b: FLD float ptr [ESP + 0x28]
//   Label: LAB_0049a90b
//   XREF to: Stack[-0x20] (READ)
// 0049a90f: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x24] (READ)
// 0049a913: FMUL ST1
// 0049a915: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (READ)
// 0049a919: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (READ)
// 0049a91d: FMUL ST1
// 0049a91f: FSUBP ST2,ST0
// 0049a921: FLD1
// 0049a923: FDIVRP ST2,ST0
// 0049a925: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 0049a929: FMULP ST3
// 0049a92b: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0049a92f: FSUBP ST2,ST0
// 0049a931: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x10] (WRITE)
// 0049a935: FMUL float ptr [ESP + 0x38]
//   XREF to: Stack[-0x10] (READ)
// 0049a939: FST float ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 0049a93c: FLDZ
// 0049a93e: FCOMPP
// 0049a940: FNSTSW AX
// 0049a942: SAHF
// 0049a943: JA 0x0049a989
//   XREF to: 0049a989 (CONDITIONAL_JUMP)
// 0049a945: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x24] (READ)
// 0049a949: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0049a94d: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (READ)
// 0049a951: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 0049a955: FSUBP
// 0049a957: FMUL float ptr [ESP + 0x38]
//   XREF to: Stack[-0x10] (READ)
// 0049a95b: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x44] (WRITE)
// 0049a95f: FLDZ
// 0049a961: FCOMPP
// 0049a963: FNSTSW AX
// 0049a965: SAHF
// 0049a966: JA 0x0049a989
//   XREF to: 0049a989 (CONDITIONAL_JUMP)
// 0049a968: FLD float ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 0049a96b: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x44] (READ)
// 0049a96f: FLD1
// 0049a971: FCOMPP
// 0049a973: FNSTSW AX
// 0049a975: SAHF
// 0049a976: JC 0x0049a989
//   XREF to: 0049a989 (CONDITIONAL_JUMP)
// 0049a978: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x3c] (READ)
// 0049a97c: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0049a980: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x18] (READ)
// 0049a984: MOV ESP,EBP
// 0049a986: POP EBP
// 0049a987: POP EBX
// 0049a988: RET
// 0049a989: MOV dword ptr [ESP + 0x30],0xbf800000
//   Label: LAB_0049a989
//   XREF to: Stack[-0x18] (WRITE)
// 0049a991: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x18] (READ)
// 0049a995: MOV ESP,EBP
// 0049a997: POP EBP
// 0049a998: POP EBX
// 0049a999: RET
// 0049a99a: FLD float ptr [ESP + 0x10]
//   Label: LAB_0049a99a
//   XREF to: Stack[-0x38] (READ)
// 0049a99e: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 0049a9a2: FLD float ptr [EDX + 0xc]
// 0049a9a5: FLD float ptr [EDX + 0x18]
// 0049a9a8: FLD float ptr [EDX + 0x14]
// 0049a9ab: FLD float ptr [EDX + 0x20]
// 0049a9ae: FXCH ST5
// 0049a9b0: FSUB float ptr [EDX]
// 0049a9b2: FXCH ST3
// 0049a9b4: FSUB float ptr [EDX]
// 0049a9b6: FXCH ST2
// 0049a9b8: FSUB float ptr [EDX]
// 0049a9ba: JMP 0x0049a8dc
//   XREF to: 0049a8dc (UNCONDITIONAL_JUMP)
// 0049a9bf: FLD float ptr [ESP + 0x10]
//   Label: LAB_0049a9bf
//   XREF to: Stack[-0x38] (READ)
// 0049a9c3: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x34] (READ)
// 0049a9c7: FLD float ptr [EDX + 0xc]
// 0049a9ca: FLD float ptr [EDX + 0x18]
// 0049a9cd: FLD float ptr [EDX + 0x10]
// 0049a9d0: FLD float ptr [EDX + 0x1c]
// 0049a9d3: FXCH ST5
// 0049a9d5: FSUB float ptr [EDX]
// 0049a9d7: FXCH ST3
// 0049a9d9: FSUB float ptr [EDX]
// 0049a9db: FXCH ST2
// 0049a9dd: FSUB float ptr [EDX]
// 0049a9df: FXCH ST4
// 0049a9e1: FSUB float ptr [EDX + 0x4]
// 0049a9e4: FXCH
// 0049a9e6: FSUB float ptr [EDX + 0x4]
// 0049a9e9: FXCH ST5
// 0049a9eb: FSUB float ptr [EDX + 0x4]
// 0049a9ee: JMP 0x0049a8eb
//   XREF to: 0049a8eb (UNCONDITIONAL_JUMP)
// 0049a9f3: JBE 0x0049a99a
//   Label: LAB_0049a9f3
//   XREF to: 0049a99a (CONDITIONAL_JUMP)
// 0049a9f5: CMP ECX,0x2
// 0049a9f8: JZ 0x0049a9bf
//   XREF to: 0049a9bf (CONDITIONAL_JUMP)
// 0049a9fa: JMP 0x0049a90b
//   XREF to: 0049a90b (UNCONDITIONAL_JUMP)

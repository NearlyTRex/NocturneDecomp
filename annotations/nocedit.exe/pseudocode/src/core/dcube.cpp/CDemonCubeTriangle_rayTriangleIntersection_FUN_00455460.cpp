// Name: core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
// Address: 00455460
// Address Range: [[00455460, 004556a5]]
// Convention: __cdecl
// Signature: float core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460(CDemonCubeTriangle * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction)
// Cross-references:
//   core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0 (004578f0) at 0045792a [UNCONDITIONAL_CALL]
//   core_dcube.cpp_triangleCylinderCollision_FUN_00456040 (00456040) at 00456284 [UNCONDITIONAL_CALL]

#include "nocturne.h"

float __cdecl
core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
          (CDemonCubeTriangle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  CVector3f *pCVar6;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar2 = (this_ptr->normal).z * ray_direction->z +
          (this_ptr->normal).x * ray_direction->x + (this_ptr->normal).y * ray_direction->y;
  if (fVar2 <= 0.0) {
    return -1.0;
  }
  fVar4 = -((this_ptr->normal).z * ray_origin->z +
           (this_ptr->normal).y * ray_origin->y +
           (this_ptr->normal).x * ray_origin->x + this_ptr->plane_distance);
  if (fVar4 < 0.0) {
    return -1.0;
  }
  if (fVar2 < fVar4) {
    return -1.0;
  }
  fVar4 = fVar4 / fVar2;
  fVar2 = fVar4 * ray_direction->x + ray_origin->x;
  fVar5 = fVar4 * ray_direction->y + ray_origin->y;
  uVar3 = this_ptr->dominant_axis;
  if (uVar3 == 0) {
    pCVar6 = this_ptr->vertices[0];
    fVar1 = this_ptr->vertices[2]->z;
    local_14 = fVar5 - pCVar6->y;
    fVar2 = pCVar6->z;
    local_1c = this_ptr->vertices[1]->y - pCVar6->y;
    local_28 = this_ptr->vertices[1]->z - pCVar6->z;
    local_18 = this_ptr->vertices[2]->y - pCVar6->y;
  }
  else {
    if (1 < uVar3) {
      if (uVar3 == 2) {
        pCVar6 = this_ptr->vertices[0];
        local_14 = fVar2 - pCVar6->x;
        local_20 = fVar5 - pCVar6->y;
        local_1c = this_ptr->vertices[1]->x - pCVar6->x;
        local_28 = this_ptr->vertices[1]->y - pCVar6->y;
        local_18 = this_ptr->vertices[2]->x - pCVar6->x;
        local_24 = this_ptr->vertices[2]->y - pCVar6->y;
      }
      goto LAB_0045556e;
    }
    pCVar6 = this_ptr->vertices[0];
    fVar1 = this_ptr->vertices[2]->z;
    local_14 = fVar2 - pCVar6->x;
    fVar2 = pCVar6->z;
    local_1c = this_ptr->vertices[1]->x - pCVar6->x;
    local_28 = this_ptr->vertices[1]->z - pCVar6->z;
    local_18 = this_ptr->vertices[2]->x - pCVar6->x;
  }
  local_20 = (fVar4 * ray_direction->z + ray_origin->z) - fVar2;
  local_24 = fVar1 - pCVar6->z;
LAB_0045556e:
  fVar5 = 1.0 / (local_1c * local_24 - local_28 * local_18);
  fVar2 = (local_14 * local_24 - local_18 * local_20) * fVar5;
  if (((0.0 <= fVar2) && (fVar5 = (local_1c * local_20 - local_28 * local_14) * fVar5, 0.0 <= fVar5)
      ) && (fVar2 + fVar5 <= 1.0)) {
    return fVar4;
  }
  return -1.0;
}


// Assembly code:
// 00455460: PUSH EBX
//   Label: core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
// 00455461: PUSH EBP
// 00455462: MOV EBP,ESP
// 00455464: SUB ESP,0x3c
// 00455467: AND ESP,0xfffffff8
// 0045546a: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0045546d: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00455470: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00455473: FLD float ptr [EDX + 0x10]
// 00455476: FMUL float ptr [EBX + 0x4]
// 00455479: FLD float ptr [EDX + 0xc]
// 0045547c: FMUL float ptr [EBX]
// 0045547e: FADDP
// 00455480: FLD float ptr [EDX + 0x14]
// 00455483: FMUL float ptr [EBX + 0x8]
// 00455486: FADDP
// 00455488: FST float ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 0045548b: FLDZ
// 0045548d: FCOMPP
// 0045548f: FNSTSW AX
// 00455491: SAHF
// 00455492: JNC 0x004555ee
//   XREF to: 004555ee (CONDITIONAL_JUMP)
// 00455498: FLD float ptr [EDX + 0xc]
// 0045549b: FMUL float ptr [ECX]
// 0045549d: FADD float ptr [EDX + 0x18]
// 004554a0: FLD float ptr [EDX + 0x10]
// 004554a3: FMUL float ptr [ECX + 0x4]
// 004554a6: FADDP
// 004554a8: FLD float ptr [EDX + 0x14]
// 004554ab: FMUL float ptr [ECX + 0x8]
// 004554ae: FADDP
// 004554b0: FCHS
// 004554b2: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (WRITE)
// 004554b6: FLDZ
// 004554b8: FCOMPP
// 004554ba: FNSTSW AX
// 004554bc: SAHF
// 004554bd: JA 0x004555ee
//   XREF to: 004555ee (CONDITIONAL_JUMP)
// 004554c3: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (READ)
// 004554c7: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 004554ca: FNSTSW AX
// 004554cc: SAHF
// 004554cd: JA 0x004555ee
//   XREF to: 004555ee (CONDITIONAL_JUMP)
// 004554d3: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (READ)
// 004554d7: FDIV float ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 004554da: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (WRITE)
// 004554de: FMUL float ptr [EBX]
// 004554e0: FADD float ptr [ECX]
// 004554e2: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (READ)
// 004554e6: FXCH
// 004554e8: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x38] (WRITE)
// 004554ec: FMUL float ptr [EBX + 0x4]
// 004554ef: FADD float ptr [ECX + 0x4]
// 004554f2: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (READ)
// 004554f6: FXCH
// 004554f8: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x34] (WRITE)
// 004554fc: FMUL float ptr [EBX + 0x8]
// 004554ff: FADD float ptr [ECX + 0x8]
// 00455502: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (WRITE)
// 00455506: MOV EAX,dword ptr [EDX + 0x1c]
// 00455509: CMP EAX,0x1
// 0045550c: JNC 0x00455696
//   XREF to: 00455696 (CONDITIONAL_JUMP)
// 00455512: TEST EAX,EAX
// 00455514: JNZ 0x0045556e
//   XREF to: 0045556e (CONDITIONAL_JUMP)
// 00455516: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x34] (READ)
// 0045551a: MOV ECX,dword ptr [EDX + 0x4]
// 0045551d: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 00455521: MOV EAX,dword ptr [EDX]
// 00455523: FLD float ptr [ECX + 0x4]
// 00455526: MOV EDX,dword ptr [EDX + 0x8]
// 00455529: FLD float ptr [ECX + 0x8]
// 0045552c: FLD float ptr [EDX + 0x4]
// 0045552f: FLD float ptr [EDX + 0x8]
// 00455532: FXCH ST5
// 00455534: FSUB float ptr [EAX + 0x4]
// 00455537: FXCH ST4
// 00455539: FSUB float ptr [EAX + 0x8]
// 0045553c: FXCH ST4
// 0045553e: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (WRITE)
// 00455542: FXCH ST3
// 00455544: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (WRITE)
// 00455548: FXCH
// 0045554a: FSUB float ptr [EAX + 0x4]
// 0045554d: FXCH
// 0045554f: FSUB float ptr [EAX + 0x8]
// 00455552: FXCH
// 00455554: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (WRITE)
// 00455558: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (WRITE)
// 0045555c: FSUB float ptr [EAX + 0x4]
// 0045555f: FXCH
//   Label: LAB_0045555f
// 00455561: FSUB float ptr [EAX + 0x8]
// 00455564: FXCH
//   Label: LAB_00455564
// 00455566: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x18] (WRITE)
// 0045556a: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x24] (WRITE)
// 0045556e: FLD float ptr [ESP + 0x24]
//   Label: LAB_0045556e
//   XREF to: Stack[-0x24] (READ)
// 00455572: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (READ)
// 00455576: FMUL ST1
// 00455578: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x18] (READ)
// 0045557c: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (READ)
// 00455580: FMUL ST1
// 00455582: FSUBP ST2,ST0
// 00455584: FLD1
// 00455586: FDIVRP ST2,ST0
// 00455588: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 0045558c: FMULP ST3
// 0045558e: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (READ)
// 00455592: FSUBP ST2,ST0
// 00455594: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x2c] (WRITE)
// 00455598: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0045559c: FST float ptr [ESP + 0xc]
//   XREF to: Stack[-0x3c] (WRITE)
// 004555a0: FLDZ
// 004555a2: FCOMPP
// 004555a4: FNSTSW AX
// 004555a6: SAHF
// 004555a7: JA 0x004555ee
//   XREF to: 004555ee (CONDITIONAL_JUMP)
// 004555a9: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (READ)
// 004555ad: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (READ)
// 004555b1: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (READ)
// 004555b5: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 004555b9: FSUBP
// 004555bb: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 004555bf: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x44] (WRITE)
// 004555c3: FLDZ
// 004555c5: FCOMPP
// 004555c7: FNSTSW AX
// 004555c9: SAHF
// 004555ca: JA 0x004555ee
//   XREF to: 004555ee (CONDITIONAL_JUMP)
// 004555cc: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x3c] (READ)
// 004555d0: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x44] (READ)
// 004555d4: FLD1
// 004555d6: FCOMPP
// 004555d8: FNSTSW AX
// 004555da: SAHF
// 004555db: JC 0x004555ee
//   XREF to: 004555ee (CONDITIONAL_JUMP)
// 004555dd: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (READ)
// 004555e1: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004555e5: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x10] (READ)
// 004555e9: MOV ESP,EBP
// 004555eb: POP EBP
// 004555ec: POP EBX
// 004555ed: RET
// 004555ee: MOV dword ptr [ESP + 0x38],0xbf800000
//   Label: LAB_004555ee
//   XREF to: Stack[-0x10] (WRITE)
// 004555f6: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x10] (READ)
// 004555fa: MOV ESP,EBP
// 004555fc: POP EBP
// 004555fd: POP EBX
// 004555fe: RET
// 004555ff: FLD float ptr [ESP + 0x10]
//   Label: LAB_004555ff
//   XREF to: Stack[-0x38] (READ)
// 00455603: MOV ECX,dword ptr [EDX + 0x4]
// 00455606: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 0045560a: MOV EAX,dword ptr [EDX]
// 0045560c: FLD float ptr [ECX]
// 0045560e: MOV EDX,dword ptr [EDX + 0x8]
// 00455611: FLD float ptr [ECX + 0x8]
// 00455614: FLD float ptr [EDX]
// 00455616: FLD float ptr [EDX + 0x8]
// 00455619: FXCH ST5
// 0045561b: FSUB float ptr [EAX]
// 0045561d: FXCH ST4
// 0045561f: FSUB float ptr [EAX + 0x8]
// 00455622: FXCH ST4
// 00455624: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (WRITE)
// 00455628: FXCH ST3
// 0045562a: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (WRITE)
// 0045562e: FXCH
// 00455630: FSUB float ptr [EAX]
// 00455632: FXCH
// 00455634: FSUB float ptr [EAX + 0x8]
// 00455637: FXCH
// 00455639: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (WRITE)
// 0045563d: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (WRITE)
// 00455641: FSUB float ptr [EAX]
// 00455643: JMP 0x0045555f
//   XREF to: 0045555f (UNCONDITIONAL_JUMP)
// 00455648: FLD float ptr [ESP + 0x10]
//   Label: LAB_00455648
//   XREF to: Stack[-0x38] (READ)
// 0045564c: MOV ECX,dword ptr [EDX + 0x4]
// 0045564f: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x34] (READ)
// 00455653: MOV EAX,dword ptr [EDX]
// 00455655: FLD float ptr [ECX]
// 00455657: MOV EDX,dword ptr [EDX + 0x8]
// 0045565a: FLD float ptr [ECX + 0x4]
// 0045565d: FLD float ptr [EDX]
// 0045565f: FLD float ptr [EDX + 0x4]
// 00455662: FXCH ST5
// 00455664: FSUB float ptr [EAX]
// 00455666: FXCH ST4
// 00455668: FSUB float ptr [EAX + 0x4]
// 0045566b: FXCH ST4
// 0045566d: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (WRITE)
// 00455671: FXCH ST3
// 00455673: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (WRITE)
// 00455677: FXCH
// 00455679: FSUB float ptr [EAX]
// 0045567b: FXCH
// 0045567d: FSUB float ptr [EAX + 0x4]
// 00455680: FXCH
// 00455682: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (WRITE)
// 00455686: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (WRITE)
// 0045568a: FSUB float ptr [EAX]
// 0045568c: FXCH
// 0045568e: FSUB float ptr [EAX + 0x4]
// 00455691: JMP 0x00455564
//   XREF to: 00455564 (UNCONDITIONAL_JUMP)
// 00455696: JBE 0x004555ff
//   Label: LAB_00455696
//   XREF to: 004555ff (CONDITIONAL_JUMP)
// 0045569c: CMP EAX,0x2
// 0045569f: JZ 0x00455648
//   XREF to: 00455648 (CONDITIONAL_JUMP)
// 004556a1: JMP 0x0045556e
//   XREF to: 0045556e (UNCONDITIONAL_JUMP)

// Name: core_dcube.cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0
// Address: 004552c0
// Address Range: [[004552c0, 00455424]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0(CDemonCubeTriangle * this_ptr)
// Cross-references:
//   core_dcube.cpp_CDemonCubeTriangle_ctor_FUN_00455430 (00455430) at 00455449 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_dcube_cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0(CDemonCubeTriangle *this_ptr)

{
  float fVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_10;
  
  pCVar2 = this_ptr->vertices[1];
  pCVar3 = this_ptr->vertices[0];
  fVar1 = pCVar2->x - pCVar3->x;
  fVar5 = pCVar2->z - pCVar3->z;
  fVar7 = pCVar2->y - pCVar3->y;
  pCVar3 = this_ptr->vertices[2];
  fVar9 = pCVar3->z - pCVar2->z;
  fVar8 = pCVar3->y - pCVar2->y;
  fVar6 = pCVar3->x - pCVar2->x;
  fVar4 = fVar7 * fVar9 - fVar8 * fVar5;
  fVar5 = fVar6 * fVar5 - fVar1 * fVar9;
  (this_ptr->normal).x = fVar4;
  (this_ptr->normal).y = fVar5;
  fVar1 = fVar1 * fVar8 - fVar6 * fVar7;
  (this_ptr->normal).z = fVar1;
  local_10 = SQRT(fVar1 * (this_ptr->normal).z +
                  fVar5 * (this_ptr->normal).y + fVar4 * (this_ptr->normal).x);
  if (ABS(local_10) == 0.0) {
    local_10 = 1.0;
  }
  local_10 = 1.0 / local_10;
  pCVar2 = this_ptr->vertices[0];
  (this_ptr->normal).x = -(this_ptr->normal).x * local_10;
  (this_ptr->normal).y = -(this_ptr->normal).y * local_10;
  (this_ptr->normal).z = -(this_ptr->normal).z * local_10;
  fVar4 = ABS((this_ptr->normal).x);
  fVar1 = (this_ptr->normal).y;
  this_ptr->plane_distance =
       (-(pCVar2->x * (this_ptr->normal).x) - pCVar2->y * (this_ptr->normal).y) -
       pCVar2->z * (this_ptr->normal).z;
  if ((ABS(fVar1) < fVar4) && (ABS((this_ptr->normal).z) < fVar4)) {
    this_ptr->dominant_axis = 0;
    return;
  }
  fVar1 = ABS((this_ptr->normal).y);
  if ((ABS((this_ptr->normal).x) < fVar1) && (ABS((this_ptr->normal).z) < fVar1)) {
    this_ptr->dominant_axis = 1;
    return;
  }
  this_ptr->dominant_axis = 2;
  return;
}


// Assembly code:
// 004552c0: PUSH EBP
//   Label: core_dcube.cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0
// 004552c1: MOV EBP,ESP
// 004552c3: SUB ESP,0x38
// 004552c6: AND ESP,0xfffffff8
// 004552c9: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004552cc: MOV EAX,dword ptr [EDX + 0x4]
// 004552cf: MOV ECX,dword ptr [EDX]
// 004552d1: FLD float ptr [EAX]
// 004552d3: FLD float ptr [EAX + 0x4]
// 004552d6: FLD float ptr [EAX + 0x8]
// 004552d9: FXCH ST2
// 004552db: FSUB float ptr [ECX]
// 004552dd: FXCH ST2
// 004552df: FSUB float ptr [ECX + 0x8]
// 004552e2: FXCH
// 004552e4: FSUB float ptr [ECX + 0x4]
// 004552e7: MOV ECX,dword ptr [EDX + 0x8]
// 004552ea: FST float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (WRITE)
// 004552ee: FLD float ptr [ECX + 0x8]
// 004552f1: FSUB float ptr [EAX + 0x8]
// 004552f4: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (WRITE)
// 004552f8: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 004552fc: FLD float ptr [ECX + 0x4]
// 004552ff: FSUB float ptr [EAX + 0x4]
// 00455302: FXCH ST3
// 00455304: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 00455308: FMUL ST3
// 0045530a: FLD float ptr [ECX]
// 0045530c: FSUB float ptr [EAX]
// 0045530e: FLD ST0
// 00455310: FMUL ST4
// 00455312: FXCH ST5
// 00455314: FMULP ST4
// 00455316: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0045531a: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 0045531e: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 00455322: FXCH ST4
// 00455324: FSUBP ST3,ST0
// 00455326: FXCH ST3
// 00455328: FSUBP ST4,ST0
// 0045532a: FXCH
// 0045532c: FST float ptr [EDX + 0xc]
// 0045532f: FMUL float ptr [EDX + 0xc]
// 00455332: FXCH ST3
// 00455334: FST float ptr [EDX + 0x10]
// 00455337: FMUL float ptr [EDX + 0x10]
// 0045533a: FXCH ST2
// 0045533c: FSUBP
// 0045533e: FXCH
// 00455340: FADDP ST2,ST0
// 00455342: FST float ptr [EDX + 0x14]
// 00455345: FMUL float ptr [EDX + 0x14]
// 00455348: FADDP
// 0045534a: FSQRT
// 0045534c: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x10] (WRITE)
// 00455350: TEST dword ptr [ESP + 0x30],0x7fffffff
//   XREF to: Stack[-0x10] (READ)
// 00455358: JZ 0x00455402
//   XREF to: 00455402 (CONDITIONAL_JUMP)
// 0045535e: FLD float ptr [EDX + 0xc]
//   Label: LAB_0045535e
// 00455361: FCHS
// 00455363: FLD1
// 00455365: FDIV float ptr [ESP + 0x30]
//   XREF to: Stack[-0x10] (READ)
// 00455369: FXCH
// 0045536b: FMUL ST1
// 0045536d: FLD float ptr [EDX + 0x10]
// 00455370: FCHS
// 00455372: FMUL ST2
// 00455374: FLD float ptr [EDX + 0x14]
// 00455377: FCHS
// 00455379: FMULP ST3
// 0045537b: MOV EAX,dword ptr [EDX]
// 0045537d: FXCH
// 0045537f: FSTP float ptr [EDX + 0xc]
// 00455382: FSTP float ptr [EDX + 0x10]
// 00455385: FSTP float ptr [EDX + 0x14]
// 00455388: FLD float ptr [EAX + 0x4]
// 0045538b: FMUL float ptr [EDX + 0x10]
// 0045538e: FLD float ptr [EAX]
// 00455390: FMUL float ptr [EDX + 0xc]
// 00455393: FLD float ptr [EDX + 0xc]
// 00455396: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (WRITE)
// 0045539a: FCHS
// 0045539c: FSUBRP
// 0045539e: FLD float ptr [EAX + 0x8]
// 004553a1: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 004553a5: FABS
// 004553a7: FLD float ptr [EDX + 0x10]
// 004553aa: FABS
// 004553ac: FXCH ST2
// 004553ae: FMUL float ptr [EDX + 0x14]
// 004553b1: FSUBP ST3,ST0
// 004553b3: FXCH ST2
// 004553b5: FSTP float ptr [EDX + 0x18]
// 004553b8: FXCH
// 004553ba: FSTP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004553bd: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004553c0: FNSTSW AX
// 004553c2: SAHF
// 004553c3: JNC 0x004553d2
//   XREF to: 004553d2 (CONDITIONAL_JUMP)
// 004553c5: FLD float ptr [EDX + 0x14]
// 004553c8: FABS
// 004553ca: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004553cd: FNSTSW AX
// 004553cf: SAHF
// 004553d0: JC 0x0045540f
//   XREF to: 0045540f (CONDITIONAL_JUMP)
// 004553d2: FLD float ptr [EDX + 0xc]
//   Label: LAB_004553d2
// 004553d5: FABS
// 004553d7: FLD float ptr [EDX + 0x10]
// 004553da: FABS
// 004553dc: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 004553e0: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 004553e4: FNSTSW AX
// 004553e6: SAHF
// 004553e7: JNC 0x0045541a
//   XREF to: 0045541a (CONDITIONAL_JUMP)
// 004553e9: FLD float ptr [EDX + 0x14]
// 004553ec: FABS
// 004553ee: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 004553f2: FNSTSW AX
// 004553f4: SAHF
// 004553f5: JNC 0x0045541a
//   XREF to: 0045541a (CONDITIONAL_JUMP)
// 004553f7: MOV dword ptr [EDX + 0x1c],0x1
// 004553fe: MOV ESP,EBP
// 00455400: POP EBP
// 00455401: RET
// 00455402: MOV dword ptr [ESP + 0x30],0x3f800000
//   Label: LAB_00455402
//   XREF to: Stack[-0x10] (WRITE)
// 0045540a: JMP 0x0045535e
//   XREF to: 0045535e (UNCONDITIONAL_JUMP)
// 0045540f: MOV dword ptr [EDX + 0x1c],0x0
//   Label: LAB_0045540f
// 00455416: MOV ESP,EBP
// 00455418: POP EBP
// 00455419: RET
// 0045541a: MOV dword ptr [EDX + 0x1c],0x2
//   Label: LAB_0045541a
// 00455421: MOV ESP,EBP
// 00455423: POP EBP
// 00455424: RET

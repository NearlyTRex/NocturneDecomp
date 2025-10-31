// Name: core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
// Address: 004547d0
// Address Range: [[004547d0, 0045495e]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_clipEdgeToPlane_FUN_004547d0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, double plane_ny, double plane_nz, double plane_d)
// Cross-references:
//   core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40 (00454c40) at 00454d78 [UNCONDITIONAL_CALL]
//   core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970 (00454970) at 00454aaa [UNCONDITIONAL_CALL]
//   core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070 (00455070) at 004551ae [UNCONDITIONAL_CALL]
//   core_dcube.cpp_clipPolygonAgainstMinX_FUN_00454da0 (00454da0) at 00454e80 [UNCONDITIONAL_CALL]
//   core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0 (00454ad0) at 00454c0e [UNCONDITIONAL_CALL]
//   core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00 (00454f00) at 00454fe2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dcube_cpp_0061a4d2
//   TerminatedCString s_Bad_clip_0061a4e4
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
          (CVector3f *vertex1,CVector3f *vertex2,CVector3f *output_vertex,double plane_nx,
          double plane_ny,double plane_nz,double plane_d)

{
  double dVar1;
  float fVar2;
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  dVar1 = (double)((vertex2->z - vertex1->z) * (float)plane_nz +
                  (vertex2->x - vertex1->x) * (float)plane_nx +
                  (vertex2->y - vertex1->y) * (float)plane_ny);
  local_28 = SUB84(dVar1,0);
  uStack_24 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if ((((ulonglong)dVar1 & 0x7fffffff00000000) == 0) && (local_28 == 0)) {
    g_CurrentFilename = "..\\core\\dcube.cpp";
    g_CurrentLineNumber = 0x6e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad clip!");
  }
  fVar2 = -(vertex1->z * (float)plane_nz +
           vertex1->y * (float)plane_ny + (float)plane_nx * vertex1->x + (float)plane_d) /
          (float)(double)CONCAT44(uStack_20,uStack_24);
  output_vertex->x = (vertex2->x - vertex1->x) * fVar2 + vertex1->x;
  output_vertex->y = (vertex2->y - vertex1->y) * fVar2 + vertex1->y;
  output_vertex->z = (vertex2->z - vertex1->z) * fVar2 + vertex1->z;
  if ((((((ulonglong)plane_nx & 0x7fffffff00000000) != 0) || (plane_nx._0_4_ != 0)) &&
      (((ulonglong)plane_ny & 0x7fffffff00000000) == 0)) &&
     (((plane_ny._0_4_ == 0 && (((ulonglong)plane_nz & 0x7fffffff00000000) == 0)) &&
      (plane_nz._0_4_ == 0)))) {
    output_vertex->x = (float)(-(float10)plane_nx * (float10)plane_d);
  }
  if (((((ulonglong)plane_nx & 0x7fffffff00000000) == 0) && (plane_nx._0_4_ == 0)) &&
     (((((ulonglong)plane_ny & 0x7fffffff00000000) != 0 || (plane_ny._0_4_ != 0)) &&
      ((((ulonglong)plane_nz & 0x7fffffff00000000) == 0 && (plane_nz._0_4_ == 0)))))) {
    output_vertex->y = (float)(-(float10)plane_ny * (float10)plane_d);
  }
  if (((((((ulonglong)plane_nx & 0x7fffffff00000000) == 0) && (plane_nx._0_4_ == 0)) &&
       (((ulonglong)plane_ny & 0x7fffffff00000000) == 0)) && (plane_ny._0_4_ == 0)) &&
     ((((ulonglong)plane_nz & 0x7fffffff00000000) != 0 || (plane_nz._0_4_ != 0)))) {
    output_vertex->z = (float)(-(float10)plane_nz * (float10)plane_d);
    return;
  }
  return;
}


// Assembly code:
// 004547d0: PUSH EBX
//   Label: core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
// 004547d1: PUSH ESI
// 004547d2: PUSH EDI
// 004547d3: PUSH EBP
// 004547d4: MOV EBP,ESP
// 004547d6: SUB ESP,0x18
// 004547d9: AND ESP,0xfffffff8
// 004547dc: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004547df: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004547e2: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004547e5: FLD float ptr [EDI + 0x4]
// 004547e8: FSUB float ptr [EBX + 0x4]
// 004547eb: FMUL double ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004547ee: FLD float ptr [EDI]
// 004547f0: FSUB float ptr [EBX]
// 004547f2: FMUL double ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004547f5: FADDP
// 004547f7: FLD float ptr [EDI + 0x8]
// 004547fa: FSUB float ptr [EBX + 0x8]
// 004547fd: FMUL double ptr [EBP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 00454800: FADDP
// 00454802: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00454805: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 00454809: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0045480c: TEST EDX,0x7fffffff
// 00454812: JNZ 0x0045481c
//   XREF to: 0045481c (CONDITIONAL_JUMP)
// 00454814: TEST ECX,ECX
// 00454816: JZ 0x00454926
//   XREF to: 00454926 (CONDITIONAL_JUMP)
// 0045481c: FLD float ptr [EBX]
//   Label: LAB_0045481c
// 0045481e: FLD double ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00454821: FMUL ST1
// 00454823: FADD double ptr [EBP + 0x38]
//   XREF to: Stack[0x28] (READ)
// 00454826: FLD float ptr [EBX + 0x4]
// 00454829: FMUL double ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0045482c: FADDP
// 0045482e: FLD float ptr [EBX + 0x8]
// 00454831: FMUL double ptr [EBP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 00454834: FADDP
// 00454836: FLD ST0
// 00454838: FCHS
// 0045483a: FDIV double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0045483d: FLD float ptr [EDI]
// 0045483f: FSUB float ptr [EBX]
// 00454841: FXCH
// 00454843: FSTP ST2
// 00454845: FMUL ST1
// 00454847: FADDP ST2,ST0
// 00454849: FXCH
// 0045484b: FSTP float ptr [ESI]
// 0045484d: FLD float ptr [EDI + 0x4]
// 00454850: FSUB float ptr [EBX + 0x4]
// 00454853: FMUL ST1
// 00454855: FADD float ptr [EBX + 0x4]
// 00454858: FSTP float ptr [ESI + 0x4]
// 0045485b: FLD float ptr [EDI + 0x8]
// 0045485e: FSUB float ptr [EBX + 0x8]
// 00454861: FMULP
// 00454863: MOV ECX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00454866: FADD float ptr [EBX + 0x8]
// 00454869: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0045486c: FSTP float ptr [ESI + 0x8]
// 0045486f: TEST ECX,0x7fffffff
// 00454875: JNZ 0x0045487b
//   XREF to: 0045487b (CONDITIONAL_JUMP)
// 00454877: TEST EBX,EBX
// 00454879: JZ 0x004548a9
//   XREF to: 004548a9 (CONDITIONAL_JUMP)
// 0045487b: MOV EDI,dword ptr [EBP + 0x2c]
//   Label: LAB_0045487b
//   XREF to: Stack[0x1c] (READ)
// 0045487e: MOV EAX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 00454881: TEST EDI,0x7fffffff
// 00454887: JNZ 0x004548a9
//   XREF to: 004548a9 (CONDITIONAL_JUMP)
// 00454889: TEST EAX,EAX
// 0045488b: JNZ 0x004548a9
//   XREF to: 004548a9 (CONDITIONAL_JUMP)
// 0045488d: MOV EDX,dword ptr [EBP + 0x34]
//   XREF to: Stack[0x24] (READ)
// 00454890: MOV ECX,dword ptr [EBP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 00454893: TEST EDX,0x7fffffff
// 00454899: JNZ 0x004548a9
//   XREF to: 004548a9 (CONDITIONAL_JUMP)
// 0045489b: TEST ECX,ECX
// 0045489d: JNZ 0x004548a9
//   XREF to: 004548a9 (CONDITIONAL_JUMP)
// 0045489f: FLD double ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004548a2: FCHS
// 004548a4: FMUL double ptr [EBP + 0x38]
//   XREF to: Stack[0x28] (READ)
// 004548a7: FSTP float ptr [ESI]
// 004548a9: MOV EBX,dword ptr [EBP + 0x24]
//   Label: LAB_004548a9
//   XREF to: Stack[0x14] (READ)
// 004548ac: MOV EDI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004548af: TEST EBX,0x7fffffff
// 004548b5: JNZ 0x004548e9
//   XREF to: 004548e9 (CONDITIONAL_JUMP)
// 004548b7: TEST EDI,EDI
// 004548b9: JNZ 0x004548e9
//   XREF to: 004548e9 (CONDITIONAL_JUMP)
// 004548bb: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 004548be: MOV EDX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004548c1: TEST EAX,0x7fffffff
// 004548c6: JNZ 0x004548cc
//   XREF to: 004548cc (CONDITIONAL_JUMP)
// 004548c8: TEST EDX,EDX
// 004548ca: JZ 0x004548e9
//   XREF to: 004548e9 (CONDITIONAL_JUMP)
// 004548cc: MOV ECX,dword ptr [EBP + 0x34]
//   Label: LAB_004548cc
//   XREF to: Stack[0x24] (READ)
// 004548cf: MOV EBX,dword ptr [EBP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 004548d2: TEST ECX,0x7fffffff
// 004548d8: JNZ 0x004548e9
//   XREF to: 004548e9 (CONDITIONAL_JUMP)
// 004548da: TEST EBX,EBX
// 004548dc: JNZ 0x004548e9
//   XREF to: 004548e9 (CONDITIONAL_JUMP)
// 004548de: FLD double ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004548e1: FCHS
// 004548e3: FMUL double ptr [EBP + 0x38]
//   XREF to: Stack[0x28] (READ)
// 004548e6: FSTP float ptr [ESI + 0x4]
// 004548e9: MOV EDI,dword ptr [EBP + 0x24]
//   Label: LAB_004548e9
//   XREF to: Stack[0x14] (READ)
// 004548ec: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004548ef: TEST EDI,0x7fffffff
// 004548f5: JNZ 0x0045491f
//   XREF to: 0045491f (CONDITIONAL_JUMP)
// 004548f7: TEST EAX,EAX
// 004548f9: JNZ 0x0045491f
//   XREF to: 0045491f (CONDITIONAL_JUMP)
// 004548fb: MOV EDX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 004548fe: MOV ECX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 00454901: TEST EDX,0x7fffffff
// 00454907: JNZ 0x0045491f
//   XREF to: 0045491f (CONDITIONAL_JUMP)
// 00454909: TEST ECX,ECX
// 0045490b: JNZ 0x0045491f
//   XREF to: 0045491f (CONDITIONAL_JUMP)
// 0045490d: MOV EBX,dword ptr [EBP + 0x34]
//   XREF to: Stack[0x24] (READ)
// 00454910: MOV EDI,dword ptr [EBP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 00454913: TEST EBX,0x7fffffff
// 00454919: JNZ 0x0045494d
//   XREF to: 0045494d (CONDITIONAL_JUMP)
// 0045491b: TEST EDI,EDI
// 0045491d: JNZ 0x0045494d
//   XREF to: 0045494d (CONDITIONAL_JUMP)
// 0045491f: MOV ESP,EBP
//   Label: LAB_0045491f
// 00454921: POP EBP
// 00454922: POP EDI
// 00454923: POP ESI
// 00454924: POP EBX
// 00454925: RET
// 00454926: MOV EAX,0x61a4d2
//   Label: LAB_00454926
//   XREF to: 0061a4d2 (PARAM)
// 0045492b: MOV EDX,0x6e
// 00454930: PUSH 0x61a4e4
//   XREF to: 0061a4e4 (DATA)
// 00454935: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0045493a: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00454940: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00454945: ADD ESP,0x4
// 00454948: JMP 0x0045481c
//   XREF to: 0045481c (UNCONDITIONAL_JUMP)
// 0045494d: FLD double ptr [EBP + 0x30]
//   Label: LAB_0045494d
//   XREF to: Stack[0x20] (READ)
// 00454950: FCHS
// 00454952: FMUL double ptr [EBP + 0x38]
//   XREF to: Stack[0x28] (READ)
// 00454955: FSTP float ptr [ESI + 0x8]
// 00454958: MOV ESP,EBP
// 0045495a: POP EBP
// 0045495b: POP EDI
// 0045495c: POP ESI
// 0045495d: POP EBX
// 0045495e: RET

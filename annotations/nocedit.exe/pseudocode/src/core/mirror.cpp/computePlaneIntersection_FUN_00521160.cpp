// Name: core_mirror.cpp_computePlaneIntersection_FUN_00521160
// Address: 00521160
// Address Range: [[00521160, 00521273]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_computePlaneIntersection_FUN_00521160(SClipPlane * clip_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * out_intersection)
// Cross-references:
//   core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290 (00521290) at 005213aa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_mirror_cpp_00638975
//   TerminatedCString s_Bad_clip_00638988
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
core_mirror_cpp_computePlaneIntersection_FUN_00521160
          (SClipPlane *clip_plane,CVector3f *vertex_a,CVector3f *vertex_b,
          CVector3f *out_intersection)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  BADSPACEBASE *in_ESP;
  CVector3f local_38 [2];
  float local_18;
  float local_14;
  
  local_18 = (vertex_b->z - vertex_a->z) * (float)clip_plane->C +
             (vertex_b->x - vertex_a->x) * (float)clip_plane->A +
             (vertex_b->y - vertex_a->y) * (float)clip_plane->B;
  if (ABS(local_18) == 0.0) {
    g_CurrentFilename = "..\\core\\mirror.cpp";
    g_CurrentLineNumber = 0x42;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad clip!");
  }
  fVar7 = -((float)clip_plane->C * vertex_a->z +
           (float)clip_plane->B * vertex_a->y +
           (float)clip_plane->A * vertex_a->x + (float)clip_plane->D) / local_14;
  fVar1 = vertex_b->y;
  fVar2 = vertex_a->y;
  fVar3 = vertex_b->z;
  fVar4 = vertex_a->z;
  fVar5 = vertex_a->y;
  fVar6 = vertex_a->z;
  if (out_intersection == local_38) {
    return;
  }
  out_intersection->x = vertex_a->x + (vertex_b->x - vertex_a->x) * fVar7;
  out_intersection->y = fVar5 + (fVar1 - fVar2) * fVar7;
  out_intersection->z = fVar6 + (fVar3 - fVar4) * fVar7;
  return;
}


// Assembly code:
// 00521160: PUSH EBX
//   Label: core_mirror.cpp_computePlaneIntersection_FUN_00521160
// 00521161: PUSH ESI
// 00521162: PUSH EDI
// 00521163: PUSH EBP
// 00521164: SUB ESP,0x2c
// 00521167: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0052116b: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 0052116f: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[0xc] (READ)
// 00521173: MOV EBP,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x10] (READ)
// 00521177: FLD float ptr [EDI + 0x4]
// 0052117a: FSUB float ptr [EBX + 0x4]
// 0052117d: FMUL float ptr [ESI + 0x4]
// 00521180: FLD float ptr [EDI]
// 00521182: FSUB float ptr [EBX]
// 00521184: FMUL float ptr [ESI]
// 00521186: FADDP
// 00521188: FLD float ptr [EDI + 0x8]
// 0052118b: FSUB float ptr [EBX + 0x8]
// 0052118e: FMUL float ptr [ESI + 0x8]
// 00521191: FADDP
// 00521193: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (WRITE)
// 00521197: TEST dword ptr [ESP + 0x24],0x7fffffff
//   XREF to: Stack[-0x18] (READ)
// 0052119f: JZ 0x00521231
//   XREF to: 00521231 (CONDITIONAL_JUMP)
// 005211a5: FLD float ptr [ESI]
//   Label: LAB_005211a5
// 005211a7: FMUL float ptr [EBX]
// 005211a9: FADD float ptr [ESI + 0xc]
// 005211ac: FLD float ptr [ESI + 0x4]
// 005211af: FMUL float ptr [EBX + 0x4]
// 005211b2: FADDP
// 005211b4: FLD float ptr [ESI + 0x8]
// 005211b7: FMUL float ptr [EBX + 0x8]
// 005211ba: FADDP
// 005211bc: FCHS
// 005211be: FDIV float ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 005211c2: FLD float ptr [EDI]
// 005211c4: FSUB float ptr [EBX]
// 005211c6: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (WRITE)
// 005211ca: FLD float ptr [EDI + 0x4]
// 005211cd: FSUB float ptr [EBX + 0x4]
// 005211d0: FXCH ST2
// 005211d2: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (WRITE)
// 005211d6: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005211da: FXCH
// 005211dc: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (WRITE)
// 005211e0: FLD float ptr [EDI + 0x8]
// 005211e3: FSUB float ptr [EBX + 0x8]
// 005211e6: FXCH
// 005211e8: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005211ec: FXCH
// 005211ee: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (WRITE)
// 005211f2: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005211f6: FXCH ST2
// 005211f8: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x30] (WRITE)
// 005211fc: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (WRITE)
// 00521200: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (WRITE)
// 00521204: FLD float ptr [EBX]
// 00521206: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x30] (READ)
// 0052120a: FSTP float ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 0052120d: FLD float ptr [EBX + 0x4]
// 00521210: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 00521214: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x38] (WRITE)
// 00521218: FLD float ptr [EBX + 0x8]
// 0052121b: FADD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (READ)
// 0052121f: MOV EAX,ESP
// 00521221: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (WRITE)
// 00521225: CMP EBP,EAX
// 00521227: JNZ 0x00521258
//   XREF to: 00521258 (CONDITIONAL_JUMP)
// 00521229: ADD ESP,0x2c
// 0052122c: POP EBP
// 0052122d: POP EDI
// 0052122e: POP ESI
// 0052122f: POP EBX
// 00521230: RET
// 00521231: MOV ECX,0x638975
//   Label: LAB_00521231
//   XREF to: 00638975 (PARAM)
// 00521236: MOV EAX,0x42
// 0052123b: PUSH 0x638988
//   XREF to: 00638988 (DATA)
// 00521240: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00521246: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0052124b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00521250: ADD ESP,0x4
// 00521253: JMP 0x005211a5
//   XREF to: 005211a5 (UNCONDITIONAL_JUMP)
// 00521258: MOV EAX,dword ptr [ESP]
//   Label: LAB_00521258
//   XREF to: Stack[-0x3c] (DATA)
// 0052125b: MOV dword ptr [EBP],EAX
// 0052125e: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x38] (READ)
// 00521262: MOV dword ptr [EBP + 0x4],EAX
// 00521265: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 00521269: MOV dword ptr [EBP + 0x8],EAX
// 0052126c: ADD ESP,0x2c
// 0052126f: POP EBP
// 00521270: POP EDI
// 00521271: POP ESI
// 00521272: POP EBX
// 00521273: RET

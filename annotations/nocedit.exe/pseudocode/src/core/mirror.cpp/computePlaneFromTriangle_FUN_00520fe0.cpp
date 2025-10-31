// Name: core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0
// Address: 00520fe0
// Address Range: [[00520fe0, 00521157]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
// Cross-references:
//   core_mirror.cpp_setupMirrorReflection_FUN_005214c0 (005214c0) at 00522240 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
          (SClipPlane *out_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *vertex_c)

{
  float fVar1;
  BADSPACEBASE *in_ESP;
  float local_54;
  float local_50;
  float local_4c;
  SClipPlane local_48;
  float local_38;
  float local_34;
  undefined4 local_30 [3];
  float local_24 [5];
  
  if (&local_48.D != local_30) {
    local_48.D = (int)(vertex_b->x - vertex_a->x);
    local_38 = vertex_b->y - vertex_a->y;
    local_34 = vertex_b->z - vertex_a->z;
  }
  if (&local_54 != local_24) {
    local_54 = vertex_c->x - vertex_b->x;
    local_50 = vertex_c->y - vertex_b->y;
    local_4c = vertex_c->z - vertex_b->z;
  }
  if (out_plane != &local_48) {
    out_plane->A = (int)(local_38 * local_4c - local_34 * local_50);
    out_plane->B = (int)(local_34 * local_54 - (float)local_48.D * local_4c);
    out_plane->C = (int)((float)local_48.D * local_50 - local_38 * local_54);
  }
  fVar1 = SQRT((float)out_plane->C * (float)out_plane->C +
               (float)out_plane->A * (float)out_plane->A + (float)out_plane->B * (float)out_plane->B
              );
  if (fVar1 <= 0.0) {
    out_plane->C = 0;
    out_plane->B = out_plane->C;
    out_plane->A = out_plane->B;
  }
  else {
    fVar1 = 1.0 / fVar1;
    out_plane->A = (int)((float)out_plane->A * fVar1);
    out_plane->B = (int)((float)out_plane->B * fVar1);
    out_plane->C = (int)((float)out_plane->C * fVar1);
  }
  out_plane->D = (int)-((float)out_plane->C * vertex_a->z +
                       (float)out_plane->A * vertex_a->x + (float)out_plane->B * vertex_a->y);
  return;
}


// Assembly code:
// 00520fe0: PUSH EBX
//   Label: core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0
// 00520fe1: PUSH ESI
// 00520fe2: PUSH EDI
// 00520fe3: PUSH EBP
// 00520fe4: MOV EBP,ESP
// 00520fe6: SUB ESP,0x44
// 00520fe9: AND ESP,0xfffffff8
// 00520fec: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00520fef: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00520ff2: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00520ff5: MOV ESI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00520ff8: FLD float ptr [ECX]
// 00520ffa: FSUB float ptr [EBX]
// 00520ffc: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (WRITE)
// 00521000: FLD float ptr [ECX + 0x4]
// 00521003: FSUB float ptr [EBX + 0x4]
// 00521006: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x30] (DATA)
// 0052100a: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (WRITE)
// 0052100e: FLD float ptr [ECX + 0x8]
// 00521011: FSUB float ptr [EBX + 0x8]
// 00521014: LEA EDI,[ESP + 0x1c]
//   XREF to: Stack[-0x3c] (DATA)
// 00521018: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (WRITE)
// 0052101c: CMP EDI,EAX
// 0052101e: JNZ 0x00521127
//   XREF to: 00521127 (CONDITIONAL_JUMP)
// 00521024: FLD float ptr [ESI]
//   Label: LAB_00521024
// 00521026: FSUB float ptr [ECX]
// 00521028: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (WRITE)
// 0052102c: FLD float ptr [ESI + 0x4]
// 0052102f: FSUB float ptr [ECX + 0x4]
// 00521032: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x24] (DATA)
// 00521036: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (WRITE)
// 0052103a: FLD float ptr [ESI + 0x8]
// 0052103d: FSUB float ptr [ECX + 0x8]
// 00521040: LEA ECX,[ESP + 0x4]
//   XREF to: Stack[-0x54] (DATA)
// 00521044: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (WRITE)
// 00521048: CMP ECX,EAX
// 0052104a: JZ 0x00521064
//   XREF to: 00521064 (CONDITIONAL_JUMP)
// 0052104c: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (DATA)
// 00521050: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00521054: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (READ)
// 00521058: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0052105c: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 00521060: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00521064: FLD float ptr [ESP + 0x20]
//   Label: LAB_00521064
//   XREF to: Stack[-0x38] (READ)
// 00521068: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0052106c: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 00521070: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x54] (READ)
// 00521074: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x3c] (READ)
// 00521078: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x50] (READ)
// 0052107c: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 00521080: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x50] (READ)
// 00521084: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x3c] (READ)
// 00521088: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0052108c: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (READ)
// 00521090: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x54] (READ)
// 00521094: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x48] (DATA)
// 00521098: FXCH ST2
// 0052109a: FSUBP ST5,ST0
// 0052109c: FSUBP ST3,ST0
// 0052109e: FSUBP
// 005210a0: FXCH
// 005210a2: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (WRITE)
// 005210a6: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (WRITE)
// 005210aa: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x48] (WRITE)
// 005210ae: CMP EDX,EAX
// 005210b0: JZ 0x005210c6
//   XREF to: 005210c6 (CONDITIONAL_JUMP)
// 005210b2: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x48] (DATA)
// 005210b6: MOV dword ptr [EDX],EAX
// 005210b8: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (READ)
// 005210bc: MOV dword ptr [EDX + 0x4],EAX
// 005210bf: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 005210c3: MOV dword ptr [EDX + 0x8],EAX
// 005210c6: FLD float ptr [EDX + 0x4]
//   Label: LAB_005210c6
// 005210c9: FMUL ST0
// 005210cb: FLD float ptr [EDX]
// 005210cd: FMUL ST0
// 005210cf: FADDP
// 005210d1: FLD float ptr [EDX + 0x8]
// 005210d4: FMUL ST0
// 005210d6: FADDP
// 005210d8: FSQRT
// 005210da: FST float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 005210dd: FLDZ
// 005210df: FCOMPP
// 005210e1: FNSTSW AX
// 005210e3: SAHF
// 005210e4: JNC 0x00521144
//   XREF to: 00521144 (CONDITIONAL_JUMP)
// 005210e6: FLD1
// 005210e8: FLD float ptr [EDX]
// 005210ea: FXCH
// 005210ec: FDIV float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 005210ef: FXCH
// 005210f1: FMUL ST1
// 005210f3: FLD float ptr [EDX + 0x4]
// 005210f6: FMUL ST2
// 005210f8: FLD float ptr [EDX + 0x8]
// 005210fb: FMULP ST3
// 005210fd: FXCH
// 005210ff: FSTP float ptr [EDX]
// 00521101: FSTP float ptr [EDX + 0x4]
// 00521104: FSTP float ptr [EDX + 0x8]
// 00521107: FLD float ptr [EDX + 0x4]
//   Label: LAB_00521107
// 0052110a: FMUL float ptr [EBX + 0x4]
// 0052110d: FLD float ptr [EDX]
// 0052110f: FMUL float ptr [EBX]
// 00521111: FADDP
// 00521113: FLD float ptr [EDX + 0x8]
// 00521116: FMUL float ptr [EBX + 0x8]
// 00521119: FADDP
// 0052111b: FCHS
// 0052111d: FSTP float ptr [EDX + 0xc]
// 00521120: MOV ESP,EBP
// 00521122: POP EBP
// 00521123: POP EDI
// 00521124: POP ESI
// 00521125: POP EBX
// 00521126: RET
// 00521127: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_00521127
//   XREF to: Stack[-0x30] (DATA)
// 0052112b: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0052112f: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (READ)
// 00521133: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00521137: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (READ)
// 0052113b: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0052113f: JMP 0x00521024
//   XREF to: 00521024 (UNCONDITIONAL_JUMP)
// 00521144: MOV dword ptr [EDX + 0x8],0x0
//   Label: LAB_00521144
// 0052114b: MOV EAX,dword ptr [EDX + 0x8]
// 0052114e: MOV dword ptr [EDX + 0x4],EAX
// 00521151: MOV EAX,dword ptr [EDX + 0x4]
// 00521154: MOV dword ptr [EDX],EAX
// 00521156: JMP 0x00521107
//   XREF to: 00521107 (UNCONDITIONAL_JUMP)

// Name: shape_edittool.cpp_CEditorTools_drawCenteredWireframeCube_FUN_004a2510
// Address: 004a2510
// Address Range: [[004a2510, 004a2579]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_drawCenteredWireframeCube_FUN_004a2510(CEditorTools * this_ptr, CVector3f * dimensions, int color_value)
// Globals:
//   float FLOAT_006235ce = 0.5
// Function calls:
//   shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_drawCenteredWireframeCube_FUN_004a2510
          (CEditorTools *this_ptr,CVector3f *dimensions,int color_value)

{
  BADSPACEBASE *in_ESP;
  CVector3f local_1c;
  CVector3f local_10;
  
  local_10.x = dimensions->x * FLOAT_006235ce;
  local_10.y = dimensions->y * FLOAT_006235ce;
  local_10.z = dimensions->z * FLOAT_006235ce;
  local_1c.x = -dimensions->x * FLOAT_006235ce;
  local_1c.y = -dimensions->y * FLOAT_006235ce;
  local_1c.z = -dimensions->z * FLOAT_006235ce;
  shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
            (this_ptr,&local_1c,&local_10,color_value);
  return;
}


// Assembly code:
// 004a2510: PUSH EBP
//   Label: shape_edittool.cpp_CEditorTools_drawCenteredWireframeCube_FUN_004a2510
// 004a2511: MOV EBP,ESP
// 004a2513: SUB ESP,0x24
// 004a2516: MOV EAX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004a2519: FLD float ptr [0x006235ce]
//   XREF to: 006235ce (READ)
// 004a251f: FLD float ptr [EAX]
// 004a2521: FMUL ST1
// 004a2523: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x10] (WRITE)
// 004a2526: FLD float ptr [EAX + 0x4]
// 004a2529: FMUL ST1
// 004a252b: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0xc] (WRITE)
// 004a252e: FLD float ptr [EAX + 0x8]
// 004a2531: FMUL ST1
// 004a2533: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x8] (WRITE)
// 004a2536: FLD float ptr [EAX]
// 004a2538: FCHS
// 004a253a: FST float ptr [EBP + -0x24]
//   XREF to: Stack[-0x28] (WRITE)
// 004a253d: FMUL ST1
// 004a253f: FLD float ptr [EAX + 0x4]
// 004a2542: FCHS
// 004a2544: FST float ptr [EBP + -0x20]
//   XREF to: Stack[-0x24] (WRITE)
// 004a2547: FMUL ST2
// 004a2549: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004a254c: FLD float ptr [EAX + 0x8]
// 004a254f: FCHS
// 004a2551: FST float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x20] (WRITE)
// 004a2554: FMULP ST3
// 004a2556: PUSH EDX
// 004a2557: LEA EDX,[EBP + -0xc]
//   XREF to: Stack[-0x10] (DATA)
// 004a255a: MOV ECX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a255d: PUSH EDX
// 004a255e: LEA EAX,[EBP + -0x18]
//   XREF to: Stack[-0x1c] (DATA)
// 004a2561: FXCH
// 004a2563: FSTP float ptr [EBP + -0x18]
//   XREF to: Stack[-0x1c] (WRITE)
// 004a2566: PUSH EAX
// 004a2567: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x18] (WRITE)
// 004a256a: PUSH ECX
// 004a256b: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (WRITE)
// 004a256e: CALL shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
//   XREF to: 004a2050 (UNCONDITIONAL_CALL)
// 004a2573: ADD ESP,0x10
// 004a2576: MOV ESP,EBP
// 004a2578: POP EBP
// 004a2579: RET

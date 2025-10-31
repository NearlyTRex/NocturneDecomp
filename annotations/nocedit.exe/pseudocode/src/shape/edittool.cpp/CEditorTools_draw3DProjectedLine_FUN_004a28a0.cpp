// Name: shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
// Address: 004a28a0
// Address Range: [[004a28a0, 004a2912]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0(CEditorTools * this_ptr, CQuaternion4f * world_point, int line_length)
// Cross-references:
//   core_door.cpp_CDoor_renderOpaque_FUN_004807d0 (004807d0) at 00480946 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d520 (0051d520) at 0051d65e [UNCONDITIONAL_CALL]
// Globals:
//   float g_WorldToScreenScale2 = 256
// Function calls:
//   shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004a2660
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
          (CEditorTools *this_ptr,CQuaternion4f *world_point,int line_length)

{
  BADSPACEBASE *in_ESP;
  int in_stack_00000010;
  uint local_2c;
  int iStack_28;
  CVector3i local_10;
  
  local_10.x = (int)ROUND(world_point->w * g_WorldToScreenScale2);
  local_10.y = (int)ROUND(world_point->x * g_WorldToScreenScale2);
  local_10.z = (int)ROUND(world_point->y * g_WorldToScreenScale2);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)&stack0xffffffc0,&local_10);
  if ((local_2c & 0x80000000) != 0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_004a2660
            ((CEditorTools *)world_point,(int)local_2c >> 0x10,iStack_28 >> 0x10,in_stack_00000010);
  return;
}


// Assembly code:
// 004a28a0: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
// 004a28a1: SUB ESP,0x3c
// 004a28a4: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 004a28a8: LEA EBX,[ESP + 0x30]
//   XREF to: Stack[-0x10] (DATA)
// 004a28ac: FLD float ptr [EAX]
// 004a28ae: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a28b4: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x10] (DATA)
// 004a28b6: FLD float ptr [EAX + 0x4]
// 004a28b9: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a28bf: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xc] (WRITE)
// 004a28c2: FLD float ptr [EAX + 0x8]
// 004a28c5: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a28cb: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x8] (WRITE)
// 004a28ce: LEA EBX,[ESP + 0x30]
//   XREF to: Stack[-0x10] (DATA)
// 004a28d2: PUSH EBX
// 004a28d3: LEA EBX,[ESP + 0x4]
//   XREF to: Stack[-0x40] (DATA)
// 004a28d7: PUSH EBX
// 004a28d8: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004a28dd: ADD ESP,0x8
// 004a28e0: TEST byte ptr [ESP + 0x13],0x80
//   XREF to: Stack[-0x2d] (READ)
// 004a28e5: JZ 0x004a28ec
//   XREF to: 004a28ec (CONDITIONAL_JUMP)
// 004a28e7: ADD ESP,0x3c
// 004a28ea: POP EBX
// 004a28eb: RET
// 004a28ec: MOV EDX,dword ptr [ESP + 0x4c]
//   Label: LAB_004a28ec
//   XREF to: Stack[0xc] (READ)
// 004a28f0: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 004a28f4: PUSH EDX
// 004a28f5: SAR EBX,0x10
// 004a28f8: PUSH EBX
// 004a28f9: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 004a28fd: SAR EBX,0x10
// 004a2900: PUSH EBX
// 004a2901: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 004a2905: PUSH ECX
// 004a2906: CALL shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004a2660
//   XREF to: 004a2660 (UNCONDITIONAL_CALL)
// 004a290b: ADD ESP,0x10
// 004a290e: ADD ESP,0x3c
// 004a2911: POP EBX
// 004a2912: RET

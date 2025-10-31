// Name: shape_design.c_polygonMergerSelectAndProcess_FUN_00465160
// Address: 00465160
// Address Range: [[00465160, 004651aa]]
// Convention: __cdecl
// Signature: void shape_design.c_polygonMergerSelectAndProcess_FUN_00465160(int polygon_index, float tolerance)
// Cross-references:
//   shape_design.c_polygonToolModeManager_FUN_00464c90 (00464c90) at 00464ea8 [UNCONDITIONAL_CALL]
// Globals:
//   int g_SecondaryPolygonIndex
// Function calls:
//   shape_design.c_mergePolygonsWithValidation_FUN_00465b40

#include "nocturne.h"

void __cdecl
shape_design_c_polygonMergerSelectAndProcess_FUN_00465160(int polygon_index,float tolerance)

{
  if (g_SecondaryPolygonIndex == -1) {
    g_SecondaryPolygonIndex = polygon_index;
  }
  else {
    shape_design_c_mergePolygonsWithValidation_FUN_00465b40
              (g_SecondaryPolygonIndex,polygon_index,tolerance,0);
    g_SecondaryPolygonIndex = -1;
  }
  return;
}


// Assembly code:
// 00465160: PUSH EBX
//   Label: shape_design.c_polygonMergerSelectAndProcess_FUN_00465160
// 00465161: PUSH ESI
// 00465162: PUSH EDI
// 00465163: PUSH EBP
// 00465164: MOV EBP,ESP
// 00465166: SUB ESP,0x0
// 0046516c: CMP dword ptr [0x01e528bc],-0x1
//   XREF to: 01e528bc (READ)
// 00465173: JNZ 0x0046517f
//   XREF to: 0046517f (CONDITIONAL_JUMP)
// 00465175: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00465178: MOV [0x01e528bc],EAX
//   XREF to: 01e528bc (WRITE)
// 0046517d: JMP 0x004651a6
//   XREF to: 004651a6 (UNCONDITIONAL_JUMP)
// 0046517f: PUSH 0x0
//   Label: LAB_0046517f
// 00465181: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00465184: SUB ESP,0x4
// 00465187: FSTP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0046518a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046518d: PUSH EAX
// 0046518e: PUSH dword ptr [0x01e528bc]
//   XREF to: 01e528bc (READ)
// 00465194: CALL shape_design.c_mergePolygonsWithValidation_FUN_00465b40
//   XREF to: 00465b40 (UNCONDITIONAL_CALL)
// 00465199: ADD ESP,0x10
// 0046519c: MOV dword ptr [0x01e528bc],0xffffffff
//   XREF to: 01e528bc (WRITE)
// 004651a6: POP EBP
//   Label: LAB_004651a6
// 004651a7: POP EDI
// 004651a8: POP ESI
// 004651a9: POP EBX
// 004651aa: RET

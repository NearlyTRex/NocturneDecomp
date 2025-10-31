// Name: shape_design.c_polygonTextureNameComparator_FUN_0045b850
// Address: 0045b850
// Address Range: [[0045b850, 0045b8a2]]
// Convention: __cdecl
// Signature: int shape_design.c_polygonTextureNameComparator_FUN_0045b850(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2)
// Cross-references:
//   shape_design.c_sortPolygonsByTexture_FUN_0045b8b0 (0045b8b0) at 0045b90e [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

int __cdecl
shape_design_c_polygonTextureNameComparator_FUN_0045b850
          (SShapeEditorPolygon *polygon1,SShapeEditorPolygon *polygon2)

{
  int local_14;
  
  if (polygon1->texture_name[0] == '\0') {
    local_14 = 1;
  }
  else if (polygon2->texture_name[0] == '\0') {
    local_14 = -1;
  }
  else {
    local_14 = crt_string_c_stricmp_FUN_005fe7f0(polygon1->texture_name,polygon2->texture_name);
  }
  return local_14;
}


// Assembly code:
// 0045b850: PUSH EBX
//   Label: shape_design.c_polygonTextureNameComparator_FUN_0045b850
// 0045b851: PUSH ESI
// 0045b852: PUSH EDI
// 0045b853: PUSH EBP
// 0045b854: MOV EBP,ESP
// 0045b856: SUB ESP,0x4
// 0045b85c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045b85f: CMP byte ptr [EAX + 0x4],0x0
// 0045b863: JNZ 0x0045b86e
//   XREF to: 0045b86e (CONDITIONAL_JUMP)
// 0045b865: MOV dword ptr [EBP + -0x4],0x1
//   XREF to: Stack[-0x14] (WRITE)
// 0045b86c: JMP 0x0045b899
//   XREF to: 0045b899 (UNCONDITIONAL_JUMP)
// 0045b86e: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0045b86e
//   XREF to: Stack[0x8] (READ)
// 0045b871: CMP byte ptr [EAX + 0x4],0x0
// 0045b875: JNZ 0x0045b880
//   XREF to: 0045b880 (CONDITIONAL_JUMP)
// 0045b877: MOV dword ptr [EBP + -0x4],0xffffffff
//   XREF to: Stack[-0x14] (WRITE)
// 0045b87e: JMP 0x0045b899
//   XREF to: 0045b899 (UNCONDITIONAL_JUMP)
// 0045b880: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0045b880
//   XREF to: Stack[0x8] (READ)
// 0045b883: ADD EAX,0x4
// 0045b886: PUSH EAX
// 0045b887: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045b88a: ADD EAX,0x4
// 0045b88d: PUSH EAX
// 0045b88e: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0045b893: ADD ESP,0x8
// 0045b896: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045b899: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045b899
//   XREF to: Stack[-0x14] (READ)
// 0045b89c: MOV ESP,EBP
// 0045b89e: POP EBP
// 0045b89f: POP EDI
// 0045b8a0: POP ESI
// 0045b8a1: POP EBX
// 0045b8a2: RET

// Name: engine_prim.c_findEdgeInBuffer_FUN_00551f70
// Address: 00551f70
// Address Range: [[00551f70, 00551fa5]]
// Convention: __cdecl
// Signature: SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_00551f70(int y_value, SSoftwareEdge * edge_ptr)
// Cross-references:
//   engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40 (00552a40) at 00552c4b [UNCONDITIONAL_CALL]
//   engine_prim.c_renderPolygonSoftware_FUN_00552510 (00552510) at 00552900 [UNCONDITIONAL_CALL]
// Globals:
//   int g_SoftwareEdgeCount
//   SSoftwareEdge[16] g_SoftwareEdgeBuffer
//   undefined4 DAT_030e5274

#include "nocturne.h"

SSoftwareEdge * __cdecl
engine_prim_c_findEdgeInBuffer_FUN_00551f70(int y_value,SSoftwareEdge *edge_ptr)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = g_SoftwareEdgeBuffer;
  iVar2 = 0;
  if (0 < g_SoftwareEdgeCount) {
    do {
      if ((y_value == pSVar1->y_min) && (pSVar1 != edge_ptr)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_SoftwareEdgeCount);
  }
  return (SSoftwareEdge *)0x0;
}


// Assembly code:
// 00551f70: PUSH EBX
//   Label: engine_prim.c_findEdgeInBuffer_FUN_00551f70
// 00551f71: PUSH ESI
// 00551f72: MOV EBX,dword ptr [0x030e5228]
//   XREF to: 030e5228 (READ)
// 00551f78: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00551f7c: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00551f80: MOV EAX,0x30e522c
//   XREF to: 030e522c (DATA)
// 00551f85: XOR EDX,EDX
// 00551f87: TEST EBX,EBX
// 00551f89: JLE 0x00551f9b
//   XREF to: 00551f9b (CONDITIONAL_JUMP)
// 00551f8b: CMP ECX,dword ptr [EAX]
//   Label: LAB_00551f8b
//   XREF to: 030e522c (READ)
//   XREF to: 030e5274 (READ)
// 00551f8d: JNZ 0x00551f93
//   XREF to: 00551f93 (CONDITIONAL_JUMP)
// 00551f8f: CMP EAX,ESI
// 00551f91: JNZ 0x00551f9d
//   XREF to: 00551f9d (CONDITIONAL_JUMP)
// 00551f93: INC EDX
//   Label: LAB_00551f93
// 00551f94: ADD EAX,0x48
//   XREF to: 030e5274 (DATA)
// 00551f97: CMP EDX,EBX
// 00551f99: JL 0x00551f8b
//   XREF to: 00551f8b (CONDITIONAL_JUMP)
// 00551f9b: XOR EAX,EAX
//   Label: LAB_00551f9b
// 00551f9d: MOV dword ptr [0x030e5228],EBX
//   Label: LAB_00551f9d
//   XREF to: 030e5228 (WRITE)
// 00551fa3: POP ESI
// 00551fa4: POP EBX
// 00551fa5: RET

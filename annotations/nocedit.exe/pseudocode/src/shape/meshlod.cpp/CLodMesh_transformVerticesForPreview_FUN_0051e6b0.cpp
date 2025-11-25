// Name: shape_meshlod.cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0
// Address: 0051e6b0
// Address Range: [[0051e6b0, 0051e76b]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051df93 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 (0051d520) at 0051d677 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0066136c = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0(CLodMesh *this_ptr)

{
  CDemonRenderer *pCVar1;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_stack_0000000c;
  undefined1 local_18 [16];
  float local_8;
  
  iVar2 = 0;
  if (0 < this_ptr->vertex_count) {
    iVar4 = 0;
    iVar3 = 0;
    do {
      shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                (this_ptr,(CVector3f *)(local_18 + 8),
                 (CVector3f *)(this_ptr->vertex_data->lod_workspace + iVar4 + -0x10));
      local_18._0_4_ = (undefined4)ROUND(local_8 * FLOAT_0066136c);
      local_18._4_4_ = (undefined4)ROUND(unaff_EBP * FLOAT_0066136c);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar3),(CVector3i *)local_18);
      pCVar1 = g_CDemonRendererPtr;
      *(undefined4 *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar3) = 0xffff;
      *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->color + iVar3) = 0xffff;
      *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar3) = 0xffff;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x4c4;
      iVar3 = iVar3 + 0x30;
    } while (iVar2 < *in_stack_0000000c);
  }
  return;
}


// Assembly code:
// 0051e6b0: PUSH EBP
//   Label: shape_meshlod.cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0
// 0051e6b1: SUB ESP,0x18
// 0051e6b4: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0051e6b8: MOV EDX,dword ptr [EAX]
// 0051e6ba: XOR EBP,EBP
// 0051e6bc: TEST EDX,EDX
// 0051e6be: JLE 0x0051e767
//   XREF to: 0051e767 (CONDITIONAL_JUMP)
// 0051e6c4: PUSH EDI
// 0051e6c5: PUSH ESI
// 0051e6c6: PUSH EBX
// 0051e6c7: XOR EDI,EDI
// 0051e6c9: XOR ESI,ESI
// 0051e6cb: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_0051e6cb
//   XREF to: Stack[0x4] (READ)
// 0051e6cf: MOV EAX,dword ptr [EAX + 0x4]
// 0051e6d2: ADD EAX,EDI
// 0051e6d4: PUSH EAX
// 0051e6d5: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x10] (DATA)
// 0051e6d9: PUSH EAX
// 0051e6da: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 0051e6de: PUSH ECX
// 0051e6df: LEA EBX,[ESP + 0x18]
//   XREF to: Stack[-0x1c] (DATA)
// 0051e6e3: CALL shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
//   XREF to: 0051b2e0 (UNCONDITIONAL_CALL)
// 0051e6e8: ADD ESP,0xc
// 0051e6eb: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x10] (DATA)
// 0051e6ef: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0051e6f5: FLD float ptr [EAX]
//   XREF to: Stack[-0x10] (DATA)
// 0051e6f7: FMUL float ptr [0x0066136c]
//   XREF to: 0066136c (READ)
// 0051e6fd: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x1c] (DATA)
// 0051e6ff: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 0051e702: FMUL float ptr [0x0066136c]
//   XREF to: 0066136c (READ)
// 0051e708: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x18] (WRITE)
// 0051e70b: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x8] (READ)
// 0051e70e: FMUL float ptr [0x0066136c]
//   XREF to: 0066136c (READ)
// 0051e714: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x14] (WRITE)
// 0051e717: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 0051e71b: PUSH EAX
// 0051e71c: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0051e71e: ADD EAX,ESI
// 0051e720: PUSH EAX
// 0051e721: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0051e726: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0051e72b: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0051e72d: MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff
// 0051e735: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0051e737: MOV dword ptr [EDX + ESI*0x1 + 0x24],0xffff
// 0051e73f: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0051e741: ADD ESP,0x8
// 0051e744: MOV dword ptr [ESI + EAX*0x1 + 0x28],0xffff
// 0051e74c: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0051e750: INC EBP
// 0051e751: ADD EDI,0x4c4
// 0051e757: MOV EBX,dword ptr [EAX]
// 0051e759: ADD ESI,0x30
// 0051e75c: CMP EBP,EBX
// 0051e75e: JL 0x0051e6cb
//   XREF to: 0051e6cb (CONDITIONAL_JUMP)
// 0051e764: POP EBX
// 0051e765: POP ESI
// 0051e766: POP EDI
// 0051e767: ADD ESP,0x18
//   Label: LAB_0051e767
// 0051e76a: POP EBP
// 0051e76b: RET

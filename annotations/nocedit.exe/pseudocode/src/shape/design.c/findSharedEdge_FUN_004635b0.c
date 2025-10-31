// Name: shape_design.c_findSharedEdge_FUN_004635b0
// Address: 004635b0
// Address Range: [[004635b0, 004637c2] [004637d8, 004637fa]]
// Convention: __cdecl
// Signature: int shape_design.c_findSharedEdge_FUN_004635b0(int * edge1_vertices, int * edge2_vertices, int vertex_count, int * shared_edge_type)
// Cross-references:
//   shape_design.c_complexPolygonReduction_FUN_00463b30 (00463b30) at 00463d63 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004637c4 = 004636e8

#include "nocturne.h"

int __cdecl
shape_design_c_findSharedEdge_FUN_004635b0
          (int *edge1_vertices,int *edge2_vertices,int vertex_count,int *shared_edge_type)

{
  if (*shared_edge_type == -1) {
    if ((*edge1_vertices == edge2_vertices[2]) && (edge1_vertices[1] == edge2_vertices[1])) {
      *shared_edge_type = 0;
      return 1;
    }
    if (vertex_count == 3) {
      if ((edge1_vertices[2] == edge2_vertices[1]) && (*edge1_vertices == *edge2_vertices)) {
        *shared_edge_type = 1;
        return 1;
      }
      if ((edge1_vertices[1] == *edge2_vertices) && (edge1_vertices[2] == edge2_vertices[2])) {
        *shared_edge_type = 2;
        return 1;
      }
    }
    else if (vertex_count == 4) {
      if ((edge1_vertices[3] == edge2_vertices[1]) && (*edge1_vertices == *edge2_vertices)) {
        *shared_edge_type = 3;
        return 1;
      }
      if ((edge1_vertices[1] == edge2_vertices[3]) && (edge1_vertices[2] == edge2_vertices[2])) {
        *shared_edge_type = 4;
        return 1;
      }
    }
  }
  else {
    switch(*shared_edge_type) {
    case 0:
      if ((*edge1_vertices == edge2_vertices[2]) && (edge1_vertices[1] == edge2_vertices[1])) {
        return 1;
      }
      break;
    case 1:
      if ((edge1_vertices[2] == edge2_vertices[1]) && (*edge1_vertices == *edge2_vertices)) {
        return 1;
      }
      break;
    case 2:
      if ((edge1_vertices[1] == *edge2_vertices) && (edge1_vertices[2] == edge2_vertices[2])) {
        return 1;
      }
      break;
    case 3:
      if ((edge1_vertices[3] == edge2_vertices[1]) && (*edge1_vertices == *edge2_vertices)) {
        return 1;
      }
      break;
    case 4:
      if ((edge1_vertices[1] == edge2_vertices[3]) && (edge1_vertices[2] == edge2_vertices[2])) {
        return 1;
      }
    }
  }
  return 0;
}


// Assembly code:
// 004635b0: PUSH EBX
//   Label: shape_design.c_findSharedEdge_FUN_004635b0
// 004635b1: PUSH ESI
// 004635b2: PUSH EDI
// 004635b3: PUSH EBP
// 004635b4: MOV EBP,ESP
// 004635b6: SUB ESP,0x8
// 004635bc: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004635bf: CMP dword ptr [EAX],-0x1
// 004635c2: JNZ 0x004636db
//   XREF to: 004636db (CONDITIONAL_JUMP)
// 004635c8: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004635cb: MOV EDX,dword ptr [EAX]
// 004635cd: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004635d0: CMP EDX,dword ptr [EAX + 0x8]
// 004635d3: JNZ 0x004635e3
//   XREF to: 004635e3 (CONDITIONAL_JUMP)
// 004635d5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004635d8: MOV EDX,dword ptr [EAX + 0x4]
// 004635db: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004635de: CMP EDX,dword ptr [EAX + 0x4]
// 004635e1: JZ 0x004635e5
//   XREF to: 004635e5 (CONDITIONAL_JUMP)
// 004635e3: JMP 0x004635fa
//   Label: LAB_004635e3
//   XREF to: 004635fa (UNCONDITIONAL_JUMP)
// 004635e5: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_004635e5
//   XREF to: Stack[0x10] (READ)
// 004635e8: MOV dword ptr [EAX],0x0
// 004635ee: MOV dword ptr [EBP + -0x4],0x1
//   XREF to: Stack[-0x14] (WRITE)
// 004635f5: JMP 0x004637f1
//   XREF to: 004637f1 (UNCONDITIONAL_JUMP)
// 004635fa: CMP dword ptr [EBP + 0x1c],0x3
//   Label: LAB_004635fa
//   XREF to: Stack[0xc] (READ)
// 004635fe: JNZ 0x0046366c
//   XREF to: 0046366c (CONDITIONAL_JUMP)
// 00463604: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00463607: MOV EDX,dword ptr [EAX + 0x8]
// 0046360a: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046360d: CMP EDX,dword ptr [EAX + 0x4]
// 00463610: JNZ 0x0046361e
//   XREF to: 0046361e (CONDITIONAL_JUMP)
// 00463612: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00463615: MOV EDX,dword ptr [EAX]
// 00463617: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046361a: CMP EDX,dword ptr [EAX]
// 0046361c: JZ 0x00463620
//   XREF to: 00463620 (CONDITIONAL_JUMP)
// 0046361e: JMP 0x00463635
//   Label: LAB_0046361e
//   XREF to: 00463635 (UNCONDITIONAL_JUMP)
// 00463620: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_00463620
//   XREF to: Stack[0x10] (READ)
// 00463623: MOV dword ptr [EAX],0x1
// 00463629: MOV dword ptr [EBP + -0x4],0x1
//   XREF to: Stack[-0x14] (WRITE)
// 00463630: JMP 0x004637f1
//   XREF to: 004637f1 (UNCONDITIONAL_JUMP)
// 00463635: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00463635
//   XREF to: Stack[0x4] (READ)
// 00463638: MOV EDX,dword ptr [EAX + 0x4]
// 0046363b: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046363e: CMP EDX,dword ptr [EAX]
// 00463640: JNZ 0x00463650
//   XREF to: 00463650 (CONDITIONAL_JUMP)
// 00463642: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00463645: MOV EDX,dword ptr [EAX + 0x8]
// 00463648: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046364b: CMP EDX,dword ptr [EAX + 0x8]
// 0046364e: JZ 0x00463652
//   XREF to: 00463652 (CONDITIONAL_JUMP)
// 00463650: JMP 0x00463667
//   Label: LAB_00463650
//   XREF to: 00463667 (UNCONDITIONAL_JUMP)
// 00463652: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_00463652
//   XREF to: Stack[0x10] (READ)
// 00463655: MOV dword ptr [EAX],0x2
// 0046365b: MOV dword ptr [EBP + -0x4],0x1
//   XREF to: Stack[-0x14] (WRITE)
// 00463662: JMP 0x004637f1
//   XREF to: 004637f1 (UNCONDITIONAL_JUMP)
// 00463667: JMP 0x004636d6
//   Label: LAB_00463667
//   XREF to: 004636d6 (UNCONDITIONAL_JUMP)
// 0046366c: CMP dword ptr [EBP + 0x1c],0x4
//   Label: LAB_0046366c
//   XREF to: Stack[0xc] (READ)
// 00463670: JNZ 0x004636d6
//   XREF to: 004636d6 (CONDITIONAL_JUMP)
// 00463672: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00463675: MOV EDX,dword ptr [EAX + 0xc]
// 00463678: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046367b: CMP EDX,dword ptr [EAX + 0x4]
// 0046367e: JNZ 0x0046368c
//   XREF to: 0046368c (CONDITIONAL_JUMP)
// 00463680: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00463683: MOV EDX,dword ptr [EAX]
// 00463685: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00463688: CMP EDX,dword ptr [EAX]
// 0046368a: JZ 0x0046368e
//   XREF to: 0046368e (CONDITIONAL_JUMP)
// 0046368c: JMP 0x004636a3
//   Label: LAB_0046368c
//   XREF to: 004636a3 (UNCONDITIONAL_JUMP)
// 0046368e: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_0046368e
//   XREF to: Stack[0x10] (READ)
// 00463691: MOV dword ptr [EAX],0x3
// 00463697: MOV dword ptr [EBP + -0x4],0x1
//   XREF to: Stack[-0x14] (WRITE)
// 0046369e: JMP 0x004637f1
//   XREF to: 004637f1 (UNCONDITIONAL_JUMP)
// 004636a3: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004636a3
//   XREF to: Stack[0x4] (READ)
// 004636a6: MOV EDX,dword ptr [EAX + 0x4]
// 004636a9: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004636ac: CMP EDX,dword ptr [EAX + 0xc]
// 004636af: JNZ 0x004636bf
//   XREF to: 004636bf (CONDITIONAL_JUMP)
// 004636b1: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004636b4: MOV EDX,dword ptr [EAX + 0x8]
// 004636b7: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004636ba: CMP EDX,dword ptr [EAX + 0x8]
// 004636bd: JZ 0x004636c1
//   XREF to: 004636c1 (CONDITIONAL_JUMP)
// 004636bf: JMP 0x004636d6
//   Label: LAB_004636bf
//   XREF to: 004636d6 (UNCONDITIONAL_JUMP)
// 004636c1: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_004636c1
//   XREF to: Stack[0x10] (READ)
// 004636c4: MOV dword ptr [EAX],0x4
// 004636ca: MOV dword ptr [EBP + -0x4],0x1
//   XREF to: Stack[-0x14] (WRITE)
// 004636d1: JMP 0x004637f1
//   XREF to: 004637f1 (UNCONDITIONAL_JUMP)
// 004636d6: JMP 0x004637ea
//   Label: LAB_004636d6
//   XREF to: 004637ea (UNCONDITIONAL_JUMP)
// 004636db: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_004636db
//   XREF to: Stack[0x10] (READ)
// 004636de: MOV EAX,dword ptr [EAX]
// 004636e0: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004636e3: JMP 0x004637d8
//   XREF to: 004637d8 (UNCONDITIONAL_JUMP)
// 004636e8: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_0
//   XREF to: Stack[0x4] (READ)
// 004636eb: MOV EDX,dword ptr [EAX]
// 004636ed: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004636f0: CMP EDX,dword ptr [EAX + 0x8]
// 004636f3: JNZ 0x00463703
//   XREF to: 00463703 (CONDITIONAL_JUMP)
// 004636f5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004636f8: MOV EDX,dword ptr [EAX + 0x4]
// 004636fb: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004636fe: CMP EDX,dword ptr [EAX + 0x4]
// 00463701: JZ 0x00463705
//   XREF to: 00463705 (CONDITIONAL_JUMP)
// 00463703: JMP 0x00463711
//   Label: LAB_00463703
//   XREF to: 00463711 (UNCONDITIONAL_JUMP)
// 00463705: MOV dword ptr [EBP + -0x4],0x1
//   Label: LAB_00463705
//   XREF to: Stack[-0x14] (WRITE)
// 0046370c: JMP 0x004637f1
//   XREF to: 004637f1 (UNCONDITIONAL_JUMP)
// 00463711: JMP 0x004637ea
//   Label: LAB_00463711
//   XREF to: 004637ea (UNCONDITIONAL_JUMP)
// 00463716: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_1
//   XREF to: Stack[0x4] (READ)
// 00463719: MOV EDX,dword ptr [EAX + 0x8]
// 0046371c: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046371f: CMP EDX,dword ptr [EAX + 0x4]
// 00463722: JNZ 0x00463730
//   XREF to: 00463730 (CONDITIONAL_JUMP)
// 00463724: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00463727: MOV EDX,dword ptr [EAX]
// 00463729: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046372c: CMP EDX,dword ptr [EAX]
// 0046372e: JZ 0x00463732
//   XREF to: 00463732 (CONDITIONAL_JUMP)
// 00463730: JMP 0x0046373e
//   Label: LAB_00463730
//   XREF to: 0046373e (UNCONDITIONAL_JUMP)
// 00463732: MOV dword ptr [EBP + -0x4],0x1
//   Label: LAB_00463732
//   XREF to: Stack[-0x14] (WRITE)
// 00463739: JMP 0x004637f1
//   XREF to: 004637f1 (UNCONDITIONAL_JUMP)
// 0046373e: JMP 0x004637ea
//   Label: LAB_0046373e
//   XREF to: 004637ea (UNCONDITIONAL_JUMP)
// 00463743: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_2
//   XREF to: Stack[0x4] (READ)
// 00463746: MOV EDX,dword ptr [EAX + 0x4]
// 00463749: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046374c: CMP EDX,dword ptr [EAX]
// 0046374e: JNZ 0x0046375e
//   XREF to: 0046375e (CONDITIONAL_JUMP)
// 00463750: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00463753: MOV EDX,dword ptr [EAX + 0x8]
// 00463756: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00463759: CMP EDX,dword ptr [EAX + 0x8]
// 0046375c: JZ 0x00463760
//   XREF to: 00463760 (CONDITIONAL_JUMP)
// 0046375e: JMP 0x0046376c
//   Label: LAB_0046375e
//   XREF to: 0046376c (UNCONDITIONAL_JUMP)
// 00463760: MOV dword ptr [EBP + -0x4],0x1
//   Label: LAB_00463760
//   XREF to: Stack[-0x14] (WRITE)
// 00463767: JMP 0x004637f1
//   XREF to: 004637f1 (UNCONDITIONAL_JUMP)
// 0046376c: JMP 0x004637ea
//   Label: LAB_0046376c
//   XREF to: 004637ea (UNCONDITIONAL_JUMP)
// 00463771: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_3
//   XREF to: Stack[0x4] (READ)
// 00463774: MOV EDX,dword ptr [EAX + 0xc]
// 00463777: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046377a: CMP EDX,dword ptr [EAX + 0x4]
// 0046377d: JNZ 0x0046378b
//   XREF to: 0046378b (CONDITIONAL_JUMP)
// 0046377f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00463782: MOV EDX,dword ptr [EAX]
// 00463784: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00463787: CMP EDX,dword ptr [EAX]
// 00463789: JZ 0x0046378d
//   XREF to: 0046378d (CONDITIONAL_JUMP)
// 0046378b: JMP 0x00463796
//   Label: LAB_0046378b
//   XREF to: 00463796 (UNCONDITIONAL_JUMP)
// 0046378d: MOV dword ptr [EBP + -0x4],0x1
//   Label: LAB_0046378d
//   XREF to: Stack[-0x14] (WRITE)
// 00463794: JMP 0x004637f1
//   XREF to: 004637f1 (UNCONDITIONAL_JUMP)
// 00463796: JMP 0x004637ea
//   Label: LAB_00463796
//   XREF to: 004637ea (UNCONDITIONAL_JUMP)
// 00463798: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_4
//   XREF to: Stack[0x4] (READ)
// 0046379b: MOV EDX,dword ptr [EAX + 0x4]
// 0046379e: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004637a1: CMP EDX,dword ptr [EAX + 0xc]
// 004637a4: JNZ 0x004637b4
//   XREF to: 004637b4 (CONDITIONAL_JUMP)
// 004637a6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004637a9: MOV EDX,dword ptr [EAX + 0x8]
// 004637ac: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004637af: CMP EDX,dword ptr [EAX + 0x8]
// 004637b2: JZ 0x004637b6
//   XREF to: 004637b6 (CONDITIONAL_JUMP)
// 004637b4: JMP 0x004637bf
//   Label: LAB_004637b4
//   XREF to: 004637bf (UNCONDITIONAL_JUMP)
// 004637b6: MOV dword ptr [EBP + -0x4],0x1
//   Label: LAB_004637b6
//   XREF to: Stack[-0x14] (WRITE)
// 004637bd: JMP 0x004637f1
//   XREF to: 004637f1 (UNCONDITIONAL_JUMP)
// 004637bf: JMP 0x004637ea
//   Label: LAB_004637bf
//   XREF to: 004637ea (UNCONDITIONAL_JUMP)
// 004637c1: JMP 0x004637ea
//   Label: LAB_004637c1
//   XREF to: 004637ea (UNCONDITIONAL_JUMP)
// 004637d8: CMP dword ptr [EBP + -0x8],0x4
//   Label: LAB_004637d8
//   XREF to: Stack[-0x18] (READ)
// 004637dc: JA 0x004637c1
//   XREF to: 004637c1 (CONDITIONAL_JUMP)
// 004637de: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004637e1: SHL EAX,0x2
// 004637e4: JMP dword ptr [EAX + 0x4637c4]
//   Label: switchD
//   XREF to: 004636e8 (COMPUTED_JUMP)
//   XREF to: 00463716 (COMPUTED_JUMP)
//   XREF to: 00463743 (COMPUTED_JUMP)
//   XREF to: 00463771 (COMPUTED_JUMP)
//   XREF to: 00463798 (COMPUTED_JUMP)
//   XREF to: 004637c4 (DATA)
// 004637ea: MOV dword ptr [EBP + -0x4],0x0
//   Label: default
//   XREF to: Stack[-0x14] (WRITE)
// 004637f1: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_004637f1
//   XREF to: Stack[-0x14] (READ)
// 004637f4: MOV ESP,EBP
// 004637f6: POP EBP
// 004637f7: POP EDI
// 004637f8: POP ESI
// 004637f9: POP EBX
// 004637fa: RET

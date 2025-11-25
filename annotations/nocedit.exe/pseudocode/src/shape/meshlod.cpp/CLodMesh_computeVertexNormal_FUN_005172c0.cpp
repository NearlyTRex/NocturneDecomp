// Name: shape_meshlod.cpp_CLodMesh_computeVertexNormal_FUN_005172c0
// Address: 005172c0
// Address Range: [[005172c0, 005173ea]]
// Convention: __cdecl
// Signature: CVector3f * shape_meshlod.cpp_CLodMesh_computeVertexNormal_FUN_005172c0(CLodMesh * this_ptr, CVector3f * out_normal, int vertex_index)

#include "nocturne.h"

CVector3f * __cdecl
shape_meshlod_cpp_CLodMesh_computeVertexNormal_FUN_005172c0
          (CLodMesh *this_ptr,CVector3f *out_normal,int vertex_index)

{
  CLodEdge *pCVar1;
  int iVar2;
  CLodFace *pCVar3;
  float fVar4;
  CLodVert *pCVar5;
  CLodEdge *pCVar6;
  int iVar7;
  CLodVert *local_1c;
  int local_18;
  
  pCVar5 = this_ptr->vertex_data;
  out_normal->x = 0.0;
  out_normal->y = 0.0;
  pCVar5 = pCVar5 + vertex_index;
  out_normal->z = 0.0;
  local_18 = 0;
  local_1c = pCVar5;
  if (0 < pCVar5->adjacent_edge_count) {
    do {
      pCVar1 = this_ptr->edges_ptr + local_1c->adjacent_edge_indices[0];
      iVar7 = 0;
      pCVar6 = pCVar1;
      if (0 < pCVar1->adjacent_tri_count) {
        do {
          iVar2 = pCVar6->adjacent_tri_indices[0];
          pCVar3 = this_ptr->tri_data;
          out_normal->x = pCVar3[iVar2].normal.x + out_normal->x;
          out_normal->y = pCVar3[iVar2].normal.y + out_normal->y;
          iVar7 = iVar7 + 1;
          out_normal->z = pCVar3[iVar2].normal.z + out_normal->z;
          pCVar6 = (CLodEdge *)&pCVar6->vertex_idx_2;
        } while (iVar7 < pCVar1->adjacent_tri_count);
      }
      local_18 = local_18 + 1;
      local_1c = (CLodVert *)&(local_1c->position).y;
    } while (local_18 < pCVar5->adjacent_edge_count);
  }
  fVar4 = SQRT(out_normal->z * out_normal->z +
               out_normal->x * out_normal->x + out_normal->y * out_normal->y);
  if (fVar4 <= 0.0) {
    out_normal->z = 0.0;
    out_normal->y = out_normal->z;
    out_normal->x = out_normal->y;
    return out_normal;
  }
  fVar4 = 1.0 / fVar4;
  out_normal->x = out_normal->x * fVar4;
  out_normal->y = out_normal->y * fVar4;
  out_normal->z = out_normal->z * fVar4;
  return out_normal;
}


// Assembly code:
// 005172c0: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_computeVertexNormal_FUN_005172c0
// 005172c1: PUSH ESI
// 005172c2: PUSH EDI
// 005172c3: PUSH EBP
// 005172c4: MOV EBP,ESP
// 005172c6: SUB ESP,0x14
// 005172c9: AND ESP,0xfffffff8
// 005172cc: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005172cf: IMUL ECX,dword ptr [EBP + 0x1c],0x4c4
//   XREF to: Stack[0xc] (READ)
// 005172d6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005172d9: MOV EAX,dword ptr [EAX + 0x4]
// 005172dc: MOV dword ptr [EDX],0x0
// 005172e2: XOR ESI,ESI
// 005172e4: MOV dword ptr [EDX + 0x4],0x0
// 005172eb: ADD EAX,ECX
// 005172ed: MOV dword ptr [EDX + 0x8],0x0
// 005172f4: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 005172f8: MOV EDI,dword ptr [EAX + 0x3f8]
// 005172fe: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00517302: TEST EDI,EDI
// 00517304: JLE 0x00517386
//   XREF to: 00517386 (CONDITIONAL_JUMP)
// 0051730a: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0051730e: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0051730e
//   XREF to: Stack[-0x1c] (READ)
// 00517312: IMUL EAX,dword ptr [EAX + 0x3fc],0xf0
// 0051731c: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051731f: MOV ECX,dword ptr [ECX + 0x48]
// 00517322: LEA EDI,[ECX + EAX*0x1]
// 00517325: MOV ECX,dword ptr [EDI + 0x24]
// 00517328: XOR EBX,EBX
// 0051732a: TEST ECX,ECX
// 0051732c: JLE 0x00517364
//   XREF to: 00517364 (CONDITIONAL_JUMP)
// 0051732e: MOV ECX,EDI
// 00517330: IMUL EAX,dword ptr [ECX + 0x28],0x8c
//   Label: LAB_00517330
// 00517337: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051733a: MOV ESI,dword ptr [ESI + 0xc]
// 0051733d: FLD float ptr [ESI + EAX*0x1 + 0x44]
// 00517341: FADD float ptr [EDX]
// 00517343: FSTP float ptr [EDX]
// 00517345: FLD float ptr [ESI + EAX*0x1 + 0x48]
// 00517349: FADD float ptr [EDX + 0x4]
// 0051734c: FSTP float ptr [EDX + 0x4]
// 0051734f: FLD float ptr [ESI + EAX*0x1 + 0x4c]
// 00517353: FADD float ptr [EDX + 0x8]
// 00517356: INC EBX
// 00517357: FSTP float ptr [EDX + 0x8]
// 0051735a: MOV ESI,dword ptr [EDI + 0x24]
// 0051735d: ADD ECX,0x4
// 00517360: CMP EBX,ESI
// 00517362: JL 0x00517330
//   XREF to: 00517330 (CONDITIONAL_JUMP)
// 00517364: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_00517364
//   XREF to: Stack[-0x1c] (READ)
// 00517368: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0051736c: ADD EAX,0x4
// 0051736f: INC ECX
// 00517370: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00517374: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00517378: MOV EAX,ECX
// 0051737a: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0051737e: CMP EAX,dword ptr [ECX + 0x3f8]
// 00517384: JL 0x0051730e
//   XREF to: 0051730e (CONDITIONAL_JUMP)
// 00517386: FLD float ptr [EDX + 0x4]
//   Label: LAB_00517386
// 00517389: FMUL ST0
// 0051738b: FLD float ptr [EDX]
// 0051738d: FMUL ST0
// 0051738f: FADDP
// 00517391: FLD float ptr [EDX + 0x8]
// 00517394: FMUL ST0
// 00517396: FADDP
// 00517398: FSQRT
// 0051739a: FST float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0051739d: FLDZ
// 0051739f: FCOMPP
// 005173a1: FNSTSW AX
// 005173a3: SAHF
// 005173a4: JNC 0x005173d0
//   XREF to: 005173d0 (CONDITIONAL_JUMP)
// 005173a6: FLD1
// 005173a8: FLD float ptr [EDX]
// 005173aa: FXCH
// 005173ac: FDIV float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005173af: FXCH
// 005173b1: FMUL ST1
// 005173b3: FLD float ptr [EDX + 0x4]
// 005173b6: FMUL ST2
// 005173b8: FLD float ptr [EDX + 0x8]
// 005173bb: FMULP ST3
// 005173bd: FXCH
// 005173bf: FSTP float ptr [EDX]
// 005173c1: FSTP float ptr [EDX + 0x4]
// 005173c4: FSTP float ptr [EDX + 0x8]
// 005173c7: MOV EAX,EDX
// 005173c9: MOV ESP,EBP
// 005173cb: POP EBP
// 005173cc: POP EDI
// 005173cd: POP ESI
// 005173ce: POP EBX
// 005173cf: RET
// 005173d0: MOV dword ptr [EDX + 0x8],0x0
//   Label: LAB_005173d0
// 005173d7: MOV EAX,dword ptr [EDX + 0x8]
// 005173da: MOV dword ptr [EDX + 0x4],EAX
// 005173dd: MOV EAX,dword ptr [EDX + 0x4]
// 005173e0: MOV dword ptr [EDX],EAX
// 005173e2: MOV EAX,EDX
// 005173e4: MOV ESP,EBP
// 005173e6: POP EBP
// 005173e7: POP EDI
// 005173e8: POP ESI
// 005173e9: POP EBX
// 005173ea: RET

// Name: shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
// Address: 0051a400
// Address Range: [[0051a400, 0051a690]]
// Convention: __cdecl
// Signature: double shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400(CLodMesh * this_ptr, SLodSamplePoint * sample_point, CLodFace * face)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910 (00518910) at 00519408 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300 (00518300) at 00518378 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_processGridCell_FUN_0051a030 (0051a030) at 0051a0eb [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_caseD_3_0051a3e4 = 0051a567
//   void* PTR_caseD_5_0051a3ec = 0051a5d5
//   undefined4 DAT_0051a3f4
//   TerminatedCString s_shape_meshlod_cpp_00637aa5
//   TerminatedCString s_anon_00637aba
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870
//   shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90

#include "nocturne.h"

double __cdecl
shape_meshlod_cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
          (CLodMesh *this_ptr,SLodSamplePoint *sample_point,CLodFace *face)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  CLodVert *pCVar5;
  byte bVar6;
  BADSPACEBASE *in_ESP;
  CLodVert *edge_vertex_1;
  CLodMesh *in_stack_00000004;
  CVector3f local_98;
  CVector3f local_8c;
  undefined1 auStack_7c [68];
  CLodVert *local_38;
  
  pCVar5 = in_stack_00000004->vertex_data;
  edge_vertex_1 = pCVar5 + *(int *)&sample_point->distance_to_triangle;
  local_38 = pCVar5 + *(int *)((int)&sample_point->distance_to_triangle + 4);
  pCVar5 = pCVar5 + (int)sample_point->weight;
  bVar6 = sample_point[4].position.z <
          (float)this_ptr->tri_count * sample_point[3].position.z +
          (float)this_ptr->vertex_count * sample_point[3].position.x +
          (float)this_ptr->vertex_data * sample_point[3].position.y;
  if ((float)sample_point[4].closest_triangle_idx <
      (float)this_ptr->tri_count * *(float *)((int)&sample_point[3].distance_to_triangle + 4) +
      (float)this_ptr->vertex_count * (float)sample_point[3].closest_triangle_idx +
      (float)this_ptr->vertex_data * *(float *)&sample_point[3].distance_to_triangle) {
    bVar6 = bVar6 | 2;
  }
  if (*(float *)&sample_point[4].distance_to_triangle <
      (float)this_ptr->tri_count * sample_point[4].position.y +
      (float)this_ptr->vertex_count * sample_point[3].weight +
      (float)this_ptr->vertex_data * sample_point[4].position.x) {
    bVar6 = bVar6 | 4;
  }
  switch(bVar6) {
  case 0:
    fVar1 = sample_point[2].weight -
            ((float)this_ptr->tri_count * *(float *)((int)&sample_point[2].distance_to_triangle + 4)
            + (float)this_ptr->vertex_count * (float)sample_point[2].closest_triangle_idx +
              (float)this_ptr->vertex_data * *(float *)&sample_point[2].distance_to_triangle);
    return (double)(fVar1 * fVar1);
  case 1:
    pCVar4 = shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90
                       ((CVector3f *)(auStack_7c + 8),(CVector3f *)this_ptr,&edge_vertex_1->position
                        ,&local_38->position);
    fVar1 = (float)this_ptr->vertex_count - pCVar4->x;
    fVar3 = (float)this_ptr->vertex_data - pCVar4->y;
    fVar2 = (float)this_ptr->tri_count - pCVar4->z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  case 2:
    pCVar4 = shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90
                       (&local_8c,(CVector3f *)this_ptr,&local_38->position,&pCVar5->position);
    fVar1 = (float)this_ptr->vertex_count - pCVar4->x;
    fVar3 = (float)this_ptr->vertex_data - pCVar4->y;
    fVar2 = (float)this_ptr->tri_count - pCVar4->z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  case 3:
    fVar1 = (float)this_ptr->vertex_count - (local_38->position).x;
    fVar3 = (float)this_ptr->vertex_data - (local_38->position).y;
    fVar2 = (float)this_ptr->tri_count - (local_38->position).z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  case 4:
    pCVar4 = shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90
                       (&local_98,(CVector3f *)this_ptr,&pCVar5->position,&edge_vertex_1->position);
    fVar1 = (float)this_ptr->vertex_count - pCVar4->x;
    fVar3 = (float)this_ptr->vertex_data - pCVar4->y;
    fVar2 = (float)this_ptr->tri_count - pCVar4->z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  case 5:
    fVar1 = (float)this_ptr->vertex_count - (edge_vertex_1->position).x;
    fVar3 = (float)this_ptr->vertex_data - (edge_vertex_1->position).y;
    fVar2 = (float)this_ptr->tri_count - (edge_vertex_1->position).z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  case 6:
    fVar1 = (float)this_ptr->vertex_count - (pCVar5->position).x;
    fVar3 = (float)this_ptr->vertex_data - (pCVar5->position).y;
    fVar2 = (float)this_ptr->tri_count - (pCVar5->position).z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  default:
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0xec8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("!");
    pCVar4 = shape_meshlod_cpp_CLodMesh_computeFaceCentroid_FUN_00518870
                       (in_stack_00000004,(CVector3f *)auStack_7c,(CLodFace *)sample_point);
    fVar1 = (float)this_ptr->vertex_count - pCVar4->x;
    fVar3 = (float)this_ptr->vertex_data - pCVar4->y;
    fVar2 = (float)this_ptr->tri_count - pCVar4->z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  }
}


// Assembly code:
// 0051a400: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
// 0051a401: PUSH ESI
// 0051a402: PUSH EDI
// 0051a403: PUSH EBP
// 0051a404: MOV EBP,ESP
// 0051a406: SUB ESP,0x90
// 0051a40c: AND ESP,0xfffffff8
// 0051a40f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051a412: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0051a415: IMUL EDI,dword ptr [ESI + 0x10],0x4c4
// 0051a41c: IMUL EAX,dword ptr [ESI + 0x14],0x4c4
// 0051a423: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051a426: MOV ECX,dword ptr [ECX + 0x4]
// 0051a429: ADD EDI,ECX
// 0051a42b: LEA EDX,[ECX + EAX*0x1]
// 0051a42e: MOV dword ptr [ESP + 0x68],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 0051a432: IMUL EAX,dword ptr [ESI + 0x18],0x4c4
// 0051a439: ADD ECX,EAX
// 0051a43b: LEA EAX,[ESI + 0x54]
// 0051a43e: FLD float ptr [EBX + 0x4]
// 0051a441: FMUL float ptr [EAX + 0x4]
// 0051a444: FLD float ptr [EBX]
// 0051a446: FMUL float ptr [EAX]
// 0051a448: FADDP
// 0051a44a: FLD float ptr [EBX + 0x8]
// 0051a44d: FMUL float ptr [EAX + 0x8]
// 0051a450: XOR EDX,EDX
// 0051a452: FADDP
// 0051a454: FCOMP float ptr [ESI + 0x78]
// 0051a457: FNSTSW AX
// 0051a459: SAHF
// 0051a45a: JBE 0x0051a461
//   XREF to: 0051a461 (CONDITIONAL_JUMP)
// 0051a45c: MOV EDX,0x1
// 0051a461: LEA EAX,[ESI + 0x60]
//   Label: LAB_0051a461
// 0051a464: FLD float ptr [EBX + 0x4]
// 0051a467: FMUL float ptr [EAX + 0x4]
// 0051a46a: FLD float ptr [EBX]
// 0051a46c: FMUL float ptr [EAX]
// 0051a46e: FADDP
// 0051a470: FLD float ptr [EBX + 0x8]
// 0051a473: FMUL float ptr [EAX + 0x8]
// 0051a476: FADDP
// 0051a478: FCOMP float ptr [ESI + 0x7c]
// 0051a47b: FNSTSW AX
// 0051a47d: SAHF
// 0051a47e: JBE 0x0051a483
//   XREF to: 0051a483 (CONDITIONAL_JUMP)
// 0051a480: OR DL,0x2
// 0051a483: LEA EAX,[ESI + 0x6c]
//   Label: LAB_0051a483
// 0051a486: FLD float ptr [EBX + 0x4]
// 0051a489: FMUL float ptr [EAX + 0x4]
// 0051a48c: FLD float ptr [EBX]
// 0051a48e: FMUL float ptr [EAX]
// 0051a490: FADDP
// 0051a492: FLD float ptr [EBX + 0x8]
// 0051a495: FMUL float ptr [EAX + 0x8]
// 0051a498: FADDP
// 0051a49a: FCOMP float ptr [ESI + 0x80]
// 0051a4a0: FNSTSW AX
// 0051a4a2: SAHF
// 0051a4a3: JBE 0x0051a4a8
//   XREF to: 0051a4a8 (CONDITIONAL_JUMP)
// 0051a4a5: OR DL,0x4
// 0051a4a8: CMP EDX,0x6
//   Label: LAB_0051a4a8
// 0051a4ab: JA 0x0051a62f
//   XREF to: 0051a62f (CONDITIONAL_JUMP)
// 0051a4b1: JMP dword ptr [EDX*0x4 + 0x51a3d8]
//   Label: switchD
//   XREF to: 0051a4b8 (COMPUTED_JUMP)
//   XREF to: 0051a4e5 (COMPUTED_JUMP)
//   XREF to: 0051a526 (COMPUTED_JUMP)
//   XREF to: 0051a567 (COMPUTED_JUMP)
//   XREF to: 0051a598 (COMPUTED_JUMP)
//   XREF to: 0051a5d5 (COMPUTED_JUMP)
//   XREF to: 0051a602 (COMPUTED_JUMP)
//   XREF to: 0051a3f4 (READ)
//   XREF to: 0051a3e4 (READ)
//   XREF to: 0051a3ec (READ)
// 0051a4b8: LEA EAX,[ESI + 0x44]
//   Label: caseD_0
// 0051a4bb: FLD float ptr [EBX + 0x4]
// 0051a4be: FMUL float ptr [EAX + 0x4]
// 0051a4c1: FLD float ptr [EBX]
// 0051a4c3: FMUL float ptr [EAX]
// 0051a4c5: FADDP
// 0051a4c7: FLD float ptr [EBX + 0x8]
// 0051a4ca: FMUL float ptr [EAX + 0x8]
// 0051a4cd: FADDP
// 0051a4cf: FSUBR float ptr [ESI + 0x50]
// 0051a4d2: FMUL ST0
// 0051a4d4: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0051a4d7: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0051a4da: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x9c] (READ)
// 0051a4de: MOV ESP,EBP
// 0051a4e0: POP EBP
// 0051a4e1: POP EDI
// 0051a4e2: POP ESI
// 0051a4e3: POP EBX
// 0051a4e4: RET
// 0051a4e5: MOV ECX,dword ptr [ESP + 0x68]
//   Label: caseD_1
//   XREF to: Stack[-0x38] (READ)
// 0051a4e9: PUSH ECX
// 0051a4ea: PUSH EDI
// 0051a4eb: PUSH EBX
// 0051a4ec: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x74] (DATA)
// 0051a4f0: PUSH EAX
// 0051a4f1: CALL shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90
//   XREF to: 00514f90 (UNCONDITIONAL_CALL)
// 0051a4f6: FLD float ptr [EBX]
// 0051a4f8: ADD ESP,0x10
// 0051a4fb: FSUB float ptr [EAX]
// 0051a4fd: FMUL ST0
// 0051a4ff: FLD float ptr [EBX + 0x4]
// 0051a502: FSUB float ptr [EAX + 0x4]
// 0051a505: FMUL ST0
// 0051a507: FLD float ptr [EBX + 0x8]
// 0051a50a: FXCH
// 0051a50c: FADDP ST2,ST0
// 0051a50e: FSUB float ptr [EAX + 0x8]
// 0051a511: FMUL ST0
// 0051a513: FADDP
// 0051a515: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0051a518: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0051a51b: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x9c] (READ)
// 0051a51f: MOV ESP,EBP
// 0051a521: POP EBP
// 0051a522: POP EDI
// 0051a523: POP ESI
// 0051a524: POP EBX
// 0051a525: RET
// 0051a526: PUSH ECX
//   Label: caseD_2
// 0051a527: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x38] (READ)
// 0051a52b: PUSH EDX
// 0051a52c: PUSH EBX
// 0051a52d: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x8c] (DATA)
// 0051a531: PUSH EAX
// 0051a532: CALL shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90
//   XREF to: 00514f90 (UNCONDITIONAL_CALL)
// 0051a537: FLD float ptr [EBX]
// 0051a539: ADD ESP,0x10
// 0051a53c: FSUB float ptr [EAX]
// 0051a53e: FMUL ST0
// 0051a540: FLD float ptr [EBX + 0x4]
// 0051a543: FSUB float ptr [EAX + 0x4]
// 0051a546: FMUL ST0
// 0051a548: FLD float ptr [EBX + 0x8]
// 0051a54b: FXCH
// 0051a54d: FADDP ST2,ST0
// 0051a54f: FSUB float ptr [EAX + 0x8]
// 0051a552: FMUL ST0
// 0051a554: FADDP
// 0051a556: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0051a559: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0051a55c: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x9c] (READ)
// 0051a560: MOV ESP,EBP
// 0051a562: POP EBP
// 0051a563: POP EDI
// 0051a564: POP ESI
// 0051a565: POP EBX
// 0051a566: RET
// 0051a567: MOV EAX,dword ptr [ESP + 0x68]
//   Label: caseD_3
//   XREF to: Stack[-0x38] (READ)
// 0051a56b: FLD float ptr [EBX]
// 0051a56d: FSUB float ptr [EAX]
// 0051a56f: FMUL ST0
// 0051a571: FLD float ptr [EBX + 0x4]
// 0051a574: FSUB float ptr [EAX + 0x4]
// 0051a577: FMUL ST0
// 0051a579: FLD float ptr [EBX + 0x8]
// 0051a57c: FXCH
// 0051a57e: FADDP ST2,ST0
// 0051a580: FSUB float ptr [EAX + 0x8]
// 0051a583: FMUL ST0
// 0051a585: FADDP
// 0051a587: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0051a58a: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0051a58d: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x9c] (READ)
// 0051a591: MOV ESP,EBP
// 0051a593: POP EBP
// 0051a594: POP EDI
// 0051a595: POP ESI
// 0051a596: POP EBX
// 0051a597: RET
// 0051a598: PUSH EDI
//   Label: caseD_4
// 0051a599: PUSH ECX
// 0051a59a: PUSH EBX
// 0051a59b: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x98] (DATA)
// 0051a59f: PUSH EAX
// 0051a5a0: CALL shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90
//   XREF to: 00514f90 (UNCONDITIONAL_CALL)
// 0051a5a5: FLD float ptr [EBX]
// 0051a5a7: ADD ESP,0x10
// 0051a5aa: FSUB float ptr [EAX]
// 0051a5ac: FMUL ST0
// 0051a5ae: FLD float ptr [EBX + 0x4]
// 0051a5b1: FSUB float ptr [EAX + 0x4]
// 0051a5b4: FMUL ST0
// 0051a5b6: FLD float ptr [EBX + 0x8]
// 0051a5b9: FXCH
// 0051a5bb: FADDP ST2,ST0
// 0051a5bd: FSUB float ptr [EAX + 0x8]
// 0051a5c0: FMUL ST0
// 0051a5c2: FADDP
// 0051a5c4: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0051a5c7: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0051a5ca: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x9c] (READ)
// 0051a5ce: MOV ESP,EBP
// 0051a5d0: POP EBP
// 0051a5d1: POP EDI
// 0051a5d2: POP ESI
// 0051a5d3: POP EBX
// 0051a5d4: RET
// 0051a5d5: FLD float ptr [EBX]
//   Label: caseD_5
// 0051a5d7: FSUB float ptr [EDI]
// 0051a5d9: FMUL ST0
// 0051a5db: FLD float ptr [EBX + 0x4]
// 0051a5de: FSUB float ptr [EDI + 0x4]
// 0051a5e1: FMUL ST0
// 0051a5e3: FLD float ptr [EBX + 0x8]
// 0051a5e6: FXCH
// 0051a5e8: FADDP ST2,ST0
// 0051a5ea: FSUB float ptr [EDI + 0x8]
// 0051a5ed: FMUL ST0
// 0051a5ef: FADDP
// 0051a5f1: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0051a5f4: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0051a5f7: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x9c] (READ)
// 0051a5fb: MOV ESP,EBP
// 0051a5fd: POP EBP
// 0051a5fe: POP EDI
// 0051a5ff: POP ESI
// 0051a600: POP EBX
// 0051a601: RET
// 0051a602: FLD float ptr [EBX]
//   Label: caseD_6
// 0051a604: FSUB float ptr [ECX]
// 0051a606: FMUL ST0
// 0051a608: FLD float ptr [EBX + 0x4]
// 0051a60b: FSUB float ptr [ECX + 0x4]
// 0051a60e: FMUL ST0
// 0051a610: FLD float ptr [EBX + 0x8]
// 0051a613: FXCH
// 0051a615: FADDP ST2,ST0
// 0051a617: FSUB float ptr [ECX + 0x8]
// 0051a61a: FMUL ST0
// 0051a61c: FADDP
// 0051a61e: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0051a621: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0051a624: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x9c] (READ)
// 0051a628: MOV ESP,EBP
// 0051a62a: POP EBP
// 0051a62b: POP EDI
// 0051a62c: POP ESI
// 0051a62d: POP EBX
// 0051a62e: RET
// 0051a62f: MOV ECX,0x637aa5
//   Label: default
//   XREF to: 00637aa5 (DATA)
// 0051a634: MOV EDI,0xec8
// 0051a639: PUSH 0x637aba
//   XREF to: 00637aba (DATA)
// 0051a63e: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0051a644: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0051a64a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051a64f: ADD ESP,0x4
// 0051a652: PUSH ESI
// 0051a653: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x80] (DATA)
// 0051a657: PUSH EAX
// 0051a658: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051a65b: PUSH EAX
// 0051a65c: CALL shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870
//   XREF to: 00518870 (UNCONDITIONAL_CALL)
// 0051a661: FLD float ptr [EBX]
// 0051a663: ADD ESP,0xc
// 0051a666: FSUB float ptr [EAX]
// 0051a668: FMUL ST0
// 0051a66a: FLD float ptr [EBX + 0x4]
// 0051a66d: FSUB float ptr [EAX + 0x4]
// 0051a670: FMUL ST0
// 0051a672: FLD float ptr [EBX + 0x8]
// 0051a675: FXCH
// 0051a677: FADDP ST2,ST0
// 0051a679: FSUB float ptr [EAX + 0x8]
// 0051a67c: FMUL ST0
// 0051a67e: FADDP
// 0051a680: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0051a683: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0051a686: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x9c] (READ)
// 0051a68a: MOV ESP,EBP
// 0051a68c: POP EBP
// 0051a68d: POP EDI
// 0051a68e: POP ESI
// 0051a68f: POP EBX
// 0051a690: RET

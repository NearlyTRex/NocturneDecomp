// Name: core_mirror.cpp_reflectAndClipPrimitive_FUN_00522310
// Address: 00522310
// Address Range: [[00522310, 0052255c]]
// Convention: __cdecl
// Signature: uint core_mirror.cpp_reflectAndClipPrimitive_FUN_00522310(SMirror * mirror, SMRGLHeaderPrimitive * primitive)
// Cross-references:
//   core_mirror.cpp_clipAndRenderReflectedPrimitive_FUN_00522560 (00522560) at 0052256a [UNCONDITIONAL_CALL]
//   core_mirror.cpp_renderMirroredPrimitive_FUN_005225e0 (005225e0) at 0052263e [UNCONDITIONAL_CALL]
//   core_mirror.cpp_renderReflectedPrimitive_FUN_005225a0 (005225a0) at 005225aa [UNCONDITIONAL_CALL]
// Globals:
//   float g_MirrorProjectionScale = 256
//   float g_MirrorIntToFloat_Coarse = 0.00390625
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   int g_MirrorInputVertexCount
//   CVector3f[32] g_MirrorInputVertices
//   undefined4 DAT_02f3340c
//   undefined4 DAT_02f33410
//   undefined4 DAT_02f33414
//   undefined4 DAT_02f33418
//   undefined4 DAT_02f3341c
//   int g_MirrorOutputVertexCount
//   CVector3f[32] g_MirrorOutputVertices
//   undefined4 DAT_02f33590
//   undefined4 DAT_02f33594
//   undefined4 DAT_02f33598
//   undefined4 DAT_02f3359c
//   undefined4 DAT_02f335a0
// Function calls:
//   core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290
//   engine_matrix.c_projectCachedPoint_FUN_0050cda0

#include "nocturne.h"

uint __cdecl
core_mirror_cpp_reflectAndClipPrimitive_FUN_00522310
          (SMirror *mirror,SMRGLHeaderPrimitive *primitive)

{
  SRenderVertex *pSVar1;
  int *piVar2;
  SMRGLHeaderPrimitive *pSVar3;
  CVector3f *pCVar4;
  int iVar5;
  int iVar6;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  g_MirrorInputVertexCount = (primitive->base).count;
  iVar5 = 0;
  if (0 < (primitive->base).count) {
    pCVar4 = g_MirrorInputVertices;
    pSVar3 = primitive;
    do {
      pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr + pSVar3[1].base.type;
      pCVar4->x = (float)(pSVar1->projected_vertex).transformed_x * g_MirrorIntToFloat_Coarse;
      pCVar4->y = (float)(pSVar1->projected_vertex).transformed_y * g_MirrorIntToFloat_Coarse;
      pCVar4->z = (float)(pSVar1->projected_vertex).transformed_z * g_MirrorIntToFloat_Coarse;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->base).count;
      iVar5 = iVar5 + 1;
      pCVar4 = pCVar4 + 1;
    } while (iVar5 < (primitive->base).count);
  }
  core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290
            (mirror->clip_planes,g_MirrorInputVertices,g_MirrorInputVertexCount,
             g_MirrorOutputVertices,&g_MirrorOutputVertexCount);
  if ((((2 < g_MirrorOutputVertexCount) &&
       (core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290
                  ((SClipPlane *)(primitive + 7),g_MirrorOutputVertices,g_MirrorOutputVertexCount,
                   g_MirrorInputVertices,&g_MirrorInputVertexCount), 2 < g_MirrorInputVertexCount))
      && (core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290
                    ((SClipPlane *)(in_stack_0000000c + 0xb8),g_MirrorInputVertices,
                     g_MirrorInputVertexCount,g_MirrorOutputVertices,&g_MirrorOutputVertexCount),
         2 < g_MirrorOutputVertexCount)) &&
     ((core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290
                 ((SClipPlane *)(in_stack_00000010 + 200),g_MirrorOutputVertices,
                  g_MirrorOutputVertexCount,g_MirrorInputVertices,&g_MirrorInputVertexCount),
      2 < g_MirrorInputVertexCount &&
      (core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290
                 ((SClipPlane *)(in_stack_00000014 + 0xd8),g_MirrorInputVertices,
                  g_MirrorInputVertexCount,g_MirrorOutputVertices,&g_MirrorOutputVertexCount),
      iVar5 = g_MirrorOutputVertexCount, 2 < g_MirrorOutputVertexCount)))) {
    *(int *)(in_stack_00000018 + 0xec) = g_MirrorOutputVertexCount;
    *(undefined4 *)(in_stack_00000018 + 0xf0) = *(undefined4 *)(in_stack_0000001c + 8);
    *(undefined4 *)(in_stack_00000018 + 0xf4) = *(undefined4 *)(in_stack_0000001c + 0xc);
    *(undefined4 *)(in_stack_00000018 + 0xf8) = *(undefined4 *)(in_stack_0000001c + 0x10);
    iVar6 = 0;
    *(undefined4 *)(in_stack_00000018 + 0xfc) = *(undefined4 *)(in_stack_0000001c + 0x14);
    if (0 < iVar5) {
      pCVar4 = g_MirrorOutputVertices;
      iVar5 = 0xea000;
      do {
        piVar2 = (int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                               transformed_x + iVar5);
        *piVar2 = (int)ROUND(pCVar4->x * g_MirrorProjectionScale);
        piVar2[1] = (int)ROUND(pCVar4->y * g_MirrorProjectionScale);
        piVar2[2] = (int)ROUND(pCVar4->z * g_MirrorProjectionScale);
        *(undefined4 *)
         ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x + iVar5) =
             0xffffffff;
        *(int *)(in_stack_00000018 + 0x100) = iVar6 + 0x4e00;
        engine_matrix_c_projectCachedPoint_FUN_0050cda0(iVar6 + 0x4e00);
        pCVar4 = pCVar4 + 1;
        iVar5 = iVar5 + 0x30;
        iVar6 = iVar6 + 1;
        in_stack_00000018 = in_stack_00000018 + 4;
      } while (iVar6 < g_MirrorOutputVertexCount);
    }
    return 1;
  }
  return 0;
}


// Assembly code:
// 00522310: PUSH EBX
//   Label: core_mirror.cpp_reflectAndClipPrimitive_FUN_00522310
// 00522311: PUSH ESI
// 00522312: PUSH EDI
// 00522313: PUSH EBP
// 00522314: SUB ESP,0x4
// 00522317: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0052231b: MOV EAX,dword ptr [EAX + 0x4]
// 0052231e: MOV [0x02f33404],EAX
//   XREF to: 02f33404 (WRITE)
// 00522323: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00522327: MOV EDX,dword ptr [EAX + 0x4]
// 0052232a: XOR EDI,EDI
// 0052232c: TEST EDX,EDX
// 0052232e: JLE 0x00522390
//   XREF to: 00522390 (CONDITIONAL_JUMP)
// 00522330: MOV ESI,0x2f33408
//   XREF to: 02f33408 (DATA)
// 00522335: MOV EBP,EAX
// 00522337: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_00522337
// 0052233a: LEA EAX,[EDX*0x4 + 0x0]
// 00522341: SUB EAX,EDX
// 00522343: MOV EDX,EAX
// 00522345: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0052234a: SHL EDX,0x4
// 0052234d: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0052234f: MOV EBX,ESI
// 00522351: ADD EAX,EDX
// 00522353: FILD dword ptr [EAX]
// 00522355: FMUL float ptr [0x006616e8]
//   XREF to: 006616e8 (READ)
// 0052235b: FSTP float ptr [EBX]
//   XREF to: 02f33408 (WRITE)
//   XREF to: 02f33414 (WRITE)
// 0052235d: FILD dword ptr [EAX + 0x4]
// 00522360: FMUL float ptr [0x006616e8]
//   XREF to: 006616e8 (READ)
// 00522366: FSTP float ptr [EBX + 0x4]
//   XREF to: 02f3340c (WRITE)
//   XREF to: 02f33418 (WRITE)
// 00522369: FILD dword ptr [EAX + 0x8]
// 0052236c: FMUL float ptr [0x006616e8]
//   XREF to: 006616e8 (READ)
// 00522372: FSTP float ptr [EBX + 0x8]
//   XREF to: 02f33410 (WRITE)
//   XREF to: 02f3341c (WRITE)
// 00522375: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00522379: ADD EBP,0x4
// 0052237c: INC EDI
// 0052237d: MOV ECX,dword ptr [EAX + 0x4]
// 00522380: ADD ESI,0xc
// 00522383: CMP EDI,ECX
// 00522385: JL 0x00522337
//   XREF to: 00522337 (CONDITIONAL_JUMP)
// 00522387: LEA EAX,[EAX]
// 0052238d: LEA EDX,[EDX]
// 00522390: PUSH 0x2f33588
//   Label: LAB_00522390
//   XREF to: 02f33588 (DATA)
// 00522395: PUSH 0x2f3358c
//   XREF to: 02f3358c (DATA)
// 0052239a: MOV EBX,dword ptr [0x02f33404]
//   XREF to: 02f33404 (READ)
// 005223a0: PUSH EBX
// 005223a1: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005223a5: PUSH 0x2f33408
//   XREF to: 02f33408 (DATA)
// 005223aa: ADD EAX,0x98
// 005223af: PUSH EAX
// 005223b0: CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290
//   XREF to: 00521290 (UNCONDITIONAL_CALL)
// 005223b5: MOV ESI,dword ptr [0x02f33588]
//   XREF to: 02f33588 (READ)
// 005223bb: ADD ESP,0x14
// 005223be: CMP ESI,0x3
// 005223c1: JGE 0x005223cd
//   XREF to: 005223cd (CONDITIONAL_JUMP)
// 005223c3: XOR EAX,EAX
//   Label: LAB_005223c3
// 005223c5: ADD ESP,0x4
// 005223c8: POP EBP
// 005223c9: POP EDI
// 005223ca: POP ESI
// 005223cb: POP EBX
// 005223cc: RET
// 005223cd: PUSH 0x2f33404
//   Label: LAB_005223cd
//   XREF to: 02f33404 (DATA)
// 005223d2: PUSH 0x2f33408
//   XREF to: 02f33408 (DATA)
// 005223d7: PUSH ESI
// 005223d8: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005223dc: PUSH 0x2f3358c
//   XREF to: 02f3358c (DATA)
// 005223e1: ADD EAX,0xa8
// 005223e6: PUSH EAX
// 005223e7: CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290
//   XREF to: 00521290 (UNCONDITIONAL_CALL)
// 005223ec: MOV EBP,dword ptr [0x02f33404]
//   XREF to: 02f33404 (READ)
// 005223f2: ADD ESP,0x14
// 005223f5: CMP EBP,0x3
// 005223f8: JL 0x005223c3
//   XREF to: 005223c3 (CONDITIONAL_JUMP)
// 005223fa: PUSH 0x2f33588
//   XREF to: 02f33588 (DATA)
// 005223ff: PUSH 0x2f3358c
//   XREF to: 02f3358c (DATA)
// 00522404: PUSH EBP
// 00522405: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00522409: PUSH 0x2f33408
//   XREF to: 02f33408 (DATA)
// 0052240e: ADD EAX,0xb8
// 00522413: PUSH EAX
// 00522414: CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290
//   XREF to: 00521290 (UNCONDITIONAL_CALL)
// 00522419: MOV EDX,dword ptr [0x02f33588]
//   XREF to: 02f33588 (READ)
// 0052241f: ADD ESP,0x14
// 00522422: CMP EDX,0x3
// 00522425: JL 0x005223c3
//   XREF to: 005223c3 (CONDITIONAL_JUMP)
// 00522427: PUSH 0x2f33404
//   XREF to: 02f33404 (DATA)
// 0052242c: PUSH 0x2f33408
//   XREF to: 02f33408 (DATA)
// 00522431: PUSH EDX
// 00522432: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00522436: PUSH 0x2f3358c
//   XREF to: 02f3358c (DATA)
// 0052243b: ADD EAX,0xc8
// 00522440: PUSH EAX
// 00522441: CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290
//   XREF to: 00521290 (UNCONDITIONAL_CALL)
// 00522446: MOV EBX,dword ptr [0x02f33404]
//   XREF to: 02f33404 (READ)
// 0052244c: ADD ESP,0x14
// 0052244f: CMP EBX,0x3
// 00522452: JL 0x005223c3
//   XREF to: 005223c3 (CONDITIONAL_JUMP)
// 00522458: PUSH 0x2f33588
//   XREF to: 02f33588 (DATA)
// 0052245d: PUSH 0x2f3358c
//   XREF to: 02f3358c (DATA)
// 00522462: PUSH EBX
// 00522463: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00522467: PUSH 0x2f33408
//   XREF to: 02f33408 (DATA)
// 0052246c: ADD EAX,0xd8
// 00522471: PUSH EAX
// 00522472: CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290
//   XREF to: 00521290 (UNCONDITIONAL_CALL)
// 00522477: MOV EDI,dword ptr [0x02f33588]
//   XREF to: 02f33588 (READ)
// 0052247d: ADD ESP,0x14
// 00522480: CMP EDI,0x3
// 00522483: JL 0x005223c3
//   XREF to: 005223c3 (CONDITIONAL_JUMP)
// 00522489: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0052248d: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00522491: MOV dword ptr [EDX + 0xec],EDI
// 00522497: MOV EAX,dword ptr [EAX + 0x8]
// 0052249a: MOV dword ptr [EDX + 0xf0],EAX
// 005224a0: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005224a4: MOV EAX,dword ptr [EAX + 0xc]
// 005224a7: MOV dword ptr [EDX + 0xf4],EAX
// 005224ad: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005224b1: MOV EAX,dword ptr [EAX + 0x10]
// 005224b4: MOV dword ptr [EDX + 0xf8],EAX
// 005224ba: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005224be: XOR EBP,EBP
// 005224c0: MOV EAX,dword ptr [EAX + 0x14]
// 005224c3: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x14] (DATA)
// 005224c6: MOV dword ptr [EDX + 0xfc],EAX
// 005224cc: TEST EDI,EDI
// 005224ce: JLE 0x00522550
//   XREF to: 00522550 (CONDITIONAL_JUMP)
// 005224d4: MOV EDI,0x2f3358c
//   XREF to: 02f3358c (DATA)
// 005224d9: MOV EBP,0xea000
// 005224de: MOV ESI,EDX
// 005224e0: MOV EAX,[0x006703ec]
//   Label: LAB_005224e0
//   XREF to: 006703ec (READ)
// 005224e5: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005224e7: MOV EAX,EDI
// 005224e9: ADD EBX,EBP
// 005224eb: FLD float ptr [EAX]
//   XREF to: 02f3358c (READ)
//   XREF to: 02f33598 (READ)
// 005224ed: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 005224f3: FISTP dword ptr [EBX]
// 005224f5: FLD float ptr [EAX + 0x4]
//   XREF to: 02f33590 (READ)
//   XREF to: 02f3359c (READ)
// 005224f8: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 005224fe: FISTP dword ptr [EBX + 0x4]
// 00522501: FLD float ptr [EAX + 0x8]
//   XREF to: 02f33594 (READ)
//   XREF to: 02f335a0 (READ)
// 00522504: FMUL float ptr [0x006616e0]
//   XREF to: 006616e0 (READ)
// 0052250a: FISTP dword ptr [EBX + 0x8]
// 0052250d: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00522512: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00522515: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00522517: ADD ESI,0x4
// 0052251a: ADD EDX,0x4e00
// 00522520: MOV dword ptr [EAX + EBP*0x1 + 0x10],0xffffffff
// 00522528: PUSH EDX
// 00522529: MOV dword ptr [ESI + 0xfc],EDX
// 0052252f: CALL engine_matrix.c_projectCachedPoint_FUN_0050cda0
//   XREF to: 0050cda0 (UNCONDITIONAL_CALL)
// 00522534: ADD ESP,0x4
// 00522537: ADD EDI,0xc
// 0052253a: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0052253d: ADD EBP,0x30
// 00522540: INC EDX
// 00522541: MOV ECX,dword ptr [0x02f33588]
//   XREF to: 02f33588 (READ)
// 00522547: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 0052254a: CMP EDX,ECX
// 0052254c: JL 0x005224e0
//   XREF to: 005224e0 (CONDITIONAL_JUMP)
// 0052254e: MOV EAX,EAX
// 00522550: MOV EAX,0x1
//   Label: LAB_00522550
// 00522555: ADD ESP,0x4
// 00522558: POP EBP
// 00522559: POP EDI
// 0052255a: POP ESI
// 0052255b: POP EBX
// 0052255c: RET

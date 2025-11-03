// Name: core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
// Address: 0040d940
// Address Range: [[0040d940, 0040deba]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor * this_ptr, uint32_t color)
// Cross-references:
//   core_door.cpp_CDoor_renderOpaque_FUN_004807d0 (004807d0) at 004808cc [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8860 (004a8860) at 004a89fb [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a408 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054d720 (0054d720) at 0054d8ca [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleportDest_FUN_005da7d0 (005da7d0) at 005da837 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_FUN_005dae10 (005dae10) at 005dae3c [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_FUN_005db840 (005db840) at 005db864 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWaypoint_FUN_005ebf70 (005ebf70) at 005ebfd2 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fbe20 (005fbe20) at 005fbe4a [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0061445c = 0.2000000
//   float FLOAT_00614460 = 0.8000000
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   int g_ActiveRenderColor
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_actor.cpp_CVector_ctor_FUN_00410340
//   core_actor.cpp_FUN_004103d0
//   core_actor.cpp_FUN_004104d0
//   core_actor.cpp_FUN_004104e0
//   core_actor.cpp_FUN_004104f0
//   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl
core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor *this_ptr,uint32_t color)

{
  float fVar1;
  CDemonRenderer *pCVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  uint corner_index;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  SRenderVertex *pSVar9;
  int *piVar10;
  byte bVar11;
  int in_stack_00000020;
  CBoundingBox3D *in_stack_00000038;
  CBoundingBox3D *in_stack_0000003c;
  CBoundingBox3D *in_stack_0000006c;
  CBoundingBox3D *in_stack_00000070;
  CDemonActor *in_stack_000000b8;
  SRenderVertex *in_stack_fffffe9c;
  SRenderVertex *in_stack_fffffea0;
  float fStack_144;
  SRenderVertex *vertex1;
  SRenderVertex *vertex1_00;
  float fStack_a0;
  float fStack_8c;
  CVector3i CStack_80;
  CVector3f CStack_70;
  float fStack_64;
  float fStack_5c;
  CVector3f CStack_4c;
  float fStack_40;
  CVector3i aCStack_30 [2];
  float fStack_14;
  
  bVar11 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(this_ptr);
  this_ptr = (CDemonActor *)
             (**(code **)(*(int *)(color + 0x154) + 0x14))
                       ((CDemonActor *)color,(CBoundingBox3D *)&stack0xfffffeb8);
  corner_index = 0;
  g_ActiveRenderColor = in_stack_00000020;
  do {
    fStack_144 = 5.955552e-39;
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       ((CBoundingBox3D *)this_ptr,(CVector3f *)&stack0xffffff5c,corner_index ^ 1);
    core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
              ((CBoundingBox3D *)color,(CVector3f *)&stack0xffffff54,corner_index);
    core_actor_cpp_FUN_004104f0();
    core_actor_cpp_FUN_004104e0();
    pSVar9 = (SRenderVertex *)((int)(aCStack_30 + 1) + 4);
    vertex1 = (SRenderVertex *)0x40d9fe;
    core_actor_cpp_FUN_004104d0();
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0x00000000);
    color = (uint32_t)(pCVar3->y * FLOAT_0061445c);
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xffffff50);
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xffffff18);
    pCVar2 = g_CDemonRendererPtr;
    core_actor_cpp_FUN_004103d0();
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar2->vertex_buffer_ptr->projected_vertex,(CVector3i *)&stack0xfffffff8);
    pCVar2 = g_CDemonRendererPtr;
    core_actor_cpp_FUN_004103d0();
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar2->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)&stack0xffffffe8);
    pSVar6 = g_CDemonRendererPtr->vertex_buffer_ptr;
    pSVar8 = pSVar6 + 1;
    piVar10 = (int *)&stack0xfffffecc;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = (pSVar8->projected_vertex).transformed_x;
      pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar11 * -2 + 1) * 4);
      piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
    }
    piVar10 = (int *)&stack0xfffffe9c;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = (pSVar6->projected_vertex).transformed_x;
      pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar11 * -2 + 1) * 4);
      piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe9c,in_stack_fffffea0);
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (in_stack_00000038,(CVector3f *)&fStack_a0,corner_index ^ 2);
    pCVar4 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (in_stack_0000003c,(CVector3f *)&stack0xffffff28,corner_index);
    core_actor_cpp_FUN_004104f0();
    core_actor_cpp_FUN_004104e0();
    pSVar6 = (SRenderVertex *)&stack0xfffffffc;
    vertex1_00 = (SRenderVertex *)0x40dba3;
    core_actor_cpp_FUN_004104d0();
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&fStack_14);
    fVar1 = pCVar3->z * FLOAT_0061445c;
    core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_4c);
    CStack_4c.y = pCVar4->x * FLOAT_00614460;
    CStack_4c.z = pCVar4->y * FLOAT_00614460;
    fStack_40 = pCVar4->z * FLOAT_00614460;
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xffffffe8);
    pCVar2 = g_CDemonRendererPtr;
    fStack_14 = CStack_4c.z + fVar1;
    core_actor_cpp_FUN_004103d0();
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar2->vertex_buffer_ptr->projected_vertex,(CVector3i *)&fStack_a0);
    pCVar2 = g_CDemonRendererPtr;
    core_actor_cpp_FUN_004103d0();
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar2->vertex_buffer_ptr[1].projected_vertex,&CStack_80);
    pSVar8 = g_CDemonRendererPtr->vertex_buffer_ptr;
    pSVar7 = pSVar8 + 1;
    piVar10 = (int *)&stack0xffffff00;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = (pSVar7->projected_vertex).transformed_x;
      pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar11 * -2 + 1) * 4);
      piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
    }
    piVar10 = (int *)&stack0xfffffed0;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = (pSVar8->projected_vertex).transformed_x;
      pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar11 * -2 + 1) * 4);
      piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1,pSVar9);
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (in_stack_0000006c,(CVector3f *)&stack0xfffffff4,corner_index ^ 4);
    core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
              (in_stack_00000070,(CVector3f *)&fStack_14,corner_index);
    core_actor_cpp_FUN_004104f0();
    core_actor_cpp_FUN_004104e0();
    core_actor_cpp_FUN_004104d0();
    core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_70);
    CStack_70.y = pCVar3->x * FLOAT_0061445c;
    CStack_70.z = pCVar3->y * FLOAT_0061445c;
    fStack_64 = pCVar3->z * FLOAT_0061445c;
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xffffff64);
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xfffffff8);
    pCVar2 = g_CDemonRendererPtr;
    this_ptr = (CDemonActor *)(fStack_8c + fStack_5c);
    core_actor_cpp_FUN_004103d0();
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar2->vertex_buffer_ptr->projected_vertex,aCStack_30);
    pCVar2 = g_CDemonRendererPtr;
    core_actor_cpp_FUN_004103d0();
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar2->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)&stack0x0000008c);
    pSVar9 = g_CDemonRendererPtr->vertex_buffer_ptr;
    pSVar8 = pSVar9 + 1;
    piVar10 = (int *)&stack0xffffff34;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = (pSVar8->projected_vertex).transformed_x;
      pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar11 * -2 + 1) * 4);
      piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
    }
    corner_index = corner_index + 1;
    piVar10 = (int *)&stack0xffffff04;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = (pSVar9->projected_vertex).transformed_x;
      pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar11 * -2 + 1) * 4);
      piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_00,pSVar6);
  } while ((int)corner_index < 8);
  fStack_a0 = 5.957353e-39;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_000000b8);
  return;
}


// Assembly code:
// 0040d940: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
// 0040d941: PUSH ESI
// 0040d942: PUSH EDI
// 0040d943: PUSH EBP
// 0040d944: SUB ESP,0x13c
// 0040d94a: MOV EDX,dword ptr [ESP + 0x150]
//   XREF to: Stack[0x4] (READ)
// 0040d951: PUSH EDX
// 0040d952: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 0040d957: ADD ESP,0x4
// 0040d95a: MOV EBX,ESP
// 0040d95c: PUSH EBX
// 0040d95d: MOV ECX,dword ptr [ESP + 0x154]
//   XREF to: Stack[0x4] (READ)
// 0040d964: MOV EAX,dword ptr [ESP + 0x154]
//   XREF to: Stack[0x4] (READ)
// 0040d96b: PUSH ECX
// 0040d96c: MOV EAX,dword ptr [EAX + 0x154]
// 0040d972: CALL dword ptr [EAX + 0x14]
// 0040d975: ADD ESP,0x8
// 0040d978: MOV dword ptr [ESP + 0x138],EAX
// 0040d97f: MOV EAX,dword ptr [ESP + 0x154]
// 0040d986: XOR EBP,EBP
// 0040d988: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 0040d98d: MOV EBX,EBP
//   Label: LAB_0040d98d
// 0040d98f: XOR BL,0x1
// 0040d992: PUSH EBX
// 0040d993: LEA EBX,[ESP + 0x94]
// 0040d99a: PUSH EBX
// 0040d99b: MOV EBX,dword ptr [ESP + 0x140]
// 0040d9a2: PUSH EBX
// 0040d9a3: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 0040d9a8: ADD ESP,0xc
// 0040d9ab: PUSH EBP
// 0040d9ac: LEA EBX,[ESP + 0x88]
// 0040d9b3: PUSH EBX
// 0040d9b4: MOV EDI,dword ptr [ESP + 0x140]
// 0040d9bb: PUSH EDI
// 0040d9bc: MOV ESI,EAX
// 0040d9be: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 0040d9c3: ADD ESP,0xc
// 0040d9c6: PUSH EAX
// 0040d9c7: LEA EDI,[ESP + 0x100]
// 0040d9ce: PUSH EDI
// 0040d9cf: MOV EBX,EAX
// 0040d9d1: CALL core_actor.cpp_FUN_004104f0
//   XREF to: 004104f0 (UNCONDITIONAL_CALL)
// 0040d9d6: ADD ESP,0x8
// 0040d9d9: LEA EDI,[EBX + 0x4]
// 0040d9dc: PUSH EDI
// 0040d9dd: LEA EDI,[ESP + 0x104]
// 0040d9e4: PUSH EDI
// 0040d9e5: CALL core_actor.cpp_FUN_004104e0
//   XREF to: 004104e0 (UNCONDITIONAL_CALL)
// 0040d9ea: ADD ESP,0x8
// 0040d9ed: LEA EDI,[EBX + 0x8]
// 0040d9f0: PUSH EDI
// 0040d9f1: LEA EDI,[ESP + 0x108]
// 0040d9f8: PUSH EDI
// 0040d9f9: CALL core_actor.cpp_FUN_004104d0
//   XREF to: 004104d0 (UNCONDITIONAL_CALL)
// 0040d9fe: ADD ESP,0x8
// 0040da01: LEA EDI,[ESP + 0x120]
// 0040da08: PUSH EDI
// 0040da09: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 0040da0e: FLD float ptr [0x0061445c]
//   XREF to: 0061445c (READ)
// 0040da14: FLD float ptr [ESI]
// 0040da16: FMUL ST1
// 0040da18: ADD ESP,0x4
// 0040da1b: FSTP float ptr [ESP + 0x120]
// 0040da22: FLD float ptr [ESI + 0x4]
// 0040da25: FMUL ST1
// 0040da27: FSTP float ptr [ESP + 0x124]
// 0040da2e: FLD float ptr [ESI + 0x8]
// 0040da31: LEA ESI,[ESP + 0x6c]
// 0040da35: FMULP
// 0040da37: PUSH ESI
// 0040da38: FSTP float ptr [ESP + 0x12c]
// 0040da3f: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 0040da44: FLD float ptr [0x00614460]
//   XREF to: 00614460 (READ)
// 0040da4a: FLD float ptr [EBX]
// 0040da4c: FMUL ST1
// 0040da4e: ADD ESP,0x4
// 0040da51: FSTP float ptr [ESP + 0x6c]
// 0040da55: FLD float ptr [EBX + 0x4]
// 0040da58: FMUL ST1
// 0040da5a: FSTP float ptr [ESP + 0x70]
// 0040da5e: FMUL float ptr [EBX + 0x8]
// 0040da61: FSTP float ptr [ESP + 0x74]
// 0040da65: LEA EBX,[ESP + 0x30]
// 0040da69: PUSH EBX
// 0040da6a: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 0040da6f: LEA EBX,[ESP + 0x10c]
// 0040da76: ADD ESP,0x4
// 0040da79: MOV ESI,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040da7f: FLD float ptr [ESP + 0x6c]
// 0040da83: FLD float ptr [ESP + 0x70]
// 0040da87: FLD float ptr [ESP + 0x74]
// 0040da8b: PUSH EBX
// 0040da8c: LEA EBX,[ESP + 0x100]
// 0040da93: FXCH ST2
// 0040da95: FADD float ptr [ESP + 0x124]
// 0040da9c: FXCH
// 0040da9e: FADD float ptr [ESP + 0x128]
// 0040daa5: FXCH ST2
// 0040daa7: FADD float ptr [ESP + 0x12c]
// 0040daae: FXCH
// 0040dab0: FSTP float ptr [ESP + 0x34]
// 0040dab4: FXCH
// 0040dab6: FSTP float ptr [ESP + 0x38]
// 0040daba: PUSH EBX
// 0040dabb: FSTP float ptr [ESP + 0x40]
// 0040dabf: CALL core_actor.cpp_FUN_004103d0
//   XREF to: 004103d0 (UNCONDITIONAL_CALL)
// 0040dac4: ADD ESP,0x8
// 0040dac7: LEA EBX,[ESP + 0x108]
// 0040dace: PUSH EBX
// 0040dacf: MOV EBX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 0040dad1: PUSH EBX
// 0040dad2: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0040dad7: ADD ESP,0x8
// 0040dada: LEA EBX,[ESP + 0xf0]
// 0040dae1: PUSH EBX
// 0040dae2: LEA EBX,[ESP + 0x34]
// 0040dae6: PUSH EBX
// 0040dae7: MOV ESI,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040daed: CALL core_actor.cpp_FUN_004103d0
//   XREF to: 004103d0 (UNCONDITIONAL_CALL)
// 0040daf2: ADD ESP,0x8
// 0040daf5: LEA EBX,[ESP + 0xf0]
// 0040dafc: PUSH EBX
// 0040dafd: MOV EBX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 0040daff: ADD EBX,0x30
// 0040db02: PUSH EBX
// 0040db03: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0040db08: ADD ESP,0x8
// 0040db0b: MOV EBX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040db11: SUB ESP,0x30
// 0040db14: MOV EBX,dword ptr [EBX]
//   XREF to: 02c6d578 (READ)
// 0040db16: MOV ECX,0xc
// 0040db1b: MOV EDI,ESP
// 0040db1d: LEA ESI,[EBX + 0x30]
// 0040db20: MOVSD.REP ES:EDI,ESI
// 0040db22: SUB ESP,0x30
// 0040db25: MOV ECX,0xc
// 0040db2a: MOV EDI,ESP
// 0040db2c: MOV ESI,EBX
// 0040db2e: MOVSD.REP ES:EDI,ESI
// 0040db30: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 0040db35: MOV EBX,EBP
// 0040db37: ADD ESP,0x60
// 0040db3a: XOR BL,0x2
// 0040db3d: PUSH EBX
// 0040db3e: LEA EBX,[ESP + 0x64]
// 0040db42: PUSH EBX
// 0040db43: MOV EAX,dword ptr [ESP + 0x140]
// 0040db4a: PUSH EAX
// 0040db4b: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 0040db50: ADD ESP,0xc
// 0040db53: PUSH EBP
// 0040db54: LEA EBX,[ESP + 0x28]
// 0040db58: PUSH EBX
// 0040db59: MOV EDX,dword ptr [ESP + 0x140]
// 0040db60: PUSH EDX
// 0040db61: MOV ESI,EAX
// 0040db63: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 0040db68: MOV EBX,EAX
// 0040db6a: ADD ESP,0xc
// 0040db6d: PUSH EAX
// 0040db6e: LEA EDI,[ESP + 0xe8]
// 0040db75: PUSH EDI
// 0040db76: CALL core_actor.cpp_FUN_004104f0
//   XREF to: 004104f0 (UNCONDITIONAL_CALL)
// 0040db7b: ADD ESP,0x8
// 0040db7e: LEA EDI,[EBX + 0x4]
// 0040db81: PUSH EDI
// 0040db82: LEA EDI,[ESP + 0xec]
// 0040db89: PUSH EDI
// 0040db8a: CALL core_actor.cpp_FUN_004104e0
//   XREF to: 004104e0 (UNCONDITIONAL_CALL)
// 0040db8f: ADD ESP,0x8
// 0040db92: LEA EDI,[EBX + 0x8]
// 0040db95: PUSH EDI
// 0040db96: LEA EDI,[ESP + 0xf0]
// 0040db9d: PUSH EDI
// 0040db9e: CALL core_actor.cpp_FUN_004104d0
//   XREF to: 004104d0 (UNCONDITIONAL_CALL)
// 0040dba3: ADD ESP,0x8
// 0040dba6: LEA EDI,[ESP + 0xd8]
// 0040dbad: PUSH EDI
// 0040dbae: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 0040dbb3: FLD float ptr [0x0061445c]
//   XREF to: 0061445c (READ)
// 0040dbb9: FLD float ptr [ESI]
// 0040dbbb: FMUL ST1
// 0040dbbd: ADD ESP,0x4
// 0040dbc0: FSTP float ptr [ESP + 0xd8]
// 0040dbc7: FLD float ptr [ESI + 0x4]
// 0040dbca: FMUL ST1
// 0040dbcc: FSTP float ptr [ESP + 0xdc]
// 0040dbd3: FLD float ptr [ESI + 0x8]
// 0040dbd6: LEA ESI,[ESP + 0x9c]
// 0040dbdd: FMULP
// 0040dbdf: PUSH ESI
// 0040dbe0: FSTP float ptr [ESP + 0xe4]
// 0040dbe7: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 0040dbec: FLD float ptr [0x00614460]
//   XREF to: 00614460 (READ)
// 0040dbf2: FLD float ptr [EBX]
// 0040dbf4: FMUL ST1
// 0040dbf6: ADD ESP,0x4
// 0040dbf9: FSTP float ptr [ESP + 0x9c]
// 0040dc00: FLD float ptr [EBX + 0x4]
// 0040dc03: FMUL ST1
// 0040dc05: FSTP float ptr [ESP + 0xa0]
// 0040dc0c: FLD float ptr [EBX + 0x8]
// 0040dc0f: LEA EBX,[ESP + 0xcc]
// 0040dc16: FMULP
// 0040dc18: PUSH EBX
// 0040dc19: FSTP float ptr [ESP + 0xa8]
// 0040dc20: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 0040dc25: LEA EBX,[ESP + 0x40]
// 0040dc29: ADD ESP,0x4
// 0040dc2c: MOV ESI,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040dc32: FLD float ptr [ESP + 0x9c]
// 0040dc39: FLD float ptr [ESP + 0xa0]
// 0040dc40: FLD float ptr [ESP + 0xa4]
// 0040dc47: PUSH EBX
// 0040dc48: LEA EBX,[ESP + 0xe8]
// 0040dc4f: FXCH ST2
// 0040dc51: FADD float ptr [ESP + 0xdc]
// 0040dc58: FXCH
// 0040dc5a: FADD float ptr [ESP + 0xe0]
// 0040dc61: FXCH ST2
// 0040dc63: FADD float ptr [ESP + 0xe4]
// 0040dc6a: FXCH
// 0040dc6c: FSTP float ptr [ESP + 0xd0]
// 0040dc73: FXCH
// 0040dc75: FSTP float ptr [ESP + 0xd4]
// 0040dc7c: PUSH EBX
// 0040dc7d: FSTP float ptr [ESP + 0xdc]
// 0040dc84: CALL core_actor.cpp_FUN_004103d0
//   XREF to: 004103d0 (UNCONDITIONAL_CALL)
// 0040dc89: ADD ESP,0x8
// 0040dc8c: LEA EBX,[ESP + 0x3c]
// 0040dc90: PUSH EBX
// 0040dc91: MOV EBX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 0040dc93: PUSH EBX
// 0040dc94: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0040dc99: ADD ESP,0x8
// 0040dc9c: LEA EBX,[ESP + 0x54]
// 0040dca0: PUSH EBX
// 0040dca1: LEA EBX,[ESP + 0xd0]
// 0040dca8: PUSH EBX
// 0040dca9: MOV ESI,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040dcaf: CALL core_actor.cpp_FUN_004103d0
//   XREF to: 004103d0 (UNCONDITIONAL_CALL)
// 0040dcb4: ADD ESP,0x8
// 0040dcb7: LEA EBX,[ESP + 0x54]
// 0040dcbb: PUSH EBX
// 0040dcbc: MOV EBX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 0040dcbe: ADD EBX,0x30
// 0040dcc1: PUSH EBX
// 0040dcc2: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0040dcc7: ADD ESP,0x8
// 0040dcca: MOV EBX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040dcd0: SUB ESP,0x30
// 0040dcd3: MOV EBX,dword ptr [EBX]
//   XREF to: 02c6d578 (READ)
// 0040dcd5: MOV ECX,0xc
// 0040dcda: MOV EDI,ESP
// 0040dcdc: LEA ESI,[EBX + 0x30]
// 0040dcdf: MOVSD.REP ES:EDI,ESI
// 0040dce1: SUB ESP,0x30
// 0040dce4: MOV ECX,0xc
// 0040dce9: MOV EDI,ESP
// 0040dceb: MOV ESI,EBX
// 0040dced: MOVSD.REP ES:EDI,ESI
// 0040dcef: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 0040dcf4: MOV EBX,EBP
// 0040dcf6: ADD ESP,0x60
// 0040dcf9: XOR BL,0x4
// 0040dcfc: PUSH EBX
// 0040dcfd: LEA EBX,[ESP + 0xc4]
// 0040dd04: PUSH EBX
// 0040dd05: MOV ECX,dword ptr [ESP + 0x140]
// 0040dd0c: PUSH ECX
// 0040dd0d: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 0040dd12: ADD ESP,0xc
// 0040dd15: PUSH EBP
// 0040dd16: LEA EBX,[ESP + 0xb8]
// 0040dd1d: PUSH EBX
// 0040dd1e: MOV EBX,dword ptr [ESP + 0x140]
// 0040dd25: PUSH EBX
// 0040dd26: MOV ESI,EAX
// 0040dd28: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 0040dd2d: MOV EBX,EAX
// 0040dd2f: ADD ESP,0xc
// 0040dd32: PUSH EAX
// 0040dd33: LEA EDI,[ESP + 0x118]
// 0040dd3a: PUSH EDI
// 0040dd3b: CALL core_actor.cpp_FUN_004104f0
//   XREF to: 004104f0 (UNCONDITIONAL_CALL)
// 0040dd40: ADD ESP,0x8
// 0040dd43: LEA EDI,[EBX + 0x4]
// 0040dd46: PUSH EDI
// 0040dd47: LEA EDI,[ESP + 0x11c]
// 0040dd4e: PUSH EDI
// 0040dd4f: CALL core_actor.cpp_FUN_004104e0
//   XREF to: 004104e0 (UNCONDITIONAL_CALL)
// 0040dd54: ADD ESP,0x8
// 0040dd57: LEA EDI,[EBX + 0x8]
// 0040dd5a: PUSH EDI
// 0040dd5b: LEA EDI,[ESP + 0x120]
// 0040dd62: PUSH EDI
// 0040dd63: CALL core_actor.cpp_FUN_004104d0
//   XREF to: 004104d0 (UNCONDITIONAL_CALL)
// 0040dd68: ADD ESP,0x8
// 0040dd6b: LEA EDI,[ESP + 0x48]
// 0040dd6f: PUSH EDI
// 0040dd70: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 0040dd75: FLD float ptr [0x0061445c]
//   XREF to: 0061445c (READ)
// 0040dd7b: FLD float ptr [ESI]
// 0040dd7d: FMUL ST1
// 0040dd7f: ADD ESP,0x4
// 0040dd82: FSTP float ptr [ESP + 0x48]
// 0040dd86: FLD float ptr [ESI + 0x4]
// 0040dd89: FMUL ST1
// 0040dd8b: FSTP float ptr [ESP + 0x4c]
// 0040dd8f: FLD float ptr [ESI + 0x8]
// 0040dd92: LEA ESI,[ESP + 0x18]
// 0040dd96: FMULP
// 0040dd98: PUSH ESI
// 0040dd99: FSTP float ptr [ESP + 0x54]
// 0040dd9d: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 0040dda2: FLD float ptr [0x00614460]
//   XREF to: 00614460 (READ)
// 0040dda8: FLD float ptr [EBX]
// 0040ddaa: FMUL ST1
// 0040ddac: ADD ESP,0x4
// 0040ddaf: FSTP float ptr [ESP + 0x18]
// 0040ddb3: FLD float ptr [EBX + 0x4]
// 0040ddb6: FMUL ST1
// 0040ddb8: FSTP float ptr [ESP + 0x1c]
// 0040ddbc: FMUL float ptr [EBX + 0x8]
// 0040ddbf: LEA EBX,[ESP + 0xa8]
// 0040ddc6: LEA ESI,[ESP + 0x78]
// 0040ddca: PUSH EBX
// 0040ddcb: FSTP float ptr [ESP + 0x24]
// 0040ddcf: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 0040ddd4: ADD ESP,0x4
// 0040ddd7: MOV EBX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 0040dddd: FLD float ptr [ESP + 0x18]
// 0040dde1: FLD float ptr [ESP + 0x1c]
// 0040dde5: FLD float ptr [ESP + 0x20]
// 0040dde9: PUSH ESI
// 0040ddea: LEA ESI,[ESP + 0x118]
// 0040ddf1: FXCH ST2
// 0040ddf3: FADD float ptr [ESP + 0x4c]
// 0040ddf7: FXCH
// 0040ddf9: FADD float ptr [ESP + 0x50]
// 0040ddfd: FXCH ST2
// 0040ddff: FADD float ptr [ESP + 0x54]
// 0040de03: FXCH
// 0040de05: FSTP float ptr [ESP + 0xac]
// 0040de0c: FXCH
// 0040de0e: FSTP float ptr [ESP + 0xb0]
// 0040de15: PUSH ESI
// 0040de16: FSTP float ptr [ESP + 0xb8]
// 0040de1d: CALL core_actor.cpp_FUN_004103d0
//   XREF to: 004103d0 (UNCONDITIONAL_CALL)
// 0040de22: ADD ESP,0x8
// 0040de25: LEA ESI,[ESP + 0x78]
// 0040de29: PUSH ESI
// 0040de2a: MOV EBX,dword ptr [EBX]
//   XREF to: 02c6d578 (READ)
// 0040de2c: PUSH EBX
// 0040de2d: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0040de32: ADD ESP,0x8
// 0040de35: LEA EBX,[ESP + 0x12c]
// 0040de3c: PUSH EBX
// 0040de3d: LEA EBX,[ESP + 0xac]
// 0040de44: PUSH EBX
// 0040de45: MOV ESI,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040de4b: CALL core_actor.cpp_FUN_004103d0
//   XREF to: 004103d0 (UNCONDITIONAL_CALL)
// 0040de50: ADD ESP,0x8
// 0040de53: LEA EBX,[ESP + 0x12c]
// 0040de5a: PUSH EBX
// 0040de5b: MOV EBX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 0040de5d: ADD EBX,0x30
// 0040de60: PUSH EBX
// 0040de61: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0040de66: ADD ESP,0x8
// 0040de69: MOV EBX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040de6f: SUB ESP,0x30
// 0040de72: MOV EBX,dword ptr [EBX]
//   XREF to: 02c6d578 (READ)
// 0040de74: MOV ECX,0xc
// 0040de79: MOV EDI,ESP
// 0040de7b: LEA ESI,[EBX + 0x30]
// 0040de7e: MOVSD.REP ES:EDI,ESI
// 0040de80: SUB ESP,0x30
// 0040de83: MOV ECX,0xc
// 0040de88: MOV EDI,ESP
// 0040de8a: MOV ESI,EBX
// 0040de8c: INC EBP
// 0040de8d: MOVSD.REP ES:EDI,ESI
// 0040de8f: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 0040de94: ADD ESP,0x60
// 0040de97: CMP EBP,0x8
// 0040de9a: JL 0x0040d98d
//   XREF to: 0040d98d (CONDITIONAL_JUMP)
// 0040dea0: MOV ESI,dword ptr [ESP + 0x150]
// 0040dea7: PUSH ESI
// 0040dea8: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0040dead: ADD ESP,0x4
// 0040deb0: ADD ESP,0x13c
// 0040deb6: POP EBP
// 0040deb7: POP EDI
// 0040deb8: POP ESI
// 0040deb9: POP EBX
// 0040deba: RET

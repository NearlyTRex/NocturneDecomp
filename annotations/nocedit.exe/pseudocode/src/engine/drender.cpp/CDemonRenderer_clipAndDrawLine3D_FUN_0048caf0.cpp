// Name: engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
// Address: 0048caf0
// Address Range: [[0048caf0, 0048cdef]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
// Cross-references:
//   core_bugs.cpp_FUN_00425340 (00425340) at 0042546d [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043b7e0 (0043b7e0) at 0043b982 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043d7bf [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 005839c1 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00582930 (00582930) at 00582bec [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_0059b5a0 (0059b5a0) at 0059b607 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e4d80 (005e4d80) at 005e5007 [UNCONDITIONAL_CALL]
// Globals:
//   int g_CurrentPolygonColor
//   int g_ActiveRenderColor
// Function calls:
//   engine_2d.c_drawLine3D_FUN_00401320
//   engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
//   engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
//   engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
//   engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
//   engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60
//   engine_prim.c_replaceWWithDepth_FUN_00552110

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
          (CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar3;
  int *piVar4;
  SRenderVertex *pSVar5;
  byte bVar6;
  int in_stack_ffffff60;
  int in_stack_ffffff64;
  int in_stack_ffffff68;
  uint local_90;
  SRenderVertex local_70;
  SRenderVertex local_40;
  
  bVar6 = 0;
  g_ActiveRenderColor = g_CurrentPolygonColor;
  pSVar3 = this_ptr->vertex_buffer_ptr + vertex_index1;
  pSVar5 = &local_40;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pSVar5->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)&(pSVar3->projected_vertex).transformed_y;
    pSVar5 = (SRenderVertex *)&(pSVar5->projected_vertex).transformed_y;
  }
  pSVar3 = this_ptr->vertex_buffer_ptr + vertex_index2;
  piVar4 = (int *)&stack0xffffff60;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)&(pSVar3->projected_vertex).transformed_y;
    piVar4 = piVar4 + 1;
  }
  if (((local_40.projected_vertex.screen_x & local_90 & 0x80000000) == 0) ||
     ((char)(local_40.projected_vertex.screen_x & local_90) == '\0')) {
    iVar1 = 0;
    do {
      if (in_stack_ffffff68 < in_stack_ffffff60) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00
                  (&local_40,(SRenderVertex *)&stack0xffffff60,&local_70);
        pSVar3 = &local_70;
        piVar4 = (int *)&stack0xffffff60;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        }
      }
      if (-in_stack_ffffff60 != in_stack_ffffff68 && in_stack_ffffff60 <= -in_stack_ffffff68) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00
                  (&local_40,(SRenderVertex *)&stack0xffffff60,&local_70);
        pSVar3 = &local_70;
        piVar4 = (int *)&stack0xffffff60;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        }
      }
      if (in_stack_ffffff68 < in_stack_ffffff64) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00
                  (&local_40,(SRenderVertex *)&stack0xffffff60,&local_70);
        pSVar3 = &local_70;
        piVar4 = (int *)&stack0xffffff60;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        }
      }
      if (-in_stack_ffffff64 != in_stack_ffffff68 && in_stack_ffffff64 <= -in_stack_ffffff68) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00
                  (&local_40,(SRenderVertex *)&stack0xffffff60,&local_70);
        pSVar3 = &local_70;
        piVar4 = (int *)&stack0xffffff60;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        }
      }
      if (local_40.projected_vertex.transformed_z < local_40.projected_vertex.transformed_x) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00
                  ((SRenderVertex *)&stack0xffffff60,&local_40,&local_70);
        pSVar3 = &local_70;
        pSVar5 = &local_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pSVar5->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
        }
      }
      if (-local_40.projected_vertex.transformed_x != local_40.projected_vertex.transformed_z &&
          local_40.projected_vertex.transformed_x <= -local_40.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00
                  ((SRenderVertex *)&stack0xffffff60,&local_40,&local_70);
        pSVar3 = &local_70;
        pSVar5 = &local_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pSVar5->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
        }
      }
      if (local_40.projected_vertex.transformed_z < local_40.projected_vertex.transformed_y) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00
                  ((SRenderVertex *)&stack0xffffff60,&local_40,&local_70);
        pSVar3 = &local_70;
        pSVar5 = &local_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pSVar5->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
        }
      }
      if (-local_40.projected_vertex.transformed_y != local_40.projected_vertex.transformed_z &&
          local_40.projected_vertex.transformed_y <= -local_40.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00
                  ((SRenderVertex *)&stack0xffffff60,&local_40,&local_70);
        pSVar3 = &local_70;
        pSVar5 = &local_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pSVar5->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    if ((((((local_40.projected_vertex.transformed_x <= local_40.projected_vertex.transformed_z) &&
           (-local_40.projected_vertex.transformed_x == local_40.projected_vertex.transformed_z ||
            -local_40.projected_vertex.transformed_z < local_40.projected_vertex.transformed_x)) &&
          (local_40.projected_vertex.transformed_y <= local_40.projected_vertex.transformed_z)) &&
         ((-local_40.projected_vertex.transformed_y == local_40.projected_vertex.transformed_z ||
           -local_40.projected_vertex.transformed_z < local_40.projected_vertex.transformed_y &&
          (in_stack_ffffff60 <= in_stack_ffffff68)))) &&
        ((-in_stack_ffffff60 == in_stack_ffffff68 || -in_stack_ffffff68 < in_stack_ffffff60 &&
         ((in_stack_ffffff64 <= in_stack_ffffff68 &&
          (-in_stack_ffffff64 == in_stack_ffffff68 || -in_stack_ffffff68 < in_stack_ffffff64))))))
       && ((0 < local_40.projected_vertex.transformed_z && (0 < in_stack_ffffff68)))) {
      pSVar3 = &local_40;
      pSVar5 = this_ptr->vertex_buffer_ptr + 0x4e1e;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        (pSVar5->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
        pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
      }
      piVar4 = (int *)&stack0xffffff60;
      pSVar3 = this_ptr->vertex_buffer_ptr + 19999;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        (pSVar3->projected_vertex).transformed_x = *piVar4;
        piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
      }
      engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(0x4e1e);
      engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(19999);
      engine_prim_c_replaceWWithDepth_FUN_00552110(this_ptr->vertex_buffer_ptr + 0x4e1e,2);
      pSVar3 = this_ptr->vertex_buffer_ptr;
      engine_2d_c_drawLine3D_FUN_00401320
                (pSVar3[0x4e1e].projected_vertex.screen_x >> 0x10,
                 pSVar3[0x4e1e].projected_vertex.screen_y >> 0x10,
                 pSVar3[0x4e1e].projected_vertex.transformed_z,
                 pSVar3[19999].projected_vertex.screen_x >> 0x10,
                 pSVar3[19999].projected_vertex.screen_y >> 0x10,
                 pSVar3[19999].projected_vertex.transformed_z);
      return;
    }
  }
  return;
}


// Assembly code:
// 0048caf0: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
// 0048caf1: PUSH ESI
// 0048caf2: PUSH EDI
// 0048caf3: PUSH EBP
// 0048caf4: SUB ESP,0x90
// 0048cafa: MOV EBP,dword ptr [ESP + 0xa4]
//   XREF to: Stack[0x4] (READ)
// 0048cb01: MOV EAX,[0x00772a5c]
//   XREF to: 00772a5c (READ)
// 0048cb06: MOV EBX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[0x8] (READ)
// 0048cb0d: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 0048cb12: LEA EAX,[EBX*0x4 + 0x0]
// 0048cb19: MOV ECX,0xc
// 0048cb1e: SUB EAX,EBX
// 0048cb20: MOV ESI,dword ptr [EBP]
// 0048cb23: SHL EAX,0x4
// 0048cb26: LEA EDI,[ESP + 0x60]
//   XREF to: Stack[-0x40] (DATA)
// 0048cb2a: ADD ESI,EAX
// 0048cb2c: MOV EBX,dword ptr [ESP + 0xac]
//   XREF to: Stack[0xc] (READ)
// 0048cb33: MOVSD.REP ES:EDI,ESI
// 0048cb35: LEA EAX,[EBX*0x4 + 0x0]
// 0048cb3c: MOV ECX,0xc
// 0048cb41: SUB EAX,EBX
// 0048cb43: MOV ESI,dword ptr [EBP]
// 0048cb46: SHL EAX,0x4
// 0048cb49: MOV EDI,ESP
// 0048cb4b: ADD ESI,EAX
// 0048cb4d: MOVSD.REP ES:EDI,ESI
// 0048cb4f: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x30] (READ)
// 0048cb53: AND EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x90] (READ)
// 0048cb57: TEST EAX,0x80000000
// 0048cb5c: JNZ 0x0048cd4e
//   XREF to: 0048cd4e (CONDITIONAL_JUMP)
// 0048cb62: XOR EBX,EBX
//   Label: LAB_0048cb62
// 0048cb64: MOV EAX,dword ptr [ESP]
//   Label: LAB_0048cb64
//   XREF to: Stack[-0xa0] (DATA)
// 0048cb67: CMP EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x98] (READ)
// 0048cb6b: JLE 0x0048cb93
//   XREF to: 0048cb93 (CONDITIONAL_JUMP)
// 0048cb6d: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x70] (DATA)
// 0048cb71: PUSH EAX
// 0048cb72: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa0] (DATA)
// 0048cb76: PUSH EAX
// 0048cb77: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x40] (DATA)
// 0048cb7b: PUSH EAX
// 0048cb7c: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0xa0] (DATA)
// 0048cb80: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0x70] (DATA)
// 0048cb84: CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
//   XREF to: 00435a00 (UNCONDITIONAL_CALL)
// 0048cb89: MOV ECX,0xc
// 0048cb8e: ADD ESP,0xc
// 0048cb91: MOVSD.REP ES:EDI,ESI
// 0048cb93: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0048cb93
//   XREF to: Stack[-0x98] (READ)
// 0048cb97: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0048cb9a: NEG EAX
// 0048cb9c: CMP EAX,ESI
// 0048cb9e: JLE 0x0048cbc6
//   XREF to: 0048cbc6 (CONDITIONAL_JUMP)
// 0048cba0: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x70] (DATA)
// 0048cba4: PUSH EAX
// 0048cba5: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa0] (DATA)
// 0048cba9: PUSH EAX
// 0048cbaa: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x40] (DATA)
// 0048cbae: PUSH EAX
// 0048cbaf: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0xa0] (DATA)
// 0048cbb3: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0x70] (DATA)
// 0048cbb7: CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
//   XREF to: 00435b00 (UNCONDITIONAL_CALL)
// 0048cbbc: MOV ECX,0xc
// 0048cbc1: ADD ESP,0xc
// 0048cbc4: MOVSD.REP ES:EDI,ESI
// 0048cbc6: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0048cbc6
//   XREF to: Stack[-0x9c] (READ)
// 0048cbca: CMP EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x98] (READ)
// 0048cbce: JLE 0x0048cbf6
//   XREF to: 0048cbf6 (CONDITIONAL_JUMP)
// 0048cbd0: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x70] (DATA)
// 0048cbd4: PUSH EAX
// 0048cbd5: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa0] (DATA)
// 0048cbd9: PUSH EAX
// 0048cbda: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x40] (DATA)
// 0048cbde: PUSH EAX
// 0048cbdf: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0xa0] (DATA)
// 0048cbe3: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0x70] (DATA)
// 0048cbe7: CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
//   XREF to: 00435c00 (UNCONDITIONAL_CALL)
// 0048cbec: MOV ECX,0xc
// 0048cbf1: ADD ESP,0xc
// 0048cbf4: MOVSD.REP ES:EDI,ESI
// 0048cbf6: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0048cbf6
//   XREF to: Stack[-0x98] (READ)
// 0048cbfa: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x9c] (READ)
// 0048cbfe: NEG EAX
// 0048cc00: CMP EAX,EDX
// 0048cc02: JLE 0x0048cc2a
//   XREF to: 0048cc2a (CONDITIONAL_JUMP)
// 0048cc04: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x70] (DATA)
// 0048cc08: PUSH EAX
// 0048cc09: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa0] (DATA)
// 0048cc0d: PUSH EAX
// 0048cc0e: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x40] (DATA)
// 0048cc12: PUSH EAX
// 0048cc13: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0xa0] (DATA)
// 0048cc17: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0x70] (DATA)
// 0048cc1b: CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
//   XREF to: 00435d00 (UNCONDITIONAL_CALL)
// 0048cc20: MOV ECX,0xc
// 0048cc25: ADD ESP,0xc
// 0048cc28: MOVSD.REP ES:EDI,ESI
// 0048cc2a: MOV EAX,dword ptr [ESP + 0x60]
//   Label: LAB_0048cc2a
//   XREF to: Stack[-0x40] (READ)
// 0048cc2e: CMP EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x38] (READ)
// 0048cc32: JLE 0x0048cc5a
//   XREF to: 0048cc5a (CONDITIONAL_JUMP)
// 0048cc34: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x70] (DATA)
// 0048cc38: PUSH EAX
// 0048cc39: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x40] (DATA)
// 0048cc3d: PUSH EAX
// 0048cc3e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xa0] (DATA)
// 0048cc42: PUSH EAX
// 0048cc43: LEA EDI,[ESP + 0x6c]
//   XREF to: Stack[-0x40] (DATA)
// 0048cc47: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0x70] (DATA)
// 0048cc4b: CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
//   XREF to: 00435a00 (UNCONDITIONAL_CALL)
// 0048cc50: MOV ECX,0xc
// 0048cc55: ADD ESP,0xc
// 0048cc58: MOVSD.REP ES:EDI,ESI
// 0048cc5a: MOV EAX,dword ptr [ESP + 0x68]
//   Label: LAB_0048cc5a
//   XREF to: Stack[-0x38] (READ)
// 0048cc5e: MOV ESI,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x40] (READ)
// 0048cc62: NEG EAX
// 0048cc64: CMP EAX,ESI
// 0048cc66: JLE 0x0048cc8e
//   XREF to: 0048cc8e (CONDITIONAL_JUMP)
// 0048cc68: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x70] (DATA)
// 0048cc6c: PUSH EAX
// 0048cc6d: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x40] (DATA)
// 0048cc71: PUSH EAX
// 0048cc72: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xa0] (DATA)
// 0048cc76: PUSH EAX
// 0048cc77: LEA EDI,[ESP + 0x6c]
//   XREF to: Stack[-0x40] (DATA)
// 0048cc7b: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0x70] (DATA)
// 0048cc7f: CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
//   XREF to: 00435b00 (UNCONDITIONAL_CALL)
// 0048cc84: MOV ECX,0xc
// 0048cc89: ADD ESP,0xc
// 0048cc8c: MOVSD.REP ES:EDI,ESI
// 0048cc8e: MOV EAX,dword ptr [ESP + 0x64]
//   Label: LAB_0048cc8e
//   XREF to: Stack[-0x3c] (READ)
// 0048cc92: CMP EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x38] (READ)
// 0048cc96: JLE 0x0048ccbe
//   XREF to: 0048ccbe (CONDITIONAL_JUMP)
// 0048cc98: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x70] (DATA)
// 0048cc9c: PUSH EAX
// 0048cc9d: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x40] (DATA)
// 0048cca1: PUSH EAX
// 0048cca2: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xa0] (DATA)
// 0048cca6: PUSH EAX
// 0048cca7: LEA EDI,[ESP + 0x6c]
//   XREF to: Stack[-0x40] (DATA)
// 0048ccab: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0x70] (DATA)
// 0048ccaf: CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
//   XREF to: 00435c00 (UNCONDITIONAL_CALL)
// 0048ccb4: MOV ECX,0xc
// 0048ccb9: ADD ESP,0xc
// 0048ccbc: MOVSD.REP ES:EDI,ESI
// 0048ccbe: MOV EAX,dword ptr [ESP + 0x68]
//   Label: LAB_0048ccbe
//   XREF to: Stack[-0x38] (READ)
// 0048ccc2: MOV EDX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x3c] (READ)
// 0048ccc6: NEG EAX
// 0048ccc8: CMP EAX,EDX
// 0048ccca: JLE 0x0048ccf2
//   XREF to: 0048ccf2 (CONDITIONAL_JUMP)
// 0048cccc: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x70] (DATA)
// 0048ccd0: PUSH EAX
// 0048ccd1: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x40] (DATA)
// 0048ccd5: PUSH EAX
// 0048ccd6: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xa0] (DATA)
// 0048ccda: PUSH EAX
// 0048ccdb: LEA EDI,[ESP + 0x6c]
//   XREF to: Stack[-0x40] (DATA)
// 0048ccdf: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0x70] (DATA)
// 0048cce3: CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
//   XREF to: 00435d00 (UNCONDITIONAL_CALL)
// 0048cce8: MOV ECX,0xc
// 0048cced: ADD ESP,0xc
// 0048ccf0: MOVSD.REP ES:EDI,ESI
// 0048ccf2: INC EBX
//   Label: LAB_0048ccf2
// 0048ccf3: CMP EBX,0x2
// 0048ccf6: JL 0x0048cb64
//   XREF to: 0048cb64 (CONDITIONAL_JUMP)
// 0048ccfc: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x40] (READ)
// 0048cd00: MOV ECX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x38] (READ)
// 0048cd04: CMP EAX,ECX
// 0048cd06: JG 0x0048cd43
//   XREF to: 0048cd43 (CONDITIONAL_JUMP)
// 0048cd08: MOV EBX,ECX
// 0048cd0a: NEG EBX
// 0048cd0c: CMP EBX,EAX
// 0048cd0e: JG 0x0048cd43
//   XREF to: 0048cd43 (CONDITIONAL_JUMP)
// 0048cd10: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x3c] (READ)
// 0048cd14: CMP EAX,ECX
// 0048cd16: JG 0x0048cd43
//   XREF to: 0048cd43 (CONDITIONAL_JUMP)
// 0048cd18: CMP EBX,EAX
// 0048cd1a: JG 0x0048cd43
//   XREF to: 0048cd43 (CONDITIONAL_JUMP)
// 0048cd1c: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0048cd1f: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x98] (READ)
// 0048cd23: CMP EAX,EDX
// 0048cd25: JG 0x0048cd43
//   XREF to: 0048cd43 (CONDITIONAL_JUMP)
// 0048cd27: MOV EBX,EDX
// 0048cd29: NEG EBX
// 0048cd2b: CMP EBX,EAX
// 0048cd2d: JG 0x0048cd43
//   XREF to: 0048cd43 (CONDITIONAL_JUMP)
// 0048cd2f: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x9c] (READ)
// 0048cd33: CMP EAX,EDX
// 0048cd35: JG 0x0048cd43
//   XREF to: 0048cd43 (CONDITIONAL_JUMP)
// 0048cd37: CMP EBX,EAX
// 0048cd39: JG 0x0048cd43
//   XREF to: 0048cd43 (CONDITIONAL_JUMP)
// 0048cd3b: TEST ECX,ECX
// 0048cd3d: JLE 0x0048cd43
//   XREF to: 0048cd43 (CONDITIONAL_JUMP)
// 0048cd3f: TEST EDX,EDX
// 0048cd41: JG 0x0048cd57
//   XREF to: 0048cd57 (CONDITIONAL_JUMP)
// 0048cd43: ADD ESP,0x90
//   Label: LAB_0048cd43
// 0048cd49: POP EBP
// 0048cd4a: POP EDI
// 0048cd4b: POP ESI
// 0048cd4c: POP EBX
// 0048cd4d: RET
// 0048cd4e: TEST AL,0xff
//   Label: LAB_0048cd4e
// 0048cd50: JNZ 0x0048cd43
//   XREF to: 0048cd43 (CONDITIONAL_JUMP)
// 0048cd52: JMP 0x0048cb62
//   XREF to: 0048cb62 (UNCONDITIONAL_JUMP)
// 0048cd57: MOV ECX,0xc
//   Label: LAB_0048cd57
// 0048cd5c: MOV EDI,dword ptr [EBP]
// 0048cd5f: LEA ESI,[ESP + 0x60]
//   XREF to: Stack[-0x40] (DATA)
// 0048cd63: ADD EDI,0xea5a0
// 0048cd69: MOVSD.REP ES:EDI,ESI
// 0048cd6b: MOV ECX,0xc
// 0048cd70: MOV EDI,dword ptr [EBP]
// 0048cd73: MOV ESI,ESP
// 0048cd75: ADD EDI,0xea5d0
// 0048cd7b: PUSH 0x4e1e
// 0048cd80: MOVSD.REP ES:EDI,ESI
// 0048cd82: CALL engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60
//   XREF to: 0050ce60 (UNCONDITIONAL_CALL)
// 0048cd87: ADD ESP,0x4
// 0048cd8a: PUSH 0x4e1f
// 0048cd8f: CALL engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60
//   XREF to: 0050ce60 (UNCONDITIONAL_CALL)
// 0048cd94: ADD ESP,0x4
// 0048cd97: MOV EAX,dword ptr [EBP]
// 0048cd9a: PUSH 0x2
// 0048cd9c: ADD EAX,0xea5a0
// 0048cda1: PUSH EAX
// 0048cda2: CALL engine_prim.c_replaceWWithDepth_FUN_00552110
//   XREF to: 00552110 (UNCONDITIONAL_CALL)
// 0048cda7: MOV EBX,dword ptr [EBP]
// 0048cdaa: LEA EAX,[EBX + 0xea5d0]
// 0048cdb0: ADD ESP,0x8
// 0048cdb3: MOV ECX,dword ptr [EAX + 0x8]
// 0048cdb6: MOV ESI,dword ptr [EAX + 0x14]
// 0048cdb9: PUSH ECX
// 0048cdba: SAR ESI,0x10
// 0048cdbd: MOV EAX,dword ptr [EAX + 0x10]
// 0048cdc0: PUSH ESI
// 0048cdc1: SAR EAX,0x10
// 0048cdc4: PUSH EAX
// 0048cdc5: LEA EAX,[EBX + 0xea5a0]
// 0048cdcb: MOV EBX,dword ptr [EAX + 0x8]
// 0048cdce: PUSH EBX
// 0048cdcf: MOV EBX,dword ptr [EAX + 0x14]
// 0048cdd2: SAR EBX,0x10
// 0048cdd5: MOV EAX,dword ptr [EAX + 0x10]
// 0048cdd8: PUSH EBX
// 0048cdd9: SAR EAX,0x10
// 0048cddc: PUSH EAX
// 0048cddd: CALL engine_2d.c_drawLine3D_FUN_00401320
//   XREF to: 00401320 (UNCONDITIONAL_CALL)
// 0048cde2: ADD ESP,0x18
// 0048cde5: ADD ESP,0x90
// 0048cdeb: POP EBP
// 0048cdec: POP EDI
// 0048cded: POP ESI
// 0048cdee: POP EBX
// 0048cdef: RET

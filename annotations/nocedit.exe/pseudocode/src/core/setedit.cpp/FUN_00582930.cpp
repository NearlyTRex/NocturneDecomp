// Name: core_setedit.cpp_FUN_00582930
// Address: 00582930
// Address Range: [[00582930, 00582f23]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00582930()
// Globals:
//   float FLOAT_00662a28 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   int g_ActiveRenderColor
// Function calls:
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void core_setedit_cpp_FUN_00582930(void)

{
  float fVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  int *piVar5;
  byte bVar6;
  int in_stack_00000024;
  int in_stack_00000028;
  SRenderVertex *in_stack_ffffff44;
  SRenderVertex *in_stack_ffffff48;
  SRenderVertex *in_stack_ffffff4c;
  SRenderVertex *in_stack_ffffff50;
  SRenderVertex *in_stack_ffffff54;
  SRenderVertex *in_stack_ffffff58;
  SRenderVertex *in_stack_ffffff5c;
  SRenderVertex *in_stack_ffffff60;
  SRenderVertex *in_stack_ffffff64;
  SRenderVertex *in_stack_ffffff68;
  SRenderVertex *in_stack_ffffff6c;
  SRenderVertex *in_stack_ffffff70;
  SRenderVertex *in_stack_ffffff74;
  int iStack_88;
  float fVar7;
  float fVar8;
  CVector3i local_28;
  CVector3i local_1c;
  
  bVar6 = 0;
  local_28.x = (int)ROUND(FLOAT_00662a28 * -1.0);
  local_28.y = (int)ROUND(FLOAT_00662a28 * -1.0);
  local_28.z = (int)ROUND(FLOAT_00662a28 * 2.0);
  iStack_88 = 0x58298a;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_28);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
             (CVector3i *)&stack0xffffffa0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
             (CVector3i *)&stack0xffffff8c);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
             (CVector3i *)&stack0xffffff9c);
  fVar7 = 0.0;
  fVar8 = (float)(int)ROUND(FLOAT_00662a28 * -0.3);
  fVar1 = FLOAT_00662a28 * -0.3;
  local_28.x = (int)ROUND(FLOAT_00662a28 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[4].projected_vertex,
             (CVector3i *)&stack0xffffffd0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[5].projected_vertex,
             (CVector3i *)&stack0xfffffff8);
  local_1c.x = (int)ROUND(fVar7 * FLOAT_00662a28);
  local_1c.y = (int)ROUND(-fVar8 * FLOAT_00662a28);
  local_1c.z = (int)ROUND((float)(int)ROUND(fVar1) * FLOAT_00662a28);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[6].projected_vertex,&local_1c);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[7].projected_vertex,
             (CVector3i *)&stack0xffffffc4);
  if (in_stack_00000028 != 0) {
    engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
              (g_CDemonRendererPtr,in_stack_00000024);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,0,1);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,1,2);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,2,3);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,3,0);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,4,5);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,5,6);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,6,7);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,7,4);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,0,4);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,1,5);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,2,6);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,3,7);
    return;
  }
  g_ActiveRenderColor = in_stack_00000024;
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 1;
  piVar5 = (int *)&stack0xffffff74;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  piVar5 = (int *)&stack0xffffff44;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff44,in_stack_ffffff48);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 2;
  piVar5 = &iStack_88;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 1;
  piVar5 = (int *)&stack0xffffff48;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff48,in_stack_ffffff4c);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 3;
  piVar5 = (int *)&stack0xffffff7c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 2;
  piVar5 = (int *)&stack0xffffff4c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff4c,in_stack_ffffff50);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4;
  piVar5 = (int *)&stack0xffffff80;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 3;
  piVar5 = (int *)&stack0xffffff50;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff50,in_stack_ffffff54);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 5;
  piVar5 = (int *)&stack0xffffff84;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 4;
  piVar5 = (int *)&stack0xffffff54;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff54,in_stack_ffffff58);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 6;
  piVar5 = (int *)&stack0xffffff88;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 5;
  piVar5 = (int *)&stack0xffffff58;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff58,in_stack_ffffff5c);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 7;
  piVar5 = (int *)&stack0xffffff8c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 6;
  piVar5 = (int *)&stack0xffffff5c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff5c,in_stack_ffffff60);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 4;
  piVar5 = (int *)&stack0xffffff90;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 7;
  piVar5 = (int *)&stack0xffffff60;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff60,in_stack_ffffff64);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 4;
  piVar5 = (int *)&stack0xffffff94;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  piVar5 = (int *)&stack0xffffff64;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff64,in_stack_ffffff68);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 5;
  piVar5 = (int *)&stack0xffffff98;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 1;
  piVar5 = (int *)&stack0xffffff68;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff68,in_stack_ffffff6c);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 6;
  piVar5 = (int *)&stack0xffffff9c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 2;
  piVar5 = (int *)&stack0xffffff6c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff6c,in_stack_ffffff70);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 7;
  piVar5 = (int *)&stack0xffffffa0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 3;
  piVar5 = (int *)&stack0xffffff70;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff70,in_stack_ffffff74);
  return;
}


// Assembly code:
// 00582930: PUSH EBX
//   Label: core_setedit.cpp_FUN_00582930
// 00582931: PUSH ESI
// 00582932: PUSH EDI
// 00582933: PUSH EBP
// 00582934: SUB ESP,0x6c
// 00582937: MOV EDX,0xbf800000
// 0058293c: MOV EBX,0x40000000
// 00582941: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x4c] (DATA)
// 00582945: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0058294b: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 0058294f: MOV dword ptr [ESP + 0x38],EBX
//   XREF to: Stack[-0x44] (WRITE)
// 00582953: LEA EBX,[ESP + 0x54]
//   XREF to: Stack[-0x28] (DATA)
// 00582957: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 0058295b: FLD float ptr [EAX]
//   XREF to: Stack[-0x4c] (DATA)
// 0058295d: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00582963: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x28] (DATA)
// 00582965: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x48] (READ)
// 00582968: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 0058296e: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x24] (WRITE)
// 00582971: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x44] (READ)
// 00582974: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 0058297a: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 0058297d: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x28] (DATA)
// 00582981: PUSH EAX
// 00582982: MOV EAX,dword ptr [EDI]
//   XREF to: 02c6d578 (READ)
// 00582984: PUSH EAX
// 00582985: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0058298a: ADD ESP,0x8
// 0058298d: MOV AH,byte ptr [ESP + 0x33]
//   XREF to: Stack[-0x49] (READ)
// 00582991: XOR AH,0x80
// 00582994: LEA EBX,[ESP + 0x18]
//   XREF to: Stack[-0x64] (DATA)
// 00582998: MOV byte ptr [ESP + 0x33],AH
//   XREF to: Stack[-0x49] (WRITE)
// 0058299c: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x4c] (DATA)
// 005829a0: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005829a6: FLD float ptr [EAX]
//   XREF to: Stack[-0x4c] (DATA)
// 005829a8: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 005829ae: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x64] (DATA)
// 005829b0: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x48] (READ)
// 005829b3: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 005829b9: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x60] (WRITE)
// 005829bc: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x44] (READ)
// 005829bf: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 005829c5: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x5c] (WRITE)
// 005829c8: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x64] (DATA)
// 005829cc: PUSH EAX
// 005829cd: MOV EAX,dword ptr [EDI]
//   XREF to: 02c6d578 (READ)
// 005829cf: ADD EAX,0x30
// 005829d2: PUSH EAX
// 005829d3: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005829d8: ADD ESP,0x8
// 005829db: MOV EBX,ESP
// 005829dd: MOV DL,byte ptr [ESP + 0x37]
//   XREF to: Stack[-0x45] (READ)
// 005829e1: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x4c] (DATA)
// 005829e5: XOR DL,0x80
// 005829e8: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005829ee: MOV byte ptr [ESP + 0x37],DL
//   XREF to: Stack[-0x45] (WRITE)
// 005829f2: FLD float ptr [EAX]
//   XREF to: Stack[-0x4c] (DATA)
// 005829f4: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 005829fa: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x7c] (DATA)
// 005829fc: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x48] (READ)
// 005829ff: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00582a05: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x78] (WRITE)
// 00582a08: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x44] (READ)
// 00582a0b: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00582a11: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x74] (WRITE)
// 00582a14: MOV EAX,ESP
// 00582a16: PUSH EAX
// 00582a17: MOV EAX,dword ptr [EDI]
//   XREF to: 02c6d578 (READ)
// 00582a19: ADD EAX,0x60
// 00582a1c: PUSH EAX
// 00582a1d: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00582a22: ADD ESP,0x8
// 00582a25: LEA EBX,[ESP + 0xc]
//   XREF to: Stack[-0x70] (DATA)
// 00582a29: MOV DH,byte ptr [ESP + 0x33]
//   XREF to: Stack[-0x49] (READ)
// 00582a2d: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x4c] (DATA)
// 00582a31: XOR DH,0x80
// 00582a34: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00582a3a: MOV byte ptr [ESP + 0x33],DH
//   XREF to: Stack[-0x49] (WRITE)
// 00582a3e: FLD float ptr [EAX]
//   XREF to: Stack[-0x4c] (DATA)
// 00582a40: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00582a46: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x70] (DATA)
// 00582a48: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x48] (READ)
// 00582a4b: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00582a51: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x6c] (WRITE)
// 00582a54: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x44] (READ)
// 00582a57: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00582a5d: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x68] (WRITE)
// 00582a60: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x70] (DATA)
// 00582a64: PUSH EAX
// 00582a65: MOV EAX,dword ptr [EDI]
//   XREF to: 02c6d578 (READ)
// 00582a67: ADD EAX,0x90
// 00582a6c: PUSH EAX
// 00582a6d: MOV ESI,0xbe99999a
// 00582a72: XOR EBP,EBP
// 00582a74: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00582a79: LEA EBX,[ESP + 0x44]
//   XREF to: Stack[-0x40] (DATA)
// 00582a7d: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x4c] (DATA)
// 00582a81: ADD ESP,0x8
// 00582a84: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00582a8a: MOV dword ptr [ESP + 0x30],ESI
//   XREF to: Stack[-0x4c] (WRITE)
// 00582a8e: MOV dword ptr [ESP + 0x34],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 00582a92: MOV dword ptr [ESP + 0x38],EBP
//   XREF to: Stack[-0x44] (WRITE)
// 00582a96: FLD float ptr [EAX]
//   XREF to: Stack[-0x4c] (DATA)
// 00582a98: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00582a9e: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x40] (DATA)
// 00582aa0: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x48] (READ)
// 00582aa3: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00582aa9: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x3c] (WRITE)
// 00582aac: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x44] (READ)
// 00582aaf: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00582ab5: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 00582ab8: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x40] (DATA)
// 00582abc: PUSH EAX
// 00582abd: MOV EAX,dword ptr [EDI]
//   XREF to: 02c6d578 (READ)
// 00582abf: ADD EAX,0xc0
// 00582ac4: PUSH EAX
// 00582ac5: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00582aca: ADD ESP,0x8
// 00582acd: MOV BL,byte ptr [ESP + 0x33]
//   XREF to: Stack[-0x49] (READ)
// 00582ad1: XOR BL,0x80
// 00582ad4: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x4c] (DATA)
// 00582ad8: MOV byte ptr [ESP + 0x33],BL
//   XREF to: Stack[-0x49] (WRITE)
// 00582adc: LEA EBX,[ESP + 0x60]
//   XREF to: Stack[-0x1c] (DATA)
// 00582ae0: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00582ae6: FLD float ptr [EAX]
//   XREF to: Stack[-0x4c] (DATA)
// 00582ae8: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00582aee: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x1c] (DATA)
// 00582af0: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x48] (READ)
// 00582af3: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00582af9: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x18] (WRITE)
// 00582afc: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x44] (READ)
// 00582aff: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00582b05: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x14] (WRITE)
// 00582b08: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x1c] (DATA)
// 00582b0c: PUSH EAX
// 00582b0d: MOV EAX,dword ptr [EDI]
//   XREF to: 02c6d578 (READ)
// 00582b0f: ADD EAX,0xf0
// 00582b14: PUSH EAX
// 00582b15: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00582b1a: ADD ESP,0x8
// 00582b1d: MOV BH,byte ptr [ESP + 0x37]
//   XREF to: Stack[-0x45] (READ)
// 00582b21: XOR BH,0x80
// 00582b24: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x4c] (DATA)
// 00582b28: MOV byte ptr [ESP + 0x37],BH
//   XREF to: Stack[-0x45] (WRITE)
// 00582b2c: LEA EBX,[ESP + 0x48]
//   XREF to: Stack[-0x34] (DATA)
// 00582b30: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00582b36: FLD float ptr [EAX]
//   XREF to: Stack[-0x4c] (DATA)
// 00582b38: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00582b3e: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x34] (DATA)
// 00582b40: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x48] (READ)
// 00582b43: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00582b49: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x30] (WRITE)
// 00582b4c: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x44] (READ)
// 00582b4f: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00582b55: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x2c] (WRITE)
// 00582b58: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x34] (DATA)
// 00582b5c: PUSH EAX
// 00582b5d: MOV EAX,dword ptr [EDI]
//   XREF to: 02c6d578 (READ)
// 00582b5f: ADD EAX,0x120
// 00582b64: PUSH EAX
// 00582b65: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00582b6a: ADD ESP,0x8
// 00582b6d: LEA EBX,[ESP + 0x24]
//   XREF to: Stack[-0x58] (DATA)
// 00582b71: MOV CL,byte ptr [ESP + 0x33]
//   XREF to: Stack[-0x49] (READ)
// 00582b75: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x4c] (DATA)
// 00582b79: XOR CL,0x80
// 00582b7c: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00582b82: MOV byte ptr [ESP + 0x33],CL
//   XREF to: Stack[-0x49] (WRITE)
// 00582b86: FLD float ptr [EAX]
//   XREF to: Stack[-0x4c] (DATA)
// 00582b88: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00582b8e: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x58] (DATA)
// 00582b90: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x48] (READ)
// 00582b93: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00582b99: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x54] (WRITE)
// 00582b9c: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x44] (READ)
// 00582b9f: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00582ba5: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x50] (WRITE)
// 00582ba8: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x58] (DATA)
// 00582bac: PUSH EAX
// 00582bad: MOV EAX,dword ptr [EDI]
//   XREF to: 02c6d578 (READ)
// 00582baf: ADD EAX,0x150
// 00582bb4: PUSH EAX
// 00582bb5: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00582bba: ADD ESP,0x8
// 00582bbd: CMP dword ptr [ESP + 0x84],0x0
//   XREF to: Stack[0x8] (READ)
// 00582bc5: JZ 0x00582cca
//   XREF to: 00582cca (CONDITIONAL_JUMP)
// 00582bcb: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x4] (READ)
// 00582bd2: PUSH EDX
// 00582bd3: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00582bd9: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00582bda: CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   XREF to: 0048c960 (UNCONDITIONAL_CALL)
// 00582bdf: ADD ESP,0x8
// 00582be2: PUSH 0x1
// 00582be4: PUSH EBP
// 00582be5: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00582beb: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00582bec: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00582bf1: ADD ESP,0xc
// 00582bf4: PUSH 0x2
// 00582bf6: PUSH 0x1
// 00582bf8: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00582bfe: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00582bff: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00582c04: ADD ESP,0xc
// 00582c07: PUSH 0x3
// 00582c09: PUSH 0x2
// 00582c0b: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00582c11: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00582c12: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00582c17: ADD ESP,0xc
// 00582c1a: PUSH EBP
// 00582c1b: PUSH 0x3
// 00582c1d: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00582c23: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 00582c24: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00582c29: ADD ESP,0xc
// 00582c2c: PUSH 0x5
// 00582c2e: PUSH 0x4
// 00582c30: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00582c35: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00582c36: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00582c3b: ADD ESP,0xc
// 00582c3e: PUSH 0x6
// 00582c40: PUSH 0x5
// 00582c42: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00582c48: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00582c49: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00582c4e: ADD ESP,0xc
// 00582c51: PUSH 0x7
// 00582c53: PUSH 0x6
// 00582c55: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00582c5b: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00582c5c: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00582c61: ADD ESP,0xc
// 00582c64: PUSH 0x4
// 00582c66: PUSH 0x7
// 00582c68: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00582c6e: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00582c6f: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00582c74: ADD ESP,0xc
// 00582c77: PUSH 0x4
// 00582c79: PUSH 0x0
// 00582c7b: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00582c81: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00582c82: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00582c87: ADD ESP,0xc
// 00582c8a: PUSH 0x5
// 00582c8c: PUSH 0x1
// 00582c8e: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00582c94: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00582c95: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00582c9a: ADD ESP,0xc
// 00582c9d: PUSH 0x6
// 00582c9f: PUSH 0x2
// 00582ca1: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00582ca7: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 00582ca8: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00582cad: ADD ESP,0xc
// 00582cb0: PUSH 0x7
// 00582cb2: PUSH 0x3
// 00582cb4: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00582cb9: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00582cba: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00582cbf: ADD ESP,0xc
// 00582cc2: ADD ESP,0x6c
// 00582cc5: POP EBP
// 00582cc6: POP EDI
// 00582cc7: POP ESI
// 00582cc8: POP EBX
// 00582cc9: RET
// 00582cca: MOV EAX,dword ptr [ESP + 0x80]
//   Label: LAB_00582cca
//   XREF to: Stack[0x4] (READ)
// 00582cd1: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 00582cd6: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00582cdb: SUB ESP,0x30
// 00582cde: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00582ce0: MOV ECX,0xc
// 00582ce5: MOV EDI,ESP
// 00582ce7: LEA ESI,[EAX + 0x30]
// 00582cea: MOVSD.REP ES:EDI,ESI
// 00582cec: SUB ESP,0x30
// 00582cef: MOV ECX,0xc
// 00582cf4: MOV EDI,ESP
// 00582cf6: MOV ESI,EAX
// 00582cf8: MOVSD.REP ES:EDI,ESI
// 00582cfa: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00582cff: ADD ESP,0x60
// 00582d02: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00582d07: SUB ESP,0x30
// 00582d0a: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00582d0c: MOV ECX,0xc
// 00582d11: MOV EDI,ESP
// 00582d13: LEA ESI,[EAX + 0x60]
// 00582d16: MOVSD.REP ES:EDI,ESI
// 00582d18: SUB ESP,0x30
// 00582d1b: MOV ECX,0xc
// 00582d20: MOV EDI,ESP
// 00582d22: LEA ESI,[EAX + 0x30]
// 00582d25: MOVSD.REP ES:EDI,ESI
// 00582d27: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00582d2c: ADD ESP,0x60
// 00582d2f: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00582d34: SUB ESP,0x30
// 00582d37: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00582d39: MOV ECX,0xc
// 00582d3e: MOV EDI,ESP
// 00582d40: LEA ESI,[EAX + 0x90]
// 00582d46: MOVSD.REP ES:EDI,ESI
// 00582d48: SUB ESP,0x30
// 00582d4b: MOV ECX,0xc
// 00582d50: MOV EDI,ESP
// 00582d52: LEA ESI,[EAX + 0x60]
// 00582d55: MOVSD.REP ES:EDI,ESI
// 00582d57: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00582d5c: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00582d61: ADD ESP,0x60
// 00582d64: MOV ECX,0xc
// 00582d69: SUB ESP,0x30
// 00582d6c: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00582d6e: MOV EDI,ESP
// 00582d70: MOV ESI,EAX
// 00582d72: MOVSD.REP ES:EDI,ESI
// 00582d74: SUB ESP,0x30
// 00582d77: MOV ECX,0xc
// 00582d7c: MOV EDI,ESP
// 00582d7e: LEA ESI,[EAX + 0x90]
// 00582d84: MOVSD.REP ES:EDI,ESI
// 00582d86: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00582d8b: ADD ESP,0x60
// 00582d8e: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00582d93: SUB ESP,0x30
// 00582d96: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00582d98: MOV ECX,0xc
// 00582d9d: MOV EDI,ESP
// 00582d9f: LEA ESI,[EAX + 0xf0]
// 00582da5: MOVSD.REP ES:EDI,ESI
// 00582da7: SUB ESP,0x30
// 00582daa: MOV ECX,0xc
// 00582daf: MOV EDI,ESP
// 00582db1: LEA ESI,[EAX + 0xc0]
// 00582db7: MOVSD.REP ES:EDI,ESI
// 00582db9: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00582dbe: ADD ESP,0x60
// 00582dc1: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00582dc6: SUB ESP,0x30
// 00582dc9: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00582dcb: MOV ECX,0xc
// 00582dd0: MOV EDI,ESP
// 00582dd2: LEA ESI,[EAX + 0x120]
// 00582dd8: MOVSD.REP ES:EDI,ESI
// 00582dda: SUB ESP,0x30
// 00582ddd: MOV ECX,0xc
// 00582de2: MOV EDI,ESP
// 00582de4: LEA ESI,[EAX + 0xf0]
// 00582dea: MOVSD.REP ES:EDI,ESI
// 00582dec: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00582df1: ADD ESP,0x60
// 00582df4: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00582df9: SUB ESP,0x30
// 00582dfc: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00582dfe: MOV ECX,0xc
// 00582e03: MOV EDI,ESP
// 00582e05: LEA ESI,[EAX + 0x150]
// 00582e0b: MOVSD.REP ES:EDI,ESI
// 00582e0d: SUB ESP,0x30
// 00582e10: MOV ECX,0xc
// 00582e15: MOV EDI,ESP
// 00582e17: LEA ESI,[EAX + 0x120]
// 00582e1d: MOVSD.REP ES:EDI,ESI
// 00582e1f: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00582e24: ADD ESP,0x60
// 00582e27: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00582e2c: SUB ESP,0x30
// 00582e2f: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00582e31: MOV ECX,0xc
// 00582e36: MOV EDI,ESP
// 00582e38: LEA ESI,[EAX + 0xc0]
// 00582e3e: MOVSD.REP ES:EDI,ESI
// 00582e40: SUB ESP,0x30
// 00582e43: MOV ECX,0xc
// 00582e48: MOV EDI,ESP
// 00582e4a: LEA ESI,[EAX + 0x150]
// 00582e50: MOVSD.REP ES:EDI,ESI
// 00582e52: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00582e57: ADD ESP,0x60
// 00582e5a: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00582e5f: SUB ESP,0x30
// 00582e62: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00582e64: MOV ECX,0xc
// 00582e69: MOV EDI,ESP
// 00582e6b: LEA ESI,[EAX + 0xc0]
// 00582e71: MOVSD.REP ES:EDI,ESI
// 00582e73: SUB ESP,0x30
// 00582e76: MOV ECX,0xc
// 00582e7b: MOV EDI,ESP
// 00582e7d: MOV ESI,EAX
// 00582e7f: MOVSD.REP ES:EDI,ESI
// 00582e81: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00582e86: ADD ESP,0x60
// 00582e89: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00582e8e: SUB ESP,0x30
// 00582e91: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00582e93: MOV ECX,0xc
// 00582e98: MOV EDI,ESP
// 00582e9a: LEA ESI,[EAX + 0xf0]
// 00582ea0: MOVSD.REP ES:EDI,ESI
// 00582ea2: SUB ESP,0x30
// 00582ea5: MOV ECX,0xc
// 00582eaa: MOV EDI,ESP
// 00582eac: LEA ESI,[EAX + 0x30]
// 00582eaf: MOVSD.REP ES:EDI,ESI
// 00582eb1: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00582eb6: ADD ESP,0x60
// 00582eb9: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00582ebe: SUB ESP,0x30
// 00582ec1: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00582ec3: MOV ECX,0xc
// 00582ec8: MOV EDI,ESP
// 00582eca: LEA ESI,[EAX + 0x120]
// 00582ed0: MOVSD.REP ES:EDI,ESI
// 00582ed2: SUB ESP,0x30
// 00582ed5: MOV ECX,0xc
// 00582eda: MOV EDI,ESP
// 00582edc: LEA ESI,[EAX + 0x60]
// 00582edf: MOVSD.REP ES:EDI,ESI
// 00582ee1: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00582ee6: ADD ESP,0x60
// 00582ee9: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00582eee: SUB ESP,0x30
// 00582ef1: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00582ef3: MOV ECX,0xc
// 00582ef8: MOV EDI,ESP
// 00582efa: LEA ESI,[EAX + 0x150]
// 00582f00: MOVSD.REP ES:EDI,ESI
// 00582f02: SUB ESP,0x30
// 00582f05: MOV ECX,0xc
// 00582f0a: MOV EDI,ESP
// 00582f0c: LEA ESI,[EAX + 0x90]
// 00582f12: MOVSD.REP ES:EDI,ESI
// 00582f14: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00582f19: ADD ESP,0x60
// 00582f1c: ADD ESP,0x6c
// 00582f1f: POP EBP
// 00582f20: POP EDI
// 00582f21: POP ESI
// 00582f22: POP EBX
// 00582f23: RET

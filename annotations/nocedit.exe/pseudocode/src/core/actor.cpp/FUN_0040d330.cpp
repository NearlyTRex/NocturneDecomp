// Name: core_actor.cpp_FUN_0040d330
// Address: 0040d330
// Address Range: [[0040d330, 0040d469]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_0040d330()
// Globals:
//   float FLOAT_0061444c = 0.2000000
//   float FLOAT_00614450 = 0.8000000
//   float FLOAT_006597b0 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* Signature: undefined1 core_actor.cpp_FUN_0040d330(undefined4 param_1, undefined4 param_2) */

void core_actor_cpp_FUN_0040d330(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  int *piVar6;
  byte bVar7;
  int *in_stack_00000004;
  float *in_stack_00000008;
  SRenderVertex *in_stack_ffffff54;
  SRenderVertex *in_stack_ffffff58;
  int aiStack_7c [7];
  undefined4 uStack_60;
  float local_30;
  CVector3i local_2c;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar7 = 0;
  local_2c.z = *in_stack_00000004;
  local_20 = in_stack_00000004[1];
  local_1c = in_stack_00000004[2];
  local_18 = *in_stack_00000008 * FLOAT_0061444c;
  local_14 = in_stack_00000008[1] * FLOAT_0061444c;
  local_10 = FLOAT_0061444c * in_stack_00000008[2];
  fVar1 = (float)in_stack_00000004[1] * FLOAT_00614450 + local_14;
  fVar2 = FLOAT_00614450 * (float)in_stack_00000004[2] + local_10;
  uStack_60 = 0x40d3f1;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)&stack0xffffffac
            );
  local_2c.x = (int)ROUND(fVar1 * FLOAT_006597b0);
  local_2c.y = (int)ROUND(fVar2 * FLOAT_006597b0);
  local_2c.z = (int)ROUND(local_30 * FLOAT_006597b0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_2c);
  pSVar5 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar4 = pSVar5 + 1;
  piVar6 = aiStack_7c;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  piVar6 = (int *)&stack0xffffff54;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff54,in_stack_ffffff58);
  return;
}


// Assembly code:
// 0040d330: PUSH EBX
//   Label: core_actor.cpp_FUN_0040d330
// 0040d331: PUSH ESI
// 0040d332: PUSH EDI
// 0040d333: SUB ESP,0x48
// 0040d336: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0040d33a: MOV EBX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x8] (READ)
// 0040d33e: MOV EAX,dword ptr [EDX]
// 0040d340: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0040d344: LEA EAX,[EDX + 0x4]
// 0040d347: MOV EAX,dword ptr [EAX]
// 0040d349: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0040d34d: LEA EAX,[EDX + 0x8]
// 0040d350: MOV EAX,dword ptr [EAX]
// 0040d352: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0040d356: FLD float ptr [0x0061444c]
//   XREF to: 0061444c (READ)
// 0040d35c: FLD float ptr [EBX]
// 0040d35e: FMUL ST1
// 0040d360: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (WRITE)
// 0040d364: FLD float ptr [EBX + 0x4]
// 0040d367: FMUL ST1
// 0040d369: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (WRITE)
// 0040d36d: FMUL float ptr [EBX + 0x8]
// 0040d370: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x10] (WRITE)
// 0040d374: FLD float ptr [0x00614450]
//   XREF to: 00614450 (READ)
// 0040d37a: FLD float ptr [EDX]
// 0040d37c: FMUL ST1
// 0040d37e: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x48] (WRITE)
// 0040d382: FLD float ptr [EDX + 0x4]
// 0040d385: FMUL ST1
// 0040d387: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x44] (WRITE)
// 0040d38b: FMUL float ptr [EDX + 0x8]
// 0040d38e: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x24] (DATA)
// 0040d392: MOV EBX,ESP
// 0040d394: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x48] (READ)
// 0040d398: FADD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (READ)
// 0040d39c: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x44] (READ)
// 0040d3a0: FXCH
// 0040d3a2: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x3c] (WRITE)
// 0040d3a6: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040d3ac: FADD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 0040d3b0: FXCH
// 0040d3b2: FST float ptr [ESP + 0x14]
//   XREF to: Stack[-0x40] (WRITE)
// 0040d3b6: FADD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x10] (READ)
// 0040d3ba: FXCH
// 0040d3bc: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x38] (WRITE)
// 0040d3c0: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x34] (WRITE)
// 0040d3c4: FLD float ptr [EAX]
//   XREF to: Stack[-0x24] (DATA)
// 0040d3c6: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d3cc: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x54] (DATA)
// 0040d3ce: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0040d3d1: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d3d7: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x50] (WRITE)
// 0040d3da: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0040d3dd: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d3e3: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x4c] (WRITE)
// 0040d3e6: MOV EAX,ESP
// 0040d3e8: PUSH EAX
// 0040d3e9: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0040d3eb: PUSH EAX
// 0040d3ec: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0040d3f1: LEA EBX,[ESP + 0x2c]
//   XREF to: Stack[-0x30] (DATA)
// 0040d3f5: ADD ESP,0x8
// 0040d3f8: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x3c] (DATA)
// 0040d3fc: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040d402: FLD float ptr [EAX]
//   XREF to: Stack[-0x3c] (DATA)
// 0040d404: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d40a: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x30] (DATA)
// 0040d40c: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x38] (READ)
// 0040d40f: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d415: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x2c] (WRITE)
// 0040d418: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 0040d41b: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040d421: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 0040d424: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x30] (DATA)
// 0040d428: PUSH EAX
// 0040d429: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0040d42b: ADD EAX,0x30
// 0040d42e: PUSH EAX
// 0040d42f: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0040d434: ADD ESP,0x8
// 0040d437: MOV EAX,[0x006703e8]
//   XREF to: 006703e8 (READ)
// 0040d43c: SUB ESP,0x30
// 0040d43f: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0040d441: MOV ECX,0xc
// 0040d446: MOV EDI,ESP
// 0040d448: LEA ESI,[EAX + 0x30]
// 0040d44b: MOVSD.REP ES:EDI,ESI
// 0040d44d: SUB ESP,0x30
// 0040d450: MOV ECX,0xc
// 0040d455: MOV EDI,ESP
// 0040d457: MOV ESI,EAX
// 0040d459: MOVSD.REP ES:EDI,ESI
// 0040d45b: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 0040d460: ADD ESP,0x60
// 0040d463: ADD ESP,0x48
// 0040d466: POP EDI
// 0040d467: POP ESI
// 0040d468: POP EBX
// 0040d469: RET

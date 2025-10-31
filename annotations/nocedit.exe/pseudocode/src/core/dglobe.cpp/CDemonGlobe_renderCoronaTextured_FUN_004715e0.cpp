// Name: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0
// Address: 004715e0
// Address Range: [[004715e0, 00471769]]
// Convention: __cdecl
// Signature: void core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0(CDemonGlobe * this_ptr)
// Cross-references:
//   core_flame.cpp_FUN_004ca110 (004ca110) at 004ca16c [UNCONDITIONAL_CALL]
// Globals:
//   double g_CoronaVertexScale = 0.00390625
//   float g_CoronaCoordinateScaleFactor = 256
//   SMRGLTextureBasic g_CoronaHeadliteTexture
//   CVector3i[62] g_CoronaVertexPositions
//   undefined4 DAT_0066f018
//   undefined4 DAT_0066f01c
//   undefined4 DAT_0066f020
//   undefined4 DAT_0066f024
//   undefined4 DAT_0066f028
//   SMRGLLightPrimitive[84] g_CoronaFacePrimitives
//   undefined4 DAT_0066f300
//   undefined4 DAT_0066f304
//   undefined4 DAT_0066f308
//   undefined4 DAT_0066f30c
//   undefined4 DAT_0066f310
//   undefined4 DAT_0066f314
//   undefined4 DAT_0066f318
//   undefined4 DAT_0066f31c
//   undefined4 DAT_0066f320
//   undefined4 DAT_0066f324
//   undefined4 DAT_0066f328
//   undefined4 DAT_0066f32c
//   undefined4 DAT_0066f330
//   undefined4 DAT_0066f334
//   undefined4 DAT_0066f338
//   undefined4 DAT_0066f33c
//   undefined4 DAT_0066f340
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 DAT_00800000
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0(CDemonGlobe *this_ptr)

{
  CDemonRenderer *pCVar1;
  CDemonRenderer *this_ptr_00;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  undefined4 extraout_EDX_00;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  SMRGLHeaderPrimitive *in_stack_ffffffbc;
  int local_18;
  int local_14;
  
  iVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&this_ptr->position);
  iVar3 = 0;
  do {
    local_18 = (int)ROUND((float)*(int *)((int)&g_CoronaVertexPositions[0].x + iVar4) *
                          (float)g_CoronaVertexScale * this_ptr->radius *
                          g_CoronaCoordinateScaleFactor);
    local_14 = (int)ROUND((float)*(int *)((int)&g_CoronaVertexPositions[0].y + iVar4) *
                          (float)g_CoronaVertexScale * this_ptr->radius *
                          g_CoronaCoordinateScaleFactor);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar3),(CVector3i *)&local_18);
    pCVar1 = g_CDemonRendererPtr;
    *(undefined4 *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->u + iVar3) = 0x800000;
    *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->v + iVar3) = 0x800000;
    *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->w_recip + iVar3) = 0x8000;
    *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->light + iVar3) = 0xffff;
    *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->color + iVar3) = 0xffff;
    iVar4 = iVar4 + 0xc;
    *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar3) = 0xffff;
    iVar3 = iVar3 + 0x30;
  } while (iVar4 != 0x2e8);
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&g_CoronaHeadliteTexture);
  iVar3 = 0;
  uVar2 = extraout_EDX;
  do {
    iVar3 = iVar3 + 0x24;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar2,&stack0xffffffbc));
    engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
              (this_ptr_00,in_stack_ffffffbc);
    uVar2 = extraout_EDX_00;
  } while (iVar3 != 0xbd0);
  return;
}


// Assembly code:
// 004715e0: PUSH EBX
//   Label: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0
// 004715e1: PUSH ESI
// 004715e2: PUSH EDI
// 004715e3: PUSH EBP
// 004715e4: SUB ESP,0x40
// 004715e7: MOV EBP,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x4] (READ)
// 004715eb: LEA EAX,[EBP + 0x24]
// 004715ee: PUSH EAX
// 004715ef: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 004715f5: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004715f6: XOR ESI,ESI
// 004715f8: XOR EDI,EDI
// 004715fa: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004715ff: ADD ESP,0x8
// 00471602: FILD dword ptr [EDI + 0x66f014]
//   Label: LAB_00471602
//   XREF to: 0066f014 (READ)
//   XREF to: 0066f020 (READ)
// 00471608: FMUL double ptr [0x0061ec52]
//   XREF to: 0061ec52 (READ)
// 0047160e: FMUL float ptr [EBP + 0x30]
// 00471611: FILD dword ptr [EDI + 0x66f018]
//   XREF to: 0066f018 (READ)
//   XREF to: 0066f024 (READ)
// 00471617: FMUL double ptr [0x0061ec52]
//   XREF to: 0061ec52 (READ)
// 0047161d: FXCH
// 0047161f: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (WRITE)
// 00471623: FMUL float ptr [EBP + 0x30]
// 00471626: FILD dword ptr [EDI + 0x66f01c]
//   XREF to: 0066f01c (READ)
//   XREF to: 0066f028 (READ)
// 0047162c: FMUL double ptr [0x0061ec52]
//   XREF to: 0061ec52 (READ)
// 00471632: FXCH
// 00471634: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x24] (WRITE)
// 00471638: FMUL float ptr [EBP + 0x30]
// 0047163b: LEA EBX,[ESP + 0x34]
//   XREF to: Stack[-0x1c] (DATA)
// 0047163f: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x28] (DATA)
// 00471643: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 00471649: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (WRITE)
// 0047164d: FLD float ptr [EAX]
//   XREF to: Stack[-0x28] (DATA)
// 0047164f: FMUL float ptr [0x0065c8c0]
//   XREF to: 0065c8c0 (READ)
// 00471655: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x1c] (DATA)
// 00471657: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0047165a: FMUL float ptr [0x0065c8c0]
//   XREF to: 0065c8c0 (READ)
// 00471660: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x18] (WRITE)
// 00471663: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00471666: FMUL float ptr [0x0065c8c0]
//   XREF to: 0065c8c0 (READ)
// 0047166c: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x14] (WRITE)
// 0047166f: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x1c] (DATA)
// 00471673: PUSH EAX
// 00471674: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00471676: ADD EAX,ESI
// 00471678: PUSH EAX
// 00471679: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0047167e: MOV EAX,[0x006703e8]
//   XREF to: 006703e8 (READ)
// 00471683: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00471685: MOV dword ptr [ESI + EBX*0x1 + 0x18],0x800000
//   XREF to: 00800000 (DATA)
// 0047168d: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0047168f: MOV dword ptr [ESI + EBX*0x1 + 0x1c],0x800000
//   XREF to: 00800000 (DATA)
// 00471697: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00471699: MOV dword ptr [ESI + EBX*0x1 + 0x2c],0x8000
// 004716a1: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004716a3: MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff
// 004716ab: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004716ad: MOV dword ptr [EDX + ESI*0x1 + 0x24],0xffff
// 004716b5: ADD ESI,0x30
// 004716b8: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004716ba: ADD EDI,0xc
// 004716bd: ADD ESP,0x8
// 004716c0: MOV dword ptr [ESI + EAX*0x1 + -0x8],0xffff
// 004716c8: CMP EDI,0x2e8
// 004716ce: JNZ 0x00471602
//   XREF to: 00471602 (CONDITIONAL_JUMP)
// 004716d4: PUSH 0x66effc
//   XREF to: 0066effc (DATA)
// 004716d9: CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   XREF to: 005dd800 (UNCONDITIONAL_CALL)
// 004716de: XOR EBX,EBX
// 004716e0: ADD ESP,0x4
// 004716e3: MOV EAX,dword ptr [EBX + 0x66f2fc]
//   Label: LAB_004716e3
//   XREF to: 0066f2fc (READ)
//   XREF to: 0066f320 (READ)
// 004716e9: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 004716ed: MOV EAX,dword ptr [EBX + 0x66f300]
//   XREF to: 0066f300 (READ)
//   XREF to: 0066f324 (READ)
// 004716f3: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 004716f7: MOV EAX,dword ptr [EBX + 0x66f304]
//   XREF to: 0066f304 (READ)
//   XREF to: 0066f328 (READ)
// 004716fd: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00471701: MOV EAX,dword ptr [EBX + 0x66f308]
//   XREF to: 0066f308 (READ)
//   XREF to: 0066f32c (READ)
// 00471707: FILD dword ptr [EBX + 0x66f30c]
//   XREF to: 0066f30c (READ)
//   XREF to: 0066f330 (READ)
// 0047170d: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00471711: MOV EAX,dword ptr [EBX + 0x66f310]
//   XREF to: 0066f310 (READ)
//   XREF to: 0066f334 (READ)
// 00471717: FMUL float ptr [EBP + 0x30]
// 0047171a: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0047171e: MOV EAX,dword ptr [EBX + 0x66f314]
//   XREF to: 0066f314 (READ)
//   XREF to: 0066f338 (READ)
// 00471724: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00471728: MOV EAX,dword ptr [EBX + 0x66f318]
//   XREF to: 0066f318 (READ)
//   XREF to: 0066f33c (READ)
// 0047172e: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00471732: MOV EAX,dword ptr [EBX + 0x66f31c]
//   XREF to: 0066f31c (READ)
//   XREF to: 0066f340 (READ)
// 00471738: MOV ECX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 0047173e: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00471742: MOV EAX,ESP
// 00471744: ADD EBX,0x24
// 00471747: PUSH EAX
// 00471748: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047174d: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0047174e: FISTP dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x3c] (WRITE)
// 00471752: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 00471757: ADD ESP,0x8
// 0047175a: CMP EBX,0xbd0
// 00471760: JNZ 0x004716e3
//   XREF to: 004716e3 (CONDITIONAL_JUMP)
// 00471762: ADD ESP,0x40
// 00471765: POP EBP
// 00471766: POP EDI
// 00471767: POP ESI
// 00471768: POP EBX
// 00471769: RET

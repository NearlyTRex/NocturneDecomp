// Name: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400
// Address: 00471400
// Address Range: [[00471400, 004715d0]]
// Convention: __cdecl
// Signature: void core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400(CDemonGlobe * this_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0 (004518f0) at 00451bcb [UNCONDITIONAL_CALL]
// Globals:
//   double g_CoronaRadiusScaleFactor = 0.00390625
//   float g_CoronaCoordinateScaleFactor = 256
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
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_dcamera.cpp_initializeCoronaBuffers_FUN_004502e0
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00471400(CDemonGlobe *this_ptr)

{
  float fVar1;
  CDemonRenderer *this_ptr_00;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  undefined4 extraout_EDX_00;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  RenderScanlineFunc *unaff_ESI;
  int iVar3;
  int iVar4;
  float10 fVar5;
  code *prim;
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  CVector3i local_28;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
            (g_CDemonRendererPtr,&local_14);
  local_1c = local_10 - (this_ptr->position).x;
  local_18 = local_c - (this_ptr->position).y;
  local_14 = unaff_EBP - (this_ptr->position).z;
  if (&local_10 != &local_1c) {
    local_10 = local_1c;
    local_c = local_18;
    unaff_EBP = local_14;
  }
  if (this_ptr->radius_squared <= unaff_EBP * unaff_EBP + local_10 * local_10 + local_c * local_c) {
    fVar1 = this_ptr->radius * (float)g_CoronaRadiusScaleFactor;
    iVar4 = 0;
    iVar3 = 0;
    do {
      local_34 = (float)*(int *)((int)&g_CoronaVertexPositions[0].x + iVar3) * fVar1;
      local_30 = (float)*(int *)((int)&g_CoronaVertexPositions[0].y + iVar3) * fVar1;
      local_2c = (float)*(int *)((int)&g_CoronaVertexPositions[0].z + iVar3) * fVar1;
      local_28.x = (int)ROUND(local_34 * g_CoronaCoordinateScaleFactor);
      local_28.y = (int)ROUND(local_30 * g_CoronaCoordinateScaleFactor);
      local_28.z = (int)ROUND(local_2c * g_CoronaCoordinateScaleFactor);
      iVar3 = iVar3 + 0xc;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar4),&local_28);
      iVar4 = iVar4 + 0x30;
    } while (iVar3 != 0x2e8);
    iVar3 = 0;
    uVar2 = extraout_EDX;
    do {
      this_ptr_00 = g_CDemonRendererPtr;
      local_58 = *(undefined4 *)((int)g_CoronaFacePrimitives[0].vertices + iVar3 + -0x14);
      local_54 = *(undefined4 *)((int)g_CoronaFacePrimitives[0].vertices + iVar3 + -0x10);
      local_50 = *(undefined4 *)((int)g_CoronaFacePrimitives[0].vertices + iVar3 + -0xc);
      local_4c = *(undefined4 *)((int)g_CoronaFacePrimitives[0].vertices + iVar3 + -8);
      local_44 = *(undefined4 *)((int)g_CoronaFacePrimitives[0].vertices + iVar3);
      fVar5 = (float10)*(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar3 + -4) *
              (float10)this_ptr->radius;
      local_40 = *(undefined4 *)((int)g_CoronaFacePrimitives[0].vertices + iVar3 + 4);
      local_3c = *(undefined4 *)((int)g_CoronaFacePrimitives[0].vertices + iVar3 + 8);
      prim = core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320;
      local_38 = *(undefined4 *)((int)g_CoronaFacePrimitives[0].vertices + iVar3 + 0xc);
      iVar3 = iVar3 + 0x24;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar2,local_5c));
      local_44 = (int)ROUND(fVar5);
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
                (this_ptr_00,(SMRGLHeaderPrimitive *)prim,unaff_ESI);
      uVar2 = extraout_EDX_00;
    } while (iVar3 != 0xbd0);
    return;
  }
  core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0();
  return;
}


// Assembly code:
// 00471400: PUSH EBX
//   Label: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400
// 00471401: PUSH EBP
// 00471402: SUB ESP,0x5c
// 00471405: MOV EBP,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x4] (READ)
// 00471409: LEA EBX,[EBP + 0x24]
// 0047140c: PUSH EBX
// 0047140d: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 00471413: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00471414: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00471419: ADD ESP,0x8
// 0047141c: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x18] (DATA)
// 00471420: PUSH EAX
// 00471421: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00471427: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00471428: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   XREF to: 0048c780 (UNCONDITIONAL_CALL)
// 0047142d: ADD ESP,0x8
// 00471430: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x24] (DATA)
// 00471434: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x18] (READ)
// 00471438: FSUB float ptr [EBX]
// 0047143a: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x14] (READ)
// 0047143e: FXCH
// 00471440: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x24] (WRITE)
// 00471444: FSUB float ptr [EBX + 0x4]
// 00471447: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x10] (READ)
// 0047144b: FXCH
// 0047144d: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x20] (WRITE)
// 00471451: FSUB float ptr [EBX + 0x8]
// 00471454: LEA EDX,[ESP + 0x4c]
//   XREF to: Stack[-0x18] (DATA)
// 00471458: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x1c] (WRITE)
// 0047145c: CMP EDX,EAX
// 0047145e: JNZ 0x004715a9
//   XREF to: 004715a9 (CONDITIONAL_JUMP)
// 00471464: FLD float ptr [ESP + 0x50]
//   Label: LAB_00471464
//   XREF to: Stack[-0x14] (READ)
// 00471468: FMUL ST0
// 0047146a: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x18] (READ)
// 0047146e: FMUL ST0
// 00471470: FADDP
// 00471472: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x10] (READ)
// 00471476: FMUL ST0
// 00471478: FADDP
// 0047147a: FCOMP float ptr [EBP + 0x18]
// 0047147d: FNSTSW AX
// 0047147f: SAHF
// 00471480: JC 0x004715c6
//   XREF to: 004715c6 (CONDITIONAL_JUMP)
// 00471486: PUSH EDI
// 00471487: PUSH ESI
// 00471488: FLD float ptr [EBP + 0x30]
// 0047148b: FMUL double ptr [0x0061ec4a]
//   XREF to: 0061ec4a (READ)
// 00471491: XOR EDI,EDI
// 00471493: XOR ESI,ESI
// 00471495: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0xc] (WRITE)
// 00471499: FILD dword ptr [ESI + 0x66f014]
//   Label: LAB_00471499
//   XREF to: 0066f014 (READ)
//   XREF to: 0066f020 (READ)
// 0047149f: FMUL float ptr [ESP + 0x60]
//   XREF to: Stack[-0xc] (READ)
// 004714a3: FILD dword ptr [ESI + 0x66f018]
//   XREF to: 0066f018 (READ)
//   XREF to: 0066f024 (READ)
// 004714a9: FMUL float ptr [ESP + 0x60]
//   XREF to: Stack[-0xc] (READ)
// 004714ad: FILD dword ptr [ESI + 0x66f01c]
//   XREF to: 0066f01c (READ)
//   XREF to: 0066f028 (READ)
// 004714b3: FMUL float ptr [ESP + 0x60]
//   XREF to: Stack[-0xc] (READ)
// 004714b7: LEA EBX,[ESP + 0x3c]
//   XREF to: Stack[-0x30] (DATA)
// 004714bb: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x3c] (DATA)
// 004714bf: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 004714c5: FXCH ST2
// 004714c7: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x3c] (WRITE)
// 004714cb: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x38] (WRITE)
// 004714cf: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x34] (WRITE)
// 004714d3: FLD float ptr [EAX]
//   XREF to: Stack[-0x3c] (DATA)
// 004714d5: FMUL float ptr [0x0065c8c0]
//   XREF to: 0065c8c0 (READ)
// 004714db: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x30] (DATA)
// 004714dd: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x38] (READ)
// 004714e0: FMUL float ptr [0x0065c8c0]
//   XREF to: 0065c8c0 (READ)
// 004714e6: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x2c] (WRITE)
// 004714e9: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 004714ec: FMUL float ptr [0x0065c8c0]
//   XREF to: 0065c8c0 (READ)
// 004714f2: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 004714f5: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x30] (DATA)
// 004714f9: PUSH EAX
// 004714fa: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004714fc: ADD EAX,EDI
// 004714fe: PUSH EAX
// 004714ff: ADD ESI,0xc
// 00471502: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00471507: ADD EDI,0x30
// 0047150a: ADD ESP,0x8
// 0047150d: CMP ESI,0x2e8
// 00471513: JNZ 0x00471499
//   XREF to: 00471499 (CONDITIONAL_JUMP)
// 00471515: XOR EBX,EBX
// 00471517: MOV EAX,dword ptr [EBX + 0x66f2fc]
//   Label: LAB_00471517
//   XREF to: 0066f2fc (READ)
//   XREF to: 0066f320 (READ)
// 0047151d: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 00471521: MOV EAX,dword ptr [EBX + 0x66f300]
//   XREF to: 0066f300 (READ)
//   XREF to: 0066f324 (READ)
// 00471527: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0047152b: MOV EAX,dword ptr [EBX + 0x66f304]
//   XREF to: 0066f304 (READ)
//   XREF to: 0066f328 (READ)
// 00471531: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00471535: MOV EAX,dword ptr [EBX + 0x66f308]
//   XREF to: 0066f308 (READ)
//   XREF to: 0066f32c (READ)
// 0047153b: FILD dword ptr [EBX + 0x66f30c]
//   XREF to: 0066f30c (READ)
//   XREF to: 0066f330 (READ)
// 00471541: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00471545: MOV EAX,dword ptr [EBX + 0x66f310]
//   XREF to: 0066f310 (READ)
//   XREF to: 0066f334 (READ)
// 0047154b: FMUL float ptr [EBP + 0x30]
// 0047154e: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00471552: MOV EAX,dword ptr [EBX + 0x66f314]
//   XREF to: 0066f314 (READ)
//   XREF to: 0066f338 (READ)
// 00471558: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0047155c: MOV EAX,dword ptr [EBX + 0x66f318]
//   XREF to: 0066f318 (READ)
//   XREF to: 0066f33c (READ)
// 00471562: PUSH 0x450320
//   XREF to: 00450320 (DATA)
// 00471567: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0047156b: MOV EAX,dword ptr [EBX + 0x66f31c]
//   XREF to: 0066f31c (READ)
//   XREF to: 0066f340 (READ)
// 00471571: MOV ESI,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 00471577: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0047157b: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x64] (DATA)
// 0047157f: ADD EBX,0x24
// 00471582: PUSH EAX
// 00471583: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00471588: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00471589: FISTP dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x50] (WRITE)
// 0047158d: CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
//   XREF to: 0048c8d0 (UNCONDITIONAL_CALL)
// 00471592: ADD ESP,0xc
// 00471595: CMP EBX,0xbd0
// 0047159b: JNZ 0x00471517
//   XREF to: 00471517 (CONDITIONAL_JUMP)
// 004715a1: POP ESI
// 004715a2: POP EDI
// 004715a3: ADD ESP,0x5c
// 004715a6: POP EBP
// 004715a7: POP EBX
// 004715a8: RET
// 004715a9: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_004715a9
//   XREF to: Stack[-0x24] (DATA)
// 004715ad: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004715b1: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x20] (READ)
// 004715b5: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004715b9: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x1c] (READ)
// 004715bd: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004715c1: JMP 0x00471464
//   XREF to: 00471464 (UNCONDITIONAL_JUMP)
// 004715c6: CALL core_dcamera.cpp_initializeCoronaBuffers_FUN_004502e0
//   Label: LAB_004715c6
//   XREF to: 004502e0 (UNCONDITIONAL_CALL)
// 004715cb: ADD ESP,0x5c
// 004715ce: POP EBP
// 004715cf: POP EBX
// 004715d0: RET

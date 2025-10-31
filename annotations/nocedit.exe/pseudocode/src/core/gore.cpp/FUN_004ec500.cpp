// Name: core_gore.cpp_FUN_004ec500
// Address: 004ec500
// Address Range: [[004ec500, 004ecac1]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ec500()
// Cross-references:
//   core_gore.cpp_FUN_004ed830 (004ed830) at 004ed952 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062e30a = 8
//   double DOUBLE_0062e312 = 4
//   undefined4 DAT_0065f024
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic DAT_0067b9c8
//   SMRGLTextureBasic DAT_0067ba28
//   undefined4 g_RenderVertexBuffer[0].light
//   undefined4 g_RenderVertexBuffer[0].color
//   undefined4 g_RenderVertexBuffer[0].fog
//   undefined4 g_RenderVertexBuffer[1].light
//   undefined4 g_RenderVertexBuffer[1].color
//   undefined4 g_RenderVertexBuffer[1].fog
//   undefined4 g_RenderVertexBuffer[2].light
//   undefined4 g_RenderVertexBuffer[2].color
//   undefined4 g_RenderVertexBuffer[2].fog
//   undefined4 g_RenderVertexBuffer[3].light
//   undefined4 g_RenderVertexBuffer[3].color
//   undefined4 g_RenderVertexBuffer[3].fog
//   CDemonRenderer g_CDemonRendererInstance
//   SMRGLHeaderPrimitive DAT_02d83368
//   undefined4 DAT_02d83368.surface_normal.A
//   undefined4 DAT_02d83368.surface_normal.B
//   undefined4 DAT_02d83368.surface_normal.C
//   undefined4 DAT_02d83368.surface_normal.D
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_gore.cpp_FUN_004ec500(undefined4 param_1, undefined4 param_2) */

void core_gore_cpp_FUN_004ec500
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,int param_6)

{
  uint uVar1;
  CVector3i *input;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  float10 fVar2;
  CVector3i local_68;
  CVector3i local_5c;
  undefined1 local_48 [12];
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  CVector3i local_24;
  int local_18;
  int local_14;
  
  fVar2 = (float10)(float)param_5[9] * (float10)DOUBLE_0062e30a + (float10)DOUBLE_0062e312;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(param_2,param_1));
  if (((-1 < (int)ROUND(fVar2)) && (0xf < (int)ROUND(fVar2))) && (param_6 != 0)) {
    *param_5 = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(param_5 + 1));
  if (param_5[4] == 1) {
    DAT_02d83368.surface_normal.A = 0;
    DAT_02d83368.surface_normal.C = 0xffff;
    DAT_02d83368.surface_normal.B = 0;
    DAT_02d83368.surface_normal.D = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&DAT_0067ba28 + param_5[10] * 0x10 + unaff_EDI);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)(param_5 + 6),(CVector3i *)0x0);
    local_68.x = -0x41000000;
    local_68.y = -0x41000000;
    local_68.z = 0;
    local_5c.x = (int)ROUND(_DAT_0065f024 * -0.5);
    local_5c.y = (int)ROUND(_DAT_0065f024 * -0.5);
    local_5c.z = (int)ROUND(_DAT_0065f024 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_5c);
    local_68.y = 0x3f000000;
    local_5c.x = 0;
    local_68.z = -0x41000000;
    local_48._8_4_ = (undefined4)ROUND(_DAT_0065f024 * 0.5);
    local_3c = (int)ROUND(_DAT_0065f024 * -0.5);
    local_38 = (int)ROUND(_DAT_0065f024 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)(local_48 + 8));
    local_68.z = 0x3f000000;
    local_5c.y = 0;
    local_5c.x = 0x3f000000;
    local_24.x = (int)ROUND(_DAT_0065f024 * 0.5);
    local_24.y = (int)ROUND(_DAT_0065f024 * 0.5);
    local_24.z = (int)ROUND(_DAT_0065f024 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_24);
    local_5c.x = -0x41000000;
    local_5c.z = 0;
    local_5c.y = 0x3f000000;
    local_68.x = (int)ROUND(_DAT_0065f024 * -0.5);
    local_68.y = (int)ROUND(_DAT_0065f024 * 0.5);
    local_68.z = (int)ROUND(_DAT_0065f024 * 0.0);
    input = &local_68;
  }
  else {
    if (param_6 != 0) {
      *param_5 = 1;
    }
    DAT_02d83368.surface_normal.B = 0xffff;
    DAT_02d83368.surface_normal.A = 0;
    DAT_02d83368.surface_normal.C = 0;
    DAT_02d83368.surface_normal.D = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&DAT_0067b9c8 + param_5[10]);
    local_38 = -0x41000000;
    local_34 = 0;
    local_30 = 0xbf000000;
    local_18 = (int)ROUND(_DAT_0065f024 * -0.5);
    local_14 = (int)ROUND(_DAT_0065f024 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)&local_14);
    local_34 = 0x3f000000;
    local_2c = 0xbf000000;
    local_30 = 0;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)&stack0xffffff84);
    local_30 = 0x3f000000;
    local_2c = 0;
    local_28 = 0x3f000000;
    local_48._0_4_ = (undefined4)ROUND(_DAT_0065f024 * 0.5);
    local_48._4_4_ = (undefined4)ROUND(_DAT_0065f024 * 0.0);
    local_48._8_4_ = (undefined4)ROUND(_DAT_0065f024 * 0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)local_48);
    local_2c = 0xbf000000;
    local_24.x = 0x3f000000;
    local_28 = 0;
    local_14 = (int)ROUND(_DAT_0065f024 * -0.5);
    input = (CVector3i *)&local_14;
  }
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,input);
  uVar1 = param_5[5];
  if (uVar1 == 0) {
LAB_004ec747:
    g_RenderVertexBuffer[0].light = 1.14794e-41;
    g_RenderVertexBuffer[0].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[0].color = 0x7f80;
    g_RenderVertexBuffer[0].light = 0.0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ec747;
    g_RenderVertexBuffer[0].color = 0;
    g_RenderVertexBuffer[0].light = 0.0;
  }
  g_RenderVertexBuffer[0].fog = 0.0;
  uVar1 = param_5[5];
  if (uVar1 == 0) {
LAB_004ec774:
    g_RenderVertexBuffer[1].light = 1.14794e-41;
    g_RenderVertexBuffer[1].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[1].color = 0x7f80;
    g_RenderVertexBuffer[1].light = 0.0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ec774;
    g_RenderVertexBuffer[1].color = 0;
    g_RenderVertexBuffer[1].light = 0.0;
  }
  g_RenderVertexBuffer[1].fog = 0.0;
  uVar1 = param_5[5];
  if (uVar1 == 0) {
LAB_004ec7a1:
    g_RenderVertexBuffer[2].light = 1.14794e-41;
    g_RenderVertexBuffer[2].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[2].color = 0x7f80;
    g_RenderVertexBuffer[2].light = 0.0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ec7a1;
    g_RenderVertexBuffer[2].color = 0;
    g_RenderVertexBuffer[2].light = 0.0;
  }
  g_RenderVertexBuffer[2].fog = 0.0;
  uVar1 = param_5[5];
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      g_RenderVertexBuffer[3].color = 0x7f80;
      g_RenderVertexBuffer[3].light = 0.0;
      goto LAB_004ec7e0;
    }
    if (uVar1 == 2) {
      g_RenderVertexBuffer[3].color = 0;
      g_RenderVertexBuffer[3].light = 0.0;
      goto LAB_004ec7e0;
    }
  }
  g_RenderVertexBuffer[3].light = 1.14794e-41;
  g_RenderVertexBuffer[3].color = 0;
LAB_004ec7e0:
  g_RenderVertexBuffer[3].fog = 0.0;
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,&DAT_02d83368);
  if (param_5[4] == 1) {
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    return;
  }
  return;
}


// Assembly code:
// 004ec500: PUSH EBX
//   Label: core_gore.cpp_FUN_004ec500
// 004ec501: PUSH ESI
// 004ec502: PUSH EDI
// 004ec503: PUSH EBP
// 004ec504: SUB ESP,0x7c
// 004ec507: MOV ESI,dword ptr [ESP + 0x90]
// 004ec50e: MOV EBX,dword ptr [ESP + 0x94]
// 004ec515: FLD float ptr [ESI + 0x24]
// 004ec518: FMUL double ptr [0x0062e30a]
//   XREF to: 0062e30a (READ)
// 004ec51e: FADD double ptr [0x0062e312]
//   XREF to: 0062e312 (READ)
// 004ec524: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004ec529: FISTP dword ptr [ESP + 0x78]
// 004ec52d: MOV EDX,dword ptr [ESP + 0x78]
// 004ec531: TEST EDX,EDX
// 004ec533: JL 0x004ec808
//   XREF to: 004ec808 (CONDITIONAL_JUMP)
// 004ec539: CMP EDX,0xf
// 004ec53c: JLE 0x004ec550
//   XREF to: 004ec550 (CONDITIONAL_JUMP)
// 004ec53e: MOV dword ptr [ESP + 0x78],0xf
// 004ec546: TEST EBX,EBX
// 004ec548: JZ 0x004ec550
//   XREF to: 004ec550 (CONDITIONAL_JUMP)
// 004ec54a: MOV dword ptr [ESI],0x1
// 004ec550: LEA EAX,[ESI + 0x4]
//   Label: LAB_004ec550
// 004ec553: PUSH EAX
// 004ec554: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004ec559: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004ec55a: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004ec55f: MOV EDX,dword ptr [ESI + 0x10]
// 004ec562: ADD ESP,0x8
// 004ec565: CMP EDX,0x1
// 004ec568: JNZ 0x004ec813
//   XREF to: 004ec813 (CONDITIONAL_JUMP)
// 004ec56e: XOR EDX,EDX
// 004ec570: MOV EBX,0xffff
// 004ec575: MOV dword ptr [0x02d83370],EDX
//   XREF to: 02d83370 (WRITE)
// 004ec57b: MOV dword ptr [0x02d83378],EBX
//   XREF to: 02d83378 (WRITE)
// 004ec581: MOV EBX,dword ptr [ESI + 0x28]
// 004ec584: MOV dword ptr [0x02d83374],EDX
//   XREF to: 02d83374 (WRITE)
// 004ec58a: LEA EAX,[EBX*0x4 + 0x0]
// 004ec591: MOV dword ptr [0x02d8337c],EDX
//   XREF to: 02d8337c (WRITE)
// 004ec597: SUB EAX,EBX
// 004ec599: MOV EDX,0x67ba28
//   XREF to: 0067ba28 (DATA)
// 004ec59e: SHL EAX,0x7
// 004ec5a1: MOV EBX,dword ptr [ESP + 0x78]
// 004ec5a5: ADD EDX,EAX
// 004ec5a7: LEA EAX,[EBX*0x4 + 0x0]
// 004ec5ae: SUB EAX,EBX
// 004ec5b0: SHL EAX,0x3
// 004ec5b3: ADD EAX,EDX
// 004ec5b5: PUSH EAX
// 004ec5b6: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ec5bc: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 004ec5bd: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004ec5c2: ADD ESP,0x8
// 004ec5c5: XOR EDI,EDI
// 004ec5c7: PUSH EDI
// 004ec5c8: LEA EAX,[ESI + 0x18]
// 004ec5cb: PUSH EAX
// 004ec5cc: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004ec5d1: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004ec5d2: XOR EBX,EBX
// 004ec5d4: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004ec5d9: MOV EDX,0xbf000000
// 004ec5de: ADD ESP,0xc
// 004ec5e1: LEA EAX,[ESP + 0x18]
// 004ec5e5: MOV dword ptr [ESP + 0x18],EDX
// 004ec5e9: MOV dword ptr [ESP + 0x1c],EDX
// 004ec5ed: MOV dword ptr [ESP + 0x20],EBX
// 004ec5f1: LEA EBX,[ESP + 0x24]
// 004ec5f5: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ec5fb: FLD float ptr [EAX]
// 004ec5fd: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec603: FISTP dword ptr [EBX]
// 004ec605: FLD float ptr [EAX + 0x4]
// 004ec608: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec60e: FISTP dword ptr [EBX + 0x4]
// 004ec611: FLD float ptr [EAX + 0x8]
// 004ec614: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec61a: FISTP dword ptr [EBX + 0x8]
// 004ec61d: LEA EAX,[ESP + 0x24]
// 004ec621: PUSH EAX
// 004ec622: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004ec624: PUSH EAX
// 004ec625: MOV EBP,0xbf000000
// 004ec62a: MOV EDI,0x3f000000
// 004ec62f: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ec634: LEA EBX,[ESP + 0x44]
// 004ec638: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ec63e: ADD ESP,0x8
// 004ec641: XOR EAX,EAX
// 004ec643: MOV dword ptr [ESP + 0x18],EDI
// 004ec647: MOV dword ptr [ESP + 0x20],EAX
// 004ec64b: LEA EAX,[ESP + 0x18]
// 004ec64f: MOV dword ptr [ESP + 0x1c],EBP
// 004ec653: FLD float ptr [EAX]
// 004ec655: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec65b: FISTP dword ptr [EBX]
// 004ec65d: FLD float ptr [EAX + 0x4]
// 004ec660: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec666: FISTP dword ptr [EBX + 0x4]
// 004ec669: FLD float ptr [EAX + 0x8]
// 004ec66c: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec672: FISTP dword ptr [EBX + 0x8]
// 004ec675: LEA EAX,[ESP + 0x3c]
// 004ec679: PUSH EAX
// 004ec67a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004ec67c: ADD EAX,0x30
// 004ec67f: PUSH EAX
// 004ec680: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ec685: LEA EAX,[ESP + 0x20]
// 004ec689: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ec68f: ADD ESP,0x8
// 004ec692: XOR EBX,EBX
// 004ec694: MOV dword ptr [ESP + 0x18],EDI
// 004ec698: MOV dword ptr [ESP + 0x20],EBX
// 004ec69c: LEA EBX,[ESP + 0x54]
// 004ec6a0: MOV dword ptr [ESP + 0x1c],EDI
// 004ec6a4: FLD float ptr [EAX]
// 004ec6a6: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec6ac: FISTP dword ptr [EBX]
// 004ec6ae: FLD float ptr [EAX + 0x4]
// 004ec6b1: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec6b7: FISTP dword ptr [EBX + 0x4]
// 004ec6ba: FLD float ptr [EAX + 0x8]
// 004ec6bd: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec6c3: FISTP dword ptr [EBX + 0x8]
// 004ec6c6: LEA EAX,[ESP + 0x54]
// 004ec6ca: PUSH EAX
// 004ec6cb: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004ec6cd: ADD EAX,0x60
// 004ec6d0: PUSH EAX
// 004ec6d1: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ec6d6: LEA EBX,[ESP + 0x14]
// 004ec6da: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ec6e0: ADD ESP,0x8
// 004ec6e3: XOR EAX,EAX
// 004ec6e5: MOV dword ptr [ESP + 0x18],EBP
// 004ec6e9: MOV dword ptr [ESP + 0x20],EAX
// 004ec6ed: LEA EAX,[ESP + 0x18]
// 004ec6f1: MOV dword ptr [ESP + 0x1c],EDI
// 004ec6f5: FLD float ptr [EAX]
// 004ec6f7: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec6fd: FISTP dword ptr [EBX]
// 004ec6ff: FLD float ptr [EAX + 0x4]
// 004ec702: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec708: FISTP dword ptr [EBX + 0x4]
// 004ec70b: FLD float ptr [EAX + 0x8]
// 004ec70e: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec714: FISTP dword ptr [EBX + 0x8]
// 004ec717: LEA EAX,[ESP + 0xc]
// 004ec71b: PUSH EAX
//   Label: LAB_004ec71b
// 004ec71c: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004ec71e: ADD EAX,0x90
// 004ec723: PUSH EAX
// 004ec724: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ec729: ADD ESP,0x8
// 004ec72c: MOV EBX,0x688034
//   XREF to: 00688034 (DATA)
// 004ec731: MOV EDX,0x688038
//   XREF to: 00688038 (DATA)
// 004ec736: MOV EAX,dword ptr [ESI + 0x14]
// 004ec739: MOV ECX,0x68803c
//   XREF to: 0068803c (DATA)
// 004ec73e: CMP EAX,0x1
// 004ec741: JNC 0x004ec9e1
//   XREF to: 004ec9e1 (CONDITIONAL_JUMP)
// 004ec747: MOV dword ptr [EBX],0x2000
//   Label: LAB_004ec747
//   XREF to: 00688034 (WRITE)
// 004ec74d: MOV dword ptr [EDX],0x0
//   XREF to: 00688038 (WRITE)
// 004ec753: MOV dword ptr [ECX],0x0
//   XREF to: 0068803c (WRITE)
// 004ec759: MOV ECX,0x688064
//   Label: LAB_004ec759
//   XREF to: 00688064 (DATA)
// 004ec75e: MOV EBX,0x688068
//   XREF to: 00688068 (DATA)
// 004ec763: MOV EAX,dword ptr [ESI + 0x14]
// 004ec766: MOV EDX,0x68806c
//   XREF to: 0068806c (DATA)
// 004ec76b: CMP EAX,0x1
// 004ec76e: JNC 0x004eca24
//   XREF to: 004eca24 (CONDITIONAL_JUMP)
// 004ec774: MOV dword ptr [ECX],0x2000
//   Label: LAB_004ec774
//   XREF to: 00688064 (WRITE)
// 004ec77a: MOV dword ptr [EBX],0x0
//   XREF to: 00688068 (WRITE)
// 004ec780: MOV dword ptr [EDX],0x0
//   XREF to: 0068806c (WRITE)
// 004ec786: MOV EDX,0x688094
//   Label: LAB_004ec786
//   XREF to: 00688094 (DATA)
// 004ec78b: MOV ECX,0x688098
//   XREF to: 00688098 (DATA)
// 004ec790: MOV EAX,dword ptr [ESI + 0x14]
// 004ec793: MOV EBX,0x68809c
//   XREF to: 0068809c (DATA)
// 004ec798: CMP EAX,0x1
// 004ec79b: JNC 0x004eca67
//   XREF to: 004eca67 (CONDITIONAL_JUMP)
// 004ec7a1: MOV dword ptr [EDX],0x2000
//   Label: LAB_004ec7a1
//   XREF to: 00688094 (WRITE)
// 004ec7a7: MOV dword ptr [ECX],0x0
//   XREF to: 00688098 (WRITE)
// 004ec7ad: MOV dword ptr [EBX],0x0
//   XREF to: 0068809c (WRITE)
// 004ec7b3: MOV EBX,0x6880c4
//   Label: LAB_004ec7b3
//   XREF to: 006880c4 (DATA)
// 004ec7b8: MOV ECX,0x6880c8
//   XREF to: 006880c8 (DATA)
// 004ec7bd: MOV EAX,dword ptr [ESI + 0x14]
// 004ec7c0: MOV EDX,0x6880cc
//   XREF to: 006880cc (DATA)
// 004ec7c5: CMP EAX,0x1
// 004ec7c8: JNC 0x004ecaaa
//   XREF to: 004ecaaa (CONDITIONAL_JUMP)
// 004ec7ce: MOV dword ptr [EBX],0x2000
//   Label: LAB_004ec7ce
//   XREF to: 006880c4 (WRITE)
// 004ec7d4: MOV dword ptr [ECX],0x0
//   XREF to: 006880c8 (WRITE)
// 004ec7da: MOV dword ptr [EDX],0x0
//   XREF to: 006880cc (WRITE)
// 004ec7e0: PUSH 0x2d83368
//   Label: LAB_004ec7e0
//   XREF to: 02d83368 (DATA)
// 004ec7e5: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ec7eb: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004ec7ec: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
// 004ec7f1: MOV ECX,dword ptr [ESI + 0x10]
// 004ec7f4: ADD ESP,0x8
// 004ec7f7: CMP ECX,0x1
// 004ec7fa: JZ 0x004ecab6
//   XREF to: 004ecab6 (CONDITIONAL_JUMP)
// 004ec800: ADD ESP,0x7c
// 004ec803: POP EBP
// 004ec804: POP EDI
// 004ec805: POP ESI
// 004ec806: POP EBX
// 004ec807: RET
// 004ec808: XOR EBP,EBP
//   Label: LAB_004ec808
// 004ec80a: MOV dword ptr [ESP + 0x78],EBP
// 004ec80e: JMP 0x004ec550
//   XREF to: 004ec550 (UNCONDITIONAL_JUMP)
// 004ec813: TEST EBX,EBX
//   Label: LAB_004ec813
// 004ec815: JZ 0x004ec81d
//   XREF to: 004ec81d (CONDITIONAL_JUMP)
// 004ec817: MOV dword ptr [ESI],0x1
// 004ec81d: MOV dword ptr [0x02d83374],0xffff
//   Label: LAB_004ec81d
//   XREF to: 02d83374 (WRITE)
// 004ec827: MOV EBX,dword ptr [ESI + 0x28]
// 004ec82a: LEA EAX,[EBX*0x4 + 0x0]
// 004ec831: SUB EAX,EBX
// 004ec833: XOR ECX,ECX
// 004ec835: SHL EAX,0x3
// 004ec838: XOR EDI,EDI
// 004ec83a: ADD EAX,0x67b9c8
//   XREF to: 0067b9c8 (DATA)
// 004ec83f: MOV dword ptr [0x02d83370],ECX
//   XREF to: 02d83370 (WRITE)
// 004ec845: PUSH EAX
// 004ec846: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004ec84b: MOV dword ptr [0x02d83378],ECX
//   XREF to: 02d83378 (WRITE)
// 004ec851: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004ec852: MOV dword ptr [0x02d8337c],ECX
//   XREF to: 02d8337c (WRITE)
// 004ec858: LEA EBX,[ESP + 0x74]
// 004ec85c: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004ec861: MOV EDX,0xbf000000
// 004ec866: ADD ESP,0x8
// 004ec869: LEA EAX,[ESP + 0x48]
// 004ec86d: MOV dword ptr [ESP + 0x48],EDX
// 004ec871: MOV dword ptr [ESP + 0x4c],EDI
// 004ec875: MOV dword ptr [ESP + 0x50],EDX
// 004ec879: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ec87f: FLD float ptr [EAX]
// 004ec881: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec887: FISTP dword ptr [EBX]
// 004ec889: FLD float ptr [EAX + 0x4]
// 004ec88c: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec892: FISTP dword ptr [EBX + 0x4]
// 004ec895: FLD float ptr [EAX + 0x8]
// 004ec898: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec89e: FISTP dword ptr [EBX + 0x8]
// 004ec8a1: LEA EAX,[ESP + 0x6c]
// 004ec8a5: PUSH EAX
// 004ec8a6: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004ec8a8: PUSH EAX
// 004ec8a9: XOR EBP,EBP
// 004ec8ab: MOV EDI,0x3f000000
// 004ec8b0: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ec8b5: MOV EAX,0xbf000000
// 004ec8ba: LEA EBX,[ESP + 0x8]
// 004ec8be: ADD ESP,0x8
// 004ec8c1: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ec8c7: MOV dword ptr [ESP + 0x48],EDI
// 004ec8cb: MOV dword ptr [ESP + 0x50],EAX
// 004ec8cf: LEA EAX,[ESP + 0x48]
// 004ec8d3: MOV dword ptr [ESP + 0x4c],EBP
// 004ec8d7: FLD float ptr [EAX]
// 004ec8d9: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec8df: FISTP dword ptr [EBX]
// 004ec8e1: FLD float ptr [EAX + 0x4]
// 004ec8e4: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec8ea: FISTP dword ptr [EBX + 0x4]
// 004ec8ed: FLD float ptr [EAX + 0x8]
// 004ec8f0: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec8f6: FISTP dword ptr [EBX + 0x8]
// 004ec8f9: MOV EAX,ESP
// 004ec8fb: PUSH EAX
// 004ec8fc: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004ec8fe: ADD EAX,0x30
// 004ec901: PUSH EAX
// 004ec902: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ec907: LEA EBX,[ESP + 0x38]
// 004ec90b: LEA EAX,[ESP + 0x50]
// 004ec90f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ec915: ADD ESP,0x8
// 004ec918: XOR ECX,ECX
// 004ec91a: MOV dword ptr [ESP + 0x48],EDI
// 004ec91e: MOV dword ptr [ESP + 0x4c],ECX
// 004ec922: MOV dword ptr [ESP + 0x50],EDI
// 004ec926: FLD float ptr [EAX]
// 004ec928: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec92e: FISTP dword ptr [EBX]
// 004ec930: FLD float ptr [EAX + 0x4]
// 004ec933: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec939: FISTP dword ptr [EBX + 0x4]
// 004ec93c: FLD float ptr [EAX + 0x8]
// 004ec93f: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec945: FISTP dword ptr [EBX + 0x8]
// 004ec948: LEA EAX,[ESP + 0x30]
// 004ec94c: PUSH EAX
// 004ec94d: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004ec94f: ADD EAX,0x60
// 004ec952: PUSH EAX
// 004ec953: MOV EDI,0xbf000000
// 004ec958: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ec95d: MOV EAX,0x3f000000
// 004ec962: LEA EBX,[ESP + 0x68]
// 004ec966: ADD ESP,0x8
// 004ec969: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ec96f: MOV dword ptr [ESP + 0x48],EDI
// 004ec973: MOV dword ptr [ESP + 0x50],EAX
// 004ec977: LEA EAX,[ESP + 0x48]
// 004ec97b: MOV dword ptr [ESP + 0x4c],EBP
// 004ec97f: FLD float ptr [EAX]
// 004ec981: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec987: FISTP dword ptr [EBX]
// 004ec989: FLD float ptr [EAX + 0x4]
// 004ec98c: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec992: FISTP dword ptr [EBX + 0x4]
// 004ec995: FLD float ptr [EAX + 0x8]
// 004ec998: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ec99e: FISTP dword ptr [EBX + 0x8]
// 004ec9a1: LEA EAX,[ESP + 0x60]
// 004ec9a5: JMP 0x004ec71b
//   XREF to: 004ec71b (UNCONDITIONAL_JUMP)
// 004ec9aa: MOV EBP,0x7f80
//   Label: LAB_004ec9aa
// 004ec9af: XOR EDI,EDI
// 004ec9b1: MOV dword ptr [0x00688038],EBP
//   XREF to: 00688038 (WRITE)
// 004ec9b7: MOV dword ptr [0x0068803c],EDI
//   XREF to: 0068803c (WRITE)
// 004ec9bd: MOV dword ptr [0x00688034],EDI
//   XREF to: 00688034 (WRITE)
// 004ec9c3: JMP 0x004ec759
//   XREF to: 004ec759 (UNCONDITIONAL_JUMP)
// 004ec9c8: XOR EDX,EDX
//   Label: LAB_004ec9c8
// 004ec9ca: MOV dword ptr [0x00688038],EDX
//   XREF to: 00688038 (WRITE)
// 004ec9d0: MOV dword ptr [0x0068803c],EDX
//   XREF to: 0068803c (WRITE)
// 004ec9d6: MOV dword ptr [0x00688034],EDX
//   XREF to: 00688034 (WRITE)
// 004ec9dc: JMP 0x004ec759
//   XREF to: 004ec759 (UNCONDITIONAL_JUMP)
// 004ec9e1: JBE 0x004ec9aa
//   Label: LAB_004ec9e1
//   XREF to: 004ec9aa (CONDITIONAL_JUMP)
// 004ec9e3: CMP EAX,0x2
// 004ec9e6: JZ 0x004ec9c8
//   XREF to: 004ec9c8 (CONDITIONAL_JUMP)
// 004ec9e8: JMP 0x004ec747
//   XREF to: 004ec747 (UNCONDITIONAL_JUMP)
// 004ec9ed: MOV EBP,0x7f80
//   Label: LAB_004ec9ed
// 004ec9f2: XOR EDI,EDI
// 004ec9f4: MOV dword ptr [0x00688068],EBP
//   XREF to: 00688068 (WRITE)
// 004ec9fa: MOV dword ptr [0x0068806c],EDI
//   XREF to: 0068806c (WRITE)
// 004eca00: MOV dword ptr [0x00688064],EDI
//   XREF to: 00688064 (WRITE)
// 004eca06: JMP 0x004ec786
//   XREF to: 004ec786 (UNCONDITIONAL_JUMP)
// 004eca0b: XOR EDX,EDX
//   Label: LAB_004eca0b
// 004eca0d: MOV dword ptr [0x00688068],EDX
//   XREF to: 00688068 (WRITE)
// 004eca13: MOV dword ptr [0x0068806c],EDX
//   XREF to: 0068806c (WRITE)
// 004eca19: MOV dword ptr [0x00688064],EDX
//   XREF to: 00688064 (WRITE)
// 004eca1f: JMP 0x004ec786
//   XREF to: 004ec786 (UNCONDITIONAL_JUMP)
// 004eca24: JBE 0x004ec9ed
//   Label: LAB_004eca24
//   XREF to: 004ec9ed (CONDITIONAL_JUMP)
// 004eca26: CMP EAX,0x2
// 004eca29: JZ 0x004eca0b
//   XREF to: 004eca0b (CONDITIONAL_JUMP)
// 004eca2b: JMP 0x004ec774
//   XREF to: 004ec774 (UNCONDITIONAL_JUMP)
// 004eca30: MOV EBP,0x7f80
//   Label: LAB_004eca30
// 004eca35: XOR EDI,EDI
// 004eca37: MOV dword ptr [0x00688098],EBP
//   XREF to: 00688098 (WRITE)
// 004eca3d: MOV dword ptr [0x0068809c],EDI
//   XREF to: 0068809c (WRITE)
// 004eca43: MOV dword ptr [0x00688094],EDI
//   XREF to: 00688094 (WRITE)
// 004eca49: JMP 0x004ec7b3
//   XREF to: 004ec7b3 (UNCONDITIONAL_JUMP)
// 004eca4e: XOR EDX,EDX
//   Label: LAB_004eca4e
// 004eca50: MOV dword ptr [0x00688098],EDX
//   XREF to: 00688098 (WRITE)
// 004eca56: MOV dword ptr [0x0068809c],EDX
//   XREF to: 0068809c (WRITE)
// 004eca5c: MOV dword ptr [0x00688094],EDX
//   XREF to: 00688094 (WRITE)
// 004eca62: JMP 0x004ec7b3
//   XREF to: 004ec7b3 (UNCONDITIONAL_JUMP)
// 004eca67: JBE 0x004eca30
//   Label: LAB_004eca67
//   XREF to: 004eca30 (CONDITIONAL_JUMP)
// 004eca69: CMP EAX,0x2
// 004eca6c: JZ 0x004eca4e
//   XREF to: 004eca4e (CONDITIONAL_JUMP)
// 004eca6e: JMP 0x004ec7a1
//   XREF to: 004ec7a1 (UNCONDITIONAL_JUMP)
// 004eca73: MOV EBP,0x7f80
//   Label: LAB_004eca73
// 004eca78: XOR EDI,EDI
// 004eca7a: MOV dword ptr [0x006880c8],EBP
//   XREF to: 006880c8 (WRITE)
// 004eca80: MOV dword ptr [0x006880cc],EDI
//   XREF to: 006880cc (WRITE)
// 004eca86: MOV dword ptr [0x006880c4],EDI
//   XREF to: 006880c4 (WRITE)
// 004eca8c: JMP 0x004ec7e0
//   XREF to: 004ec7e0 (UNCONDITIONAL_JUMP)
// 004eca91: XOR EDX,EDX
//   Label: LAB_004eca91
// 004eca93: MOV dword ptr [0x006880c8],EDX
//   XREF to: 006880c8 (WRITE)
// 004eca99: MOV dword ptr [0x006880cc],EDX
//   XREF to: 006880cc (WRITE)
// 004eca9f: MOV dword ptr [0x006880c4],EDX
//   XREF to: 006880c4 (WRITE)
// 004ecaa5: JMP 0x004ec7e0
//   XREF to: 004ec7e0 (UNCONDITIONAL_JUMP)
// 004ecaaa: JBE 0x004eca73
//   Label: LAB_004ecaaa
//   XREF to: 004eca73 (CONDITIONAL_JUMP)
// 004ecaac: CMP EAX,0x2
// 004ecaaf: JZ 0x004eca91
//   XREF to: 004eca91 (CONDITIONAL_JUMP)
// 004ecab1: JMP 0x004ec7ce
//   XREF to: 004ec7ce (UNCONDITIONAL_JUMP)
// 004ecab6: MOV EBX,dword ptr [0x006703ec]
//   Label: LAB_004ecab6
//   XREF to: 006703ec (READ)
// 004ecabc: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004ecabd: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)

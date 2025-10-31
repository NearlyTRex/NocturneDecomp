// Name: core_gore.cpp_FUN_004ecce0
// Address: 004ecce0
// Address Range: [[004ecce0, 004ed09e]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ecce0()
// Cross-references:
//   core_gore.cpp_FUN_004ed830 (004ed830) at 004ed8ca [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062e38a = 8
//   undefined4 DAT_0065f024
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic DAT_0067c028
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
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_gore.cpp_FUN_004ecce0(undefined4 param_1, undefined4 param_2) */

void core_gore_cpp_FUN_004ecce0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 param_6,int param_7)

{
  uint uVar1;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  float10 fVar2;
  CVector3i local_34;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  fVar2 = (float10)(float)param_5[6] * (float10)DOUBLE_0062e38a;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(param_2,param_1));
  if (((-1 < (int)ROUND(fVar2)) && (0x1c < (int)ROUND(fVar2))) && (param_7 != 0)) {
    *param_5 = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(param_5 + 1));
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&DAT_0067c028 + param_5[5] * 0x1d + unaff_EDI);
  local_34.z = -0x40556042;
  local_24 = 0xbfaa9fbe;
  local_28 = 0;
  local_14 = (int)ROUND(_DAT_0065f024 * -1.333);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)&local_14);
  local_28 = 0x3faa9fbe;
  local_24 = 0;
  local_20 = 0xbfaa9fbe;
  local_34.x = (int)ROUND(_DAT_0065f024 * 1.333);
  local_34.y = (int)ROUND(_DAT_0065f024 * 0.0);
  local_34.z = (int)ROUND(_DAT_0065f024 * -1.333);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_34);
  local_24 = 0x3faa9fbe;
  local_1c = 0x3faa9fbe;
  local_20 = 0;
  local_18 = (int)ROUND(_DAT_0065f024 * 1.333);
  local_14 = (int)ROUND(_DAT_0065f024 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)&local_18);
  local_20 = 0xbfaa9fbe;
  local_1c = 0;
  local_18 = 0x3faa9fbe;
  local_34.x = (int)ROUND(_DAT_0065f024 * 0.0);
  local_34.y = (int)ROUND(_DAT_0065f024 * 1.333);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
             (CVector3i *)&stack0xffffffc8);
  uVar1 = param_5[4];
  if (uVar1 == 0) {
LAB_004eced9:
    g_RenderVertexBuffer[0].light = 1.14794e-41;
    g_RenderVertexBuffer[0].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[0].light = 0.0;
    g_RenderVertexBuffer[0].color = 0x7f80;
  }
  else {
    if (uVar1 != 2) goto LAB_004eced9;
    g_RenderVertexBuffer[0].color = 0;
    g_RenderVertexBuffer[0].light = 0.0;
  }
  g_RenderVertexBuffer[0].fog = 0.0;
  uVar1 = param_5[4];
  if (uVar1 == 0) {
LAB_004ecf06:
    g_RenderVertexBuffer[1].light = 1.14794e-41;
    g_RenderVertexBuffer[1].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[1].color = 0x7f80;
    g_RenderVertexBuffer[1].light = 0.0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ecf06;
    g_RenderVertexBuffer[1].color = 0;
    g_RenderVertexBuffer[1].light = 0.0;
  }
  g_RenderVertexBuffer[1].fog = 0.0;
  uVar1 = param_5[4];
  if (uVar1 == 0) {
LAB_004ecf33:
    g_RenderVertexBuffer[2].light = 1.14794e-41;
    g_RenderVertexBuffer[2].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[2].color = 0x7f80;
    g_RenderVertexBuffer[2].light = 0.0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ecf33;
    g_RenderVertexBuffer[2].color = 0;
    g_RenderVertexBuffer[2].light = 0.0;
  }
  g_RenderVertexBuffer[2].fog = 0.0;
  uVar1 = param_5[4];
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      g_RenderVertexBuffer[3].color = 0x7f80;
      g_RenderVertexBuffer[3].light = 0.0;
      goto LAB_004ecf83;
    }
    if (uVar1 == 2) {
      g_RenderVertexBuffer[3].color = 0;
      g_RenderVertexBuffer[3].light = 0.0;
      goto LAB_004ecf83;
    }
  }
  g_RenderVertexBuffer[3].light = 1.14794e-41;
  g_RenderVertexBuffer[3].color = 0;
LAB_004ecf83:
  g_RenderVertexBuffer[3].fog = 0.0;
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,&DAT_02d83368);
  return;
}


// Assembly code:
// 004ecce0: PUSH EBX
//   Label: core_gore.cpp_FUN_004ecce0
// 004ecce1: PUSH ESI
// 004ecce2: PUSH EDI
// 004ecce3: PUSH EBP
// 004ecce4: SUB ESP,0x40
// 004ecce7: MOV ESI,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x4] (READ)
// 004ecceb: FLD float ptr [ESI + 0x18]
// 004eccee: FMUL double ptr [0x0062e38a]
//   XREF to: 0062e38a (READ)
// 004eccf4: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004eccf9: FISTP dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (WRITE)
// 004eccfd: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 004ecd01: TEST EDX,EDX
// 004ecd03: JL 0x004ecf9f
//   XREF to: 004ecf9f (CONDITIONAL_JUMP)
// 004ecd09: CMP EDX,0x1c
// 004ecd0c: JLE 0x004ecd25
//   XREF to: 004ecd25 (CONDITIONAL_JUMP)
// 004ecd0e: MOV EBX,0x1c
// 004ecd13: MOV EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 004ecd17: MOV dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 004ecd1b: TEST EDI,EDI
// 004ecd1d: JZ 0x004ecd25
//   XREF to: 004ecd25 (CONDITIONAL_JUMP)
// 004ecd1f: MOV dword ptr [ESI],0x1
// 004ecd25: LEA EAX,[ESI + 0x4]
//   Label: LAB_004ecd25
// 004ecd28: PUSH EAX
// 004ecd29: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004ecd2e: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004ecd2f: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004ecd34: IMUL EAX,dword ptr [ESI + 0x14],0x2b8
// 004ecd3b: ADD ESP,0x8
// 004ecd3e: MOV EBX,0x67c028
//   XREF to: 0067c028 (DATA)
// 004ecd43: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 004ecd47: ADD EBX,EAX
// 004ecd49: LEA EAX,[EDX*0x4 + 0x0]
// 004ecd50: SUB EAX,EDX
// 004ecd52: SHL EAX,0x3
// 004ecd55: ADD EAX,EBX
// 004ecd57: PUSH EAX
// 004ecd58: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004ecd5e: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004ecd5f: XOR EDI,EDI
// 004ecd61: MOV EBX,0xbfaa9fbe
// 004ecd66: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004ecd6b: MOV EBP,EBX
// 004ecd6d: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x38] (DATA)
// 004ecd71: ADD ESP,0x8
// 004ecd74: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004ecd7a: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 004ecd7e: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 004ecd82: LEA EBX,[ESP + 0x30]
//   XREF to: Stack[-0x20] (DATA)
// 004ecd86: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 004ecd8a: FLD float ptr [EAX]
//   XREF to: Stack[-0x38] (DATA)
// 004ecd8c: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ecd92: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x20] (DATA)
// 004ecd94: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 004ecd97: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ecd9d: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x1c] (WRITE)
// 004ecda0: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 004ecda3: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ecda9: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 004ecdac: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x20] (DATA)
// 004ecdb0: PUSH EAX
// 004ecdb1: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004ecdb3: PUSH EAX
// 004ecdb4: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ecdb9: MOV EAX,0x3faa9fbe
// 004ecdbe: LEA EBX,[ESP + 0x14]
//   XREF to: Stack[-0x44] (DATA)
// 004ecdc2: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004ecdc8: ADD ESP,0x8
// 004ecdcb: MOV ECX,EBP
// 004ecdcd: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004ecdd1: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 004ecdd5: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x38] (DATA)
// 004ecdd9: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 004ecddd: FLD float ptr [EAX]
//   XREF to: Stack[-0x38] (DATA)
// 004ecddf: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ecde5: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x44] (DATA)
// 004ecde7: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 004ecdea: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ecdf0: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x40] (WRITE)
// 004ecdf3: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 004ecdf6: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ecdfc: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x3c] (WRITE)
// 004ecdff: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x44] (DATA)
// 004ece03: PUSH EAX
// 004ece04: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004ece06: ADD EAX,0x30
// 004ece09: PUSH EAX
// 004ece0a: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ece0f: MOV EBX,0x3faa9fbe
// 004ece14: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x38] (DATA)
// 004ece18: ADD ESP,0x8
// 004ece1b: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004ece21: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 004ece25: MOV EBP,EBX
// 004ece27: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 004ece2b: LEA EBX,[ESP + 0x24]
//   XREF to: Stack[-0x2c] (DATA)
// 004ece2f: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 004ece33: FLD float ptr [EAX]
//   XREF to: Stack[-0x38] (DATA)
// 004ece35: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ece3b: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x2c] (DATA)
// 004ece3d: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 004ece40: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ece46: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x28] (WRITE)
// 004ece49: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 004ece4c: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ece52: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x24] (WRITE)
// 004ece55: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x2c] (DATA)
// 004ece59: PUSH EAX
// 004ece5a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004ece5c: ADD EAX,0x60
// 004ece5f: PUSH EAX
// 004ece60: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ece65: MOV EAX,0xbfaa9fbe
// 004ece6a: LEA EBX,[ESP + 0x8]
//   XREF to: Stack[-0x50] (DATA)
// 004ece6e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004ece74: ADD ESP,0x8
// 004ece77: MOV ECX,EBP
// 004ece79: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004ece7d: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 004ece81: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x38] (DATA)
// 004ece85: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 004ece89: FLD float ptr [EAX]
//   XREF to: Stack[-0x38] (DATA)
// 004ece8b: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ece91: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x50] (DATA)
// 004ece93: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 004ece96: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ece9c: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x4c] (WRITE)
// 004ece9f: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 004ecea2: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ecea8: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x48] (WRITE)
// 004eceab: MOV EAX,ESP
// 004ecead: PUSH EAX
// 004eceae: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004eceb0: ADD EAX,0x90
// 004eceb5: PUSH EAX
// 004eceb6: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ecebb: MOV EBX,0x688034
//   XREF to: 00688034 (DATA)
// 004ecec0: MOV ECX,0x688038
//   XREF to: 00688038 (DATA)
// 004ecec5: MOV EDX,0x68803c
//   XREF to: 0068803c (DATA)
// 004ececa: MOV EAX,dword ptr [ESI + 0x10]
// 004ececd: ADD ESP,0x8
// 004eced0: CMP EAX,0x1
// 004eced3: JNC 0x004ecfdd
//   XREF to: 004ecfdd (CONDITIONAL_JUMP)
// 004eced9: MOV dword ptr [EBX],0x2000
//   Label: LAB_004eced9
//   XREF to: 00688034 (WRITE)
// 004ecedf: MOV dword ptr [ECX],0x0
//   XREF to: 00688038 (WRITE)
// 004ecee5: MOV dword ptr [EDX],0x0
//   XREF to: 0068803c (WRITE)
// 004eceeb: MOV EBX,0x688064
//   Label: LAB_004eceeb
//   XREF to: 00688064 (DATA)
// 004ecef0: MOV EDX,0x688068
//   XREF to: 00688068 (DATA)
// 004ecef5: MOV EAX,dword ptr [ESI + 0x10]
// 004ecef8: MOV ECX,0x68806c
//   XREF to: 0068806c (DATA)
// 004ecefd: CMP EAX,0x1
// 004ecf00: JNC 0x004ed01e
//   XREF to: 004ed01e (CONDITIONAL_JUMP)
// 004ecf06: MOV dword ptr [EBX],0x2000
//   Label: LAB_004ecf06
//   XREF to: 00688064 (WRITE)
// 004ecf0c: MOV dword ptr [EDX],0x0
//   XREF to: 00688068 (WRITE)
// 004ecf12: MOV dword ptr [ECX],0x0
//   XREF to: 0068806c (WRITE)
// 004ecf18: MOV ECX,0x688094
//   Label: LAB_004ecf18
//   XREF to: 00688094 (DATA)
// 004ecf1d: MOV EBX,0x688098
//   XREF to: 00688098 (DATA)
// 004ecf22: MOV EAX,dword ptr [ESI + 0x10]
// 004ecf25: MOV EDX,0x68809c
//   XREF to: 0068809c (DATA)
// 004ecf2a: CMP EAX,0x1
// 004ecf2d: JNC 0x004ed05f
//   XREF to: 004ed05f (CONDITIONAL_JUMP)
// 004ecf33: MOV dword ptr [ECX],0x2000
//   Label: LAB_004ecf33
//   XREF to: 00688094 (WRITE)
// 004ecf39: MOV dword ptr [EBX],0x0
//   XREF to: 00688098 (WRITE)
// 004ecf3f: MOV dword ptr [EDX],0x0
//   XREF to: 0068809c (WRITE)
// 004ecf45: MOV EDX,0x6880c4
//   Label: LAB_004ecf45
//   XREF to: 006880c4 (PARAM)
// 004ecf4a: MOV ECX,0x6880c8
//   XREF to: 006880c8 (DATA)
// 004ecf4f: MOV EAX,dword ptr [ESI + 0x10]
// 004ecf52: MOV EBX,0x6880cc
//   XREF to: 006880cc (PARAM)
// 004ecf57: CMP EAX,0x1
// 004ecf5a: JC 0x004ed06b
//   XREF to: 004ed06b (CONDITIONAL_JUMP)
// 004ecf60: JBE 0x004ed082
//   XREF to: 004ed082 (CONDITIONAL_JUMP)
// 004ecf66: CMP EAX,0x2
// 004ecf69: JNZ 0x004ed06b
//   XREF to: 004ed06b (CONDITIONAL_JUMP)
// 004ecf6f: XOR EBX,EBX
// 004ecf71: MOV dword ptr [0x006880c8],EBX
//   XREF to: 006880c8 (WRITE)
// 004ecf77: MOV dword ptr [0x006880cc],EBX
//   XREF to: 006880cc (WRITE)
// 004ecf7d: MOV dword ptr [0x006880c4],EBX
//   XREF to: 006880c4 (WRITE)
// 004ecf83: PUSH 0x2d83368
//   Label: LAB_004ecf83
//   XREF to: 02d83368 (DATA)
// 004ecf88: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004ecf8e: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004ecf8f: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
// 004ecf94: ADD ESP,0x8
// 004ecf97: ADD ESP,0x40
// 004ecf9a: POP EBP
// 004ecf9b: POP EDI
// 004ecf9c: POP ESI
// 004ecf9d: POP EBX
// 004ecf9e: RET
// 004ecf9f: XOR EBP,EBP
//   Label: LAB_004ecf9f
// 004ecfa1: MOV dword ptr [ESP + 0x3c],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 004ecfa5: JMP 0x004ecd25
//   XREF to: 004ecd25 (UNCONDITIONAL_JUMP)
// 004ecfaa: MOV EDX,0x7f80
//   Label: LAB_004ecfaa
// 004ecfaf: MOV dword ptr [0x0068803c],EDI
//   XREF to: 0068803c (WRITE)
// 004ecfb5: MOV dword ptr [0x00688034],EDI
//   XREF to: 00688034 (WRITE)
// 004ecfbb: MOV dword ptr [0x00688038],EDX
//   XREF to: 00688038 (WRITE)
// 004ecfc1: JMP 0x004eceeb
//   XREF to: 004eceeb (UNCONDITIONAL_JUMP)
// 004ecfc6: MOV dword ptr [0x00688038],EDI
//   Label: LAB_004ecfc6
//   XREF to: 00688038 (WRITE)
// 004ecfcc: MOV dword ptr [0x0068803c],EDI
//   XREF to: 0068803c (WRITE)
// 004ecfd2: MOV dword ptr [0x00688034],EDI
//   XREF to: 00688034 (WRITE)
// 004ecfd8: JMP 0x004eceeb
//   XREF to: 004eceeb (UNCONDITIONAL_JUMP)
// 004ecfdd: JBE 0x004ecfaa
//   Label: LAB_004ecfdd
//   XREF to: 004ecfaa (CONDITIONAL_JUMP)
// 004ecfdf: CMP EAX,0x2
// 004ecfe2: JZ 0x004ecfc6
//   XREF to: 004ecfc6 (CONDITIONAL_JUMP)
// 004ecfe4: JMP 0x004eced9
//   XREF to: 004eced9 (UNCONDITIONAL_JUMP)
// 004ecfe9: MOV EDX,0x7f80
//   Label: LAB_004ecfe9
// 004ecfee: XOR EAX,EAX
// 004ecff0: MOV dword ptr [0x00688068],EDX
//   XREF to: 00688068 (WRITE)
// 004ecff6: MOV [0x0068806c],EAX
//   XREF to: 0068806c (WRITE)
// 004ecffb: MOV [0x00688064],EAX
//   XREF to: 00688064 (WRITE)
// 004ed000: JMP 0x004ecf18
//   XREF to: 004ecf18 (UNCONDITIONAL_JUMP)
// 004ed005: XOR EBX,EBX
//   Label: LAB_004ed005
// 004ed007: MOV dword ptr [0x00688068],EBX
//   XREF to: 00688068 (WRITE)
// 004ed00d: MOV dword ptr [0x0068806c],EBX
//   XREF to: 0068806c (WRITE)
// 004ed013: MOV dword ptr [0x00688064],EBX
//   XREF to: 00688064 (WRITE)
// 004ed019: JMP 0x004ecf18
//   XREF to: 004ecf18 (UNCONDITIONAL_JUMP)
// 004ed01e: JBE 0x004ecfe9
//   Label: LAB_004ed01e
//   XREF to: 004ecfe9 (CONDITIONAL_JUMP)
// 004ed020: CMP EAX,0x2
// 004ed023: JZ 0x004ed005
//   XREF to: 004ed005 (CONDITIONAL_JUMP)
// 004ed025: JMP 0x004ecf06
//   XREF to: 004ecf06 (UNCONDITIONAL_JUMP)
// 004ed02a: MOV EDX,0x7f80
//   Label: LAB_004ed02a
// 004ed02f: XOR EAX,EAX
// 004ed031: MOV dword ptr [0x00688098],EDX
//   XREF to: 00688098 (WRITE)
// 004ed037: MOV [0x0068809c],EAX
//   XREF to: 0068809c (WRITE)
// 004ed03c: MOV [0x00688094],EAX
//   XREF to: 00688094 (WRITE)
// 004ed041: JMP 0x004ecf45
//   XREF to: 004ecf45 (UNCONDITIONAL_JUMP)
// 004ed046: XOR EBX,EBX
//   Label: LAB_004ed046
// 004ed048: MOV dword ptr [0x00688098],EBX
//   XREF to: 00688098 (WRITE)
// 004ed04e: MOV dword ptr [0x0068809c],EBX
//   XREF to: 0068809c (WRITE)
// 004ed054: MOV dword ptr [0x00688094],EBX
//   XREF to: 00688094 (WRITE)
// 004ed05a: JMP 0x004ecf45
//   XREF to: 004ecf45 (UNCONDITIONAL_JUMP)
// 004ed05f: JBE 0x004ed02a
//   Label: LAB_004ed05f
//   XREF to: 004ed02a (CONDITIONAL_JUMP)
// 004ed061: CMP EAX,0x2
// 004ed064: JZ 0x004ed046
//   XREF to: 004ed046 (CONDITIONAL_JUMP)
// 004ed066: JMP 0x004ecf33
//   XREF to: 004ecf33 (UNCONDITIONAL_JUMP)
// 004ed06b: MOV dword ptr [EDX],0x2000
//   Label: LAB_004ed06b
//   XREF to: 006880c4 (WRITE)
// 004ed071: MOV dword ptr [ECX],0x0
//   XREF to: 006880c8 (WRITE)
// 004ed077: MOV dword ptr [EBX],0x0
//   XREF to: 006880cc (WRITE)
// 004ed07d: JMP 0x004ecf83
//   XREF to: 004ecf83 (UNCONDITIONAL_JUMP)
// 004ed082: MOV EAX,0x7f80
//   Label: LAB_004ed082
// 004ed087: XOR EBP,EBP
// 004ed089: MOV [0x006880c8],EAX
//   XREF to: 006880c8 (WRITE)
// 004ed08e: MOV dword ptr [0x006880cc],EBP
//   XREF to: 006880cc (WRITE)
// 004ed094: MOV dword ptr [0x006880c4],EBP
//   XREF to: 006880c4 (WRITE)
// 004ed09a: JMP 0x004ecf83
//   XREF to: 004ecf83 (UNCONDITIONAL_JUMP)

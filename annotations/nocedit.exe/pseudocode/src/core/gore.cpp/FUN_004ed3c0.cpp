// Name: core_gore.cpp_FUN_004ed3c0
// Address: 004ed3c0
// Address Range: [[004ed3c0, 004ed725]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ed3c0()
// Cross-references:
//   core_gore.cpp_FUN_004ed830 (004ed830) at 004ed901 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065f024
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic DAT_0067cb28
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   undefined4 g_RenderVertexBuffer[0].light
//   undefined4 g_RenderVertexBuffer[0].color
//   undefined4 g_RenderVertexBuffer[0].fog
//   undefined4 DAT_00688044
//   undefined4 g_RenderVertexBuffer[1].u
//   undefined4 g_RenderVertexBuffer[1].v
//   undefined4 g_RenderVertexBuffer[1].light
//   undefined4 g_RenderVertexBuffer[1].color
//   undefined4 g_RenderVertexBuffer[1].fog
//   undefined4 g_RenderVertexBuffer[2].u
//   undefined4 g_RenderVertexBuffer[2].v
//   undefined4 g_RenderVertexBuffer[2].light
//   undefined4 g_RenderVertexBuffer[2].color
//   undefined4 g_RenderVertexBuffer[2].fog
//   undefined4 g_RenderVertexBuffer[3].v
//   undefined4 g_RenderVertexBuffer[3].light
//   undefined4 g_RenderVertexBuffer[3].color
//   undefined4 g_RenderVertexBuffer[3].fog
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02d833a8
//   undefined4 DAT_02d833ac
//   undefined4 DAT_02d833b0
//   undefined4 DAT_02d833b4
//   undefined4 DAT_02d833bc
//   undefined4 DAT_02d833c0
//   undefined4 DAT_02d833c4
//   undefined4 DAT_02d833c8
//   undefined4 DAT_02d833cc
// Function calls:
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   wincore_windll.cpp_transformPoint_FUN_005b5a25

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_gore.cpp_FUN_004ed3c0(undefined4 param_1, undefined4 param_2) */

void core_gore_cpp_FUN_004ed3c0(void)

{
  uint uVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  SRenderVertex *output;
  int in_stack_00000004;
  int in_stack_00000010;
  undefined4 *in_stack_00000014;
  int in_stack_00000018;
  
  _DAT_02d833ac = 4;
  _DAT_02d833c0 = 0;
  _DAT_02d833c4 = 1;
  _DAT_02d833c8 = 2;
  _DAT_02d833cc = 3;
  g_RenderVertexBuffer[0].u = 7.34684e-40;
  g_RenderVertexBuffer[0].v = 7.34684e-40;
  g_RenderVertexBuffer[1].u = 2.2775203e-38;
  g_RenderVertexBuffer[2].u = 2.2775203e-38;
  g_RenderVertexBuffer[2].v = 2.2775203e-38;
  g_RenderVertexBuffer[3].v = 2.2775203e-38;
  g_RenderVertexBuffer[1].v = 7.34684e-40;
  g_RenderVertexBuffer[3].u = 7.34684e-40;
  output = g_RenderVertexBuffer;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr,*(int *)(in_stack_00000004 + 0x38));
  _DAT_02d833b0 = 0;
  _DAT_02d833b4 = 0;
  _DAT_02d833b8 = 0;
  _DAT_02d833bc = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_0067cb28);
  iVar2 = in_stack_00000004 + 8;
  do {
    iVar2 = iVar2 + 0xc;
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&output->projected_vertex,(CVector3i *)&stack0xffffffec);
    output = output + 1;
  } while (iVar2 != in_stack_00000004 + 0x38);
  if (*(int *)(in_stack_00000010 + 0x3c) == 0) {
    g_RenderVertexBuffer[0].color = 0x7ff;
    g_RenderVertexBuffer[0].fog = 2.86846e-42;
    g_RenderVertexBuffer[1].light = 2.86846e-42;
    g_RenderVertexBuffer[1].color = 0x7ff;
    g_RenderVertexBuffer[1].fog = 2.86846e-42;
    g_RenderVertexBuffer[2].light = 2.86846e-42;
    g_RenderVertexBuffer[2].color = 0x7ff;
    g_RenderVertexBuffer[2].fog = 2.86846e-42;
    g_RenderVertexBuffer[3].light = 2.86846e-42;
    g_RenderVertexBuffer[3].color = 0x7ff;
    g_RenderVertexBuffer[3].fog = 2.86846e-42;
    g_RenderVertexBuffer[0].light = 2.86846e-42;
    goto LAB_004ed595;
  }
  uVar1 = *(uint *)(in_stack_00000010 + 4);
  if (uVar1 == 0) {
LAB_004ed4ec:
    g_RenderVertexBuffer[0].light = 1.14794e-41;
    g_RenderVertexBuffer[0].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[0].color = 0x7f80;
    g_RenderVertexBuffer[0].light = 0.0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ed4ec;
    g_RenderVertexBuffer[0].color = 0;
    g_RenderVertexBuffer[0].light = 0.0;
  }
  g_RenderVertexBuffer[0].fog = 0.0;
  uVar1 = *(uint *)(in_stack_00000010 + 4);
  if (uVar1 == 0) {
LAB_004ed51e:
    g_RenderVertexBuffer[1].light = 1.14794e-41;
    g_RenderVertexBuffer[1].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[1].color = 0x7f80;
    g_RenderVertexBuffer[1].light = 0.0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ed51e;
    g_RenderVertexBuffer[1].color = 0;
    g_RenderVertexBuffer[1].light = 0.0;
  }
  g_RenderVertexBuffer[1].fog = 0.0;
  uVar1 = *(uint *)(in_stack_00000010 + 4);
  if (uVar1 == 0) {
LAB_004ed550:
    g_RenderVertexBuffer[2].light = 1.14794e-41;
    g_RenderVertexBuffer[2].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[2].color = 0x7f80;
    g_RenderVertexBuffer[2].light = 0.0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ed550;
    g_RenderVertexBuffer[2].color = 0;
    g_RenderVertexBuffer[2].light = 0.0;
  }
  g_RenderVertexBuffer[2].fog = 0.0;
  uVar1 = *(uint *)(in_stack_00000010 + 4);
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      g_RenderVertexBuffer[3].color = 0x7f80;
      g_RenderVertexBuffer[3].fog = 0.0;
      g_RenderVertexBuffer[3].light = 0.0;
      goto LAB_004ed595;
    }
    if (uVar1 == 2) {
      g_RenderVertexBuffer[3].color = 0;
      g_RenderVertexBuffer[3].fog = 0.0;
      g_RenderVertexBuffer[3].light = 0.0;
      goto LAB_004ed595;
    }
  }
  g_RenderVertexBuffer[3].light = 1.14794e-41;
  g_RenderVertexBuffer[3].color = 0;
  g_RenderVertexBuffer[3].fog = 0.0;
LAB_004ed595:
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&DAT_02d833a8);
  if (in_stack_00000018 != 0) {
    *in_stack_00000014 = 1;
    return;
  }
  return;
}


// Assembly code:
// 004ed3c0: PUSH EBX
//   Label: core_gore.cpp_FUN_004ed3c0
// 004ed3c1: PUSH ESI
// 004ed3c2: PUSH EDI
// 004ed3c3: PUSH EBP
// 004ed3c4: SUB ESP,0xc
// 004ed3c7: MOV EDX,0x4
// 004ed3cc: MOV EBX,0x1
// 004ed3d1: MOV ESI,0x2
// 004ed3d6: MOV EDI,0x3
// 004ed3db: MOV EBP,0x80000
// 004ed3e0: XOR ECX,ECX
// 004ed3e2: MOV dword ptr [0x02d833ac],EDX
//   XREF to: 02d833ac (WRITE)
// 004ed3e8: MOV dword ptr [0x02d833c0],ECX
//   XREF to: 02d833c0 (WRITE)
// 004ed3ee: MOV dword ptr [0x02d833c4],EBX
//   XREF to: 02d833c4 (WRITE)
// 004ed3f4: MOV dword ptr [0x02d833c8],ESI
//   XREF to: 02d833c8 (WRITE)
// 004ed3fa: MOV dword ptr [0x02d833cc],EDI
//   XREF to: 02d833cc (WRITE)
// 004ed400: MOV dword ptr [0x0068802c],EBP
//   XREF to: 0068802c (WRITE)
// 004ed406: MOV dword ptr [0x00688030],EBP
//   XREF to: 00688030 (WRITE)
// 004ed40c: MOV EDX,0xf80000
//   XREF to: 00f80000 (DATA)
// 004ed411: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004ed415: MOV dword ptr [0x0068805c],EDX
//   XREF to: 0068805c (WRITE)
// 004ed41b: MOV dword ptr [0x0068808c],EDX
//   XREF to: 0068808c (WRITE)
// 004ed421: MOV dword ptr [0x00688090],EDX
//   XREF to: 00688090 (WRITE)
// 004ed427: MOV EAX,dword ptr [EBX + 0x38]
// 004ed42a: MOV dword ptr [0x006880c0],EDX
//   XREF to: 006880c0 (WRITE)
// 004ed430: PUSH EAX
// 004ed431: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004ed437: MOV dword ptr [0x00688060],EBP
//   XREF to: 00688060 (WRITE)
// 004ed43d: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004ed43e: MOV dword ptr [0x006880bc],EBP
//   XREF to: 006880bc (WRITE)
// 004ed444: MOV EDI,0x688014
//   XREF to: 00688014 (DATA)
// 004ed449: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004ed44e: ADD ESP,0x8
// 004ed451: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ed457: XOR ECX,ECX
// 004ed459: PUSH 0x67cb28
//   XREF to: 0067cb28 (DATA)
// 004ed45e: MOV dword ptr [0x02d833b0],ECX
//   XREF to: 02d833b0 (WRITE)
// 004ed464: MOV dword ptr [0x02d833b4],ECX
//   XREF to: 02d833b4 (WRITE)
// 004ed46a: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 004ed46b: MOV dword ptr [0x02d833b8],ECX
//   XREF to: 02d833b8 (WRITE)
// 004ed471: MOV dword ptr [0x02d833bc],ECX
//   XREF to: 02d833bc (WRITE)
// 004ed477: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004ed47c: LEA EBP,[EBX + 0x8]
// 004ed47f: ADD ESP,0x8
// 004ed482: MOV ESI,EBP
// 004ed484: ADD EBP,0x30
// 004ed487: MOV EBX,ESP
//   Label: LAB_004ed487
// 004ed489: MOV EAX,ESI
// 004ed48b: FLD float ptr [EAX]
// 004ed48d: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ed493: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x1c] (DATA)
// 004ed495: FLD float ptr [EAX + 0x4]
// 004ed498: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ed49e: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x18] (WRITE)
// 004ed4a1: FLD float ptr [EAX + 0x8]
// 004ed4a4: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ed4aa: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x14] (WRITE)
// 004ed4ad: MOV EBX,ESP
// 004ed4af: PUSH EBX
// 004ed4b0: PUSH EDI
//   XREF to: 00688014 (DATA)
//   XREF to: 00688044 (DATA)
// 004ed4b1: ADD ESI,0xc
// 004ed4b4: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004ed4b9: ADD ESP,0x8
// 004ed4bc: ADD EDI,0x30
// 004ed4bf: CMP ESI,EBP
// 004ed4c1: JNZ 0x004ed487
//   XREF to: 004ed487 (CONDITIONAL_JUMP)
// 004ed4c3: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004ed4c7: CMP dword ptr [EBX + 0x3c],0x0
// 004ed4cb: JZ 0x004ed5bc
//   XREF to: 004ed5bc (CONDITIONAL_JUMP)
// 004ed4d1: MOV ESI,0x688034
//   XREF to: 00688034 (DATA)
// 004ed4d6: MOV EBP,0x688038
//   XREF to: 00688038 (DATA)
// 004ed4db: MOV EBX,dword ptr [EBX + 0x4]
// 004ed4de: MOV EDI,0x68803c
//   XREF to: 0068803c (DATA)
// 004ed4e3: CMP EBX,0x1
// 004ed4e6: JNC 0x004ed642
//   XREF to: 004ed642 (CONDITIONAL_JUMP)
// 004ed4ec: MOV dword ptr [ESI],0x2000
//   Label: LAB_004ed4ec
//   XREF to: 00688034 (WRITE)
// 004ed4f2: MOV dword ptr [EBP],0x0
//   XREF to: 00688038 (WRITE)
// 004ed4f9: MOV dword ptr [EDI],0x0
//   XREF to: 0068803c (WRITE)
// 004ed4ff: MOV EBX,dword ptr [ESP + 0x20]
//   Label: LAB_004ed4ff
//   XREF to: Stack[0x4] (READ)
// 004ed503: MOV ESI,0x688064
//   XREF to: 00688064 (DATA)
// 004ed508: MOV EBP,0x688068
//   XREF to: 00688068 (DATA)
// 004ed50d: MOV EBX,dword ptr [EBX + 0x4]
// 004ed510: MOV EDI,0x68806c
//   XREF to: 0068806c (DATA)
// 004ed515: CMP EBX,0x1
// 004ed518: JNC 0x004ed682
//   XREF to: 004ed682 (CONDITIONAL_JUMP)
// 004ed51e: MOV dword ptr [ESI],0x2000
//   Label: LAB_004ed51e
//   XREF to: 00688064 (WRITE)
// 004ed524: MOV dword ptr [EBP],0x0
//   XREF to: 00688068 (WRITE)
// 004ed52b: MOV dword ptr [EDI],0x0
//   XREF to: 0068806c (WRITE)
// 004ed531: MOV EBX,dword ptr [ESP + 0x20]
//   Label: LAB_004ed531
//   XREF to: Stack[0x4] (READ)
// 004ed535: MOV EBP,0x688094
//   XREF to: 00688094 (DATA)
// 004ed53a: MOV ESI,0x688098
//   XREF to: 00688098 (DATA)
// 004ed53f: MOV EBX,dword ptr [EBX + 0x4]
// 004ed542: MOV EDI,0x68809c
//   XREF to: 0068809c (DATA)
// 004ed547: CMP EBX,0x1
// 004ed54a: JNC 0x004ed6c5
//   XREF to: 004ed6c5 (CONDITIONAL_JUMP)
// 004ed550: MOV dword ptr [EBP],0x2000
//   Label: LAB_004ed550
//   XREF to: 00688094 (WRITE)
// 004ed557: MOV dword ptr [ESI],0x0
//   XREF to: 00688098 (WRITE)
// 004ed55d: MOV dword ptr [EDI],0x0
//   XREF to: 0068809c (WRITE)
// 004ed563: MOV EBX,dword ptr [ESP + 0x20]
//   Label: LAB_004ed563
//   XREF to: Stack[0x4] (READ)
// 004ed567: MOV EDI,0x6880c4
//   XREF to: 006880c4 (DATA)
// 004ed56c: MOV EBP,0x6880c8
//   XREF to: 006880c8 (DATA)
// 004ed571: MOV EBX,dword ptr [EBX + 0x4]
// 004ed574: MOV ESI,0x6880cc
//   XREF to: 006880cc (DATA)
// 004ed579: CMP EBX,0x1
// 004ed57c: JNC 0x004ed708
//   XREF to: 004ed708 (CONDITIONAL_JUMP)
// 004ed582: MOV dword ptr [EDI],0x2000
//   Label: LAB_004ed582
//   XREF to: 006880c4 (WRITE)
// 004ed588: MOV dword ptr [EBP],0x0
//   XREF to: 006880c8 (WRITE)
// 004ed58f: MOV dword ptr [ESI],0x0
//   XREF to: 006880cc (WRITE)
// 004ed595: PUSH 0x2d833a8
//   Label: LAB_004ed595
//   XREF to: 02d833a8 (DATA)
// 004ed59a: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004ed5a0: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004ed5a1: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
// 004ed5a6: ADD ESP,0x8
// 004ed5a9: CMP dword ptr [ESP + 0x24],0x0
//   XREF to: Stack[0x8] (READ)
// 004ed5ae: JNZ 0x004ed714
//   XREF to: 004ed714 (CONDITIONAL_JUMP)
// 004ed5b4: ADD ESP,0xc
// 004ed5b7: POP EBP
// 004ed5b8: POP EDI
// 004ed5b9: POP ESI
// 004ed5ba: POP EBX
// 004ed5bb: RET
// 004ed5bc: MOV ESI,0x7ff
//   Label: LAB_004ed5bc
// 004ed5c1: MOV dword ptr [0x00688038],ESI
//   XREF to: 00688038 (WRITE)
// 004ed5c7: MOV dword ptr [0x0068803c],ESI
//   XREF to: 0068803c (WRITE)
// 004ed5cd: MOV dword ptr [0x00688064],ESI
//   XREF to: 00688064 (WRITE)
// 004ed5d3: MOV dword ptr [0x00688068],ESI
//   XREF to: 00688068 (WRITE)
// 004ed5d9: MOV dword ptr [0x0068806c],ESI
//   XREF to: 0068806c (WRITE)
// 004ed5df: MOV dword ptr [0x00688094],ESI
//   XREF to: 00688094 (WRITE)
// 004ed5e5: MOV dword ptr [0x00688098],ESI
//   XREF to: 00688098 (WRITE)
// 004ed5eb: MOV dword ptr [0x0068809c],ESI
//   XREF to: 0068809c (WRITE)
// 004ed5f1: MOV dword ptr [0x006880c4],ESI
//   XREF to: 006880c4 (WRITE)
// 004ed5f7: MOV dword ptr [0x006880c8],ESI
//   XREF to: 006880c8 (WRITE)
// 004ed5fd: MOV dword ptr [0x006880cc],ESI
//   XREF to: 006880cc (WRITE)
// 004ed603: MOV dword ptr [0x00688034],ESI
//   XREF to: 00688034 (WRITE)
// 004ed609: JMP 0x004ed595
//   XREF to: 004ed595 (UNCONDITIONAL_JUMP)
// 004ed60b: MOV EDI,0x7f80
//   Label: LAB_004ed60b
// 004ed610: XOR ESI,ESI
// 004ed612: MOV dword ptr [0x00688038],EDI
//   XREF to: 00688038 (WRITE)
// 004ed618: MOV dword ptr [0x0068803c],ESI
//   XREF to: 0068803c (WRITE)
// 004ed61e: MOV dword ptr [0x00688034],ESI
//   XREF to: 00688034 (WRITE)
// 004ed624: JMP 0x004ed4ff
//   XREF to: 004ed4ff (UNCONDITIONAL_JUMP)
// 004ed629: XOR EDX,EDX
//   Label: LAB_004ed629
// 004ed62b: MOV dword ptr [0x00688038],EDX
//   XREF to: 00688038 (WRITE)
// 004ed631: MOV dword ptr [0x0068803c],EDX
//   XREF to: 0068803c (WRITE)
// 004ed637: MOV dword ptr [0x00688034],EDX
//   XREF to: 00688034 (WRITE)
// 004ed63d: JMP 0x004ed4ff
//   XREF to: 004ed4ff (UNCONDITIONAL_JUMP)
// 004ed642: JBE 0x004ed60b
//   Label: LAB_004ed642
//   XREF to: 004ed60b (CONDITIONAL_JUMP)
// 004ed644: CMP EBX,0x2
// 004ed647: JZ 0x004ed629
//   XREF to: 004ed629 (CONDITIONAL_JUMP)
// 004ed649: JMP 0x004ed4ec
//   XREF to: 004ed4ec (UNCONDITIONAL_JUMP)
// 004ed64e: MOV ESI,0x7f80
//   Label: LAB_004ed64e
// 004ed653: XOR EBX,EBX
// 004ed655: MOV dword ptr [0x00688068],ESI
//   XREF to: 00688068 (WRITE)
// 004ed65b: MOV dword ptr [0x0068806c],EBX
//   XREF to: 0068806c (WRITE)
// 004ed661: MOV dword ptr [0x00688064],EBX
//   XREF to: 00688064 (WRITE)
// 004ed667: JMP 0x004ed531
//   XREF to: 004ed531 (UNCONDITIONAL_JUMP)
// 004ed66c: XOR EAX,EAX
//   Label: LAB_004ed66c
// 004ed66e: MOV [0x00688068],EAX
//   XREF to: 00688068 (WRITE)
// 004ed673: MOV [0x0068806c],EAX
//   XREF to: 0068806c (WRITE)
// 004ed678: MOV [0x00688064],EAX
//   XREF to: 00688064 (WRITE)
// 004ed67d: JMP 0x004ed531
//   XREF to: 004ed531 (UNCONDITIONAL_JUMP)
// 004ed682: JBE 0x004ed64e
//   Label: LAB_004ed682
//   XREF to: 004ed64e (CONDITIONAL_JUMP)
// 004ed684: CMP EBX,0x2
// 004ed687: JZ 0x004ed66c
//   XREF to: 004ed66c (CONDITIONAL_JUMP)
// 004ed689: JMP 0x004ed51e
//   XREF to: 004ed51e (UNCONDITIONAL_JUMP)
// 004ed68e: MOV EBX,0x7f80
//   Label: LAB_004ed68e
// 004ed693: XOR ECX,ECX
// 004ed695: MOV dword ptr [0x00688098],EBX
//   XREF to: 00688098 (WRITE)
// 004ed69b: MOV dword ptr [0x0068809c],ECX
//   XREF to: 0068809c (WRITE)
// 004ed6a1: MOV dword ptr [0x00688094],ECX
//   XREF to: 00688094 (WRITE)
// 004ed6a7: JMP 0x004ed563
//   XREF to: 004ed563 (UNCONDITIONAL_JUMP)
// 004ed6ac: XOR EBP,EBP
//   Label: LAB_004ed6ac
// 004ed6ae: MOV dword ptr [0x00688098],EBP
//   XREF to: 00688098 (WRITE)
// 004ed6b4: MOV dword ptr [0x0068809c],EBP
//   XREF to: 0068809c (WRITE)
// 004ed6ba: MOV dword ptr [0x00688094],EBP
//   XREF to: 00688094 (WRITE)
// 004ed6c0: JMP 0x004ed563
//   XREF to: 004ed563 (UNCONDITIONAL_JUMP)
// 004ed6c5: JBE 0x004ed68e
//   Label: LAB_004ed6c5
//   XREF to: 004ed68e (CONDITIONAL_JUMP)
// 004ed6c7: CMP EBX,0x2
// 004ed6ca: JZ 0x004ed6ac
//   XREF to: 004ed6ac (CONDITIONAL_JUMP)
// 004ed6cc: JMP 0x004ed550
//   XREF to: 004ed550 (UNCONDITIONAL_JUMP)
// 004ed6d1: MOV ECX,0x7f80
//   Label: LAB_004ed6d1
// 004ed6d6: XOR EDX,EDX
// 004ed6d8: MOV dword ptr [0x006880c8],ECX
//   XREF to: 006880c8 (WRITE)
// 004ed6de: MOV dword ptr [0x006880cc],EDX
//   XREF to: 006880cc (WRITE)
// 004ed6e4: MOV dword ptr [0x006880c4],EDX
//   XREF to: 006880c4 (WRITE)
// 004ed6ea: JMP 0x004ed595
//   XREF to: 004ed595 (UNCONDITIONAL_JUMP)
// 004ed6ef: XOR EDI,EDI
//   Label: LAB_004ed6ef
// 004ed6f1: MOV dword ptr [0x006880c8],EDI
//   XREF to: 006880c8 (WRITE)
// 004ed6f7: MOV dword ptr [0x006880cc],EDI
//   XREF to: 006880cc (WRITE)
// 004ed6fd: MOV dword ptr [0x006880c4],EDI
//   XREF to: 006880c4 (WRITE)
// 004ed703: JMP 0x004ed595
//   XREF to: 004ed595 (UNCONDITIONAL_JUMP)
// 004ed708: JBE 0x004ed6d1
//   Label: LAB_004ed708
//   XREF to: 004ed6d1 (CONDITIONAL_JUMP)
// 004ed70a: CMP EBX,0x2
// 004ed70d: JZ 0x004ed6ef
//   XREF to: 004ed6ef (CONDITIONAL_JUMP)
// 004ed70f: JMP 0x004ed582
//   XREF to: 004ed582 (UNCONDITIONAL_JUMP)
// 004ed714: MOV EBX,dword ptr [ESP + 0x20]
//   Label: LAB_004ed714
//   XREF to: Stack[0x4] (READ)
// 004ed718: MOV dword ptr [EBX],0x1
// 004ed71e: ADD ESP,0xc
// 004ed721: POP EBP
// 004ed722: POP EDI
// 004ed723: POP ESI
// 004ed724: POP EBX
// 004ed725: RET

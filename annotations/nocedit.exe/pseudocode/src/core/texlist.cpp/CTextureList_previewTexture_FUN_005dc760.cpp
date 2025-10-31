// Name: core_texlist.cpp_CTextureList_previewTexture_FUN_005dc760
// Address: 005dc760
// Address Range: [[005dc760, 005dca24]]
// Convention: __cdecl
// Signature: void core_texlist.cpp_CTextureList_previewTexture_FUN_005dc760(CTextureList * this_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_TexturePreviewEnabled = 0x1
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   undefined4 DAT_00688044
//   undefined4 DAT_00688048
//   undefined4 DAT_0068804c
//   undefined4 g_RenderVertexBuffer[1].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[1].u
//   undefined4 g_RenderVertexBuffer[1].v
//   undefined4 DAT_00688074
//   undefined4 g_RenderVertexBuffer[2].projected_vertex.transformed_y
//   undefined4 g_RenderVertexBuffer[2].projected_vertex.transformed_z
//   undefined4 g_RenderVertexBuffer[2].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[2].u
//   undefined4 g_RenderVertexBuffer[2].v
//   undefined4 DAT_006880a4
//   undefined4 g_RenderVertexBuffer[3].projected_vertex.transformed_y
//   undefined4 g_RenderVertexBuffer[3].projected_vertex.transformed_z
//   undefined4 g_RenderVertexBuffer[3].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[3].u
//   undefined4 g_RenderVertexBuffer[3].v
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 CHAR_ARRAY_02d03eb2
//   undefined4 CHAR_ARRAY_02d03eb3
//   undefined4 CHAR_ARRAY_02d03eb5
//   undefined4 CHAR_ARRAY_02d03ec2
//   undefined4 CHAR_ARRAY_02d03ec4
//   int g_TexturePreviewFullscreen
//   int g_TexturePreviewX
//   int g_TexturePreviewY
//   int g_TexturePreviewWidth
//   int g_TexturePreviewHeight
// Function calls:
//   engine_3d.c_renderPolygonTextureEnable_FUN_00403cc0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_light.cpp_setAmbientLightLevel_FUN_00505490
//   engine_light.cpp_setDirectionalLightVector_FUN_005054d0
//   engine_matrix.c_popViewport_FUN_0050e480
//   engine_matrix.c_pushViewport_FUN_0050e320

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_previewTexture_FUN_005dc760(CTextureList *this_ptr)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char (*pacVar3) [16];
  char *pcVar4;
  int local_40;
  CDemonRenderer *this_ptr_00;
  int iStack_18;
  char acStack_14 [4];
  
  if ((g_KeyboardState[0x1d] != '\0') && (g_KeyboardState[0x2c] != '\0')) {
    g_KeyboardState[0x2c] = '\0';
    g_TexturePreviewEnabled = g_TexturePreviewEnabled ^ 1;
  }
  if (g_TexturePreviewEnabled != 0) {
    if (g_KeyboardState[0x2c] != '\0') {
      g_KeyboardState[0x2c] = '\0';
      g_TexturePreviewFullscreen = g_TexturePreviewFullscreen ^ 1;
    }
    g_TexturePreviewX = g_WindowWidth - g_WindowWidth / 7;
    g_TexturePreviewWidth = g_WindowWidth / 7 + -1;
    g_TexturePreviewY = g_WindowHeight - g_WindowHeight / 7;
    g_TexturePreviewHeight = g_WindowHeight / 7 + -1;
    if (g_TexturePreviewFullscreen == 0) {
      engine_matrix_c_pushViewport_FUN_0050e320
                (g_TexturePreviewX,g_TexturePreviewY,g_TexturePreviewWidth,g_TexturePreviewHeight);
    }
    engine_light_cpp_setAmbientLightLevel_FUN_00505490(0xffff);
    engine_light_cpp_setDirectionalLightVector_FUN_005054d0(0,0,0xffff);
    g_RenderVertexBuffer[0].projected_vertex.screen_x = -0x80000000;
    g_RenderVertexBuffer[0].u = 2.2775203e-38;
    g_RenderVertexBuffer[1].projected_vertex.screen_x = -0x80000000;
    g_RenderVertexBuffer[2].projected_vertex.screen_x = -0x80000000;
    g_RenderVertexBuffer[2].v = 2.2775203e-38;
    g_RenderVertexBuffer[3].projected_vertex.screen_x = -0x80000000;
    g_RenderVertexBuffer[3].u = 2.2775203e-38;
    g_RenderVertexBuffer[0].projected_vertex.transformed_x = 0xa00;
    g_RenderVertexBuffer[0].projected_vertex.transformed_y = 0xa00;
    g_RenderVertexBuffer[0].projected_vertex.transformed_z = 0xa00;
    g_RenderVertexBuffer[0].v = 7.34684e-40;
    g_RenderVertexBuffer[1].u = 7.34684e-40;
    g_RenderVertexBuffer[1].v = 7.34684e-40;
    g_RenderVertexBuffer[1].projected_vertex.transformed_y = 0xa00;
    g_RenderVertexBuffer[1].projected_vertex.transformed_z = 0xa00;
    g_RenderVertexBuffer[2].projected_vertex.transformed_z = 0xa00;
    iStack_18 = 0;
    g_RenderVertexBuffer[1].projected_vertex.transformed_x = -0xa00;
    g_RenderVertexBuffer[2].projected_vertex.transformed_x = -0xa00;
    g_RenderVertexBuffer[2].projected_vertex.transformed_y = -0xa00;
    g_RenderVertexBuffer[3].projected_vertex.transformed_y = -0xa00;
    g_RenderVertexBuffer[3].projected_vertex.transformed_x = 0xa00;
    g_RenderVertexBuffer[3].projected_vertex.transformed_z = 0xa00;
    this_ptr_00 = (CDemonRenderer *)0x0;
    local_40 = 4;
    g_RenderVertexBuffer[2].u = 7.34684e-40;
    pcVar4 = acStack_14;
    pacVar3 = this_ptr->master_texture_names + this_ptr->current_master_selection;
    g_RenderVertexBuffer[3].v = 2.2775203e-38;
    do {
      cVar1 = (*pacVar3)[0];
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = (*pacVar3)[1];
      pacVar3 = (char (*) [16])(*pacVar3 + 2);
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,(SMRGLTextureBasic *)&stack0xffffffe4);
    engine_3d_c_renderPolygonTextureEnable_FUN_00403cc0((SMRGLHeaderPrimitive *)&local_40);
    if (g_KeyboardState[0x1b] != '\0') {
      g_KeyboardState[0x1b] = '\0';
      iVar2 = this_ptr->current_master_selection + (uint)(byte)g_KeyboardState[0x2a] * 9 + 1;
      this_ptr->current_master_selection = iVar2;
      if (this_ptr->master_texture_count <= iVar2) {
        this_ptr->current_master_selection = 0;
      }
    }
    if (g_KeyboardState[0x1a] != '\0') {
      g_KeyboardState[0x1a] = '\0';
      iVar2 = this_ptr->current_master_selection - ((uint)(byte)g_KeyboardState[0x2a] * 9 + 1);
      this_ptr->current_master_selection = iVar2;
      if (iVar2 < 0) {
        this_ptr->current_master_selection = this_ptr->master_texture_count + -1;
      }
    }
    if (g_TexturePreviewFullscreen == 0) {
      local_40 = 0x5dca1d;
      engine_matrix_c_popViewport_FUN_0050e480(this_ptr_00);
      return;
    }
  }
  return;
}


// Assembly code:
// 005dc760: PUSH EBX
//   Label: core_texlist.cpp_CTextureList_previewTexture_FUN_005dc760
// 005dc761: PUSH ESI
// 005dc762: PUSH EDI
// 005dc763: PUSH EBP
// 005dc764: SUB ESP,0x40
// 005dc767: MOV EBX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x4] (READ)
// 005dc76b: CMP byte ptr [0x02d03eb5],0x0
//   XREF to: 02d03eb5 (READ)
// 005dc772: JZ 0x005dc794
//   XREF to: 005dc794 (CONDITIONAL_JUMP)
// 005dc774: CMP byte ptr [0x02d03ec4],0x0
//   XREF to: 02d03ec4 (READ)
// 005dc77b: JZ 0x005dc794
//   XREF to: 005dc794 (CONDITIONAL_JUMP)
// 005dc77d: MOV CL,byte ptr [0x006842f4]
//   XREF to: 006842f4 (READ)
// 005dc783: XOR DH,DH
// 005dc785: XOR CL,0x1
// 005dc788: MOV byte ptr [0x02d03ec4],DH
//   XREF to: 02d03ec4 (WRITE)
// 005dc78e: MOV byte ptr [0x006842f4],CL
//   XREF to: 006842f4 (WRITE)
// 005dc794: CMP dword ptr [0x006842f4],0x0
//   Label: LAB_005dc794
//   XREF to: 006842f4 (READ)
// 005dc79b: JZ 0x005dca01
//   XREF to: 005dca01 (CONDITIONAL_JUMP)
// 005dc7a1: CMP byte ptr [0x02d03ec4],0x0
//   XREF to: 02d03ec4 (READ)
// 005dc7a8: JZ 0x005dc7b8
//   XREF to: 005dc7b8 (CONDITIONAL_JUMP)
// 005dc7aa: XOR AL,AL
// 005dc7ac: MOV [0x02d03ec4],AL
//   XREF to: 02d03ec4 (WRITE)
// 005dc7b1: XOR byte ptr [0x03f87340],0x1
//   XREF to: 03f87340 (READ_WRITE)
// 005dc7b8: MOV EAX,[0x00679394]
//   Label: LAB_005dc7b8
//   XREF to: 00679394 (READ)
// 005dc7bd: MOV EDX,EAX
// 005dc7bf: MOV ECX,0x7
// 005dc7c4: SAR EDX,0x1f
// 005dc7c7: IDIV ECX
// 005dc7c9: MOV ECX,EAX
// 005dc7cb: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005dc7d0: SUB EAX,ECX
// 005dc7d2: MOV [0x03f87344],EAX
//   XREF to: 03f87344 (WRITE)
// 005dc7d7: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 005dc7dc: MOV EDX,EAX
// 005dc7de: MOV ESI,0x7
// 005dc7e3: SAR EDX,0x1f
// 005dc7e6: IDIV ESI
// 005dc7e8: DEC ECX
// 005dc7e9: MOV dword ptr [0x03f8734c],ECX
//   XREF to: 03f8734c (WRITE)
// 005dc7ef: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005dc7f5: MOV ECX,dword ptr [0x03f87340]
//   XREF to: 03f87340 (READ)
// 005dc7fb: SUB ESI,EAX
// 005dc7fd: DEC EAX
// 005dc7fe: MOV dword ptr [0x03f87348],ESI
//   XREF to: 03f87348 (WRITE)
// 005dc804: MOV [0x03f87350],EAX
//   XREF to: 03f87350 (WRITE)
// 005dc809: TEST ECX,ECX
// 005dc80b: JNZ 0x005dc824
//   XREF to: 005dc824 (CONDITIONAL_JUMP)
// 005dc80d: PUSH EAX
// 005dc80e: MOV EDI,dword ptr [0x03f8734c]
//   XREF to: 03f8734c (READ)
// 005dc814: PUSH EDI
// 005dc815: PUSH ESI
// 005dc816: MOV EAX,[0x03f87344]
//   XREF to: 03f87344 (READ)
// 005dc81b: PUSH EAX
// 005dc81c: CALL engine_matrix.c_pushViewport_FUN_0050e320
//   XREF to: 0050e320 (UNCONDITIONAL_CALL)
// 005dc821: ADD ESP,0x10
// 005dc824: PUSH 0xffff
//   Label: LAB_005dc824
// 005dc829: CALL engine_light.cpp_setAmbientLightLevel_FUN_00505490
//   XREF to: 00505490 (UNCONDITIONAL_CALL)
// 005dc82e: ADD ESP,0x4
// 005dc831: PUSH 0xffff
// 005dc836: PUSH 0x0
// 005dc838: PUSH 0x0
// 005dc83a: MOV EDI,0x80000000
// 005dc83f: MOV EBP,0xf80000
//   XREF to: 00f80000 (DATA)
// 005dc844: CALL engine_light.cpp_setDirectionalLightVector_FUN_005054d0
//   XREF to: 005054d0 (UNCONDITIONAL_CALL)
// 005dc849: MOV EDX,0xa00
// 005dc84e: MOV EAX,0x80000
// 005dc853: ADD ESP,0xc
// 005dc856: MOV dword ptr [0x00688024],EDI
//   XREF to: 00688024 (WRITE)
// 005dc85c: MOV dword ptr [0x0068802c],EBP
//   XREF to: 0068802c (WRITE)
// 005dc862: MOV dword ptr [0x00688054],EDI
//   XREF to: 00688054 (WRITE)
// 005dc868: MOV dword ptr [0x00688084],EDI
//   XREF to: 00688084 (WRITE)
// 005dc86e: MOV dword ptr [0x00688090],EBP
//   XREF to: 00688090 (WRITE)
// 005dc874: MOV dword ptr [0x006880b4],EDI
//   XREF to: 006880b4 (WRITE)
// 005dc87a: MOV dword ptr [0x006880bc],EBP
//   XREF to: 006880bc (WRITE)
// 005dc880: MOV dword ptr [0x00688014],EDX
//   XREF to: 00688014 (WRITE)
// 005dc886: MOV ECX,EDX
// 005dc888: MOV dword ptr [0x00688018],EDX
//   XREF to: 00688018 (WRITE)
// 005dc88e: MOV ESI,EDX
// 005dc890: MOV dword ptr [0x0068801c],EDX
//   XREF to: 0068801c (WRITE)
// 005dc896: MOV [0x00688030],EAX
//   XREF to: 00688030 (WRITE)
// 005dc89b: MOV [0x0068805c],EAX
//   XREF to: 0068805c (WRITE)
// 005dc8a0: MOV [0x00688060],EAX
//   XREF to: 00688060 (WRITE)
// 005dc8a5: XOR EDI,EDI
// 005dc8a7: MOV EDX,0xfffff600
// 005dc8ac: MOV dword ptr [0x00688048],ECX
//   XREF to: 00688048 (WRITE)
// 005dc8b2: MOV dword ptr [0x0068804c],ECX
//   XREF to: 0068804c (WRITE)
// 005dc8b8: MOV dword ptr [0x0068807c],ESI
//   XREF to: 0068807c (WRITE)
// 005dc8be: MOV dword ptr [ESP + 0x2c],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 005dc8c2: MOV dword ptr [0x00688044],EDX
//   XREF to: 00688044 (WRITE)
// 005dc8c8: MOV dword ptr [0x00688074],EDX
//   XREF to: 00688074 (WRITE)
// 005dc8ce: MOV ECX,EDX
// 005dc8d0: MOV dword ptr [0x00688078],EDX
//   XREF to: 00688078 (WRITE)
// 005dc8d6: MOV EDX,ESI
// 005dc8d8: MOV dword ptr [0x006880a8],ECX
//   XREF to: 006880a8 (WRITE)
// 005dc8de: MOV ESI,0x3
// 005dc8e3: MOV dword ptr [0x006880a4],EDX
//   XREF to: 006880a4 (WRITE)
// 005dc8e9: MOV dword ptr [0x006880ac],EDX
//   XREF to: 006880ac (WRITE)
// 005dc8ef: XOR ECX,ECX
// 005dc8f1: MOV EDX,0x4
// 005dc8f6: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 005dc8fa: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 005dc8fe: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 005dc902: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 005dc906: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 005dc90a: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 005dc90e: MOV ECX,0x2
// 005dc913: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 005dc917: MOV EDX,0x1
// 005dc91c: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 005dc920: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 005dc924: MOV [0x0068808c],EAX
//   XREF to: 0068808c (WRITE)
// 005dc929: MOV ESI,dword ptr [EBX + 0x1a5e8]
// 005dc92f: LEA EAX,[EBX + 0x6d68]
// 005dc935: SHL ESI,0x4
// 005dc938: LEA EDI,[ESP + 0x30]
//   XREF to: Stack[-0x20] (DATA)
// 005dc93c: ADD ESI,EAX
// 005dc93e: MOV dword ptr [0x006880c0],EBP
//   XREF to: 006880c0 (WRITE)
// 005dc944: PUSH EDI
// 005dc945: MOV AL,byte ptr [ESI]
//   Label: LAB_005dc945
// 005dc947: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x20] (DATA)
// 005dc949: CMP AL,0x0
// 005dc94b: JZ 0x005dc95d
//   XREF to: 005dc95d (CONDITIONAL_JUMP)
// 005dc94d: MOV AL,byte ptr [ESI + 0x1]
// 005dc950: ADD ESI,0x2
// 005dc953: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x1f] (WRITE)
// 005dc956: ADD EDI,0x2
// 005dc959: CMP AL,0x0
// 005dc95b: JNZ 0x005dc945
//   XREF to: 005dc945 (CONDITIONAL_JUMP)
// 005dc95d: POP EDI
//   Label: LAB_005dc95d
// 005dc95e: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x28] (DATA)
// 005dc962: PUSH EAX
// 005dc963: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005dc969: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 005dc96a: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 005dc96f: ADD ESP,0x8
// 005dc972: MOV EAX,ESP
// 005dc974: PUSH EAX
// 005dc975: CALL engine_3d.c_renderPolygonTextureEnable_FUN_00403cc0
//   XREF to: 00403cc0 (UNCONDITIONAL_CALL)
// 005dc97a: MOV DL,byte ptr [0x02d03eb3]
//   XREF to: 02d03eb3 (READ)
// 005dc980: ADD ESP,0x4
// 005dc983: TEST DL,DL
// 005dc985: JZ 0x005dc9c3
//   XREF to: 005dc9c3 (CONDITIONAL_JUMP)
// 005dc987: XOR ECX,ECX
// 005dc989: MOV CL,byte ptr [0x02d03ec2]
//   XREF to: 02d03ec2 (READ)
// 005dc98f: XOR DH,DH
// 005dc991: LEA EAX,[ECX*0x8 + 0x0]
// 005dc998: MOV byte ptr [0x02d03eb3],DH
//   XREF to: 02d03eb3 (WRITE)
// 005dc99e: ADD EAX,ECX
// 005dc9a0: MOV EDX,dword ptr [EBX + 0x1a5e8]
// 005dc9a6: INC EAX
// 005dc9a7: ADD EDX,EAX
// 005dc9a9: MOV ECX,dword ptr [EBX + 0x6d64]
// 005dc9af: MOV dword ptr [EBX + 0x1a5e8],EDX
// 005dc9b5: CMP EDX,ECX
// 005dc9b7: JL 0x005dc9c3
//   XREF to: 005dc9c3 (CONDITIONAL_JUMP)
// 005dc9b9: MOV dword ptr [EBX + 0x1a5e8],0x0
// 005dc9c3: CMP byte ptr [0x02d03eb2],0x0
//   Label: LAB_005dc9c3
//   XREF to: 02d03eb2 (READ)
// 005dc9ca: JZ 0x005dc9f8
//   XREF to: 005dc9f8 (CONDITIONAL_JUMP)
// 005dc9cc: XOR CH,CH
// 005dc9ce: MOV byte ptr [0x02d03eb2],CH
//   XREF to: 02d03eb2 (WRITE)
// 005dc9d4: XOR ECX,ECX
// 005dc9d6: MOV CL,byte ptr [0x02d03ec2]
//   XREF to: 02d03ec2 (READ)
// 005dc9dc: LEA EAX,[ECX*0x8 + 0x0]
// 005dc9e3: ADD EAX,ECX
// 005dc9e5: MOV ESI,dword ptr [EBX + 0x1a5e8]
// 005dc9eb: INC EAX
// 005dc9ec: SUB ESI,EAX
// 005dc9ee: MOV dword ptr [EBX + 0x1a5e8],ESI
// 005dc9f4: TEST ESI,ESI
// 005dc9f6: JL 0x005dca09
//   XREF to: 005dca09 (CONDITIONAL_JUMP)
// 005dc9f8: CMP dword ptr [0x03f87340],0x0
//   Label: LAB_005dc9f8
//   XREF to: 03f87340 (READ)
// 005dc9ff: JZ 0x005dca18
//   XREF to: 005dca18 (CONDITIONAL_JUMP)
// 005dca01: ADD ESP,0x40
//   Label: LAB_005dca01
// 005dca04: POP EBP
// 005dca05: POP EDI
// 005dca06: POP ESI
// 005dca07: POP EBX
// 005dca08: RET
// 005dca09: MOV EAX,dword ptr [EBX + 0x6d64]
//   Label: LAB_005dca09
// 005dca0f: DEC EAX
// 005dca10: MOV dword ptr [EBX + 0x1a5e8],EAX
// 005dca16: JMP 0x005dc9f8
//   XREF to: 005dc9f8 (UNCONDITIONAL_JUMP)
// 005dca18: CALL engine_matrix.c_popViewport_FUN_0050e480
//   Label: LAB_005dca18
//   XREF to: 0050e480 (UNCONDITIONAL_CALL)
// 005dca1d: ADD ESP,0x40
// 005dca20: POP EBP
// 005dca21: POP EDI
// 005dca22: POP ESI
// 005dca23: POP EBX
// 005dca24: RET

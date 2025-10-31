// Name: engine_texture.cpp_CTextureCache_renderAllTextures_FUN_005dd580
// Address: 005dd580
// Address Range: [[005dd580, 005dd684]]
// Convention: __cdecl
// Signature: void engine_texture.cpp_CTextureCache_renderAllTextures_FUN_005dd580(CTextureCache * this_ptr)
// Cross-references:
//   engine_texture.cpp_renderTextureAtlas_FUN_005dd990 (005dd990) at 005dd9a7 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_texture.cpp_CTextureCache_setupTexture_FUN_005dd200
//   wincore_windll.cpp_drawPolygon_FUN_005b75e0

#include "nocturne.h"

void __cdecl
engine_texture_cpp_CTextureCache_renderAllTextures_FUN_005dd580(CTextureCache *this_ptr)

{
  int texture_index;
  BADSPACEBASE *in_ESP;
  SRenderVertex local_c8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  texture_index = 0;
  if (0 < this_ptr->current_texture_count) {
    do {
      engine_texture_cpp_CTextureCache_setupTexture_FUN_005dd200(this_ptr,texture_index);
      texture_index = texture_index + 1;
      local_c8.projected_vertex.transformed_x = 1000;
      local_c8.projected_vertex.transformed_y = 1000;
      local_c8.projected_vertex.transformed_z = 2000;
      uStack_90 = 2000;
      uStack_60 = 2000;
      uStack_30 = 2000;
      local_88 = 0x5fffa;
      local_58 = 0x5fffa;
      local_54 = 0x5fffa;
      local_24 = 0x5fffa;
      local_c8.u = 0.0;
      local_c8.v = 0.0;
      local_80 = 0;
      uStack_7c = 0;
      local_50 = 0;
      uStack_4c = 0;
      local_20 = 0;
      uStack_1c = 0;
      local_94 = 1000;
      local_98 = 0xfffffc18;
      local_68 = 0xfffffc18;
      local_64 = 0xfffffc18;
      local_34 = 0xfffffc18;
      local_38 = 1000;
      local_c8.projected_vertex.screen_x = 0x4fffb;
      local_c8.projected_vertex.screen_y = 0x4fffb;
      local_84 = 0x4fffb;
      local_28 = 0x4fffb;
      wincore_windll_cpp_drawPolygon_FUN_005b75e0(&local_c8,4,1);
    } while (texture_index < this_ptr->current_texture_count);
  }
  return;
}


// Assembly code:
// 005dd580: PUSH EBX
//   Label: engine_texture.cpp_CTextureCache_renderAllTextures_FUN_005dd580
// 005dd581: PUSH ESI
// 005dd582: PUSH EBP
// 005dd583: SUB ESP,0xc0
// 005dd589: MOV ESI,dword ptr [ESP + 0xd0]
//   XREF to: Stack[0x4] (READ)
// 005dd590: MOV EDX,dword ptr [ESI + 0x14008]
// 005dd596: XOR EBX,EBX
// 005dd598: TEST EDX,EDX
// 005dd59a: JLE 0x005dd67b
//   XREF to: 005dd67b (CONDITIONAL_JUMP)
// 005dd5a0: PUSH EDI
// 005dd5a1: MOV EBP,0x5fffa
// 005dd5a6: XOR EDI,EDI
// 005dd5a8: PUSH EBX
//   Label: LAB_005dd5a8
// 005dd5a9: PUSH ESI
// 005dd5aa: CALL engine_texture.cpp_CTextureCache_setupTexture_FUN_005dd200
//   XREF to: 005dd200 (UNCONDITIONAL_CALL)
// 005dd5af: INC EBX
// 005dd5b0: ADD ESP,0x8
// 005dd5b3: MOV ECX,0x3e8
// 005dd5b8: MOV EDX,0x7d0
// 005dd5bd: PUSH 0x1
// 005dd5bf: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0xcc] (WRITE)
// 005dd5c3: MOV EAX,ECX
// 005dd5c5: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0xc8] (WRITE)
// 005dd5c9: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0xc4] (WRITE)
// 005dd5cd: MOV dword ptr [ESP + 0x40],EDX
//   XREF to: Stack[-0x94] (WRITE)
// 005dd5d1: MOV dword ptr [ESP + 0x70],EDX
//   XREF to: Stack[-0x64] (WRITE)
// 005dd5d5: MOV dword ptr [ESP + 0xa0],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 005dd5dc: MOV dword ptr [ESP + 0x48],EBP
//   XREF to: Stack[-0x8c] (WRITE)
// 005dd5e0: MOV dword ptr [ESP + 0x78],EBP
//   XREF to: Stack[-0x5c] (WRITE)
// 005dd5e4: MOV dword ptr [ESP + 0x7c],EBP
//   XREF to: Stack[-0x58] (WRITE)
// 005dd5e8: MOV dword ptr [ESP + 0xac],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 005dd5ef: MOV dword ptr [ESP + 0x20],EDI
//   XREF to: Stack[-0xb4] (WRITE)
// 005dd5f3: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0xb0] (WRITE)
// 005dd5f7: MOV dword ptr [ESP + 0x50],EDI
//   XREF to: Stack[-0x84] (WRITE)
// 005dd5fb: MOV dword ptr [ESP + 0x54],EDI
//   XREF to: Stack[-0x80] (WRITE)
// 005dd5ff: MOV dword ptr [ESP + 0x80],EDI
//   XREF to: Stack[-0x54] (WRITE)
// 005dd606: MOV dword ptr [ESP + 0x84],EDI
//   XREF to: Stack[-0x50] (WRITE)
// 005dd60d: MOV dword ptr [ESP + 0xb0],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 005dd614: MOV dword ptr [ESP + 0xb4],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 005dd61b: MOV ECX,0xfffffc18
// 005dd620: PUSH 0x4
// 005dd622: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 005dd626: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x9c] (WRITE)
// 005dd62a: MOV dword ptr [ESP + 0x6c],ECX
//   XREF to: Stack[-0x6c] (WRITE)
// 005dd62e: MOV EAX,ECX
// 005dd630: MOV dword ptr [ESP + 0x70],ECX
//   XREF to: Stack[-0x68] (WRITE)
// 005dd634: MOV ECX,0x3e8
// 005dd639: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005dd640: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xcc] (DATA)
// 005dd644: MOV dword ptr [ESP + 0x9c],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 005dd64b: MOV ECX,0x4fffb
// 005dd650: PUSH EAX
// 005dd651: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0xbc] (WRITE)
// 005dd655: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0xb8] (WRITE)
// 005dd659: MOV dword ptr [ESP + 0x54],ECX
//   XREF to: Stack[-0x88] (WRITE)
// 005dd65d: MOV dword ptr [ESP + 0xb0],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005dd664: CALL wincore_windll.cpp_drawPolygon_FUN_005b75e0
//   XREF to: 005b75e0 (UNCONDITIONAL_CALL)
// 005dd669: MOV EAX,dword ptr [ESI + 0x14008]
// 005dd66f: ADD ESP,0xc
// 005dd672: CMP EBX,EAX
// 005dd674: JL 0x005dd5a8
//   XREF to: 005dd5a8 (CONDITIONAL_JUMP)
// 005dd67a: POP EDI
// 005dd67b: ADD ESP,0xc0
//   Label: LAB_005dd67b
// 005dd681: POP EBP
// 005dd682: POP ESI
// 005dd683: POP EBX
// 005dd684: RET

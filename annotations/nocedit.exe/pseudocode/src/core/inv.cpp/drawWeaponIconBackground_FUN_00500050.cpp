// Name: core_inv.cpp_drawWeaponIconBackground_FUN_00500050
// Address: 00500050
// Address Range: [[00500050, 005001d4]]
// Convention: __cdecl
// Signature: void core_inv.cpp_drawWeaponIconBackground_FUN_00500050(int x1, int y1, int x2, int y2, int alpha)
// Cross-references:
//   core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370 (00500370) at 00500638 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic g_Inventory3DTextureAtlas
//   undefined4 DAT_00a00000
//   undefined4 DAT_01000000
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonCamera g_CDemonCameraInstance
// Function calls:
//   core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60

#include "nocturne.h"

void __cdecl
core_inv_cpp_drawWeaponIconBackground_FUN_00500050(int x1,int y1,int x2,int y2,int alpha)

{
  CDemonRenderer *this_ptr;
  BADSPACEBASE *in_ESP;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_Inventory3DTextureAtlas);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr,in_stack_00000018);
  this_ptr = g_CDemonRendererPtr;
  (g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x = x2 << 0x10;
  (this_ptr->vertex_buffer_ptr->projected_vertex).screen_y = y2 << 0x10;
  (this_ptr->vertex_buffer_ptr->projected_vertex).transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr->u = 0.0;
  this_ptr->vertex_buffer_ptr->v = (float)&DAT_00a00000;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_x = alpha << 0x10;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_y = y2 << 0x10;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[1].u = 8.816208e-39;
  this_ptr->vertex_buffer_ptr[1].v = (float)&DAT_00a00000;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_x = alpha << 0x10;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_y = in_stack_00000018 << 0x10;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[2].u = 8.816208e-39;
  this_ptr->vertex_buffer_ptr[2].v = 2.3509887e-38;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_x = x2 << 0x10;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_y = in_stack_00000018 << 0x10;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[3].u = 0.0;
  this_ptr->vertex_buffer_ptr[3].v = 2.3509887e-38;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (this_ptr,(SMRGLHeaderPrimitive *)&stack0xffffffc0,0xa3);
  core_dcamera_cpp_CDemonCamera_pushRect_FUN_0044c740
            (&g_CDemonCameraInstance,y2,in_stack_00000018,alpha,in_stack_0000001c);
  return;
}


// Assembly code:
// 00500050: PUSH EBX
//   Label: core_inv.cpp_drawWeaponIconBackground_FUN_00500050
// 00500051: PUSH ESI
// 00500052: PUSH EDI
// 00500053: PUSH EBP
// 00500054: SUB ESP,0x38
// 00500057: PUSH 0x67cf14
//   XREF to: 0067cf14 (DATA)
// 0050005c: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00500062: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00500063: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 00500068: ADD ESP,0x8
// 0050006b: MOV ECX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x14] (READ)
// 0050006f: PUSH ECX
// 00500070: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00500076: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00500077: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 0050007c: ADD ESP,0x8
// 0050007f: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00500084: MOV ECX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00500088: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050008a: SHL ECX,0x10
// 0050008d: MOV dword ptr [EDX + 0x10],ECX
// 00500090: MOV EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 00500094: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00500096: SHL EBX,0x10
// 00500099: MOV dword ptr [EDX + 0x14],EBX
// 0050009c: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050009e: MOV dword ptr [EDX + 0x8],0x1000
// 005000a5: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005000a7: MOV dword ptr [EDX + 0x18],0x0
// 005000ae: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005000b0: MOV dword ptr [EDX + 0x1c],0xa00000
//   XREF to: 00a00000 (DATA)
// 005000b7: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0xc] (READ)
// 005000bb: MOV ESI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005000bd: SHL EDX,0x10
// 005000c0: MOV dword ptr [ESI + 0x40],EDX
// 005000c3: MOV ESI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005000c5: MOV dword ptr [ESI + 0x44],EBX
// 005000c8: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005000ca: MOV dword ptr [EBX + 0x38],0x1000
// 005000d1: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005000d3: MOV dword ptr [EBX + 0x48],0x600000
// 005000da: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005000dc: MOV dword ptr [EBX + 0x4c],0xa00000
//   XREF to: 00a00000 (DATA)
// 005000e3: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005000e5: MOV dword ptr [EBX + 0x70],EDX
// 005000e8: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x10] (READ)
// 005000ec: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005000ee: SHL EDX,0x10
// 005000f1: MOV dword ptr [EBX + 0x74],EDX
// 005000f4: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005000f6: MOV dword ptr [EBX + 0x68],0x1000
// 005000fd: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005000ff: MOV dword ptr [EBX + 0x78],0x600000
// 00500106: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00500108: MOV dword ptr [EBX + 0x7c],0x1000000
//   XREF to: 01000000 (DATA)
// 0050010f: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00500111: MOV dword ptr [EBX + 0xa0],ECX
// 00500117: MOV ECX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00500119: MOV dword ptr [ECX + 0xa4],EDX
// 0050011f: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00500121: MOV dword ptr [EDX + 0x98],0x1000
// 0050012b: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050012d: MOV ESI,0x4
// 00500132: MOV dword ptr [EDX + 0xa8],0x0
// 0050013c: MOV EBP,0x3
// 00500141: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00500143: PUSH 0xa3
// 00500148: XOR EDI,EDI
// 0050014a: MOV dword ptr [EDX + 0xac],0x1000000
//   XREF to: 01000000 (DATA)
// 00500154: LEA EDX,[ESP + 0x4]
//   XREF to: Stack[-0x48] (DATA)
// 00500158: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x44] (WRITE)
// 0050015c: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 00500160: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 00500164: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x3c] (WRITE)
// 00500168: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x40] (WRITE)
// 0050016c: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 00500170: MOV dword ptr [ESP + 0x28],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 00500174: PUSH EDX
// 00500175: MOV ESI,0x1
// 0050017a: MOV EDI,0x2
// 0050017f: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00500180: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 00500184: MOV dword ptr [ESP + 0x2c],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 00500188: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 0050018d: ADD ESP,0xc
// 00500190: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00500194: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00500198: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 0050019c: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005001a0: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0xc] (READ)
// 005001a4: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005001a8: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x10] (READ)
// 005001ac: PUSH EAX
// 005001ad: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x18] (READ)
// 005001b1: PUSH EDX
// 005001b2: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 005001b6: PUSH ECX
// 005001b7: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (READ)
// 005001bb: PUSH EBX
// 005001bc: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 005001c1: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005001c5: CALL core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740
//   XREF to: 0044c740 (UNCONDITIONAL_CALL)
// 005001ca: ADD ESP,0x14
// 005001cd: ADD ESP,0x38
// 005001d0: POP EBP
// 005001d1: POP EDI
// 005001d2: POP ESI
// 005001d3: POP EBX
// 005001d4: RET

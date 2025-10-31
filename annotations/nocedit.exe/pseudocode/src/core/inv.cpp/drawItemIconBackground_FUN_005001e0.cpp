// Name: core_inv.cpp_drawItemIconBackground_FUN_005001e0
// Address: 005001e0
// Address Range: [[005001e0, 00500364]]
// Convention: __cdecl
// Signature: void core_inv.cpp_drawItemIconBackground_FUN_005001e0(int x1, int y1, int x2, int y2, int alpha)
// Cross-references:
//   core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370 (00500370) at 005004a4 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic g_Inventory3DTextureAtlas
//   undefined4 DAT_00f00000
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonCamera g_CDemonCameraInstance
// Function calls:
//   core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60

#include "nocturne.h"

void __cdecl core_inv_cpp_drawItemIconBackground_FUN_005001e0(int x1,int y1,int x2,int y2,int alpha)

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
  this_ptr->vertex_buffer_ptr->v = 0.0;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_x = alpha << 0x10;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_y = y2 << 0x10;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[1].u = 2.2040519e-38;
  this_ptr->vertex_buffer_ptr[1].v = 0.0;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_x = alpha << 0x10;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_y = in_stack_00000018 << 0x10;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[2].u = 2.2040519e-38;
  this_ptr->vertex_buffer_ptr[2].v = 8.816208e-39;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_x = x2 << 0x10;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_y = in_stack_00000018 << 0x10;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[3].u = 0.0;
  this_ptr->vertex_buffer_ptr[3].v = 8.816208e-39;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (this_ptr,(SMRGLHeaderPrimitive *)&stack0xffffffc0,0xa3);
  core_dcamera_cpp_CDemonCamera_pushRect_FUN_0044c740
            (&g_CDemonCameraInstance,y2,in_stack_00000018,alpha,in_stack_0000001c);
  return;
}


// Assembly code:
// 005001e0: PUSH EBX
//   Label: core_inv.cpp_drawItemIconBackground_FUN_005001e0
// 005001e1: PUSH ESI
// 005001e2: PUSH EDI
// 005001e3: PUSH EBP
// 005001e4: SUB ESP,0x38
// 005001e7: PUSH 0x67cf14
//   XREF to: 0067cf14 (DATA)
// 005001ec: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005001f2: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005001f3: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 005001f8: ADD ESP,0x8
// 005001fb: MOV ECX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x14] (READ)
// 005001ff: PUSH ECX
// 00500200: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00500206: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00500207: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 0050020c: ADD ESP,0x8
// 0050020f: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00500214: MOV ECX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00500218: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050021a: SHL ECX,0x10
// 0050021d: MOV dword ptr [EDX + 0x10],ECX
// 00500220: MOV EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 00500224: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00500226: SHL EBX,0x10
// 00500229: MOV dword ptr [EDX + 0x14],EBX
// 0050022c: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050022e: MOV dword ptr [EDX + 0x8],0x1000
// 00500235: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00500237: MOV dword ptr [EDX + 0x18],0x0
// 0050023e: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00500240: MOV dword ptr [EDX + 0x1c],0x0
// 00500247: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0xc] (READ)
// 0050024b: MOV ESI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050024d: SHL EDX,0x10
// 00500250: MOV dword ptr [ESI + 0x40],EDX
// 00500253: MOV ESI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00500255: MOV dword ptr [ESI + 0x44],EBX
// 00500258: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050025a: MOV dword ptr [EBX + 0x38],0x1000
// 00500261: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00500263: MOV dword ptr [EBX + 0x48],0xf00000
//   XREF to: 00f00000 (DATA)
// 0050026a: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050026c: MOV dword ptr [EBX + 0x4c],0x0
// 00500273: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00500275: MOV dword ptr [EBX + 0x70],EDX
// 00500278: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x10] (READ)
// 0050027c: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050027e: SHL EDX,0x10
// 00500281: MOV dword ptr [EBX + 0x74],EDX
// 00500284: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00500286: MOV dword ptr [EBX + 0x68],0x1000
// 0050028d: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050028f: MOV dword ptr [EBX + 0x78],0xf00000
//   XREF to: 00f00000 (DATA)
// 00500296: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00500298: MOV dword ptr [EBX + 0x7c],0x600000
// 0050029f: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005002a1: MOV dword ptr [EBX + 0xa0],ECX
// 005002a7: MOV ECX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005002a9: MOV dword ptr [ECX + 0xa4],EDX
// 005002af: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005002b1: MOV dword ptr [EDX + 0x98],0x1000
// 005002bb: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005002bd: MOV ESI,0x4
// 005002c2: MOV dword ptr [EDX + 0xa8],0x0
// 005002cc: MOV EBP,0x3
// 005002d1: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005002d3: PUSH 0xa3
// 005002d8: XOR EDI,EDI
// 005002da: MOV dword ptr [EDX + 0xac],0x600000
// 005002e4: LEA EDX,[ESP + 0x4]
//   XREF to: Stack[-0x48] (DATA)
// 005002e8: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x44] (WRITE)
// 005002ec: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 005002f0: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 005002f4: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x3c] (WRITE)
// 005002f8: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x40] (WRITE)
// 005002fc: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 00500300: MOV dword ptr [ESP + 0x28],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 00500304: PUSH EDX
// 00500305: MOV ESI,0x1
// 0050030a: MOV EDI,0x2
// 0050030f: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00500310: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 00500314: MOV dword ptr [ESP + 0x2c],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 00500318: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 0050031d: ADD ESP,0xc
// 00500320: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00500324: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00500328: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 0050032c: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00500330: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0xc] (READ)
// 00500334: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00500338: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x10] (READ)
// 0050033c: PUSH EAX
// 0050033d: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x18] (READ)
// 00500341: PUSH EDX
// 00500342: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 00500346: PUSH ECX
// 00500347: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (READ)
// 0050034b: PUSH EBX
// 0050034c: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 00500351: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00500355: CALL core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740
//   XREF to: 0044c740 (UNCONDITIONAL_CALL)
// 0050035a: ADD ESP,0x14
// 0050035d: ADD ESP,0x38
// 00500360: POP EBP
// 00500361: POP EDI
// 00500362: POP ESI
// 00500363: POP EBX
// 00500364: RET

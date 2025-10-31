// Name: engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0
// Address: 005f22e0
// Address Range: [[005f22e0, 005f238c]]
// Convention: __cdecl
// Signature: CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0(CWinFont * this_ptr, char * font_name, int font_height, int font_width)
// Cross-references:
//   core_dfont.cpp_initFonts_FUN_004709a0 (004709a0) at 00470ee4 [UNCONDITIONAL_CALL]
// Globals:
//   CreateFontA* CreateFontA = 00211776
//   CFont_vtable g_CWinFontVTable
// Function calls:
//   CreateFontA
//   engine_palette.cpp_CFont_ctor_FUN_00544eb0

#include "nocturne.h"

CWinFont * __cdecl
engine_winfont_cpp_CWinFont_ctor_FUN_005f22e0
          (CWinFont *this_ptr,char *font_name,int font_height,int font_width)

{
  CWinFont *pCVar1;
  HFONT pHVar2;
  int in_stack_00000050;
  int in_stack_00000054;
  
  pCVar1 = (CWinFont *)engine_palette_cpp_CFont_ctor_FUN_00544eb0(&this_ptr->base_font);
  (pCVar1->base_font).vtable = &g_CWinFontVTable;
  pCVar1->deviceContextHandle = (HDC)0x0;
  pCVar1->fontHandle = (HFONT)0x0;
  pCVar1->objectHandle = (HGDIOBJ)0x0;
  pCVar1->ppvBits = (void **)0x0;
  pCVar1->right = 0;
  pCVar1->top = 0;
  pCVar1->bpp = 0;
  pCVar1->cached_foreground_color = 0;
  pCVar1->cached_background_color = 0;
  pHVar2 = (*CreateFontA)(-font_width,0,0,0,400,0,0,0,1,0,0,0,0,(LPCSTR)font_height);
  pCVar1->fontHandle = pHVar2;
  pCVar1->yOffset1 = in_stack_00000050;
  pCVar1->yOffset2 = in_stack_00000054;
  return pCVar1;
}


// Assembly code:
// 005f22e0: PUSH EBX
//   Label: engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0
// 005f22e1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005f22e5: PUSH EDX
// 005f22e6: CALL engine_palette.cpp_CFont_ctor_FUN_00544eb0
//   XREF to: 00544eb0 (UNCONDITIONAL_CALL)
// 005f22eb: ADD ESP,0x4
// 005f22ee: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005f22f2: PUSH ECX
// 005f22f3: PUSH 0x0
// 005f22f5: PUSH 0x0
// 005f22f7: MOV dword ptr [EAX],0x665914
//   XREF to: 00665914 (DATA)
// 005f22fd: PUSH 0x0
// 005f22ff: MOV dword ptr [EAX + 0x4],0x0
// 005f2306: PUSH 0x0
// 005f2308: MOV dword ptr [EAX + 0xc],0x0
// 005f230f: PUSH 0x1
// 005f2311: MOV dword ptr [EAX + 0x10],0x0
// 005f2318: PUSH 0x0
// 005f231a: MOV dword ptr [EAX + 0x14],0x0
// 005f2321: PUSH 0x0
// 005f2323: MOV dword ptr [EAX + 0x120],0x0
// 005f232d: PUSH 0x0
// 005f232f: MOV dword ptr [EAX + 0x124],0x0
// 005f2339: PUSH 0x190
// 005f233e: MOV dword ptr [EAX + 0x128],0x0
// 005f2348: PUSH 0x0
// 005f234a: MOV EBX,EAX
// 005f234c: MOV dword ptr [EAX + 0x12c],0x0
// 005f2356: PUSH 0x0
// 005f2358: MOV dword ptr [EAX + 0x130],0x0
// 005f2362: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0xc] (READ)
// 005f2366: PUSH 0x0
// 005f2368: NEG EAX
// 005f236a: PUSH EAX
// 005f236b: CALL dword ptr CS:[0x6113d4]
//   XREF to: EXTERNAL:00000004 (COMPUTED_CALL)
//   XREF to: 006113d4 (READ)
// 005f2372: MOV dword ptr [EBX + 0xc],EAX
// 005f2375: MOV EAX,dword ptr [ESP + 0x14]
// 005f2379: MOV dword ptr [EBX + 0x134],EAX
// 005f237f: MOV EAX,dword ptr [ESP + 0x18]
// 005f2383: MOV dword ptr [EBX + 0x138],EAX
// 005f2389: MOV EAX,EBX
// 005f238b: POP EBX
// 005f238c: RET

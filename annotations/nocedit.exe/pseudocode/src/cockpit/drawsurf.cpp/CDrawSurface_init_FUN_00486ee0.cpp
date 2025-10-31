// Name: cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00486ee0
// Address: 00486ee0
// Address Range: [[00486ee0, 00487002]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00486ee0(CDrawSurface * this_ptr, int x, int y, int width, int height, CDrawSurface * parent_surface)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0 (00486ea0) at 00486ec2 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486e70 (00486e70) at 00486e8a [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_init_FUN_00486ee0
          (CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface)

{
  this_ptr->x = x;
  this_ptr->y = y;
  this_ptr->width = width;
  this_ptr->height = height;
  this_ptr->clip_left = this_ptr->x;
  this_ptr->clip_top = this_ptr->y;
  this_ptr->clip_right = this_ptr->x + this_ptr->width + -1;
  this_ptr->clip_bottom = this_ptr->y + this_ptr->height + -1;
  if (parent_surface != (CDrawSurface *)0x0) {
    this_ptr->x = this_ptr->x + parent_surface->x;
    this_ptr->y = this_ptr->y + parent_surface->y;
    this_ptr->clip_left = this_ptr->clip_left + parent_surface->x;
    this_ptr->clip_top = this_ptr->clip_top + parent_surface->y;
    this_ptr->clip_right = this_ptr->clip_right + parent_surface->x;
    this_ptr->clip_bottom = this_ptr->clip_bottom + parent_surface->y;
    if (this_ptr->clip_left < parent_surface->clip_left) {
      this_ptr->clip_left = parent_surface->clip_left;
    }
    if (this_ptr->clip_top < parent_surface->clip_top) {
      this_ptr->clip_top = parent_surface->clip_top;
    }
    if (parent_surface->clip_right < this_ptr->clip_right) {
      this_ptr->clip_right = parent_surface->clip_right;
    }
    if (parent_surface->clip_bottom < this_ptr->clip_bottom) {
      this_ptr->clip_bottom = parent_surface->clip_bottom;
    }
  }
  if (this_ptr->clip_left < 0) {
    this_ptr->clip_left = 0;
  }
  if (this_ptr->clip_top < 0) {
    this_ptr->clip_top = 0;
  }
  if (g_WindowWidth <= this_ptr->clip_right) {
    this_ptr->clip_right = g_WindowWidth + -1;
  }
  if (this_ptr->clip_bottom < g_WindowHeight) {
    return;
  }
  this_ptr->clip_bottom = g_WindowHeight + -1;
  return;
}


// Assembly code:
// 00486ee0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00486ee0
// 00486ee1: PUSH ESI
// 00486ee2: PUSH EDI
// 00486ee3: PUSH EBP
// 00486ee4: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00486ee8: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 00486eec: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00486ef0: MOV dword ptr [EAX + 0x8],ECX
// 00486ef3: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00486ef7: MOV dword ptr [EAX + 0xc],ECX
// 00486efa: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00486efe: MOV dword ptr [EAX],ECX
// 00486f00: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00486f04: MOV dword ptr [EAX + 0x4],ECX
// 00486f07: MOV ECX,dword ptr [EAX + 0x8]
// 00486f0a: MOV dword ptr [EAX + 0x10],ECX
// 00486f0d: MOV ECX,dword ptr [EAX + 0xc]
// 00486f10: MOV dword ptr [EAX + 0x14],ECX
// 00486f13: MOV EBX,dword ptr [EAX]
// 00486f15: MOV ECX,dword ptr [EAX + 0x8]
// 00486f18: ADD ECX,EBX
// 00486f1a: DEC ECX
// 00486f1b: MOV dword ptr [EAX + 0x18],ECX
// 00486f1e: MOV ESI,dword ptr [EAX + 0x4]
// 00486f21: MOV ECX,dword ptr [EAX + 0xc]
// 00486f24: ADD ECX,ESI
// 00486f26: DEC ECX
// 00486f27: MOV dword ptr [EAX + 0x1c],ECX
// 00486f2a: TEST EDX,EDX
// 00486f2c: JNZ 0x00486f67
//   XREF to: 00486f67 (CONDITIONAL_JUMP)
// 00486f2e: CMP dword ptr [EAX + 0x10],0x0
//   Label: LAB_00486f2e
// 00486f32: JL 0x00486fe0
//   XREF to: 00486fe0 (CONDITIONAL_JUMP)
// 00486f38: CMP dword ptr [EAX + 0x14],0x0
//   Label: LAB_00486f38
// 00486f3c: JL 0x00486fec
//   XREF to: 00486fec (CONDITIONAL_JUMP)
// 00486f42: MOV EBX,dword ptr [0x00679394]
//   Label: LAB_00486f42
//   XREF to: 00679394 (READ)
// 00486f48: CMP EBX,dword ptr [EAX + 0x18]
// 00486f4b: JG 0x00486f53
//   XREF to: 00486f53 (CONDITIONAL_JUMP)
// 00486f4d: LEA EDX,[EBX + -0x1]
// 00486f50: MOV dword ptr [EAX + 0x18],EDX
// 00486f53: MOV ESI,dword ptr [0x00679398]
//   Label: LAB_00486f53
//   XREF to: 00679398 (READ)
// 00486f59: CMP ESI,dword ptr [EAX + 0x1c]
// 00486f5c: JLE 0x00486ff8
//   XREF to: 00486ff8 (CONDITIONAL_JUMP)
// 00486f62: POP EBP
// 00486f63: POP EDI
// 00486f64: POP ESI
// 00486f65: POP EBX
// 00486f66: RET
// 00486f67: MOV EDI,dword ptr [EAX + 0x8]
//   Label: LAB_00486f67
// 00486f6a: MOV ECX,dword ptr [EDX + 0x8]
// 00486f6d: ADD EDI,ECX
// 00486f6f: MOV dword ptr [EAX + 0x8],EDI
// 00486f72: MOV EBP,dword ptr [EAX + 0xc]
// 00486f75: MOV ECX,dword ptr [EDX + 0xc]
// 00486f78: ADD EBP,ECX
// 00486f7a: MOV dword ptr [EAX + 0xc],EBP
// 00486f7d: MOV EBX,dword ptr [EAX + 0x10]
// 00486f80: MOV ECX,dword ptr [EDX + 0x8]
// 00486f83: ADD EBX,ECX
// 00486f85: MOV dword ptr [EAX + 0x10],EBX
// 00486f88: MOV ESI,dword ptr [EAX + 0x14]
// 00486f8b: MOV ECX,dword ptr [EDX + 0xc]
// 00486f8e: ADD ESI,ECX
// 00486f90: MOV dword ptr [EAX + 0x14],ESI
// 00486f93: MOV EDI,dword ptr [EAX + 0x18]
// 00486f96: MOV ECX,dword ptr [EDX + 0x8]
// 00486f99: ADD EDI,ECX
// 00486f9b: MOV dword ptr [EAX + 0x18],EDI
// 00486f9e: MOV EBP,dword ptr [EAX + 0x1c]
// 00486fa1: MOV ECX,dword ptr [EDX + 0xc]
// 00486fa4: ADD EBP,ECX
// 00486fa6: MOV dword ptr [EAX + 0x1c],EBP
// 00486fa9: MOV ECX,dword ptr [EAX + 0x10]
// 00486fac: MOV EBX,dword ptr [EDX + 0x10]
// 00486faf: CMP ECX,EBX
// 00486fb1: JGE 0x00486fb6
//   XREF to: 00486fb6 (CONDITIONAL_JUMP)
// 00486fb3: MOV dword ptr [EAX + 0x10],EBX
// 00486fb6: MOV ESI,dword ptr [EDX + 0x14]
//   Label: LAB_00486fb6
// 00486fb9: CMP ESI,dword ptr [EAX + 0x14]
// 00486fbc: JLE 0x00486fc1
//   XREF to: 00486fc1 (CONDITIONAL_JUMP)
// 00486fbe: MOV dword ptr [EAX + 0x14],ESI
// 00486fc1: MOV EDI,dword ptr [EDX + 0x18]
//   Label: LAB_00486fc1
// 00486fc4: CMP EDI,dword ptr [EAX + 0x18]
// 00486fc7: JGE 0x00486fcc
//   XREF to: 00486fcc (CONDITIONAL_JUMP)
// 00486fc9: MOV dword ptr [EAX + 0x18],EDI
// 00486fcc: MOV EBP,dword ptr [EDX + 0x1c]
//   Label: LAB_00486fcc
// 00486fcf: CMP EBP,dword ptr [EAX + 0x1c]
// 00486fd2: JGE 0x00486f2e
//   XREF to: 00486f2e (CONDITIONAL_JUMP)
// 00486fd8: MOV dword ptr [EAX + 0x1c],EBP
// 00486fdb: JMP 0x00486f2e
//   XREF to: 00486f2e (UNCONDITIONAL_JUMP)
// 00486fe0: MOV dword ptr [EAX + 0x10],0x0
//   Label: LAB_00486fe0
// 00486fe7: JMP 0x00486f38
//   XREF to: 00486f38 (UNCONDITIONAL_JUMP)
// 00486fec: MOV dword ptr [EAX + 0x14],0x0
//   Label: LAB_00486fec
// 00486ff3: JMP 0x00486f42
//   XREF to: 00486f42 (UNCONDITIONAL_JUMP)
// 00486ff8: LEA EDX,[ESI + -0x1]
//   Label: LAB_00486ff8
// 00486ffb: MOV dword ptr [EAX + 0x1c],EDX
// 00486ffe: POP EBP
// 00486fff: POP EDI
// 00487000: POP ESI
// 00487001: POP EBX
// 00487002: RET

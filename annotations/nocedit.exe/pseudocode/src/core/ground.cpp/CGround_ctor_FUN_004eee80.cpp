// Name: core_ground.cpp_CGround_ctor_FUN_004eee80
// Address: 004eee80
// Address Range: [[004eee80, 004eeed5]]
// Convention: __cdecl
// Signature: void core_ground.cpp_CGround_ctor_FUN_004eee80(CGround * this_ptr, int width, int height)
// Cross-references:
//   core_ground.cpp_staticInit_FUN_004eeb90 (004eeb90) at 004eeb9f [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_ctor_FUN_004eee80(CGround *this_ptr,int width,int height)

{
  this_ptr->grid_width = 0x1e;
  this_ptr->grid_height = 0x1e;
  this_ptr->width = width;
  this_ptr->terrain_data = (void *)0x0;
  this_ptr->texture_list = (CTextureList *)0x0;
  this_ptr->vertical_scale = 8;
  this_ptr->height_scale = 1;
  this_ptr->height = height;
  this_ptr->total_cells = this_ptr->grid_width * this_ptr->grid_height;
  this_ptr->height_minus_1 = height + -1;
  this_ptr->width_minus_1 = width + -1;
  return;
}


// Assembly code:
// 004eee80: PUSH EBX
//   Label: core_ground.cpp_CGround_ctor_FUN_004eee80
// 004eee81: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004eee85: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004eee89: MOV dword ptr [EAX + 0x10],0x1e
// 004eee90: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004eee94: MOV dword ptr [EAX + 0x14],0x1e
// 004eee9b: MOV dword ptr [EAX],EDX
// 004eee9d: MOV EBX,dword ptr [EAX + 0x14]
// 004eeea0: MOV EDX,dword ptr [EAX + 0x10]
// 004eeea3: IMUL EDX,EBX
// 004eeea6: MOV dword ptr [EAX + 0x24],0x0
// 004eeead: MOV dword ptr [EAX + 0x28],0x0
// 004eeeb4: MOV dword ptr [EAX + 0x1c],0x8
// 004eeebb: MOV dword ptr [EAX + 0x20],0x1
// 004eeec2: MOV dword ptr [EAX + 0x4],ECX
// 004eeec5: DEC ECX
// 004eeec6: MOV dword ptr [EAX + 0x18],EDX
// 004eeec9: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004eeecd: MOV dword ptr [EAX + 0xc],ECX
// 004eeed0: DEC EDX
// 004eeed1: MOV dword ptr [EAX + 0x8],EDX
// 004eeed4: POP EBX
// 004eeed5: RET

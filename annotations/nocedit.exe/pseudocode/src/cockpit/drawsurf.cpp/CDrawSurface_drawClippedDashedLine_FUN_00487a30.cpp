// Name: cockpit_drawsurf.cpp_CDrawSurface_drawClippedDashedLine_FUN_00487a30
// Address: 00487a30
// Address Range: [[00487a30, 00487ac3]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawClippedDashedLine_FUN_00487a30(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00487e20
//   cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00487bc0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawClippedDashedLine_FUN_00487a30
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000018;
  
  x1 = x1 + this_ptr->x;
  y1 = y1 + this_ptr->y;
  x2 = x2 + this_ptr->x;
  y2 = y2 + this_ptr->y;
  iVar1 = cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_00487e20
                    (this_ptr,&x1,&y1,&x2,&y2,this_ptr->clip_left,this_ptr->clip_top,
                     this_ptr->clip_right,this_ptr->clip_bottom);
  if (iVar1 == 0) {
    return;
  }
  cockpit_drawsurf_cpp_CDrawSurface_drawDashedLine_FUN_00487bc0(this_ptr,y1,x2,y2,in_stack_00000018)
  ;
  return;
}


// Assembly code:
// 00487a30: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawClippedDashedLine_FUN_00487a30
// 00487a31: PUSH ESI
// 00487a32: PUSH EDI
// 00487a33: PUSH EBP
// 00487a34: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00487a38: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00487a3c: MOV EAX,dword ptr [EBX + 0x8]
// 00487a3f: ADD EDX,EAX
// 00487a41: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[0x8] (WRITE)
// 00487a45: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00487a49: MOV EAX,dword ptr [EBX + 0xc]
// 00487a4c: ADD ECX,EAX
// 00487a4e: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[0xc] (WRITE)
// 00487a52: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00487a56: MOV EAX,dword ptr [EBX + 0x8]
// 00487a59: ADD ESI,EAX
// 00487a5b: MOV dword ptr [ESP + 0x20],ESI
//   XREF to: Stack[0x10] (WRITE)
// 00487a5f: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00487a63: MOV EAX,dword ptr [EBX + 0xc]
// 00487a66: ADD EDI,EAX
// 00487a68: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[0x14] (WRITE)
// 00487a6c: MOV EBP,dword ptr [EBX + 0x1c]
// 00487a6f: PUSH EBP
// 00487a70: MOV EAX,dword ptr [EBX + 0x18]
// 00487a73: PUSH EAX
// 00487a74: MOV EDX,dword ptr [EBX + 0x14]
// 00487a77: PUSH EDX
// 00487a78: MOV ECX,dword ptr [EBX + 0x10]
// 00487a7b: PUSH ECX
// 00487a7c: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[0x14] (DATA)
// 00487a80: PUSH EAX
// 00487a81: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[0x10] (DATA)
// 00487a85: PUSH EAX
// 00487a86: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[0xc] (DATA)
// 00487a8a: PUSH EAX
// 00487a8b: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[0x8] (DATA)
// 00487a8f: PUSH EAX
// 00487a90: PUSH EBX
// 00487a91: CALL cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00487e20
//   XREF to: 00487e20 (UNCONDITIONAL_CALL)
// 00487a96: ADD ESP,0x24
// 00487a99: TEST EAX,EAX
// 00487a9b: JNZ 0x00487aa2
//   XREF to: 00487aa2 (CONDITIONAL_JUMP)
// 00487a9d: POP EBP
// 00487a9e: POP EDI
// 00487a9f: POP ESI
// 00487aa0: POP EBX
// 00487aa1: RET
// 00487aa2: MOV ESI,dword ptr [ESP + 0x24]
//   Label: LAB_00487aa2
//   XREF to: Stack[0x14] (READ)
// 00487aa6: PUSH ESI
// 00487aa7: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 00487aab: PUSH EDI
// 00487aac: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00487ab0: PUSH EBP
// 00487ab1: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00487ab5: PUSH EAX
// 00487ab6: PUSH EBX
// 00487ab7: CALL cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00487bc0
//   XREF to: 00487bc0 (UNCONDITIONAL_CALL)
// 00487abc: ADD ESP,0x14
// 00487abf: POP EBP
// 00487ac0: POP EDI
// 00487ac1: POP ESI
// 00487ac2: POP EBX
// 00487ac3: RET

// Name: cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0
// Address: 00487ad0
// Address Range: [[00487ad0, 00487bbe]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990 (00487990) at 00487a17 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  int y;
  int unaff_EBP;
  int iVar2;
  int iVar3;
  int x;
  int local_20;
  int local_18;
  int local_14;
  
  local_20 = 1;
  x = x1 - this_ptr->x;
  iVar1 = y1 - this_ptr->y;
  local_14 = y2 - this_ptr->y;
  iVar2 = x2 - this_ptr->x;
  y = iVar1;
  iVar3 = iVar2;
  if (local_14 < iVar1) {
    y = local_14;
    iVar3 = x;
    local_14 = iVar1;
    x = iVar2;
  }
  local_14 = local_14 - y;
  iVar3 = iVar3 - x;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
    local_20 = -1;
  }
  if (local_14 < iVar3) {
    iVar1 = local_14 * 2 - iVar3;
    if (-1 < iVar3) {
      do {
        cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x,y);
        if (0 < iVar1) {
          y = y + 1;
          iVar1 = iVar1 - iVar3;
        }
        local_18 = local_18 + 1;
        x = x + local_20;
        iVar1 = iVar1 + unaff_EBP;
      } while (local_18 <= iVar3);
    }
  }
  else {
    iVar1 = iVar3 * 2 - local_14;
    if (-1 < local_14) {
      do {
        cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x,y);
        if (0 < iVar1) {
          iVar1 = iVar1 - unaff_EBP;
          x = x + local_20;
        }
        y = y + 1;
        local_14 = local_14 + 1;
        iVar1 = iVar1 + iVar3;
      } while (local_14 <= unaff_EBP);
    }
  }
  return;
}


// Assembly code:
// 00487ad0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0
// 00487ad1: PUSH ESI
// 00487ad2: PUSH EDI
// 00487ad3: PUSH EBP
// 00487ad4: SUB ESP,0x10
// 00487ad7: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00487adb: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 00487adf: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 00487ae3: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 00487ae7: MOV EDX,0x1
// 00487aec: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00487af0: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x20] (DATA)
// 00487af3: MOV ECX,dword ptr [EAX + 0x8]
// 00487af6: MOV EDX,dword ptr [EAX + 0xc]
// 00487af9: SUB EDI,ECX
// 00487afb: SUB EBX,EDX
// 00487afd: SUB ESI,EDX
// 00487aff: SUB EBP,ECX
// 00487b01: CMP EBX,ESI
// 00487b03: JLE 0x00487b11
//   XREF to: 00487b11 (CONDITIONAL_JUMP)
// 00487b05: MOV EAX,EDI
// 00487b07: MOV EDI,EBP
// 00487b09: MOV EBP,EAX
// 00487b0b: MOV EAX,EBX
// 00487b0d: MOV EBX,ESI
// 00487b0f: MOV ESI,EAX
// 00487b11: SUB ESI,EBX
//   Label: LAB_00487b11
// 00487b13: SUB EBP,EDI
// 00487b15: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00487b19: TEST EBP,EBP
// 00487b1b: JL 0x00487b6b
//   XREF to: 00487b6b (CONDITIONAL_JUMP)
// 00487b1d: MOV ESI,EDI
//   Label: LAB_00487b1d
// 00487b1f: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00487b23: CMP EBP,EDI
// 00487b25: JLE 0x00487b77
//   XREF to: 00487b77 (CONDITIONAL_JUMP)
// 00487b27: XOR EAX,EAX
// 00487b29: ADD EDI,EDI
// 00487b2b: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00487b2f: SUB EDI,EBP
// 00487b31: TEST EBP,EBP
// 00487b33: JL 0x00487b63
//   XREF to: 00487b63 (CONDITIONAL_JUMP)
// 00487b35: PUSH EBX
//   Label: LAB_00487b35
// 00487b36: PUSH ESI
// 00487b37: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00487b3b: PUSH EDX
// 00487b3c: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 00487b41: ADD ESP,0xc
// 00487b44: TEST EDI,EDI
// 00487b46: JLE 0x00487b4b
//   XREF to: 00487b4b (CONDITIONAL_JUMP)
// 00487b48: INC EBX
// 00487b49: SUB EDI,EBP
// 00487b4b: MOV EAX,dword ptr [ESP]
//   Label: LAB_00487b4b
//   XREF to: Stack[-0x20] (DATA)
// 00487b4e: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 00487b52: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00487b56: INC ECX
// 00487b57: ADD ESI,EAX
// 00487b59: ADD EDI,EDX
// 00487b5b: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00487b5f: CMP EBP,ECX
// 00487b61: JGE 0x00487b35
//   XREF to: 00487b35 (CONDITIONAL_JUMP)
// 00487b63: ADD ESP,0x10
//   Label: LAB_00487b63
// 00487b66: POP EBP
// 00487b67: POP EDI
// 00487b68: POP ESI
// 00487b69: POP EBX
// 00487b6a: RET
// 00487b6b: MOV ECX,0xffffffff
//   Label: LAB_00487b6b
// 00487b70: NEG EBP
// 00487b72: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x20] (DATA)
// 00487b75: JMP 0x00487b1d
//   XREF to: 00487b1d (UNCONDITIONAL_JUMP)
// 00487b77: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_00487b77
//   XREF to: Stack[-0x14] (READ)
// 00487b7b: XOR EDX,EDX
// 00487b7d: LEA EDI,[EBP + EBP*0x1]
// 00487b81: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00487b85: SUB EDI,EAX
// 00487b87: TEST EAX,EAX
// 00487b89: JL 0x00487b63
//   XREF to: 00487b63 (CONDITIONAL_JUMP)
// 00487b8b: PUSH EBX
//   Label: LAB_00487b8b
// 00487b8c: PUSH ESI
// 00487b8d: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00487b91: PUSH EAX
// 00487b92: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 00487b97: ADD ESP,0xc
// 00487b9a: TEST EDI,EDI
// 00487b9c: JLE 0x00487ba9
//   XREF to: 00487ba9 (CONDITIONAL_JUMP)
// 00487b9e: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00487ba2: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00487ba5: SUB EDI,ECX
// 00487ba7: ADD ESI,EDX
// 00487ba9: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_00487ba9
//   XREF to: Stack[-0x18] (READ)
// 00487bad: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00487bb1: INC EBX
// 00487bb2: INC EDX
// 00487bb3: ADD EDI,EBP
// 00487bb5: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00487bb9: CMP EDX,ECX
// 00487bbb: JG 0x00487b63
//   XREF to: 00487b63 (CONDITIONAL_JUMP)
// 00487bbd: JMP 0x00487b8b
//   XREF to: 00487b8b (UNCONDITIONAL_JUMP)

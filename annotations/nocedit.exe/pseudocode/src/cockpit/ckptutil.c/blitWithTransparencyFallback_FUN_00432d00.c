// Name: cockpit_ckptutil.c_blitWithTransparencyFallback_FUN_00432d00
// Address: 00432d00
// Address Range: [[00432d00, 00432d8d]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitWithTransparencyFallback_FUN_00432d00(void * src_data, int width, int height, void * background_base, int dest_x, int dest_y)
// Globals:
//   int g_WindowWidth = 0x140

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitWithTransparencyFallback_FUN_00432d00
          (void *src_data,int width,int height,void *background_base,int dest_x,int dest_y)

{
  int iVar1;
  char *pcVar2;
  int local_18;
  int local_14;
  
  if (0 < height) {
    local_14 = dest_y;
    local_18 = 0;
    do {
      iVar1 = 0;
      if (0 < width) {
        pcVar2 = (char *)((int)src_data + local_18);
        do {
          if (*pcVar2 == '\0') {
            *pcVar2 = *(char *)(g_WindowWidth * local_14 + iVar1 + dest_x + (int)background_base);
          }
          iVar1 = iVar1 + 1;
          pcVar2 = pcVar2 + 1;
        } while (iVar1 < width);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + width;
    } while (local_14 < dest_y + height);
  }
  return;
}


// Assembly code:
// 00432d00: PUSH EBX
//   Label: cockpit_ckptutil.c_blitWithTransparencyFallback_FUN_00432d00
// 00432d01: PUSH ESI
// 00432d02: PUSH EDI
// 00432d03: PUSH EBP
// 00432d04: SUB ESP,0x10
// 00432d07: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00432d0b: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 00432d0f: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 00432d13: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x18] (READ)
// 00432d17: TEST ECX,ECX
// 00432d19: JLE 0x00432d80
//   XREF to: 00432d80 (CONDITIONAL_JUMP)
// 00432d1b: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 00432d1f: IMUL EAX,ESI,0x0
// 00432d22: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00432d26: ADD EDX,ECX
// 00432d28: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x20] (DATA)
// 00432d2b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00432d2f: XOR EAX,EAX
//   Label: LAB_00432d2f
// 00432d31: TEST ESI,ESI
// 00432d33: JLE 0x00432d62
//   XREF to: 00432d62 (CONDITIONAL_JUMP)
// 00432d35: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00432d39: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 00432d3d: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00432d41: ADD EDX,ECX
// 00432d43: MOV ECX,dword ptr [0x00679394]
//   Label: LAB_00432d43
//   XREF to: 00679394 (READ)
// 00432d49: IMUL ECX,EDI
// 00432d4c: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 00432d50: ADD ECX,EAX
// 00432d52: ADD ECX,EBX
// 00432d54: MOV BL,byte ptr [EDX]
// 00432d56: ADD ECX,EBP
// 00432d58: TEST BL,BL
// 00432d5a: JZ 0x00432d88
//   XREF to: 00432d88 (CONDITIONAL_JUMP)
// 00432d5c: INC EAX
//   Label: LAB_00432d5c
// 00432d5d: INC EDX
// 00432d5e: CMP EAX,ESI
// 00432d60: JL 0x00432d43
//   XREF to: 00432d43 (CONDITIONAL_JUMP)
// 00432d62: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_00432d62
//   XREF to: Stack[-0x14] (READ)
// 00432d66: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 00432d6a: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 00432d6e: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00432d71: INC EDX
// 00432d72: ADD ECX,EAX
// 00432d74: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00432d78: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00432d7c: CMP EDX,EBX
// 00432d7e: JL 0x00432d2f
//   XREF to: 00432d2f (CONDITIONAL_JUMP)
// 00432d80: ADD ESP,0x10
//   Label: LAB_00432d80
// 00432d83: POP EBP
// 00432d84: POP EDI
// 00432d85: POP ESI
// 00432d86: POP EBX
// 00432d87: RET
// 00432d88: MOV CL,byte ptr [ECX]
//   Label: LAB_00432d88
// 00432d8a: MOV byte ptr [EDX],CL
// 00432d8c: JMP 0x00432d5c
//   XREF to: 00432d5c (UNCONDITIONAL_JUMP)

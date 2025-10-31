// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30
// Address: 00489a30
// Address Range: [[00489a30, 00489aad]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30(CDrawSurface * this_ptr, int x, int y, int width, int height, char * format, ...)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 0048a2ff [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
//   crt_stdio.c_vsprintf_FUN_005fdba8

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30
          (CDrawSurface *this_ptr,int x,int y,int width,int height,char *format,...)

{
  BADSPACEBASE *in_ESP;
  undefined1 auStack_1010 [4092];
  va_list_t local_14;
  
  local_14 = &stack0x0000001c;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffefec,format,&local_14);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
            ((CDrawSurface *)x,(int)auStack_1010,y,width,height,format);
  return;
}


// Assembly code:
// 00489a30: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30
// 00489a31: PUSH ESI
// 00489a32: PUSH EDI
// 00489a33: PUSH EBP
// 00489a34: SUB ESP,0x1004
// 00489a3a: LEA EAX,[ESP + 0x1030]
//   XREF to: Stack[0x1c] (DATA)
// 00489a41: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00489a48: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0x14] (DATA)
// 00489a4f: PUSH EAX
// 00489a50: MOV EDX,dword ptr [ESP + 0x1030]
//   XREF to: Stack[0x18] (READ)
// 00489a57: PUSH EDX
// 00489a58: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1014] (DATA)
// 00489a5c: PUSH EAX
// 00489a5d: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 00489a62: ADD ESP,0xc
// 00489a65: MOV EBX,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x14] (READ)
// 00489a6c: PUSH EBX
// 00489a6d: MOV ESI,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x10] (READ)
// 00489a74: PUSH ESI
// 00489a75: MOV EDI,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0xc] (READ)
// 00489a7c: PUSH EDI
// 00489a7d: MOV EBP,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x8] (READ)
// 00489a84: PUSH EBP
// 00489a85: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x1014] (DATA)
// 00489a89: PUSH EAX
// 00489a8a: MOV EAX,dword ptr [ESP + 0x102c]
//   XREF to: Stack[0x4] (READ)
// 00489a91: XOR ECX,ECX
// 00489a93: PUSH EAX
// 00489a94: MOV dword ptr [ESP + 0x1018],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00489a9b: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
//   XREF to: 004899c0 (UNCONDITIONAL_CALL)
// 00489aa0: ADD ESP,0x18
// 00489aa3: ADD ESP,0x1004
// 00489aa9: POP EBP
// 00489aaa: POP EDI
// 00489aab: POP ESI
// 00489aac: POP EBX
// 00489aad: RET

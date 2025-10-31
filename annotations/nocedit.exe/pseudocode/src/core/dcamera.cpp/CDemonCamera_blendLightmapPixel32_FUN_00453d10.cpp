// Name: core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10
// Address: 00453d10
// Address Range: [[00453d10, 00453da4]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10(CDemonCamera * this_ptr, int screen_x, int screen_y, int offset)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 (00453270) at 0045361d [UNCONDITIONAL_CALL]
// Globals:
//   char[241][320] g_CoronaBlurWorkBuffer
//   SFogImagePlane g_CameraPlaneWorkBuffer
//   void*[1024] g_ScreenBufferArray
// Function calls:
//   core_dstrender.cpp_blendSinglePixelLightmapNoRoundingMMX_FUN_00491f90

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10
          (CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)

{
  int iVar1;
  int iVar2;
  
  iVar1 = screen_y / this_ptr->scale_factor;
  iVar2 = screen_x / this_ptr->scale_factor;
  core_dstrender_cpp_blendSinglePixelLightmapNoRoundingMMX_FUN_00491f90
            ((uint *)((int)g_ScreenBufferArray[screen_y] + screen_x * 4),
             (uint *)((int)this_ptr->framebuffer_aligned +
                     screen_x * 4 + this_ptr->framebuffer_width * screen_y * 4),
             (byte *)(g_CoronaBlurWorkBuffer[iVar1] + offset + iVar2),
             (byte *)(g_CameraPlaneWorkBuffer.pixels[iVar1] + offset + iVar2));
  return;
}


// Assembly code:
// 00453d10: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10
// 00453d11: PUSH ESI
// 00453d12: PUSH EDI
// 00453d13: PUSH EBP
// 00453d14: SUB ESP,0x4
// 00453d17: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00453d1b: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00453d1f: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00453d23: LEA EAX,[ECX*0x4 + 0x0]
// 00453d2a: MOV ESI,dword ptr [EDX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00453d31: ADD ESI,EAX
// 00453d33: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x14] (DATA)
// 00453d36: MOV ESI,dword ptr [EBX + 0x144]
// 00453d3c: IMUL ESI,EDX
// 00453d3f: MOV EDI,dword ptr [EBX + 0x158]
// 00453d45: SHL ESI,0x2
// 00453d48: ADD ESI,EDI
// 00453d4a: LEA EDI,[ESI + EAX*0x1]
// 00453d4d: MOV EAX,EDX
// 00453d4f: MOV ESI,dword ptr [EBX + 0x14c]
// 00453d55: SAR EDX,0x1f
// 00453d58: IDIV ESI
// 00453d5a: MOV EDX,ECX
// 00453d5c: LEA ESI,[EAX*0x4 + 0x0]
// 00453d63: SAR EDX,0x1f
// 00453d66: ADD ESI,EAX
// 00453d68: MOV EAX,ECX
// 00453d6a: IDIV dword ptr [EBX + 0x14c]
// 00453d70: MOV EBP,0xbbb9b8
//   XREF to: 00bbb9b8 (DATA)
// 00453d75: SHL ESI,0x6
// 00453d78: ADD EBP,ESI
// 00453d7a: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 00453d7e: ADD ESI,0x13da778
//   XREF to: 013da778 (DATA)
// 00453d84: LEA EDX,[EAX + EBP*0x1]
// 00453d87: ADD EAX,ESI
// 00453d89: ADD EAX,EBX
// 00453d8b: PUSH EAX
// 00453d8c: ADD EDX,EBX
// 00453d8e: PUSH EDX
// 00453d8f: PUSH EDI
// 00453d90: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00453d94: PUSH EDI
// 00453d95: CALL core_dstrender.cpp_blendSinglePixelLightmapNoRoundingMMX_FUN_00491f90
//   XREF to: 00491f90 (UNCONDITIONAL_CALL)
// 00453d9a: ADD ESP,0x10
// 00453d9d: ADD ESP,0x4
// 00453da0: POP EBP
// 00453da1: POP EDI
// 00453da2: POP ESI
// 00453da3: POP EBX
// 00453da4: RET

// Name: core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0
// Address: 00453db0
// Address Range: [[00453db0, 00453e4a]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0(CDemonCamera * this_ptr, int screen_x, int screen_y, int offset)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 (00453270) at 004534b7 [UNCONDITIONAL_CALL]
// Globals:
//   char[241][320] g_CoronaBlurWorkBuffer
//   SFogImagePlane g_CameraPlaneWorkBuffer
//   void*[1024] g_ScreenBufferArray
// Function calls:
//   core_dstrender.cpp_blendSinglePixelLightmapMMX_FUN_004937b6

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0
          (CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)

{
  int iVar1;
  int iVar2;
  
  iVar1 = screen_y / this_ptr->scale_factor;
  iVar2 = screen_x / this_ptr->scale_factor;
  core_dstrender_cpp_blendSinglePixelLightmapMMX_FUN_004937b6
            ((ushort *)((int)g_ScreenBufferArray[screen_y] + screen_x * 2),
             (uint *)((int)this_ptr->framebuffer_aligned +
                     screen_x * 4 + this_ptr->framebuffer_width * screen_y * 4),
             (byte *)(g_CoronaBlurWorkBuffer[iVar1] + offset + iVar2),
             (byte *)(g_CameraPlaneWorkBuffer.pixels[iVar1] + offset + iVar2));
  return;
}


// Assembly code:
// 00453db0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0
// 00453db1: PUSH ESI
// 00453db2: PUSH EDI
// 00453db3: PUSH EBP
// 00453db4: SUB ESP,0x4
// 00453db7: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00453dbb: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00453dbf: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00453dc3: LEA EAX,[ECX + ECX*0x1]
// 00453dc6: MOV ESI,dword ptr [EDX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00453dcd: LEA EBP,[ESI + EAX*0x1]
// 00453dd0: MOV EAX,dword ptr [EBX + 0x144]
// 00453dd6: IMUL EAX,EDX
// 00453dd9: LEA ESI,[EAX*0x4 + 0x0]
// 00453de0: MOV EAX,dword ptr [EBX + 0x158]
// 00453de6: ADD EAX,ESI
// 00453de8: LEA ESI,[ECX*0x4 + 0x0]
// 00453def: LEA EDI,[EAX + ESI*0x1]
// 00453df2: MOV EAX,EDX
// 00453df4: MOV ESI,dword ptr [EBX + 0x14c]
// 00453dfa: SAR EDX,0x1f
// 00453dfd: IDIV ESI
// 00453dff: LEA ESI,[EAX*0x4 + 0x0]
// 00453e06: ADD ESI,EAX
// 00453e08: MOV EAX,0xbbb9b8
//   XREF to: 00bbb9b8 (DATA)
// 00453e0d: SHL ESI,0x6
// 00453e10: MOV EDX,ECX
// 00453e12: ADD EAX,ESI
// 00453e14: SAR EDX,0x1f
// 00453e17: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00453e1a: MOV EAX,ECX
// 00453e1c: IDIV dword ptr [EBX + 0x14c]
// 00453e22: ADD ESI,0x13da778
//   XREF to: 013da778 (DATA)
// 00453e28: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00453e2b: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 00453e2f: ADD EDX,EAX
// 00453e31: ADD EAX,ESI
// 00453e33: ADD EAX,EBX
// 00453e35: PUSH EAX
// 00453e36: ADD EDX,EBX
// 00453e38: PUSH EDX
// 00453e39: PUSH EDI
// 00453e3a: PUSH EBP
// 00453e3b: CALL core_dstrender.cpp_blendSinglePixelLightmapMMX_FUN_004937b6
//   XREF to: 004937b6 (UNCONDITIONAL_CALL)
// 00453e40: ADD ESP,0x10
// 00453e43: ADD ESP,0x4
// 00453e46: POP EBP
// 00453e47: POP EDI
// 00453e48: POP ESI
// 00453e49: POP EBX
// 00453e4a: RET

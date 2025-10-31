// Name: core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90
// Address: 00453c90
// Address Range: [[00453c90, 00453d0f]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90(CDemonCamera * this_ptr, int clear_color)
// Cross-references:
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004dfa1c [UNCONDITIONAL_CALL]
// Globals:
//   SFogImagePlane g_CameraPlaneWorkBuffer
//   undefined4 DAT_013da779
//   undefined4 DAT_013da8b8
//   SFogImagePlane[16] g_CameraImageDecompressBuffer
//   undefined4 DAT_013ed379
//   undefined4 DAT_013ed4b8

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90
          (CDemonCamera *this_ptr,int clear_color)

{
  int iVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  
  iVar4 = 0;
  if (0 < this_ptr->framebuffer_height) {
    do {
      iVar1 = 0;
      if (0 < this_ptr->framebuffer_width) {
        do {
          *(int *)((int)this_ptr->framebuffer_aligned +
                  (this_ptr->framebuffer_width * iVar4 + iVar1) * 4) = clear_color;
          iVar1 = iVar1 + 1;
        } while (iVar1 < this_ptr->framebuffer_width);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < this_ptr->framebuffer_height);
  }
  iVar1 = 0x140;
  iVar4 = 0;
  do {
    iVar3 = iVar4 * 0x140;
    do {
      iVar2 = iVar3 + 1;
      g_CameraImageDecompressBuffer[0].pixels[0][iVar3] = '\0';
      g_CameraPlaneWorkBuffer.pixels[0][iVar3] = '\0';
      iVar3 = iVar2;
    } while (iVar2 != iVar1);
    iVar4 = iVar4 + 1;
    iVar1 = iVar1 + 0x140;
  } while (iVar4 < 0xf0);
  return;
}


// Assembly code:
// 00453c90: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90
// 00453c91: PUSH ESI
// 00453c92: PUSH EDI
// 00453c93: PUSH EBP
// 00453c94: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00453c98: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00453c9c: MOV ECX,dword ptr [EDX + 0x148]
// 00453ca2: XOR ESI,ESI
// 00453ca4: TEST ECX,ECX
// 00453ca6: JLE 0x00453cda
//   XREF to: 00453cda (CONDITIONAL_JUMP)
// 00453ca8: MOV EBP,dword ptr [EDX + 0x144]
//   Label: LAB_00453ca8
// 00453cae: XOR EAX,EAX
// 00453cb0: TEST EBP,EBP
// 00453cb2: JLE 0x00453cd1
//   XREF to: 00453cd1 (CONDITIONAL_JUMP)
// 00453cb4: MOV ECX,dword ptr [EDX + 0x144]
//   Label: LAB_00453cb4
// 00453cba: IMUL ECX,ESI
// 00453cbd: MOV EBX,dword ptr [EDX + 0x158]
// 00453cc3: ADD ECX,EAX
// 00453cc5: MOV dword ptr [EBX + ECX*0x4],EDI
// 00453cc8: INC EAX
// 00453cc9: CMP EAX,dword ptr [EDX + 0x144]
// 00453ccf: JL 0x00453cb4
//   XREF to: 00453cb4 (CONDITIONAL_JUMP)
// 00453cd1: INC ESI
//   Label: LAB_00453cd1
// 00453cd2: CMP ESI,dword ptr [EDX + 0x148]
// 00453cd8: JL 0x00453ca8
//   XREF to: 00453ca8 (CONDITIONAL_JUMP)
// 00453cda: MOV ESI,0x140
//   Label: LAB_00453cda
// 00453cdf: XOR ECX,ECX
// 00453ce1: MOV EDX,ESI
//   Label: LAB_00453ce1
// 00453ce3: XOR BL,BL
// 00453ce5: IMUL EAX,ECX,0x140
// 00453ceb: INC EAX
//   Label: LAB_00453ceb
// 00453cec: MOV byte ptr [EAX + 0x13ed377],BL
//   XREF to: 013ed378 (WRITE)
//   XREF to: 013ed379 (WRITE)
//   XREF to: 013ed4b8 (WRITE)
// 00453cf2: MOV byte ptr [EAX + 0x13da777],BL
//   XREF to: 013da778 (WRITE)
//   XREF to: 013da779 (WRITE)
//   XREF to: 013da8b8 (WRITE)
// 00453cf8: CMP EAX,EDX
// 00453cfa: JNZ 0x00453ceb
//   XREF to: 00453ceb (CONDITIONAL_JUMP)
// 00453cfc: INC ECX
// 00453cfd: ADD ESI,0x140
// 00453d03: CMP ECX,0xf0
// 00453d09: JL 0x00453ce1
//   XREF to: 00453ce1 (CONDITIONAL_JUMP)
// 00453d0b: POP EBP
// 00453d0c: POP EDI
// 00453d0d: POP ESI
// 00453d0e: POP EBX
// 00453d0f: RET

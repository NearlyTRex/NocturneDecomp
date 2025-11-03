// Name: core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130
// Address: 00451130
// Address Range: [[00451130, 004511bf]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130(CDemonCamera * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c245 [UNCONDITIONAL_CALL]
// Globals:
//   char[241][320] g_CoronaBlurOutputBuffer
//   undefined4 DAT_00c199f8
//   int g_BackdropSaveActive
//   SFogImagePlane g_CameraPlaneWorkBuffer
//   SFogImagePlane[16] g_CameraImageDecompressBuffer
//   int g_ImageProcessingState1
//   int g_ImageProcessingState2
//   int g_ImageBytesPerPixel
// Function calls:
//   core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00453160
//   core_event.cpp_FUN_004b19d0
//   core_event.cpp_FUN_004b1a78

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451130(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this_ptr->corona_blend_factor >> 0x1f;
  iVar1 = (this_ptr->corona_blend_factor + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  _DAT_00c199f8 = (int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  core_event_cpp_FUN_004b19d0();
  if (1 < g_ImageBytesPerPixel) {
    core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_00453160
              (this_ptr,g_ImageProcessingState1,g_ImageProcessingState2);
    return;
  }
  if (g_BackdropSaveActive == 0) {
    return;
  }
  core_event_cpp_FUN_004b1a78();
  g_BackdropSaveActive = 0;
  return;
}


// Assembly code:
// 00451130: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130
// 00451131: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00451135: MOV EAX,dword ptr [EBX + 0x11e8]
// 0045113b: MOV EDX,EAX
// 0045113d: SAR EDX,0x1f
// 00451140: SHL EDX,0x8
// 00451143: SBB EAX,EDX
// 00451145: SAR EAX,0x8
// 00451148: MOV EDX,EAX
// 0045114a: SAR EDX,0x1f
// 0045114d: SHL EDX,0x2
// 00451150: SBB EAX,EDX
// 00451152: SAR EAX,0x2
// 00451155: PUSH 0x12c00
// 0045115a: MOV [0x00c199f8],EAX
//   XREF to: 00c199f8 (WRITE)
// 0045115f: XOR EDX,EDX
// 00451161: MOV ECX,0xba8c78
//   XREF to: 00ba8c78 (PARAM)
// 00451166: MOV DL,byte ptr [0x00c199f8]
//   XREF to: 00c199f8 (READ)
// 0045116c: CALL core_event.cpp_FUN_004b19d0
//   XREF to: 004b19d0 (UNCONDITIONAL_CALL)
// 00451171: CMP dword ptr [0x01519380],0x1
//   XREF to: 01519380 (READ)
// 00451178: JG 0x00451185
//   XREF to: 00451185 (CONDITIONAL_JUMP)
// 0045117a: CMP dword ptr [0x013bbe2c],0x0
//   XREF to: 013bbe2c (READ)
// 00451181: JNZ 0x004511a2
//   XREF to: 004511a2 (CONDITIONAL_JUMP)
// 00451183: POP EBX
// 00451184: RET
// 00451185: PUSH EDI
//   Label: LAB_00451185
// 00451186: PUSH ESI
// 00451187: MOV ESI,dword ptr [0x0151937c]
//   XREF to: 0151937c (READ)
// 0045118d: PUSH ESI
// 0045118e: MOV EDI,dword ptr [0x01519378]
//   XREF to: 01519378 (READ)
// 00451194: PUSH EDI
// 00451195: PUSH EBX
// 00451196: CALL core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00453160
//   XREF to: 00453160 (UNCONDITIONAL_CALL)
// 0045119b: ADD ESP,0xc
// 0045119e: POP ESI
// 0045119f: POP EDI
// 004511a0: POP EBX
// 004511a1: RET
// 004511a2: PUSH 0x12c00
//   Label: LAB_004511a2
// 004511a7: MOV EDX,0x13ed378
//   XREF to: 013ed378 (PARAM)
// 004511ac: MOV ECX,0x13da778
//   XREF to: 013da778 (PARAM)
// 004511b1: XOR EBX,EBX
// 004511b3: CALL core_event.cpp_FUN_004b1a78
//   XREF to: 004b1a78 (UNCONDITIONAL_CALL)
// 004511b8: MOV dword ptr [0x013bbe2c],EBX
//   XREF to: 013bbe2c (WRITE)
// 004511be: POP EBX
// 004511bf: RET

// Name: core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00453160
// Address: 00453160
// Address Range: [[00453160, 0045326a]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00453160(CDemonCamera * this_ptr, int plane_index, uint blend_alpha)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130 (00451130) at 00451196 [UNCONDITIONAL_CALL]
// Globals:
//   SFogImagePlane g_CameraPlaneWorkBuffer
//   undefined4 DAT_013da8b8
//   SFogImagePlane[16] g_CameraImageDecompressBuffer
//   undefined4 DAT_013ed4b8
// Function calls:
//   core_dstrender.cpp_alphaBlendPixelsMMX_FUN_00492e8a

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_00453160
          (CDemonCamera *this_ptr,int plane_index,uint blend_alpha)

{
  char (*source2_buffer) [320];
  char (*source1_buffer) [320];
  int iVar1;
  SFogImagePlane *output_buffer;
  int iVar2;
  
  iVar1 = plane_index + 1;
  if (0xf < iVar1) {
    iVar1 = 0;
  }
  if ((int)blend_alpha < 0x10000) {
    if ((int)blend_alpha < 0) {
      blend_alpha = 0;
    }
  }
  else {
    blend_alpha = 0xffff;
  }
  iVar2 = 0;
  if (0 < this_ptr->display_height) {
    source1_buffer = (char (*) [320])(g_CameraImageDecompressBuffer + plane_index);
    output_buffer = &g_CameraPlaneWorkBuffer;
    source2_buffer = (char (*) [320])(g_CameraImageDecompressBuffer + iVar1);
    do {
      core_dstrender_cpp_alphaBlendPixelsMMX_FUN_00492e8a
                ((uint *)output_buffer,(uint *)source1_buffer,(uint *)source2_buffer,
                 blend_alpha | blend_alpha << 0x10,
                 0xffff - blend_alpha | (0xffff - blend_alpha) * 0x10000,this_ptr->display_width);
      iVar2 = iVar2 + 1;
      source2_buffer = source2_buffer + 1;
      source1_buffer = source1_buffer + 1;
      output_buffer = (SFogImagePlane *)((int)output_buffer + 0x140);
    } while (iVar2 < *(int *)(plane_index + 0x154));
  }
  return;
}


// Assembly code:
// 00453160: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00453160
// 00453161: PUSH ESI
// 00453162: PUSH EDI
// 00453163: PUSH EBP
// 00453164: SUB ESP,0x4
// 00453167: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0045316b: LEA ESI,[EBX + 0x1]
// 0045316e: CMP ESI,0x10
// 00453171: JL 0x00453175
//   XREF to: 00453175 (CONDITIONAL_JUMP)
// 00453173: XOR ESI,ESI
// 00453175: MOV EDX,dword ptr [ESP + 0x20]
//   Label: LAB_00453175
//   XREF to: Stack[0xc] (READ)
// 00453179: CMP EDX,0xffff
// 0045317f: JLE 0x00453258
//   XREF to: 00453258 (CONDITIONAL_JUMP)
// 00453185: MOV dword ptr [ESP + 0x20],0xffff
//   XREF to: Stack[0xc] (WRITE)
// 0045318d: MOV EAX,0xffff
//   Label: LAB_0045318d
// 00453192: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00453196: SUB EAX,EDX
// 00453198: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0045319b: MOV EAX,EDX
// 0045319d: MOV ECX,EDX
// 0045319f: SHL EAX,0x10
// 004531a2: OR ECX,EAX
// 004531a4: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004531a7: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004531aa: SHL EAX,0x10
// 004531ad: OR EDI,EAX
// 004531af: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004531b3: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[0xc] (WRITE)
// 004531b7: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x14] (DATA)
// 004531ba: MOV EBP,dword ptr [EAX + 0x154]
// 004531c0: XOR EDI,EDI
// 004531c2: TEST EBP,EBP
// 004531c4: JLE 0x00453250
//   XREF to: 00453250 (CONDITIONAL_JUMP)
// 004531ca: LEA EAX,[EBX*0x4 + 0x0]
// 004531d1: ADD EAX,EBX
// 004531d3: SHL EAX,0xa
// 004531d6: MOV EBX,EAX
// 004531d8: SHL EAX,0x4
// 004531db: MOV EBP,0x13ed378
//   XREF to: 013ed378 (DATA)
// 004531e0: SUB EAX,EBX
// 004531e2: ADD EBP,EAX
// 004531e4: LEA EAX,[ESI*0x4 + 0x0]
// 004531eb: ADD EAX,ESI
// 004531ed: SHL EAX,0xa
// 004531f0: MOV EBX,EAX
// 004531f2: SHL EAX,0x4
// 004531f5: SUB EAX,EBX
// 004531f7: MOV EBX,0x13ed378
//   XREF to: 013ed378 (DATA)
// 004531fc: MOV ESI,0x13da778
//   XREF to: 013da778 (DATA)
// 00453201: ADD EBX,EAX
//   XREF to: 013ed378 (PARAM)
// 00453203: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00453203
//   XREF to: Stack[0x4] (READ)
// 00453207: MOV EAX,dword ptr [EAX + 0x150]
// 0045320d: PUSH EAX
// 0045320e: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00453212: PUSH EAX
// 00453213: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 00453217: PUSH EDX
// 00453218: PUSH EBX
//   XREF to: 013ed378 (DATA)
//   XREF to: 013ed4b8 (DATA)
// 00453219: PUSH EBP
// 0045321a: PUSH ESI
//   XREF to: 013da778 (DATA)
//   XREF to: 013da8b8 (DATA)
// 0045321b: CALL core_dstrender.cpp_alphaBlendPixelsMMX_FUN_00492e8a
//   XREF to: 00492e8a (UNCONDITIONAL_CALL)
// 00453220: ADD ESP,0x18
// 00453223: INC EDI
// 00453224: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00453228: ADD EBX,0x140
//   XREF to: 013ed4b8 (PARAM)
// 0045322e: ADD EBP,0x140
// 00453234: MOV ECX,dword ptr [EAX + 0x154]
// 0045323a: ADD ESI,0x140
// 00453240: CMP EDI,ECX
// 00453242: JL 0x00453203
//   XREF to: 00453203 (CONDITIONAL_JUMP)
// 00453244: LEA EAX,[EAX]
// 0045324a: LEA EDX,[EDX]
// 00453250: ADD ESP,0x4
//   Label: LAB_00453250
// 00453253: POP EBP
// 00453254: POP EDI
// 00453255: POP ESI
// 00453256: POP EBX
// 00453257: RET
// 00453258: TEST EDX,EDX
//   Label: LAB_00453258
// 0045325a: JGE 0x0045318d
//   XREF to: 0045318d (CONDITIONAL_JUMP)
// 00453260: XOR EDI,EDI
// 00453262: MOV dword ptr [ESP + 0x20],EDI
//   XREF to: Stack[0xc] (WRITE)
// 00453266: JMP 0x0045318d
//   XREF to: 0045318d (UNCONDITIONAL_JUMP)
